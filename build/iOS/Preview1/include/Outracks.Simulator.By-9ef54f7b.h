// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct LogicalOr;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class LogicalOr :187
// {
::g::Outracks::Simulator::Bytecode::Expression_type* LogicalOr_typeof();
void LogicalOr__ctor_2_fn(LogicalOr* __this, ::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right);
void LogicalOr__get_ExpressionId_fn(LogicalOr* __this, uChar* __retval);
void LogicalOr__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right, LogicalOr** __retval);
void LogicalOr__Read2_fn(::g::System::IO::BinaryReader* reader, LogicalOr** __retval);
void LogicalOr__ToString_fn(LogicalOr* __this, uString** __retval);
void LogicalOr__Write2_fn(LogicalOr* o, ::g::System::IO::BinaryWriter* writer);
void LogicalOr__WriteExpression_fn(LogicalOr* __this, ::g::System::IO::BinaryWriter* writer);

struct LogicalOr : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Left;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Right;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right);
    static LogicalOr* New1(::g::Outracks::Simulator::Bytecode::Expression* left, ::g::Outracks::Simulator::Bytecode::Expression* right);
    static LogicalOr* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(LogicalOr* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
