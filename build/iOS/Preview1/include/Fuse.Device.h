// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Device;}}

namespace g{
namespace Fuse{

// internal static extern class Device :236
// {
uClassType* Device_typeof();
void Device__GetCurrentOrientation_fn(int* __retval);
void Device__GetStatusBarOrientation_fn(int* __retval);
void Device__get_Orientation_fn(int* __retval);
void Device__get_StatusBarOrientation_fn(int* __retval);

struct Device : uObject
{
    static int GetCurrentOrientation();
    static int GetStatusBarOrientation();
    static int Orientation();
    static int StatusBarOrientation();
};
// }

}} // ::g::Fuse
