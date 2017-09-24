// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOSDevice.h>
#include <Fuse.iOSDevice.Screen-3b02247a.h>
#include <Fuse.OSVersion.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{

// public static extern class iOSDevice :292
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::OSVersion_typeof(), (uintptr_t)&::g::Fuse::iOSDevice::_osVersion_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CompensateForOrientation", NULL, (void*)iOSDevice__CompensateForOrientation1_fn, 0, true, ::g::Uno::Rect_typeof(), 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_OperatingSystemVersion", NULL, (void*)iOSDevice__get_OperatingSystemVersion_fn, 0, true, ::g::Fuse::OSVersion_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)iOSDevice__get_Orientation_fn, 0, true, iOSDevice__ScreenOrientation_typeof(), 0));
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size) :326
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect) :333
void iOSDevice__CompensateForOrientation1_fn(::g::Uno::Rect* rect, ::g::Uno::Rect* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation1(*rect);
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) :314
void iOSDevice__GetiOSVersion_fn(int* major, int* minor, int* patch)
{
    iOSDevice::GetiOSVersion(major, minor, patch);
}

// private static bool IsLandscapeOrientation() :342
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static Fuse.OSVersion get_OperatingSystemVersion() :303
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() :323
void iOSDevice__get_Orientation_fn(int* __retval)
{
    *__retval = iOSDevice::Orientation();
}

uSStrong< ::g::Fuse::OSVersion*> iOSDevice::_osVersion_;

// public static float2 CompensateForOrientation(float2 size) [static] :326
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOSDevice", "CompensateForOrientation(float2)");
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// public static Uno.Rect CompensateForOrientation(Uno.Rect rect) [static] :333
::g::Uno::Rect iOSDevice::CompensateForOrientation1(::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.iOSDevice", "CompensateForOrientation(Uno.Rect)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float2 ind2;
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Rect__New2((ind1 = rect.Position(), ::g::Uno::Float2__New2(ind1.Y, ind1.X)), (ind2 = rect.Size(), ::g::Uno::Float2__New2(ind2.Y, ind2.X))) : rect;
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) [static] :314
void iOSDevice::GetiOSVersion(int* major, int* minor, int* patch)
{
    @autoreleasepool
    {
        *major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
        *minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
        *patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    }
    
}

// private static bool IsLandscapeOrientation() [static] :342
bool iOSDevice::IsLandscapeOrientation()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static Fuse.OSVersion get_OperatingSystemVersion() [static] :303
::g::Fuse::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int major, minor, patch;
    iOSDevice::GetiOSVersion(&major, &minor, &patch);
    return iOSDevice::_osVersion_ = ::g::Fuse::OSVersion::New1(major, minor, patch);
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() [static] :323
int iOSDevice::Orientation()
{
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

}} // ::g::Fuse
