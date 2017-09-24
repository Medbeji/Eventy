// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Context;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class Context :1160
// {
uClassType* Context_typeof();
void Context__CopyGlobalObject_fn(::JSContext** context, ::JSObject** __retval);
void Context__Create_fn(::JSContext** __retval);
void Context__EvaluateCreate_fn(::JSContext** context, ::JSString** fileName, ::JSString** code, ::JSScriptException** error, ::JSValue** __retval);
void Context__GetV8Version_fn(uString** __retval);
void Context__Release_fn(::JSContext** context);
void Context__Retain_fn(::JSContext** context);

struct Context : uObject
{
    static ::JSObject* CopyGlobalObject(::JSContext* context);
    static ::JSContext* Create();
    static ::JSValue* EvaluateCreate(::JSContext* context, ::JSString* fileName, ::JSString* code, ::JSScriptException** error);
    static uString* GetV8Version();
    static void Release(::JSContext* context);
    static void Retain(::JSContext* context);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
