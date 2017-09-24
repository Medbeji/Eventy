// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform.iOS.uCGPoint.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOS.uCGSize.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// C:\Users\nour\AppData\Local\Fusetools\Packages\UnoCore\0.46.1\source\uno\platform\ios\$.uno
// -------------------------------------------------------------------------------------------

// public extern struct uCGPoint :264
// {
static void uCGPoint1_build(uType* type)
{
}

uStructType* uCGPoint1_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(CGPoint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.iOS.uCGPoint", options);
    type->fp_build_ = uCGPoint1_build;
    return type;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\UnoCore\0.46.1\source\uno\platform\ios\$.uno
// -------------------------------------------------------------------------------------------

// public extern struct uCGRect :253
// {
static void uCGRect1_build(uType* type)
{
}

uStructType* uCGRect1_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(CGRect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.iOS.uCGRect", options);
    type->fp_build_ = uCGRect1_build;
    return type;
}

// public static Uno.Platform.iOS.uCGRect get_Zero() :255
void uCGRect1__get_Zero_fn(CGRect* __retval)
{
    *__retval = uCGRect1::Zero();
}

// public static Uno.Platform.iOS.uCGRect get_Zero() [static] :255
CGRect uCGRect1::Zero()
{
    return CGRectZero;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\UnoCore\0.46.1\source\uno\platform\ios\$.uno
// -------------------------------------------------------------------------------------------

// public extern struct uCGSize :259
// {
static void uCGSize1_build(uType* type)
{
}

uStructType* uCGSize1_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(CGSize);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.iOS.uCGSize", options);
    type->fp_build_ = uCGSize1_build;
    return type;
}
// }

}}}} // ::g::Uno::Platform::iOS
