// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseRotation_Degrees_Property.h>
#include <Fuse.Rotation.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseRotation_Degrees_Property :226
// {
static void EventApp_FuseRotation_Degrees_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::EventApp_FuseRotation_Degrees_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseRotation_Degrees_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseRotation_Degrees_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseRotation_Degrees_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseRotation_Degrees_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseRotation_Degrees_Property(Fuse.Rotation obj, Uno.UX.Selector name) :229
void EventApp_FuseRotation_Degrees_Property__ctor_2_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :231
void EventApp_FuseRotation_Degrees_Property__Get_fn(EventApp_FuseRotation_Degrees_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Degrees(), void();
}

// public EventApp_FuseRotation_Degrees_Property New(Fuse.Rotation obj, Uno.UX.Selector name) :229
void EventApp_FuseRotation_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseRotation_Degrees_Property** __retval)
{
    *__retval = EventApp_FuseRotation_Degrees_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :230
void EventApp_FuseRotation_Degrees_Property__get_Object_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :232
void EventApp_FuseRotation_Degrees_Property__Set_fn(EventApp_FuseRotation_Degrees_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Degrees(v_);
}

// public override sealed bool get_SupportsOriginSetter() :233
void EventApp_FuseRotation_Degrees_Property__get_SupportsOriginSetter_fn(EventApp_FuseRotation_Degrees_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseRotation_Degrees_Property(Fuse.Rotation obj, Uno.UX.Selector name) [instance] :229
void EventApp_FuseRotation_Degrees_Property::ctor_2(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseRotation_Degrees_Property New(Fuse.Rotation obj, Uno.UX.Selector name) [static] :229
EventApp_FuseRotation_Degrees_Property* EventApp_FuseRotation_Degrees_Property::New1(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseRotation_Degrees_Property* obj1 = (EventApp_FuseRotation_Degrees_Property*)uNew(EventApp_FuseRotation_Degrees_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
