// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>

namespace g{
namespace Android{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal static extern class Bootstrapper :11
// {
static void Bootstrapper_build(uType* type)
{
}

uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Bootstrapper", options);
    type->fp_build_ = Bootstrapper_build;
    return type;
}

// public static void _RegisterTypes() :13
void Bootstrapper___RegisterTypes_fn()
{
    Bootstrapper::_RegisterTypes();
}

// public static void _RegisterTypes() [static] :13
void Bootstrapper::_RegisterTypes()
{
    ::BootstrapperImpl();
}
// }

}} // ::g::Android
