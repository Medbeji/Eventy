// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallLambda;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class CallLambda :342
// {
::g::Outracks::Simulator::Bytecode::Expression_type* CallLambda_typeof();
void CallLambda__ctor_2_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments);
void CallLambda__ctor_3_fn(CallLambda* __this, ::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments);
void CallLambda__get_ExpressionId_fn(CallLambda* __this, uChar* __retval);
void CallLambda__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments, CallLambda** __retval);
void CallLambda__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments, CallLambda** __retval);
void CallLambda__Read2_fn(::g::System::IO::BinaryReader* reader, CallLambda** __retval);
void CallLambda__ToString_fn(CallLambda* __this, uString** __retval);
void CallLambda__Write2_fn(CallLambda* o, ::g::System::IO::BinaryWriter* writer);
void CallLambda__WriteExpression_fn(CallLambda* __this, ::g::System::IO::BinaryWriter* writer);

struct CallLambda : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Arguments;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Lambda;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments);
    void ctor_3(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallLambda* New1(::g::Outracks::Simulator::Bytecode::Expression* lambda, uArray* arguments);
    static CallLambda* New2(::g::Outracks::Simulator::Bytecode::Expression* lanbda, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallLambda* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(CallLambda* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
