// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct RemoveEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class RemoveEventHandler :638
// {
::g::Outracks::Simulator::Bytecode::Expression_type* RemoveEventHandler_typeof();
void RemoveEventHandler__ctor_2_fn(RemoveEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
void RemoveEventHandler__get_ExpressionId_fn(RemoveEventHandler* __this, uChar* __retval);
void RemoveEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, RemoveEventHandler** __retval);
void RemoveEventHandler__Read2_fn(::g::System::IO::BinaryReader* reader, RemoveEventHandler** __retval);
void RemoveEventHandler__ToString_fn(RemoveEventHandler* __this, uString** __retval);
void RemoveEventHandler__Write2_fn(RemoveEventHandler* o, ::g::System::IO::BinaryWriter* writer);
void RemoveEventHandler__WriteExpression_fn(RemoveEventHandler* __this, ::g::System::IO::BinaryWriter* writer);

struct RemoveEventHandler : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Handler;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static RemoveEventHandler* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static RemoveEventHandler* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(RemoveEventHandler* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
