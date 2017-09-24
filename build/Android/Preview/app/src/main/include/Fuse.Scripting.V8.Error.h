// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Error;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Error :1620
// {
uClassType* Error_typeof();
void Error__Check_fn(::JSContext** context, ::JSScriptException** err, uDelegate* handler);
void Error__Check1_fn(int* err);

struct Error : uObject
{
    static void Check(::JSContext* context, ::JSScriptException* err, uDelegate* handler);
    static void Check1(int err);
};
// }

}}}} // ::g::Fuse::Scripting::V8
