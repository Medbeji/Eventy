// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ReadVariable :265
// {
::g::Outracks::Simulator::Bytecode::Expression_type* ReadVariable_typeof();
void ReadVariable__ctor_2_fn(ReadVariable* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable);
void ReadVariable__get_ExpressionId_fn(ReadVariable* __this, uChar* __retval);
void ReadVariable__New1_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, ReadVariable** __retval);
void ReadVariable__Read2_fn(::g::System::IO::BinaryReader* reader, ReadVariable** __retval);
void ReadVariable__ToString_fn(ReadVariable* __this, uString** __retval);
void ReadVariable__Write2_fn(ReadVariable* o, ::g::System::IO::BinaryWriter* writer);
void ReadVariable__WriteExpression_fn(ReadVariable* __this, ::g::System::IO::BinaryWriter* writer);

struct ReadVariable : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Variable*> Variable;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Variable* variable);
    static ReadVariable* New1(::g::Outracks::Simulator::Bytecode::Variable* variable);
    static ReadVariable* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(ReadVariable* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
