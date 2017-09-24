// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseEl-b28ed38c.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseElementsElement_ElementLayoutMaster_Property :117
// {
static void EventApp_FuseElementsElement_ElementLayoutMaster_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(::g::EventApp_FuseElementsElement_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn;
    return type;
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :120
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Element Get(Uno.UX.PropertyObject obj) :122
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval)
{
    uStackFrame __("EventApp_FuseElementsElement_ElementLayoutMaster_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/])), void();
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :120
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, EventApp_FuseElementsElement_ElementLayoutMaster_Property** __retval)
{
    *__retval = EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :121
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :123
void EventApp_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(EventApp_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseElementsElement_ElementLayoutMaster_Property", "Set(Uno.UX.PropertyObject,Fuse.Elements.Element,Uno.UX.IPropertyListener)");
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]), v);
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :120
void EventApp_FuseElementsElement_ElementLayoutMaster_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :120
EventApp_FuseElementsElement_ElementLayoutMaster_Property* EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseElementsElement_ElementLayoutMaster_Property* obj1 = (EventApp_FuseElementsElement_ElementLayoutMaster_Property*)uNew(EventApp_FuseElementsElement_ElementLayoutMaster_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
