// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-ad171c29.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ConnectingToHost;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class ConnectingToHost :377
// {
::g::Outracks::Simulator::Client::State_type* ConnectingToHost_typeof();
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints);
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval);
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct ConnectingToHost : ::g::Outracks::Simulator::Client::Connecting
{
    uStrong< ::g::Outracks::Simulator::Task*> _connecting;
    uStrong<uArray*> _simulatorEndpoints;

    void ctor_2(uObject* simulatorEndpoints);
    static ConnectingToHost* New1(uObject* simulatorEndpoints);
};
// }

}}}} // ::g::Outracks::Simulator::Client
