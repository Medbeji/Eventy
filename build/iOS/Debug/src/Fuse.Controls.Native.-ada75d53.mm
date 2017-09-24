// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-ada75d53.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button :14
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface2));
    type->SetFields(7);
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New3_fn;
    type->interface2.fp_set_Text = (void(*)(uObject*, uString*))Button__FuseControlsNativeILabelViewset_Text_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public Button() :16
void Button__ctor_5_fn(Button* __this)
{
    __this->ctor_5();
}

// private static ObjC.Object Create() :24
void Button__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Button::Create();
}

// private void Fuse.Controls.Native.ILabelView.set_Text(string value) :20
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value)
{
    Button::SetText(__this->Handle(), value);
}

// public Button New() :16
void Button__New3_fn(Button** __retval)
{
    *__retval = Button::New3();
}

// private static void SetText(ObjC.Object handle, string text) :30
void Button__SetText_fn(::g::ObjC::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public Button() [instance] :16
void Button::ctor_5()
{
    ctor_4(Button::Create());
}

// private static ObjC.Object Create() [static] :24
::g::ObjC::Object* Button::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::UIButton alloc] init];
        } ());
        
    }
    
}

// public Button New() [static] :16
Button* Button::New3()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetText(ObjC.Object handle, string text) [static] :30
void Button::SetText(::g::ObjC::Object* handle, uString* text)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text) -> void
        {
            ::UIButton* button = (::UIButton*)handle;
            [button setTitle:text forState:UIControlStateNormal];
            [button setTitleColor:[UIColor colorWithRed:0.0 green:122.0/255.0 blue:1.0 alpha:1.0] forState:UIControlStateNormal];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(text));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
