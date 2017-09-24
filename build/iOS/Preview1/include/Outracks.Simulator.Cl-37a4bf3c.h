// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-75fc1ba.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Reifying;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeGenerated;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Reifying :565
// {
::g::Outracks::Simulator::Client::Connected_type* Reifying_typeof();
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, Reifying** __retval);
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::Client::State** __retval);
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);

struct Reifying : ::g::Outracks::Simulator::Client::Connected
{
    uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> _reify;

    void ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
    static Reifying* New1(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify);
};
// }

}}}} // ::g::Outracks::Simulator::Client
