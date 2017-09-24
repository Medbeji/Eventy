// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-c711eeba.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseControlsTextInputControl_Value_Property :254
// {
static void EventApp_FuseControlsTextInputControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextInputControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextInputControl*/], offsetof(::g::EventApp_FuseControlsTextInputControl_Value_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseControlsTextInputControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsTextInputControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseControlsTextInputControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :257
void EventApp_FuseControlsTextInputControl_Value_Property__ctor_3_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :259
void EventApp_FuseControlsTextInputControl_Value_Property__Get1_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("EventApp_FuseControlsTextInputControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[0/*Fuse.Controls.TextInputControl*/]))->Value(), void();
}

// public EventApp_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :257
void EventApp_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsTextInputControl_Value_Property** __retval)
{
    *__retval = EventApp_FuseControlsTextInputControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :258
void EventApp_FuseControlsTextInputControl_Value_Property__get_Object_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :260
void EventApp_FuseControlsTextInputControl_Value_Property__Set1_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseControlsTextInputControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[0/*Fuse.Controls.TextInputControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :261
void EventApp_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsTextInputControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :257
void EventApp_FuseControlsTextInputControl_Value_Property::ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :257
EventApp_FuseControlsTextInputControl_Value_Property* EventApp_FuseControlsTextInputControl_Value_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseControlsTextInputControl_Value_Property* obj1 = (EventApp_FuseControlsTextInputControl_Value_Property*)uNew(EventApp_FuseControlsTextInputControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
