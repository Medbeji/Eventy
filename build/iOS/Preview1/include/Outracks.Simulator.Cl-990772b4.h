// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-ad171c29.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ConnectingToProxy;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class ConnectingToProxy :329
// {
::g::Outracks::Simulator::Client::State_type* ConnectingToProxy_typeof();
void ConnectingToProxy__ctor_2_fn(ConnectingToProxy* __this);
void ConnectingToProxy__ctor_3_fn(ConnectingToProxy* __this, uArray* proxyEndpoints);
void ConnectingToProxy__New1_fn(ConnectingToProxy** __retval);
void ConnectingToProxy__New2_fn(uArray* proxyEndpoints, ConnectingToProxy** __retval);
void ConnectingToProxy__OnEnterState_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ConnectingToProxy__OnUpdate_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct ConnectingToProxy : ::g::Outracks::Simulator::Client::Connecting
{
    uStrong< ::g::Outracks::Simulator::Task*> _connecting;
    uStrong<uArray*> _proxyEndpoints;

    void ctor_2();
    void ctor_3(uArray* proxyEndpoints);
    static ConnectingToProxy* New1();
    static ConnectingToProxy* New2(uArray* proxyEndpoints);
};
// }

}}}} // ::g::Outracks::Simulator::Client
