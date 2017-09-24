// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-76415cc8.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Uninitialized;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class Uninitialized :300
// {
::g::Outracks::Simulator::Client::State_type* Uninitialized_typeof();
void Uninitialized__ctor_1_fn(Uninitialized* __this);
void Uninitialized__New1_fn(Uninitialized** __retval);
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval);
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct Uninitialized : ::g::Outracks::Simulator::Client::State
{
    void ctor_1();
    static Uninitialized* New1();
};
// }

}}}} // ::g::Outracks::Simulator::Client
