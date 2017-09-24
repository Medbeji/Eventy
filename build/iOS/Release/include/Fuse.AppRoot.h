// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.iOS/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AppRoot;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// internal static extern class AppRoot :13
// {
uClassType* AppRoot_typeof();
void AppRoot__get_ClearColor_fn(::g::Uno::Float4* __retval);
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value);
void AppRoot__CreateAppRootView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval);
void AppRoot__get_RootView_fn(::g::ObjC::Object** __retval);
void AppRoot__Set_fn(::g::ObjC::Object* root);
void AppRoot__Set1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle);
void AppRoot__SetClearColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);

struct AppRoot : uObject
{
    static uSStrong< ::g::ObjC::Object*> _appRootView_;
    static uSStrong< ::g::ObjC::Object*>& _appRootView() { return AppRoot_typeof()->Init(), _appRootView_; }
    static ::g::Uno::Float4 _clearColor_;
    static ::g::Uno::Float4& _clearColor() { return AppRoot_typeof()->Init(), _clearColor_; }
    static uSStrong< ::g::ObjC::Object*> _root_;
    static uSStrong< ::g::ObjC::Object*>& _root() { return AppRoot_typeof()->Init(), _root_; }

    static ::g::ObjC::Object* CreateAppRootView(::g::ObjC::Object* handle);
    static void Set(::g::ObjC::Object* root);
    static void Set1(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle);
    static void SetClearColor(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static ::g::Uno::Float4 ClearColor();
    static void ClearColor(::g::Uno::Float4 value);
    static ::g::ObjC::Object* RootView();
};
// }

}} // ::g::Fuse
