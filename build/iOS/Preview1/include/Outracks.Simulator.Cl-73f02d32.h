// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-1a17011c.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ChangeIp;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class ChangeIp :758
// {
::g::Outracks::Simulator::Client::ShowingPrompt_type* ChangeIp_typeof();
void ChangeIp__ctor_2_fn(ChangeIp* __this, uString* body);
void ChangeIp__New1_fn(uString* body, ChangeIp** __retval);
void ChangeIp__OnCancel_fn(ChangeIp* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ChangeIp__OnException_fn(ChangeIp* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void ChangeIp__OnOk_fn(ChangeIp* __this, uString* input, ::g::Outracks::Simulator::Client::State** __retval);

struct ChangeIp : ::g::Outracks::Simulator::Client::ShowingPrompt
{
    void ctor_2(uString* body);
    static ChangeIp* New1(uString* body);
};
// }

}}}} // ::g::Outracks::Simulator::Client
