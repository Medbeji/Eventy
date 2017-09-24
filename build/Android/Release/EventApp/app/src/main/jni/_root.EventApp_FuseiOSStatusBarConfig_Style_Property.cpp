// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseiOSStatusBarConfig_Style_Property.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseiOSStatusBarConfig_Style_Property :253
// {
static void EventApp_FuseiOSStatusBarConfig_Style_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::EventApp_FuseiOSStatusBarConfig_Style_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseiOSStatusBarConfig_Style_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseiOSStatusBarConfig_Style_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseiOSStatusBarConfig_Style_Property", options);
    type->fp_build_ = EventApp_FuseiOSStatusBarConfig_Style_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseiOSStatusBarConfig_Style_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseiOSStatusBarConfig_Style_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseiOSStatusBarConfig_Style_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseiOSStatusBarConfig_Style_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) :256
void EventApp_FuseiOSStatusBarConfig_Style_Property__ctor_2_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Platform.StatusBarStyle Get() :258
void EventApp_FuseiOSStatusBarConfig_Style_Property__Get_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, int* __retval)
{
    return *__retval = uPtr(__this->_obj)->Style(), void();
}

// public EventApp_FuseiOSStatusBarConfig_Style_Property New(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) :256
void EventApp_FuseiOSStatusBarConfig_Style_Property__New1_fn(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name, EventApp_FuseiOSStatusBarConfig_Style_Property** __retval)
{
    *__retval = EventApp_FuseiOSStatusBarConfig_Style_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :257
void EventApp_FuseiOSStatusBarConfig_Style_Property__get_Object_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Platform.StatusBarStyle v, Uno.UX.IPropertyListener origin) :259
void EventApp_FuseiOSStatusBarConfig_Style_Property__Set_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, int* v, uObject* origin)
{
    int v_ = *v;
    uPtr(__this->_obj)->Style(v_);
}

// public override sealed bool get_SupportsOriginSetter() :260
void EventApp_FuseiOSStatusBarConfig_Style_Property__get_SupportsOriginSetter_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) [instance] :256
void EventApp_FuseiOSStatusBarConfig_Style_Property::ctor_2(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseiOSStatusBarConfig_Style_Property New(Fuse.iOS.StatusBarConfig obj, Uno.UX.Selector name) [static] :256
EventApp_FuseiOSStatusBarConfig_Style_Property* EventApp_FuseiOSStatusBarConfig_Style_Property::New1(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseiOSStatusBarConfig_Style_Property* obj1 = (EventApp_FuseiOSStatusBarConfig_Style_Property*)uNew(EventApp_FuseiOSStatusBarConfig_Style_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
