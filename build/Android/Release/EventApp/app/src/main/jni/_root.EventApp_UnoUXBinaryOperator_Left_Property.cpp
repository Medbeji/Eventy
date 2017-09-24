// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_UnoUXBinaryOperator_Left_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.BinaryOperator.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_UnoUXBinaryOperator_Left_Property :73
// {
static void EventApp_UnoUXBinaryOperator_Left_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL));
    type->SetFields(1,
        ::g::Uno::UX::BinaryOperator_typeof(), offsetof(::g::EventApp_UnoUXBinaryOperator_Left_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* EventApp_UnoUXBinaryOperator_Left_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_UnoUXBinaryOperator_Left_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_UnoUXBinaryOperator_Left_Property", options);
    type->fp_build_ = EventApp_UnoUXBinaryOperator_Left_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_UnoUXBinaryOperator_Left_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_UnoUXBinaryOperator_Left_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_UnoUXBinaryOperator_Left_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_UnoUXBinaryOperator_Left_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_UnoUXBinaryOperator_Left_Property(Uno.UX.BinaryOperator obj, Uno.UX.Selector name) :76
void EventApp_UnoUXBinaryOperator_Left_Property__ctor_2_fn(EventApp_UnoUXBinaryOperator_Left_Property* __this, ::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Value Get() :78
void EventApp_UnoUXBinaryOperator_Left_Property__Get_fn(EventApp_UnoUXBinaryOperator_Left_Property* __this, ::g::Uno::UX::Value** __retval)
{
    return *__retval = uPtr(__this->_obj)->Left(), void();
}

// public EventApp_UnoUXBinaryOperator_Left_Property New(Uno.UX.BinaryOperator obj, Uno.UX.Selector name) :76
void EventApp_UnoUXBinaryOperator_Left_Property__New1_fn(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector* name, EventApp_UnoUXBinaryOperator_Left_Property** __retval)
{
    *__retval = EventApp_UnoUXBinaryOperator_Left_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :77
void EventApp_UnoUXBinaryOperator_Left_Property__get_Object_fn(EventApp_UnoUXBinaryOperator_Left_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Value v, Uno.UX.IPropertyListener origin) :79
void EventApp_UnoUXBinaryOperator_Left_Property__Set_fn(EventApp_UnoUXBinaryOperator_Left_Property* __this, ::g::Uno::UX::Value* v, uObject* origin)
{
    uPtr(__this->_obj)->Left(v);
}

// public override sealed bool get_SupportsOriginSetter() :80
void EventApp_UnoUXBinaryOperator_Left_Property__get_SupportsOriginSetter_fn(EventApp_UnoUXBinaryOperator_Left_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_UnoUXBinaryOperator_Left_Property(Uno.UX.BinaryOperator obj, Uno.UX.Selector name) [instance] :76
void EventApp_UnoUXBinaryOperator_Left_Property::ctor_2(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_UnoUXBinaryOperator_Left_Property New(Uno.UX.BinaryOperator obj, Uno.UX.Selector name) [static] :76
EventApp_UnoUXBinaryOperator_Left_Property* EventApp_UnoUXBinaryOperator_Left_Property::New1(::g::Uno::UX::BinaryOperator* obj, ::g::Uno::UX::Selector name)
{
    EventApp_UnoUXBinaryOperator_Left_Property* obj1 = (EventApp_UnoUXBinaryOperator_Left_Property*)uNew(EventApp_UnoUXBinaryOperator_Left_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
