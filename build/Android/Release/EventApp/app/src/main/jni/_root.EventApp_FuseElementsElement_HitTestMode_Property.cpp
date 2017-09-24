// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseElementsElement_HitTestMode_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseElementsElement_HitTestMode_Property :190
// {
static void EventApp_FuseElementsElement_HitTestMode_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::EventApp_FuseElementsElement_HitTestMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseElementsElement_HitTestMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseElementsElement_HitTestMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseElementsElement_HitTestMode_Property", options);
    type->fp_build_ = EventApp_FuseElementsElement_HitTestMode_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseElementsElement_HitTestMode_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseElementsElement_HitTestMode_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseElementsElement_HitTestMode_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :193
void EventApp_FuseElementsElement_HitTestMode_Property__ctor_2_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.HitTestMode Get() :195
void EventApp_FuseElementsElement_HitTestMode_Property__Get_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->HitTestMode(), void();
}

// public EventApp_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :193
void EventApp_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, EventApp_FuseElementsElement_HitTestMode_Property** __retval)
{
    *__retval = EventApp_FuseElementsElement_HitTestMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :194
void EventApp_FuseElementsElement_HitTestMode_Property__get_Object_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.HitTestMode v, Uno.UX.IPropertyListener origin) :196
void EventApp_FuseElementsElement_HitTestMode_Property__Set_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->SetHitTestMode(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :197
void EventApp_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(EventApp_FuseElementsElement_HitTestMode_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :193
void EventApp_FuseElementsElement_HitTestMode_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :193
EventApp_FuseElementsElement_HitTestMode_Property* EventApp_FuseElementsElement_HitTestMode_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseElementsElement_HitTestMode_Property* obj1 = (EventApp_FuseElementsElement_HitTestMode_Property*)uNew(EventApp_FuseElementsElement_HitTestMode_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
