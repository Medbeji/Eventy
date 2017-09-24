// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseTr-2857ddd9.h>
#include <Fuse.Translation.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseTranslation_Y_Property :134
// {
static void EventApp_FuseTranslation_Y_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Translation*/], offsetof(::g::EventApp_FuseTranslation_Y_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseTranslation_Y_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseTranslation_Y_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseTranslation_Y_Property", options);
    type->fp_build_ = EventApp_FuseTranslation_Y_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseTranslation_Y_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseTranslation_Y_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseTranslation_Y_Property__Set1_fn;
    return type;
}

// public EventApp_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) :137
void EventApp_FuseTranslation_Y_Property__ctor_3_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :139
void EventApp_FuseTranslation_Y_Property__Get1_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("EventApp_FuseTranslation_Y_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->Y(), void();
}

// public EventApp_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) :137
void EventApp_FuseTranslation_Y_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseTranslation_Y_Property** __retval)
{
    *__retval = EventApp_FuseTranslation_Y_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :138
void EventApp_FuseTranslation_Y_Property__get_Object_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :140
void EventApp_FuseTranslation_Y_Property__Set1_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseTranslation_Y_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->Y(v_);
}

// public EventApp_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) [instance] :137
void EventApp_FuseTranslation_Y_Property::ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) [static] :137
EventApp_FuseTranslation_Y_Property* EventApp_FuseTranslation_Y_Property::New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseTranslation_Y_Property* obj1 = (EventApp_FuseTranslation_Y_Property*)uNew(EventApp_FuseTranslation_Y_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
