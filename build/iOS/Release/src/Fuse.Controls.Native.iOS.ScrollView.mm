// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.ScrollView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ScrollView :1950
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ScrollView_type, interface3));
    type->SetFields(5,
        ::TYPES[1/*Fuse.Controls.Native.iOS.View*/], offsetof(::g::Fuse::Controls::Native::iOS::ScrollView, _content), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ScrollView, _delegateHandle), 0,
        ::TYPES[2/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))ScrollView__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))ScrollView__NotifyChildNewSize_fn;
    type->interface3.fp_Add = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupAdd_fn;
    type->interface3.fp_Add1 = (void(*)(uObject*, uObject*, int*))ScrollView__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface3.fp_set_ClipToBounds = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_ClipToBounds_fn;
    type->interface3.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_HitTestEnabled_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :2002
void ScrollView__ctor_2_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :2047
void ScrollView__Add_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle)
{
    ScrollView::Add(parentHandle, childHandle);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :2024
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::AddCallback(handle, callback);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1994
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// public Fuse.Controls.Native.iOS.View get_Content() :1970
void ScrollView__get_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View** __retval)
{
    *__retval = __this->Content();
}

// public void set_Content(Fuse.Controls.Native.iOS.View value) :1971
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View* value)
{
    __this->Content(value);
}

// private static ObjC.Object Create() :2015
void ScrollView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :2008
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :1952
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :1957
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index)
{
    __this->Content(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[1/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :1962
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child)
{
    __this->Content(NULL);
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) :2072
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::GetContentOffset(handle, x, y);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :2002
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :2041
void ScrollView__NotifyChildNewSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    ScrollView::SetContentSize(__this->Handle(), size_.X, size_.Y);
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) :2033
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle)
{
    __this->OnScrollViewDidScroll(scrollViewHandle);
}

// private static void Remove(ObjC.Object childHandle) :2055
void ScrollView__Remove_fn(::g::ObjC::Object* childHandle)
{
    ScrollView::Remove(childHandle);
}

// public void set_ScrollPosition(float2 value) :1999
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) :2062
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::SetContentOffset(handle, *x, *y);
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) :2081
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h)
{
    ScrollView::SetContentSize(handle, *w, *h);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :2002
void ScrollView::ctor_2(uObject* host)
{
    ctor_1(ScrollView::Create());
    _host = host;
    _delegateHandle = ScrollView::AddCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)ScrollView__OnScrollViewDidScroll_fn, this));
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1994
void ScrollView::AllowedScrollDirections(int value)
{
}

// public Fuse.Controls.Native.iOS.View get_Content() [instance] :1970
::g::Fuse::Controls::Native::iOS::View* ScrollView::Content()
{
    return _content;
}

// public void set_Content(Fuse.Controls.Native.iOS.View value) [instance] :1971
void ScrollView::Content(::g::Fuse::Controls::Native::iOS::View* value)
{
    if (_content != NULL)
    {
        uPtr(_content)->Parent(NULL);
        ScrollView::Remove(uPtr(_content)->Handle());
    }

    _content = value;

    if (_content != NULL)
    {
        uPtr(_content)->Parent(this);
        ScrollView::Add(Handle(), uPtr(_content)->Handle());
    }
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) [instance] :2033
void ScrollView::OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle)
{
    float x = 0.0f;
    float y = 0.0f;
    ScrollView::GetContentOffset(Handle(), &x, &y);
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2(x, y));
}

// public void set_ScrollPosition(float2 value) [instance] :1999
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ScrollView::SetContentOffset(Handle(), value.X, value.Y);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :2047
void ScrollView::Add(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle) -> void
        {
            ::UIScrollView* parent =  (::UIScrollView*)parentHandle;
            ::UIView* child =  (::UIView*)childHandle;
            [parent addSubview:child];
        } (::g::ObjC::Object::GetHandle(parentHandle), ::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :2024
::g::ObjC::Object* ScrollView::AddCallback(::g::ObjC::Object* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback) -> ::id
        {
            ScrollViewDelegate* del = [[ScrollViewDelegate alloc] init];
            [del setDidScrollCallback: callback];
            ::UIScrollView* scrollView =  (::UIScrollView*)handle;
            [scrollView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static ObjC.Object Create() [static] :2015
::g::ObjC::Object* ScrollView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UIScrollView* scrollView = [[::UIScrollView alloc] init];
            [scrollView setMultipleTouchEnabled:true];
            [scrollView setOpaque:true];
            return  scrollView;
        } ());
        
    }
    
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) [static] :2072
void ScrollView::GetContentOffset(::g::ObjC::Object* handle, float* x, float* y)
{
    @autoreleasepool
    {
        [] (::id handle, float* x, float* y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint offset = [scrollView contentOffset];
            *x = offset.x;
            *y = offset.y;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :2002
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :2055
void ScrollView::Remove(::g::ObjC::Object* childHandle)
{
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) [static] :2062
void ScrollView::SetContentOffset(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint p = { 0 };
            p.x = (CGFloat)x;
            p.y = (CGFloat)y;
            [scrollView setContentOffset:p];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) [static] :2081
void ScrollView::SetContentSize(::g::ObjC::Object* handle, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGSize size = { 0 };
            size.width = (CGFloat)w;
            size.height = (CGFloat)h;
            [scrollView setContentSize:size];
        } (::g::ObjC::Object::GetHandle(handle), w, h);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
