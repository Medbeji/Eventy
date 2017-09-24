// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseRo-fbdb9274.h>
#include <Fuse.Rotation.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseRotation_Degrees_Property :238
// {
static void EventApp_FuseRotation_Degrees_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Rotation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Rotation*/], offsetof(::g::EventApp_FuseRotation_Degrees_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseRotation_Degrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseRotation_Degrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseRotation_Degrees_Property", options);
    type->fp_build_ = EventApp_FuseRotation_Degrees_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseRotation_Degrees_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseRotation_Degrees_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseRotation_Degrees_Property__Set1_fn;
    return type;
}

// public EventApp_FuseRotation_Degrees_Property(Fuse.Rotation obj, Uno.UX.Selector name) :241
void EventApp_FuseRotation_Degrees_Property__ctor_3_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :243
void EventApp_FuseRotation_Degrees_Property__Get1_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("EventApp_FuseRotation_Degrees_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Rotation*>(obj, ::TYPES[0/*Fuse.Rotation*/]))->Degrees(), void();
}

// public EventApp_FuseRotation_Degrees_Property New(Fuse.Rotation obj, Uno.UX.Selector name) :241
void EventApp_FuseRotation_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseRotation_Degrees_Property** __retval)
{
    *__retval = EventApp_FuseRotation_Degrees_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :242
void EventApp_FuseRotation_Degrees_Property__get_Object_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :244
void EventApp_FuseRotation_Degrees_Property__Set1_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseRotation_Degrees_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Rotation*>(obj, ::TYPES[0/*Fuse.Rotation*/]))->Degrees(v_);
}

// public EventApp_FuseRotation_Degrees_Property(Fuse.Rotation obj, Uno.UX.Selector name) [instance] :241
void EventApp_FuseRotation_Degrees_Property::ctor_3(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseRotation_Degrees_Property New(Fuse.Rotation obj, Uno.UX.Selector name) [static] :241
EventApp_FuseRotation_Degrees_Property* EventApp_FuseRotation_Degrees_Property::New1(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseRotation_Degrees_Property* obj1 = (EventApp_FuseRotation_Degrees_Property*)uNew(EventApp_FuseRotation_Degrees_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
