// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/fusejs/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class TimerModule :722
// {
::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof();
void TimerModule__ctor_2_fn(TimerModule* __this);
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TimerModule__get_MinTimeout_fn(TimerModule* __this, double* __retval);
void TimerModule__New2_fn(TimerModule** __retval);
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TimerModule__UpdateModule_fn(TimerModule* __this);

struct TimerModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<TimerModule*> _instance_;
    static uSStrong<TimerModule*>& _instance() { return _instance_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerManager*> _tm;

    void ctor_2();
    uObject* Create(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Delete(::g::Fuse::Scripting::Context* context, uArray* args);
    double MinTimeout();
    void OnReset(uObject* sender, ::g::Uno::EventArgs* args);
    void UpdateModule();
    static TimerModule* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
