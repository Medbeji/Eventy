// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-816b8eb5.h>
#include <Fuse.Controls.Native.-87450d8.h>
#include <Fuse.Controls.Native.-f73efeee.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FocusHelpers :188
// {
// static FocusHelpers() :191
static void FocusHelpers__cctor__fn(uType* __type)
{
    FocusHelpers::_keyboardView_ = ::g::Fuse::Controls::Native::iOS::KeyboardView::New1();
}

static void FocusHelpers_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::KeyboardView_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::FocusHelpers::_keyboardView_, uFieldFlagsStatic);
}

uClassType* FocusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers", options);
    type->fp_build_ = FocusHelpers_build;
    type->fp_cctor_ = FocusHelpers__cctor__fn;
    return type;
}

// public static void BecomeFirstResponder(ObjC.Object uiView) :203
void FocusHelpers__BecomeFirstResponder_fn(::g::ObjC::Object* uiView)
{
    FocusHelpers::BecomeFirstResponder(uiView);
}

// public static ObjC.Object GetCurrentFirstResponder() :224
void FocusHelpers__GetCurrentFirstResponder_fn(::g::ObjC::Object** __retval)
{
    *__retval = FocusHelpers::GetCurrentFirstResponder();
}

// public static bool IsFirstResponder(ObjC.Object handle) :217
void FocusHelpers__IsFirstResponder_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = FocusHelpers::IsFirstResponder(handle);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() :199
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval)
{
    *__retval = FocusHelpers::KeyboardView();
}

// public static void ResignFirstResponder(ObjC.Object uiView) :210
void FocusHelpers__ResignFirstResponder_fn(::g::ObjC::Object* uiView)
{
    FocusHelpers::ResignFirstResponder(uiView);
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target) :243
void FocusHelpers__ScheduleBecomeFirstResponder_fn(::g::ObjC::Object* target)
{
    FocusHelpers::ScheduleBecomeFirstResponder(target);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target) :237
void FocusHelpers__ScheduleResignFirstResponder_fn(::g::ObjC::Object* target)
{
    FocusHelpers::ScheduleResignFirstResponder(target);
}

uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> FocusHelpers::_keyboardView_;

// public static void BecomeFirstResponder(ObjC.Object uiView) [static] :203
void FocusHelpers::BecomeFirstResponder(::g::ObjC::Object* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            [view becomeFirstResponder];
        } (::g::ObjC::Object::GetHandle(uiView));
        
    }
    
}

// public static ObjC.Object GetCurrentFirstResponder() [static] :224
::g::ObjC::Object* FocusHelpers::GetCurrentFirstResponder()
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            id responder = [UIResponder currentFirstResponder];	
            if ([responder isKindOfClass: [::UIView class]])
            {
            	return responder;
            }
            else
            {
            	return nil;
            }
        } ());
        
    }
    
}

// public static bool IsFirstResponder(ObjC.Object handle) [static] :217
bool FocusHelpers::IsFirstResponder(::g::ObjC::Object* handle)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UIView* view = (::UIView*)handle;
            return [view isFirstResponder];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void ResignFirstResponder(ObjC.Object uiView) [static] :210
void FocusHelpers::ResignFirstResponder(::g::ObjC::Object* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            [view resignFirstResponder];
        } (::g::ObjC::Object::GetHandle(uiView));
        
    }
    
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target) [static] :243
void FocusHelpers::ScheduleBecomeFirstResponder(::g::ObjC::Object* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleBecomeFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    FocusHelpers::BecomeFirstResponder(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn, FocusHelpers__PerformBecomeFirstResponder::New1(target)), 0);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target) [static] :237
void FocusHelpers::ScheduleResignFirstResponder(::g::ObjC::Object* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleResignFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    uPtr(FocusHelpers::KeyboardView())->HoldFocus(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::iOS::KeyboardView__HideKeyboard_fn, uPtr(FocusHelpers::KeyboardView())), 0);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() [static] :199
::g::Fuse::Controls::Native::iOS::KeyboardView* FocusHelpers::KeyboardView()
{
    FocusHelpers_typeof()->Init();
    return FocusHelpers::_keyboardView();
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
