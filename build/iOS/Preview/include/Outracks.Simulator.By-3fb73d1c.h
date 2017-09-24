// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BindVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Lambda :730
// {
::g::Outracks::Simulator::Bytecode::Expression_type* Lambda_typeof();
void Lambda__ctor_2_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements);
void Lambda__ctor_3_fn(Lambda* __this, ::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements);
void Lambda__Action_fn(uDelegate* body, Lambda** __retval);
void Lambda__Action1_fn(uDelegate* body, Lambda** __retval);
void Lambda__AddStatementSeparator_fn(uObject* s, uString** __retval);
void Lambda__get_ExpressionId_fn(Lambda* __this, uChar* __retval);
void Lambda__Func_fn(uDelegate* body, Lambda** __retval);
void Lambda__New1_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements, Lambda** __retval);
void Lambda__New2_fn(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements, Lambda** __retval);
void Lambda__Read2_fn(::g::System::IO::BinaryReader* reader, Lambda** __retval);
void Lambda__ToString_fn(Lambda* __this, uString** __retval);
void Lambda__Write2_fn(Lambda* l, ::g::System::IO::BinaryWriter* writer);
void Lambda__WriteExpression_fn(Lambda* __this, ::g::System::IO::BinaryWriter* writer);

struct Lambda : ::g::Outracks::Simulator::Bytecode::Expression
{
    static int fguid_;
    static int& fguid() { return fguid_; }
    uStrong< ::g::Outracks::Simulator::ImmutableList*> LocalVariables;
    uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> Signature;
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Statements;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements);
    void ctor_3(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements);
    static Lambda* Action(uDelegate* body);
    static Lambda* Action1(uDelegate* body);
    static uString* AddStatementSeparator(uObject* s);
    static Lambda* Func(uDelegate* body);
    static Lambda* New1(::g::Outracks::Simulator::Bytecode::Signature* signature, ::g::Outracks::Simulator::ImmutableList* localVariables, ::g::Outracks::Simulator::ImmutableList* statements);
    static Lambda* New2(::g::Outracks::Simulator::Bytecode::Signature* signature, uObject* localVariables, uObject* statements);
    static Lambda* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(Lambda* l, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
