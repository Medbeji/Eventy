//#if !(#{Fuse.Controls.Native.iOS.GraphicsView:IsStripped} && #{Fuse.Controls.Native.iOS.FocusHelpers:IsStripped} && #{Fuse.Controls.Native.iOS.InputDispatch:IsStripped} && #{Fuse.Controls.Native.iOS.KeyboardView:IsStripped} && #{Fuse.Controls.Native.iOS.ScrollView:IsStripped} && #{Fuse.Controls.Native.iOS.SingleLineTextEdit:IsStripped} && #{Fuse.Controls.Native.iOS.MultiLineTextEdit:IsStripped} && #{Fuse.Controls.Native.iOS.UIControlEvent:IsStripped})

#import "Helpers.h"

@implementation ShapeView {
	UIControl* children_;
	UIControl* shapeView_;
}

- (id) init
{
	self = [super init];
	children_ = [[UIControl alloc] init];
	shapeView_ = [[UIControl alloc] init];
	[super addSubview: children_];
	[super addSubview: shapeView_];
	[super bringSubviewToFront:children_];
	[children_ setOpaque:false];
	[children_ setMultipleTouchEnabled:true];
	return self;
}

-(UIControl*)shapeView
{
	return shapeView_;
}

-(UIControl*)childrenView
{
	return children_;
}

- (void)addSubview:(UIView *)view
{
	[children_ addSubview: view];
}

- (void)insertSubview:(UIView *)view
			  atIndex:(NSInteger)index
{
	[children_ insertSubview:view atIndex: index];
}

- (void) setFrame:(CGRect)frame
{
	super.frame = frame;
	auto f = CGRectMake(0.0f, 0.0f, frame.size.width, frame.size.height);
	children_.frame = f;
	shapeView_.frame = f;
}

@end

@implementation KeyboardView
- (BOOL)canBecomeFirstResponder { return [self isFocusable]; }
- (void)insertText:(NSString *)text {}
- (void)deleteBackward {}
- (BOOL)hasText { return NO; }
@end

@implementation SizeControl

- (void) setFrame:(CGRect)frame
{
	super.frame = frame;
	if ([self onSetFrameCallback] != nil)
		[self onSetFrameCallback](self);
}

@end

static id currentFirstResponder;

@implementation UIResponder (FirstResponder)

+(id)currentFirstResponder {
	[[UIApplication sharedApplication] sendAction:@selector(findFirstResponder:) to:nil from:nil forEvent:nil];
	id result = currentFirstResponder;
	currentFirstResponder = nil;
	return result;
}

-(void)findFirstResponder:(id)sender {
	currentFirstResponder = self;
};

@end

@implementation TextFieldDelegate

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
	return [self onActionCallback](textField);
}

- (BOOL)textField:(UITextField *)textField
	shouldChangeCharactersInRange:(NSRange)range
	replacementString:(NSString *)string
{
	if(range.length + range.location > textField.text.length)
	{
		return NO;
	}

	NSUInteger newLength = [textField.text length] + [string length] - range.length;
	return newLength <= [self maxLength];
}

@end

@implementation TextViewDelegate

- (void)textViewDidChange:(UITextView *)textView
{
	[self textChangedCallback](textView);
}

- (void)textViewDidEndEditing:(UITextView *)textView
{
	[self textChangedCallback](textView);
}

- (void)textViewDidBeginEditing:(UITextView *)textView;
{
	[self didBeginEditingCallback]();
}

- (BOOL)textView:(UITextView *)textView
	shouldChangeTextInRange:(NSRange)range
	replacementText:(NSString *)text
{
	if(range.length + range.location > textView.text.length)
	{
		return NO;
	}

	NSUInteger newLength = [textView.text length] + [text length] - range.length;
	return newLength <= [self maxLength];
}

@end

@implementation ScrollViewDelegate

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
	[self didScrollCallback](scrollView);
}

@end

@implementation UIControlEventHandler

- (void) action:(id)sender forEvent:(UIEvent *)event
{
	[self callback](sender, event);
}

@end

//#endif // IsStrippe
