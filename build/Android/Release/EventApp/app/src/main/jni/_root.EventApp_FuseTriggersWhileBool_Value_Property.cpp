// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseTriggersWhileBool_Value_Property :55
// {
static void EventApp_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::EventApp_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = EventApp_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :58
void EventApp_FuseTriggersWhileBool_Value_Property__ctor_2_fn(EventApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :60
void EventApp_FuseTriggersWhileBool_Value_Property__Get_fn(EventApp_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public EventApp_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :58
void EventApp_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, EventApp_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = EventApp_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void EventApp_FuseTriggersWhileBool_Value_Property__get_Object_fn(EventApp_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :61
void EventApp_FuseTriggersWhileBool_Value_Property__Set_fn(EventApp_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :62
void EventApp_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(EventApp_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :58
void EventApp_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :58
EventApp_FuseTriggersWhileBool_Value_Property* EventApp_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseTriggersWhileBool_Value_Property* obj1 = (EventApp_FuseTriggersWhileBool_Value_Property*)uNew(EventApp_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
