// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <JavaScriptCore/JSObjectRef.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSClassRef :859
// {
struct JSClassRef_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

JSClassRef_type* JSClassRef_typeof();
void JSClassRef__CreateUnoCallback_fn(::JSClassRef* __retval);
void JSClassRef__CreateUnoFinalizer_fn(::JSClassRef* __retval);
void JSClassRef__Dispose_fn(::JSClassRef* __this);

struct JSClassRef
{
    void* _dummy;

    static void Dispose(::JSClassRef __this);
    static ::JSClassRef CreateUnoCallback();
    static ::JSClassRef CreateUnoFinalizer();
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
