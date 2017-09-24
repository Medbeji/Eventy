// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Debugger :403
// {
struct Debugger_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Debugger_type* Debugger_typeof();
void Debugger__ctor__fn(Debugger* __this, ::g::Fuse::Scripting::V8::Context* context, int* port);
void Debugger__AddHeader_fn(uString* body, uString** __retval);
void Debugger__Connect_fn(Debugger* parent, uObject** __retval);
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, uString* message);
void Debugger__Dispose_fn(Debugger* __this);
void Debugger__HandleMessage_fn(Debugger* __this, ::JSString** message);
void Debugger__New1_fn(::g::Fuse::Scripting::V8::Context* context, int* port, Debugger** __retval);
void Debugger__StateMachine_fn(Debugger* __this);
void Debugger__ToConnected_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval);

struct Debugger : uObject
{
    static uSStrong<uString*> _contentLengthString_;
    static uSStrong<uString*>& _contentLengthString() { return Debugger_typeof()->Init(), _contentLengthString_; }
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    uStrong<uObject*> _currentState;
    uStrong<uDelegate*> _messageHandler;
    uStrong< ::g::Uno::Collections::List*> _offlineMessages;
    int _port;
    bool _shutdown;
    uStrong<uObject*> _shutdownMutex;
    uStrong< ::g::Uno::Threading::Thread*> _stateMachine;

    void ctor_(::g::Fuse::Scripting::V8::Context* context, int port);
    void DisconnectedMessageHandler(uString* message);
    void Dispose();
    void HandleMessage(::JSString* message);
    void StateMachine();
    static uString* AddHeader(uString* body);
    static uObject* Connect(Debugger* parent);
    static Debugger* New1(::g::Fuse::Scripting::V8::Context* context, int port);
    static uObject* ToConnected(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket);
};
// }

}}}} // ::g::Fuse::Scripting::V8
