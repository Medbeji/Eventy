// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseControlsTextControl_FontSize_Property.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseControlsTextControl_FontSize_Property :154
// {
static void EventApp_FuseControlsTextControl_FontSize_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::EventApp_FuseControlsTextControl_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseControlsTextControl_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseControlsTextControl_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseControlsTextControl_FontSize_Property", options);
    type->fp_build_ = EventApp_FuseControlsTextControl_FontSize_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseControlsTextControl_FontSize_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsTextControl_FontSize_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseControlsTextControl_FontSize_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseControlsTextControl_FontSize_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :157
void EventApp_FuseControlsTextControl_FontSize_Property__ctor_2_fn(EventApp_FuseControlsTextControl_FontSize_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :159
void EventApp_FuseControlsTextControl_FontSize_Property__Get_fn(EventApp_FuseControlsTextControl_FontSize_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->FontSize(), void();
}

// public EventApp_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :157
void EventApp_FuseControlsTextControl_FontSize_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsTextControl_FontSize_Property** __retval)
{
    *__retval = EventApp_FuseControlsTextControl_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :158
void EventApp_FuseControlsTextControl_FontSize_Property__get_Object_fn(EventApp_FuseControlsTextControl_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :160
void EventApp_FuseControlsTextControl_FontSize_Property__Set_fn(EventApp_FuseControlsTextControl_FontSize_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->FontSize(v_);
}

// public override sealed bool get_SupportsOriginSetter() :161
void EventApp_FuseControlsTextControl_FontSize_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsTextControl_FontSize_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :157
void EventApp_FuseControlsTextControl_FontSize_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseControlsTextControl_FontSize_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :157
EventApp_FuseControlsTextControl_FontSize_Property* EventApp_FuseControlsTextControl_FontSize_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseControlsTextControl_FontSize_Property* obj1 = (EventApp_FuseControlsTextControl_FontSize_Property*)uNew(EventApp_FuseControlsTextControl_FontSize_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
