// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct iOSDeviceInterop;}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :365
// {
uClassType* iOSDeviceInterop_typeof();
void iOSDeviceInterop__IsOrientationLandscape_fn(bool* __retval);
void iOSDeviceInterop__IsRootView_fn(::g::ObjC::Object* uiView, bool* __retval);
void iOSDeviceInterop__LaunchUriiOS_fn(uString* uri);
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation_fn(::g::Uno::Float2* size, ::g::ObjC::Object* uiView, ::g::Uno::Float2* __retval);
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation1_fn(::g::Uno::Rect* rect, ::g::ObjC::Object* uiView, ::g::Uno::Rect* __retval);
void iOSDeviceInterop__get_PreV8_fn(bool* __retval);

struct iOSDeviceInterop : uObject
{
    static bool IsOrientationLandscape();
    static bool IsRootView(::g::ObjC::Object* uiView);
    static void LaunchUriiOS(uString* uri);
    static ::g::Uno::Float2 Pre_iOS8_HandleDeviceOrientation(::g::Uno::Float2 size, ::g::ObjC::Object* uiView);
    static ::g::Uno::Rect Pre_iOS8_HandleDeviceOrientation1(::g::Uno::Rect rect, ::g::ObjC::Object* uiView);
    static bool PreV8();
};
// }

}}}} // ::g::Fuse::iOS::Bindings
