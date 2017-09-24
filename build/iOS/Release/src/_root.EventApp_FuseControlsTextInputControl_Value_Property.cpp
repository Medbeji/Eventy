// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseControlsTextInputControl_Value_Property.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseControlsTextInputControl_Value_Property :136
// {
static void EventApp_FuseControlsTextInputControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextInputControl_typeof(), offsetof(::g::EventApp_FuseControlsTextInputControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseControlsTextInputControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseControlsTextInputControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseControlsTextInputControl_Value_Property", options);
    type->fp_build_ = EventApp_FuseControlsTextInputControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseControlsTextInputControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsTextInputControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseControlsTextInputControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :139
void EventApp_FuseControlsTextInputControl_Value_Property__ctor_2_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :141
void EventApp_FuseControlsTextInputControl_Value_Property__Get_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public EventApp_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :139
void EventApp_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsTextInputControl_Value_Property** __retval)
{
    *__retval = EventApp_FuseControlsTextInputControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :140
void EventApp_FuseControlsTextInputControl_Value_Property__get_Object_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :142
void EventApp_FuseControlsTextInputControl_Value_Property__Set_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :143
void EventApp_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :139
void EventApp_FuseControlsTextInputControl_Value_Property::ctor_2(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :139
EventApp_FuseControlsTextInputControl_Value_Property* EventApp_FuseControlsTextInputControl_Value_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseControlsTextInputControl_Value_Property* obj1 = (EventApp_FuseControlsTextInputControl_Value_Property*)uNew(EventApp_FuseControlsTextInputControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
