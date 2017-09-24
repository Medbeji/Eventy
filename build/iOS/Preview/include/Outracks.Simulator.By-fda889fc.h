// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public partial sealed class TypeName :1878
// {
uType* TypeName_typeof();
void TypeName__ctor__fn(TypeName* __this, ::g::Outracks::Optional1<uStrong<TypeName*> >* containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments);
void TypeName___Read_fn(::g::System::IO::BinaryReader* reader, TypeName** __retval);
void TypeName___Write_fn(TypeName* name, ::g::System::IO::BinaryWriter* writer);
void TypeName___Write1_fn(TypeName* __this, ::g::System::IO::BinaryWriter* writer);
void TypeName__Equals_fn(TypeName* __this, uObject* obj, bool* __retval);
void TypeName__Equals2_fn(TypeName* __this, TypeName* other, bool* __retval);
void TypeName__get_FullName_fn(TypeName* __this, uString** __retval);
void TypeName__get_GenericArgumentsRecursively_fn(TypeName* __this, ::g::Outracks::Simulator::ImmutableList** __retval);
void TypeName__GetHashCode_fn(TypeName* __this, int* __retval);
void TypeName__get_IsParameterizedGenericType_fn(TypeName* __this, bool* __retval);
void TypeName__get_Name_fn(TypeName* __this, uString** __retval);
void TypeName__New1_fn(::g::Outracks::Optional1<uStrong<TypeName*> >* containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments, TypeName** __retval);
void TypeName__op_Equality_fn(TypeName* a, TypeName* b, bool* __retval);
void TypeName__op_Inequality_fn(TypeName* a, TypeName* b, bool* __retval);
void TypeName__Parameterize_fn(TypeName* __this, uArray* methodArgumentTypes, TypeName** __retval);
void TypeName__Parse_fn(uString* name, TypeName** __retval);
void TypeName__ToString_fn(TypeName* __this, uString** __retval);
void TypeName__get_WithGenericSuffix_fn(TypeName* __this, TypeName** __retval);

struct TypeName : uObject
{
    uTField ContainingType() { return __type->Field(this, 0); }
    uStrong< ::g::Outracks::Simulator::ImmutableList*> GenericArguments;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return TypeName_typeof()->Init(), Read_; }
    uStrong<uString*> Surname;
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return TypeName_typeof()->Init(), Write_; }

    void ctor_(::g::Outracks::Optional1<uStrong<TypeName*> > containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments);
    void _Write1(::g::System::IO::BinaryWriter* writer);
    bool Equals2(TypeName* other);
    uString* FullName();
    ::g::Outracks::Simulator::ImmutableList* GenericArgumentsRecursively();
    bool IsParameterizedGenericType();
    uString* Name();
    TypeName* Parameterize(uArray* methodArgumentTypes);
    TypeName* WithGenericSuffix();
    static TypeName* _Read(::g::System::IO::BinaryReader* reader);
    static void _Write(TypeName* name, ::g::System::IO::BinaryWriter* writer);
    static TypeName* New1(::g::Outracks::Optional1<uStrong<TypeName*> > containingType, uString* surname, ::g::Outracks::Simulator::ImmutableList* genericArguments);
    static bool op_Equality(TypeName* a, TypeName* b);
    static bool op_Inequality(TypeName* a, TypeName* b);
    static TypeName* Parse(uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
