// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class ScriptException :1269
// {
uClassType* ScriptException_typeof();
void ScriptException__GetException_fn(::JSScriptException** e, ::JSValue** __retval);
void ScriptException__GetFileName_fn(::JSScriptException** e, ::JSString** __retval);
void ScriptException__GetLineNumber_fn(::JSScriptException** e, int* __retval);
void ScriptException__GetMessage_fn(::JSScriptException** e, ::JSString** __retval);
void ScriptException__GetSourceLine_fn(::JSScriptException** e, ::JSString** __retval);
void ScriptException__GetStackTrace_fn(::JSScriptException** e, ::JSString** __retval);
void ScriptException__Release_fn(::JSContext** context, ::JSScriptException** e);
void ScriptException__Retain_fn(::JSContext** context, ::JSScriptException** e);

struct ScriptException : uObject
{
    static ::JSValue* GetException(::JSScriptException* e);
    static ::JSString* GetFileName(::JSScriptException* e);
    static int GetLineNumber(::JSScriptException* e);
    static ::JSString* GetMessage(::JSScriptException* e);
    static ::JSString* GetSourceLine(::JSScriptException* e);
    static ::JSString* GetStackTrace(::JSScriptException* e);
    static void Release(::JSContext* context, ::JSScriptException* e);
    static void Retain(::JSContext* context, ::JSScriptException* e);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
