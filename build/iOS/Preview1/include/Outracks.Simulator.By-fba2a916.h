// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class TypeMemberName :1816
// {
uType* TypeMemberName_typeof();
void TypeMemberName__ctor__fn(TypeMemberName* __this, uString* name);
void TypeMemberName__Equals_fn(TypeMemberName* __this, uObject* obj, bool* __retval);
void TypeMemberName__Equals2_fn(TypeMemberName* __this, TypeMemberName* other, bool* __retval);
void TypeMemberName__GetHashCode_fn(TypeMemberName* __this, int* __retval);
void TypeMemberName__New1_fn(uString* name, TypeMemberName** __retval);
void TypeMemberName__op_Addition_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName, ::g::Outracks::Simulator::Bytecode::StaticMemberName** __retval);
void TypeMemberName__Read_fn(::g::System::IO::BinaryReader* reader, TypeMemberName** __retval);
void TypeMemberName__ToString_fn(TypeMemberName* __this, uString** __retval);
void TypeMemberName__Write_fn(TypeMemberName* name, ::g::System::IO::BinaryWriter* writer);
void TypeMemberName__Write1_fn(TypeMemberName* __this, ::g::System::IO::BinaryWriter* writer);

struct TypeMemberName : uObject
{
    uStrong<uString*> Name;

    void ctor_(uString* name);
    bool Equals2(TypeMemberName* other);
    void Write1(::g::System::IO::BinaryWriter* writer);
    static TypeMemberName* New1(uString* name);
    static ::g::Outracks::Simulator::Bytecode::StaticMemberName* op_Addition(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName);
    static TypeMemberName* Read(::g::System::IO::BinaryReader* reader);
    static void Write(TypeMemberName* name, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
