// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct WriteProperty;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class WriteProperty :550
// {
::g::Outracks::Simulator::Bytecode::Expression_type* WriteProperty_typeof();
void WriteProperty__ctor_2_fn(WriteProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value);
void WriteProperty__get_ExpressionId_fn(WriteProperty* __this, uChar* __retval);
void WriteProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value, WriteProperty** __retval);
void WriteProperty__Read2_fn(::g::System::IO::BinaryReader* reader, WriteProperty** __retval);
void WriteProperty__ToString_fn(WriteProperty* __this, uString** __retval);
void WriteProperty__Write2_fn(WriteProperty* o, ::g::System::IO::BinaryWriter* writer);
void WriteProperty__WriteExpression_fn(WriteProperty* __this, ::g::System::IO::BinaryWriter* writer);

struct WriteProperty : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Property;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Value;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value);
    static WriteProperty* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ::g::Outracks::Simulator::Bytecode::Expression* value);
    static WriteProperty* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(WriteProperty* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
