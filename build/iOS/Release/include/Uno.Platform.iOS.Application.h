// This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/source/uno/platform/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Platform{namespace iOS{struct Application;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :177
// {
uClassType* Application_typeof();
void Application__GetRootView_fn(::g::ObjC::Object** __retval);
void Application__IsLandscape_fn(bool* __retval);
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval);
void Application__SetRootView_fn(::g::ObjC::Object* view);

struct Application : uObject
{
    static ::g::ObjC::Object* GetRootView();
    static bool IsLandscape();
    static bool IsRootView(::g::ObjC::Object* view);
    static void SetRootView(::g::ObjC::Object* view);
};
// }

}}}} // ::g::Uno::Platform::iOS
