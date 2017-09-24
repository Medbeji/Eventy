// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct VirtualMachine;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public static class VirtualMachine :601
// {
uClassType* VirtualMachine_typeof();
void VirtualMachine__Execute_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval);
void VirtualMachine__Execute1_fn(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval);

struct VirtualMachine : uObject
{
    static uObject* Execute(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments);
    static uObject* Execute1(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments);
};
// }

}}}} // ::g::Outracks::Simulator::Client
