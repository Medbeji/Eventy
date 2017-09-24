// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseDr-fe97e020.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseDrawingSolidColor_Color_Property :151
// {
static void EventApp_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.SolidColor*/], offsetof(::g::EventApp_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = EventApp_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :154
void EventApp_FuseDrawingSolidColor_Color_Property__ctor_3_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :156
void EventApp_FuseDrawingSolidColor_Color_Property__Get1_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("EventApp_FuseDrawingSolidColor_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[0/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public EventApp_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :154
void EventApp_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, EventApp_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = EventApp_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :155
void EventApp_FuseDrawingSolidColor_Color_Property__get_Object_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :157
void EventApp_FuseDrawingSolidColor_Color_Property__Set1_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseDrawingSolidColor_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[0/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :158
void EventApp_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :154
void EventApp_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :154
EventApp_FuseDrawingSolidColor_Color_Property* EventApp_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseDrawingSolidColor_Color_Property* obj1 = (EventApp_FuseDrawingSolidColor_Color_Property*)uNew(EventApp_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
