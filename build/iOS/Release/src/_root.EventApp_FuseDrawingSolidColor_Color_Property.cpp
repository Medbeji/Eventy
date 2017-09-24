// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseDrawingSolidColor_Color_Property.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseDrawingSolidColor_Color_Property :199
// {
static void EventApp_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::EventApp_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :202
void EventApp_FuseDrawingSolidColor_Color_Property__ctor_2_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :204
void EventApp_FuseDrawingSolidColor_Color_Property__Get_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public EventApp_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :202
void EventApp_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, EventApp_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = EventApp_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :203
void EventApp_FuseDrawingSolidColor_Color_Property__get_Object_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :205
void EventApp_FuseDrawingSolidColor_Color_Property__Set_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :206
void EventApp_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(EventApp_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :202
void EventApp_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :202
EventApp_FuseDrawingSolidColor_Color_Property* EventApp_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseDrawingSolidColor_Color_Property* obj1 = (EventApp_FuseDrawingSolidColor_Color_Property*)uNew(EventApp_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
