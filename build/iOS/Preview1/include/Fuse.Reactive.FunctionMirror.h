// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IRaw.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.JavaScr-a102336.h>
namespace g{namespace Fuse{namespace Reactive{struct FunctionMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class FunctionMirror :164
// {
struct FunctionMirror_type : uType
{
    ::g::Fuse::Reactive::IEventHandler interface0;
    ::g::Fuse::IRaw interface1;
};

FunctionMirror_type* FunctionMirror_typeof();
void FunctionMirror__ctor_1_fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func);
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e);
void FunctionMirror__New2_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval);
void FunctionMirror__get_Raw_fn(FunctionMirror* __this, uObject** __retval);

struct FunctionMirror : ::g::Fuse::Reactive::JavaScript__DiagnosticSubject
{
    uStrong< ::g::Fuse::Scripting::Function*> _func;

    void ctor_1(::g::Fuse::Scripting::Function* func);
    void Dispatch(uObject* e);
    uObject* Raw();
    static FunctionMirror* New2(::g::Fuse::Scripting::Function* func);
};
// }

}}} // ::g::Fuse::Reactive
