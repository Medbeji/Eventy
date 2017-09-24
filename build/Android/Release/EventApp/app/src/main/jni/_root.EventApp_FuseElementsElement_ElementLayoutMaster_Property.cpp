// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseElementsElement_ElementLayoutMaster_Property :163
// {
static void EventApp_FuseElementsElement_ElementLayoutMaster_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::EventApp_FuseElementsElement_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseElementsElement_ElementLayoutMaster_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseElementsElement_ElementLayoutMaster_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseElementsElement_ElementLayoutMaster_Property", options);
    type->fp_build_ = EventApp_FuseElementsElement_ElementLayoutMaster_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseElementsElement_ElementLayoutMaster_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseElementsElement_ElementLayoutMaster_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :166
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__ctor_2_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.Element Get() :168
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__Get_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(__this->_obj), void();
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :166
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, EventApp_FuseElementsElement_ElementLayoutMaster_Property** __retval)
{
    *__retval = EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :167
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :169
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__Set_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(__this->_obj, v);
}

// public override sealed bool get_SupportsOriginSetter() :170
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_SupportsOriginSetter_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :166
void EventApp_FuseElementsElement_ElementLayoutMaster_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :166
EventApp_FuseElementsElement_ElementLayoutMaster_Property* EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseElementsElement_ElementLayoutMaster_Property* obj1 = (EventApp_FuseElementsElement_ElementLayoutMaster_Property*)uNew(EventApp_FuseElementsElement_ElementLayoutMaster_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
