// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-816b8eb5.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :1224
// {
static void KeyboardView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::KeyboardView, _handle), 0);
}

uType* KeyboardView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(KeyboardView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.KeyboardView", options);
    type->fp_build_ = KeyboardView_build;
    type->fp_ctor_ = (void*)KeyboardView__New1_fn;
    return type;
}

// public KeyboardView() :1239
void KeyboardView__ctor__fn(KeyboardView* __this)
{
    __this->ctor_();
}

// private static void CopyKeyboardType(ObjC.Object handle, ObjC.Object source) :1275
void KeyboardView__CopyKeyboardType_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* source)
{
    KeyboardView::CopyKeyboardType(handle, source);
}

// private static ObjC.Object Create() :1246
void KeyboardView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = KeyboardView::Create();
}

// private static bool GetIsFocusable(ObjC.Object handle) :1261
void KeyboardView__GetIsFocusable_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = KeyboardView::GetIsFocusable(handle);
}

// public ObjC.Object get_Handle() :1228
void KeyboardView__get_Handle_fn(KeyboardView* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void HideKeyboard() :1291
void KeyboardView__HideKeyboard_fn(KeyboardView* __this)
{
    __this->HideKeyboard();
}

// public void HoldFocus(ObjC.Object focusedObject) :1251
void KeyboardView__HoldFocus_fn(KeyboardView* __this, ::g::ObjC::Object* focusedObject)
{
    __this->HoldFocus(focusedObject);
}

// private bool get_IsFocusable() :1235
void KeyboardView__get_IsFocusable_fn(KeyboardView* __this, bool* __retval)
{
    *__retval = __this->IsFocusable();
}

// private void set_IsFocusable(bool value) :1236
void KeyboardView__set_IsFocusable_fn(KeyboardView* __this, bool* value)
{
    __this->IsFocusable(*value);
}

// public KeyboardView New() :1239
void KeyboardView__New1_fn(KeyboardView** __retval)
{
    *__retval = KeyboardView::New1();
}

// private static void SetIsFocusable(ObjC.Object handle, bool value) :1268
void KeyboardView__SetIsFocusable_fn(::g::ObjC::Object* handle, bool* value)
{
    KeyboardView::SetIsFocusable(handle, *value);
}

// public KeyboardView() [instance] :1239
void KeyboardView::ctor_()
{
    _handle = KeyboardView::Create();
}

// public ObjC.Object get_Handle() [instance] :1228
::g::ObjC::Object* KeyboardView::Handle()
{
    return _handle;
}

// public void HideKeyboard() [instance] :1291
void KeyboardView::HideKeyboard()
{
    if (::g::Fuse::Controls::Native::iOS::FocusHelpers::IsFirstResponder(_handle))
        ::g::Fuse::Controls::Native::iOS::FocusHelpers::ResignFirstResponder(_handle);
}

// public void HoldFocus(ObjC.Object focusedObject) [instance] :1251
void KeyboardView::HoldFocus(::g::ObjC::Object* focusedObject)
{
    KeyboardView::CopyKeyboardType(Handle(), focusedObject);
    IsFocusable(true);
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(Handle());
    IsFocusable(false);
}

// private bool get_IsFocusable() [instance] :1235
bool KeyboardView::IsFocusable()
{
    return KeyboardView::GetIsFocusable(_handle);
}

// private void set_IsFocusable(bool value) [instance] :1236
void KeyboardView::IsFocusable(bool value)
{
    KeyboardView::SetIsFocusable(_handle, value);
}

// private static void CopyKeyboardType(ObjC.Object handle, ObjC.Object source) [static] :1275
void KeyboardView::CopyKeyboardType(::g::ObjC::Object* handle, ::g::ObjC::Object* source)
{
    @autoreleasepool
    {
        [] (::id handle, ::id source) -> void
        {
            ::KeyboardView* kv = (::KeyboardView*)handle;
            
            if (source != nil && [source isKindOfClass: [NSObject<UIKeyInput> class]])
            {
            	[kv setKeyboardType: [((NSObject<UIKeyInput>*)source) keyboardType]];
            	[kv setReturnKeyType: [((NSObject<UIKeyInput>*)source) returnKeyType]];
            }
            else
            {
            	[kv setKeyboardType: UIKeyboardTypeDefault];
            	[kv setReturnKeyType:UIReturnKeyDefault];
            }
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(source));
        
    }
    
}

// private static ObjC.Object Create() [static] :1246
::g::ObjC::Object* KeyboardView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::KeyboardView alloc] init];
        } ());
        
    }
    
}

// private static bool GetIsFocusable(ObjC.Object handle) [static] :1261
bool KeyboardView::GetIsFocusable(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            return [handle isFocusable];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public KeyboardView New() [static] :1239
KeyboardView* KeyboardView::New1()
{
    KeyboardView* obj1 = (KeyboardView*)uNew(KeyboardView_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetIsFocusable(ObjC.Object handle, bool value) [static] :1268
void KeyboardView::SetIsFocusable(::g::ObjC::Object* handle, bool value)
{
    @autoreleasepool
    {
        [] (::id handle, bool value) -> void
        {
            return [handle setIsFocusable:value];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
