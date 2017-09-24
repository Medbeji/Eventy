// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseTranslation_Y_Property.h>
#include <Fuse.Translation.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseTranslation_Y_Property :181
// {
static void EventApp_FuseTranslation_Y_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Translation_typeof(), offsetof(::g::EventApp_FuseTranslation_Y_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseTranslation_Y_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseTranslation_Y_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseTranslation_Y_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseTranslation_Y_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) :184
void EventApp_FuseTranslation_Y_Property__ctor_2_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :186
void EventApp_FuseTranslation_Y_Property__Get_fn(EventApp_FuseTranslation_Y_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Y(), void();
}

// public EventApp_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) :184
void EventApp_FuseTranslation_Y_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseTranslation_Y_Property** __retval)
{
    *__retval = EventApp_FuseTranslation_Y_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :185
void EventApp_FuseTranslation_Y_Property__get_Object_fn(EventApp_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :187
void EventApp_FuseTranslation_Y_Property__Set_fn(EventApp_FuseTranslation_Y_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Y(v_);
}

// public override sealed bool get_SupportsOriginSetter() :188
void EventApp_FuseTranslation_Y_Property__get_SupportsOriginSetter_fn(EventApp_FuseTranslation_Y_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) [instance] :184
void EventApp_FuseTranslation_Y_Property::ctor_2(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) [static] :184
EventApp_FuseTranslation_Y_Property* EventApp_FuseTranslation_Y_Property::New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseTranslation_Y_Property* obj1 = (EventApp_FuseTranslation_Y_Property*)uNew(EventApp_FuseTranslation_Y_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
