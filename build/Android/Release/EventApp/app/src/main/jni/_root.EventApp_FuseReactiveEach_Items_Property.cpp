// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseReactiveEach_Items_Property.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseReactiveEach_Items_Property :46
// {
static void EventApp_FuseReactiveEach_Items_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::EventApp_FuseReactiveEach_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseReactiveEach_Items_Property", options);
    type->fp_build_ = EventApp_FuseReactiveEach_Items_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseReactiveEach_Items_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseReactiveEach_Items_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseReactiveEach_Items_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :49
void EventApp_FuseReactiveEach_Items_Property__ctor_2_fn(EventApp_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed object Get() :51
void EventApp_FuseReactiveEach_Items_Property__Get_fn(EventApp_FuseReactiveEach_Items_Property* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->_obj)->Items(), void();
}

// public EventApp_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :49
void EventApp_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, EventApp_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = EventApp_FuseReactiveEach_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void EventApp_FuseReactiveEach_Items_Property__get_Object_fn(EventApp_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(object v, Uno.UX.IPropertyListener origin) :52
void EventApp_FuseReactiveEach_Items_Property__Set_fn(EventApp_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin)
{
    uPtr(__this->_obj)->Items(v);
}

// public override sealed bool get_SupportsOriginSetter() :53
void EventApp_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(EventApp_FuseReactiveEach_Items_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :49
void EventApp_FuseReactiveEach_Items_Property::ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :49
EventApp_FuseReactiveEach_Items_Property* EventApp_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseReactiveEach_Items_Property* obj1 = (EventApp_FuseReactiveEach_Items_Property*)uNew(EventApp_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
