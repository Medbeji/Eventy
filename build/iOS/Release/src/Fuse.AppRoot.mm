// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.iOS/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppRoot.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Platform.SystemUI.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{

// internal static extern class AppRoot :13
// {
// static AppRoot() :22
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_clearColor_ = ::g::Uno::Float4__New1(1.0f);
    AppRoot::_appRootView_ = AppRoot::CreateAppRootView(uPtr(::g::Fuse::Controls::Native::iOS::FocusHelpers::KeyboardView())->Handle());
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Root already set to: ");
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::AppRoot::_appRootView_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::AppRoot::_clearColor_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::AppRoot::_root_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// public static float4 get_ClearColor() :43
void AppRoot__get_ClearColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = AppRoot::ClearColor();
}

// public static void set_ClearColor(float4 value) :47
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value)
{
    AppRoot::ClearColor(*value);
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) :28
void AppRoot__CreateAppRootView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::CreateAppRootView(handle);
}

// public static ObjC.Object get_RootView() :17
void AppRoot__get_RootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::RootView();
}

// public static void Set(ObjC.Object root) :63
void AppRoot__Set_fn(::g::ObjC::Object* root)
{
    AppRoot::Set(root);
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) :82
void AppRoot__Set1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot::Set1(handle, childHandle);
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) :55
void AppRoot__SetClearColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    AppRoot::SetClearColor(handle, *r, *g, *b, *a);
}

uSStrong< ::g::ObjC::Object*> AppRoot::_appRootView_;
::g::Uno::Float4 AppRoot::_clearColor_;
uSStrong< ::g::ObjC::Object*> AppRoot::_root_;

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) [static] :28
::g::ObjC::Object* AppRoot::CreateAppRootView(::g::ObjC::Object* handle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle) -> ::id
        {
            ::UIControl* root = (::UIControl*)handle;
            [root setUserInteractionEnabled: true];
            [root setMultipleTouchEnabled: true];
            [root setOpaque: false];
            ::g::Fuse::Platform::SystemUI::RootView(::g::ObjC::Object::Create(root));
            [root sizeToFit];
            root.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            return root;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public static void Set(ObjC.Object root) [static] :63
void AppRoot::Set(::g::ObjC::Object* root)
{
    AppRoot_typeof()->Init();

    if (AppRoot::_root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Root alread...*/], AppRoot::_root())));

    AppRoot::_root() = root;
    AppRoot::Set1(AppRoot::_appRootView(), AppRoot::_root());
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) [static] :82
void AppRoot::Set1(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, ::id childHandle) -> void
        {
            ::UIView* parent = (::UIView*)handle;
            ::UIView* child = (::UIView*)childHandle;
            [parent addSubview: child];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) [static] :55
void AppRoot::SetClearColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setBackgroundColor: [::UIColor colorWithRed:(CGFloat)r green: (CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// public static float4 get_ClearColor() [static] :43
::g::Uno::Float4 AppRoot::ClearColor()
{
    AppRoot_typeof()->Init();
    return AppRoot::_clearColor();
}

// public static void set_ClearColor(float4 value) [static] :47
void AppRoot::ClearColor(::g::Uno::Float4 value)
{
    AppRoot_typeof()->Init();
    AppRoot::_clearColor() = value;
    AppRoot::SetClearColor(AppRoot::_appRootView(), value.X, value.Y, value.Z, value.W);
}

// public static ObjC.Object get_RootView() [static] :17
::g::ObjC::Object* AppRoot::RootView()
{
    AppRoot_typeof()->Init();
    return AppRoot::_appRootView();
}
// }

}} // ::g::Fuse
