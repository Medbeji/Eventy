// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct MethodGroup;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class MethodGroup :1139
// {
::g::Outracks::Simulator::Bytecode::Expression_type* MethodGroup_typeof();
void MethodGroup__ctor_2_fn(MethodGroup* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
void MethodGroup__get_ExpressionId_fn(MethodGroup* __this, uChar* __retval);
void MethodGroup__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, MethodGroup** __retval);
void MethodGroup__Read2_fn(::g::System::IO::BinaryReader* reader, MethodGroup** __retval);
void MethodGroup__ToString_fn(MethodGroup* __this, uString** __retval);
void MethodGroup__Write2_fn(MethodGroup* l, ::g::System::IO::BinaryWriter* writer);
void MethodGroup__WriteExpression_fn(MethodGroup* __this, ::g::System::IO::BinaryWriter* writer);

struct MethodGroup : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> DelegateType;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> MethodName;
    uTField MethodSignature() { return __type->Field(this, 2); }
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
    static MethodGroup* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType);
    static MethodGroup* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(MethodGroup* l, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
