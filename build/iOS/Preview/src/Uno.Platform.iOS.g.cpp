// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform.iOS.uCGPoint.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOS.uCGSize.h>
#include <Uno.Platform.iOS.UIImage.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/ios/$.uno
// ----------------------------------------------------------------------------------------------------------

// public extern struct uCGPoint :285
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/ios/$.uno
// ----------------------------------------------------------------------------------------------------------

// public extern struct uCGRect :274
// {
static void uCGRect1_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("get_Zero", NULL, (void*)uCGRect1__get_Zero_fn, 0, true, type, 0));
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

// public static Uno.Platform.iOS.uCGRect get_Zero() :276
void uCGRect1__get_Zero_fn(CGRect* __retval)
{
    *__retval = uCGRect1::Zero();
}

// public static Uno.Platform.iOS.uCGRect get_Zero() [static] :276
CGRect uCGRect1::Zero()
{
    return CGRectZero;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/ios/$.uno
// ----------------------------------------------------------------------------------------------------------

// public extern struct uCGSize :280
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/platform/ios/$.uno
// ----------------------------------------------------------------------------------------------------------

// public extern struct UIImage :290
// {
static void UIImage_build(uType* type)
{
}

uStructType* UIImage_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::UIImage *);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.iOS.UIImage", options);
    type->fp_build_ = UIImage_build;
    return type;
}
// }

}}}} // ::g::Uno::Platform::iOS
