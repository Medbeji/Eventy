// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JavaObjectHelper;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// public static extern class JavaObjectHelper :1241
// {
uClassType* JavaObjectHelper_typeof();
void JavaObjectHelper__JObjectToJWrapper_fn(jobject* tmpRes, bool* stackArg, uObject** __retval);

struct JavaObjectHelper : uObject
{
    static uObject* JObjectToJWrapper(jobject tmpRes, bool stackArg);
};
// }

}}}} // ::g::Android::Base::Wrappers
