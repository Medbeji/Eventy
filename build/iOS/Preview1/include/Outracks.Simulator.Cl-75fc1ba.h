// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-76415cc8.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Connected;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeGenerated;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeUpdated;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Diagnostic;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Error;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal abstract class Connected :418
// {
struct Connected_type : ::g::Outracks::Simulator::Client::State_type
{
    void(*fp_OnFaulted)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**);
};

Connected_type* Connected_typeof();
void Connected__ctor_1_fn(Connected* __this, uObject* client);
void Connected__DismissAllActiveDiagnostics_fn(Connected* __this);
void Connected__NextState_fn(Connected* __this, uObject* message, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnDiagnosticDismissed_fn(Connected* __this, ::g::Fuse::Diagnostic* d);
void Connected__OnDiagnosticReported_fn(Connected* __this, ::g::Fuse::Diagnostic* d);
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeUpdated* args, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnLeaveState_fn(Connected* __this);
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Connected__SendDebugLog_fn(Connected* __this, uString* text, int* type);

struct Connected : ::g::Outracks::Simulator::Client::State
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _activeDiagnostics_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _activeDiagnostics() { return Connected_typeof()->Init(), _activeDiagnostics_; }
    static uSStrong<uObject*> _mutex_;
    static uSStrong<uObject*>& _mutex() { return Connected_typeof()->Init(), _mutex_; }
    uStrong<uObject*> Client;

    void ctor_1(uObject* client);
    void DismissAllActiveDiagnostics();
    ::g::Outracks::Simulator::Client::State* NextState(uObject* message);
    ::g::Outracks::Simulator::Client::State* OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error);
    void OnDiagnosticDismissed(::g::Fuse::Diagnostic* d);
    void OnDiagnosticReported(::g::Fuse::Diagnostic* d);
    ::g::Outracks::Simulator::Client::State* OnExecute(::g::Outracks::Simulator::Protocol::BytecodeUpdated* args);
    ::g::Outracks::Simulator::Client::State* OnFaulted(::g::Uno::Exception* e) { ::g::Outracks::Simulator::Client::State* __retval; return (((Connected_type*)__type)->fp_OnFaulted)(this, e, &__retval), __retval; }
    ::g::Outracks::Simulator::Client::State* OnReify(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
    void SendDebugLog(uString* text, int type);
};
// }

}}}} // ::g::Outracks::Simulator::Client
