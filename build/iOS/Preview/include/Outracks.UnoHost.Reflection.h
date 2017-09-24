// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace UnoHost{struct Reflection;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public static class Reflection :88
// {
uClassType* Reflection_typeof();
void Reflection__AddEventHandler_fn(uObject* instance, uString* member, uObject* handlerDelegate);
void Reflection__CallDynamic_fn(uObject* instance, uString* methodName, uArray* arguments, uObject** __retval);
void Reflection__CallStatic_fn(uString* typeName, uString* methodName, uArray* arguments, uObject** __retval);
void Reflection__CreateDelegate_fn(uObject* instance, uString* method, uArray* argumentTypes, uString* delegateTypeName, uObject** __retval);
void Reflection__GetEnumValue_fn(uString* enumType, uString* valueName, uObject** __retval);
void Reflection__GetPropertyValue_fn(uObject* instance, uString* propertyName, uObject** __retval);
void Reflection__GetStaticPropertyOrFieldValue_fn(uString* typeName, uString* memberName, uObject** __retval);
void Reflection__Instantiate_fn(uString* typeName, uArray* args, uObject** __retval);
void Reflection__IsSubtype_fn(uObject* obj, uString* typeName, bool* __retval);
void Reflection__IsType_fn(uObject* obj, uString* typeName, bool* __retval);
void Reflection__RemoveEventHandler_fn(uObject* instance, uString* member, uObject* handlerDelegate);
void Reflection__SetPropertyValue_fn(uObject* instance, uString* propertyName, uObject* value);

struct Reflection : uObject
{
    static void AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    static uObject* CallDynamic(uObject* instance, uString* methodName, uArray* arguments);
    static uObject* CallStatic(uString* typeName, uString* methodName, uArray* arguments);
    static uObject* CreateDelegate(uObject* instance, uString* method, uArray* argumentTypes, uString* delegateTypeName);
    static uObject* GetEnumValue(uString* enumType, uString* valueName);
    static uObject* GetPropertyValue(uObject* instance, uString* propertyName);
    static uObject* GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName);
    static uObject* Instantiate(uString* typeName, uArray* args);
    static bool IsSubtype(uObject* obj, uString* typeName);
    static bool IsType(uObject* obj, uString* typeName);
    static void RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    static void SetPropertyValue(uObject* instance, uString* propertyName, uObject* value);
};
// }

}}} // ::g::Outracks::UnoHost
