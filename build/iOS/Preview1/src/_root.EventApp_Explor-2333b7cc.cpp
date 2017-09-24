// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_Explor-2333b7cc.h>
#include <_root.ExploreItem.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_ExploreItem_InDetailsMode_Property :221
// {
static void EventApp_ExploreItem_InDetailsMode_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ExploreItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ExploreItem*/], offsetof(::g::EventApp_ExploreItem_InDetailsMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_ExploreItem_InDetailsMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_ExploreItem_InDetailsMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_ExploreItem_InDetailsMode_Property", options);
    type->fp_build_ = EventApp_ExploreItem_InDetailsMode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_ExploreItem_InDetailsMode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_ExploreItem_InDetailsMode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_ExploreItem_InDetailsMode_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_ExploreItem_InDetailsMode_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_ExploreItem_InDetailsMode_Property(ExploreItem obj, Uno.UX.Selector name) :224
void EventApp_ExploreItem_InDetailsMode_Property__ctor_3_fn(EventApp_ExploreItem_InDetailsMode_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :226
void EventApp_ExploreItem_InDetailsMode_Property__Get1_fn(EventApp_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("EventApp_ExploreItem_InDetailsMode_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->InDetailsMode(), void();
}

// public EventApp_ExploreItem_InDetailsMode_Property New(ExploreItem obj, Uno.UX.Selector name) :224
void EventApp_ExploreItem_InDetailsMode_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, EventApp_ExploreItem_InDetailsMode_Property** __retval)
{
    *__retval = EventApp_ExploreItem_InDetailsMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :225
void EventApp_ExploreItem_InDetailsMode_Property__get_Object_fn(EventApp_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :227
void EventApp_ExploreItem_InDetailsMode_Property__Set1_fn(EventApp_ExploreItem_InDetailsMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("EventApp_ExploreItem_InDetailsMode_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetInDetailsMode(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :228
void EventApp_ExploreItem_InDetailsMode_Property__get_SupportsOriginSetter_fn(EventApp_ExploreItem_InDetailsMode_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_ExploreItem_InDetailsMode_Property(ExploreItem obj, Uno.UX.Selector name) [instance] :224
void EventApp_ExploreItem_InDetailsMode_Property::ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_ExploreItem_InDetailsMode_Property New(ExploreItem obj, Uno.UX.Selector name) [static] :224
EventApp_ExploreItem_InDetailsMode_Property* EventApp_ExploreItem_InDetailsMode_Property::New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    EventApp_ExploreItem_InDetailsMode_Property* obj1 = (EventApp_ExploreItem_InDetailsMode_Property*)uNew(EventApp_ExploreItem_InDetailsMode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
