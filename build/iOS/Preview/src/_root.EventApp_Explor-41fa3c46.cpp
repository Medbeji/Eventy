// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_Explor-41fa3c46.h>
#include <_root.ExploreItem.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_ExploreItem_ImageName_Property :177
// {
static void EventApp_ExploreItem_ImageName_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ExploreItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ExploreItem*/], offsetof(::g::EventApp_ExploreItem_ImageName_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_ExploreItem_ImageName_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_ExploreItem_ImageName_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_ExploreItem_ImageName_Property", options);
    type->fp_build_ = EventApp_ExploreItem_ImageName_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_ExploreItem_ImageName_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_ExploreItem_ImageName_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_ExploreItem_ImageName_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_ExploreItem_ImageName_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_ExploreItem_ImageName_Property(ExploreItem obj, Uno.UX.Selector name) :180
void EventApp_ExploreItem_ImageName_Property__ctor_3_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :182
void EventApp_ExploreItem_ImageName_Property__Get1_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("EventApp_ExploreItem_ImageName_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->ImageName(), void();
}

// public EventApp_ExploreItem_ImageName_Property New(ExploreItem obj, Uno.UX.Selector name) :180
void EventApp_ExploreItem_ImageName_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, EventApp_ExploreItem_ImageName_Property** __retval)
{
    *__retval = EventApp_ExploreItem_ImageName_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :181
void EventApp_ExploreItem_ImageName_Property__get_Object_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :183
void EventApp_ExploreItem_ImageName_Property__Set1_fn(EventApp_ExploreItem_ImageName_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("EventApp_ExploreItem_ImageName_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetImageName(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :184
void EventApp_ExploreItem_ImageName_Property__get_SupportsOriginSetter_fn(EventApp_ExploreItem_ImageName_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public EventApp_ExploreItem_ImageName_Property(ExploreItem obj, Uno.UX.Selector name) [instance] :180
void EventApp_ExploreItem_ImageName_Property::ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_ExploreItem_ImageName_Property New(ExploreItem obj, Uno.UX.Selector name) [static] :180
EventApp_ExploreItem_ImageName_Property* EventApp_ExploreItem_ImageName_Property::New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name)
{
    EventApp_ExploreItem_ImageName_Property* obj1 = (EventApp_ExploreItem_ImageName_Property*)uNew(EventApp_ExploreItem_ImageName_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
