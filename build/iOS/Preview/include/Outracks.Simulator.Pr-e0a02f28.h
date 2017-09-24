// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeUpdated;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class BytecodeUpdated :279
// {
struct BytecodeUpdated_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BytecodeUpdated_type* BytecodeUpdated_typeof();
void BytecodeUpdated__ctor__fn(BytecodeUpdated* __this);
void BytecodeUpdated__ctor_1_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda* function);
void BytecodeUpdated__get_Function_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda** __retval);
void BytecodeUpdated__set_Function_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda* value);
void BytecodeUpdated__New1_fn(BytecodeUpdated** __retval);
void BytecodeUpdated__New2_fn(::g::Outracks::Simulator::Bytecode::Lambda* function, BytecodeUpdated** __retval);
void BytecodeUpdated__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BytecodeUpdated** __retval);
void BytecodeUpdated__ToString_fn(BytecodeUpdated* __this, uString** __retval);
void BytecodeUpdated__get_Type_fn(BytecodeUpdated* __this, uString** __retval);
void BytecodeUpdated__WriteDataTo_fn(BytecodeUpdated* __this, ::g::System::IO::BinaryWriter* writer);

struct BytecodeUpdated : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return BytecodeUpdated_typeof()->Init(), MessageType_; }
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> _Function;

    void ctor_();
    void ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* function);
    ::g::Outracks::Simulator::Bytecode::Lambda* Function();
    void Function(::g::Outracks::Simulator::Bytecode::Lambda* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BytecodeUpdated* New1();
    static BytecodeUpdated* New2(::g::Outracks::Simulator::Bytecode::Lambda* function);
    static BytecodeUpdated* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
