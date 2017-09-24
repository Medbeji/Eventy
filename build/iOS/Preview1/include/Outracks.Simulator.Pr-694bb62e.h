// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectBytecode;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BytecodeGenerated;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class BytecodeGenerated :233
// {
struct BytecodeGenerated_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BytecodeGenerated_type* BytecodeGenerated_typeof();
void BytecodeGenerated__ctor__fn(BytecodeGenerated* __this);
void BytecodeGenerated__ctor_1_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode);
void BytecodeGenerated__get_BinaryFormat_fn(uString** __retval);
void BytecodeGenerated__get_Bytecode_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode** __retval);
void BytecodeGenerated__set_Bytecode_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode* value);
void BytecodeGenerated__New1_fn(BytecodeGenerated** __retval);
void BytecodeGenerated__New2_fn(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode, BytecodeGenerated** __retval);
void BytecodeGenerated__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BytecodeGenerated** __retval);
void BytecodeGenerated__ToString_fn(BytecodeGenerated* __this, uString** __retval);
void BytecodeGenerated__get_Type_fn(BytecodeGenerated* __this, uString** __retval);
void BytecodeGenerated__WriteDataTo_fn(BytecodeGenerated* __this, ::g::System::IO::BinaryWriter* writer);

struct BytecodeGenerated : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return BytecodeGenerated_typeof()->Init(), MessageType_; }
    uStrong< ::g::Outracks::Simulator::Bytecode::ProjectBytecode*> _Bytecode;

    void ctor_();
    void ctor_1(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode);
    ::g::Outracks::Simulator::Bytecode::ProjectBytecode* Bytecode();
    void Bytecode(::g::Outracks::Simulator::Bytecode::ProjectBytecode* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BytecodeGenerated* New1();
    static BytecodeGenerated* New2(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode);
    static BytecodeGenerated* ReadDataFrom(::g::System::IO::BinaryReader* reader);
    static uString* BinaryFormat();
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
