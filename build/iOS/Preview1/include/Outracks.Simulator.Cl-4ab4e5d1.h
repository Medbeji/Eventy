// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-de0df58f.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ConnectionLost;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct ExceptionInfo;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class ConnectionLost :715
// {
::g::Outracks::Simulator::Client::State_type* ConnectionLost_typeof();
void ConnectionLost__ctor_2_fn(ConnectionLost* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
void ConnectionLost__ctor_3_fn(ConnectionLost* __this, ::g::Uno::Exception* exception);
void ConnectionLost__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, ConnectionLost** __retval);
void ConnectionLost__New3_fn(::g::Uno::Exception* exception, ConnectionLost** __retval);

struct ConnectionLost : ::g::Outracks::Simulator::Client::ShowingModalDialog
{
    void ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    void ctor_3(::g::Uno::Exception* exception);
    static ConnectionLost* New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    static ConnectionLost* New3(::g::Uno::Exception* exception);
};
// }

}}}} // ::g::Outracks::Simulator::Client
