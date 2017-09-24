// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/reflection/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Ru-34926e08.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UnoHostReflection;}}}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UnoHostReflection :719
// {
struct UnoHostReflection_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

UnoHostReflection_type* UnoHostReflection_typeof();
void UnoHostReflection__ctor__fn(UnoHostReflection* __this);
void UnoHostReflection__AddEventHandler_fn(UnoHostReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void UnoHostReflection__CallDynamic_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void UnoHostReflection__CallStatic_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void UnoHostReflection__CreateDelegate_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, uObject** __retval);
void UnoHostReflection__GetEnumValue_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval);
void UnoHostReflection__GetPropertyValue_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval);
void UnoHostReflection__GetStaticPropertyOrFieldValue_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval);
void UnoHostReflection__Instantiate_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval);
void UnoHostReflection__IsSubtype_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void UnoHostReflection__IsType_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void UnoHostReflection__New1_fn(UnoHostReflection** __retval);
void UnoHostReflection__ParameterToTypeName_fn(::g::Outracks::Simulator::Bytecode::Parameter* parameter, uString** __retval);
void UnoHostReflection__RemoveEventHandler_fn(UnoHostReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void UnoHostReflection__SetPropertyValue_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value);

struct UnoHostReflection : uObject
{
    void ctor_();
    void AddEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
    uObject* CallDynamic(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments);
    uObject* CallStatic(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments);
    uObject* CreateDelegate(::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature);
    uObject* GetEnumValue(::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName);
    uObject* GetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName);
    uObject* GetStaticPropertyOrFieldValue(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    uObject* Instantiate(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args);
    bool IsSubtype(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    bool IsType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    void RemoveEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
    void SetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value);
    static UnoHostReflection* New1();
    static uString* ParameterToTypeName(::g::Outracks::Simulator::Bytecode::Parameter* parameter);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
