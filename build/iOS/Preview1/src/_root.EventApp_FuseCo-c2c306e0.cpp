// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-c2c306e0.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property :263
// {
static void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::MultiLayoutPanel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.MultiLayoutPanel*/], offsetof(::g::EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property", options);
    type->fp_build_ = EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Elements.Element Get(Uno.UX.PropertyObject obj) :268
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get1_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval)
{
    uStackFrame __("EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::MultiLayoutPanel*>(obj, ::TYPES[0/*Fuse.Controls.MultiLayoutPanel*/]))->LayoutElement(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :267
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :269
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set1_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property", "Set(Uno.UX.PropertyObject,Fuse.Elements.Element,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::MultiLayoutPanel*>(obj, ::TYPES[0/*Fuse.Controls.MultiLayoutPanel*/]))->LayoutElement(v);
}
// }

} // ::g
