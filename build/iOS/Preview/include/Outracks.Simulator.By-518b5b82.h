// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.By-305f2ddf.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct AddEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class AddEventHandler :594
// {
::g::Outracks::Simulator::Bytecode::Expression_type* AddEventHandler_typeof();
void AddEventHandler__ctor_2_fn(AddEventHandler* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
void AddEventHandler__get_ExpressionId_fn(AddEventHandler* __this, uChar* __retval);
void AddEventHandler__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler, AddEventHandler** __retval);
void AddEventHandler__Read2_fn(::g::System::IO::BinaryReader* reader, AddEventHandler** __retval);
void AddEventHandler__ToString_fn(AddEventHandler* __this, uString** __retval);
void AddEventHandler__Write2_fn(AddEventHandler* o, ::g::System::IO::BinaryWriter* writer);
void AddEventHandler__WriteExpression_fn(AddEventHandler* __this, ::g::System::IO::BinaryWriter* writer);

struct AddEventHandler : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Event;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Handler;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static AddEventHandler* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* ev, ::g::Outracks::Simulator::Bytecode::Expression* handler);
    static AddEventHandler* Read2(::g::System::IO::BinaryReader* reader);
    static void Write2(AddEventHandler* o, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
