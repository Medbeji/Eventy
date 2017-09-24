// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Ru-23611d64.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Func-2.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :39
// {
static void UxProperty_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(1,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _getter), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _obj), 0,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _setter), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _supportsOriginSetter), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)UxProperty__New1_fn, 0, true, type, 5, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Property1_type* UxProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(UxProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Outracks.Simulator.Runtime.UxProperty`1", options);
    type->fp_build_ = UxProperty_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))UxProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UxProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))UxProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))UxProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :46
void UxProperty__ctor_3_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter)
{
    __this->ctor_3(setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed T Get(Uno.UX.PropertyObject obj) :71
void UxProperty__Get1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Get(Uno.UX.PropertyObject)");
    uObject* res = uPtr(__this->_getter)->Invoke(1, obj);
    return __retval.Store(__this->__type->T(0), (res == NULL) ? ::g::Uno::Type::op_Equality(__this->__type->T(0), ::g::Uno::String_typeof()) ? (void*)uUnboxAny(__this->__type->T(0), ::STRINGS[0/*""*/]) : (void*)uT(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize)) : (void*)uUnboxAny(__this->__type->T(0), res)), void();
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :46
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval)
{
    *__retval = UxProperty::New1(__type, setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed Uno.UX.PropertyObject get_Object() :56
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, T value, Uno.UX.IPropertyListener origin) :56
void UxProperty__Set1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Set(Uno.UX.PropertyObject,T,Uno.UX.IPropertyListener)");
    uObject* oldValue = uPtr(__this->_getter)->Invoke(1, obj);
    uPtr(__this->_setter)->Invoke(3, obj, uBoxPtr(__this->__type->T(0), value), origin);

    if (::g::Uno::Object::ReferenceEquals(uBoxPtr(__this->__type->T(0), value), NULL) && ::g::Uno::Object::ReferenceEquals(oldValue, NULL))
        return;

    if (!::g::Uno::Object::ReferenceEquals(uBoxPtr(__this->__type->T(0), value), NULL) && ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(0), uPtr(value), U_ALLOCA(__this->__type->T(0)->ObjectSize)), oldValue))
        return;

    ::g::Uno::UX::PropertyObject::EmulatePropertyChanged(obj, __this->Name(), origin);
}

// public override sealed bool get_SupportsOriginSetter() :56
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval)
{
    return *__retval = __this->_supportsOriginSetter, void();
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [instance] :46
void UxProperty::ctor_3(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", ".ctor(Uno.Action<object, object, object>,Uno.Func<object, object>,Uno.UX.PropertyObject,string,bool)");
    ctor_2(::g::Uno::UX::Selector__New1(name));
    _setter = setter;
    _getter = getter;
    _obj = obj;
    _supportsOriginSetter = supportsOriginSetter;
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [static] :46
UxProperty* UxProperty::New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    UxProperty* obj1 = (UxProperty*)uNew(__type);
    obj1->ctor_3(setter, getter, obj, name, supportsOriginSetter);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
