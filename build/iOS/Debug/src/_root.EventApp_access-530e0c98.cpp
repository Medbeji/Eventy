// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_access-530e0c98.h>
#include <_root.ExploreItem.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class EventApp_accessor_ExploreItem_Country :21
// {
// static EventApp_accessor_ExploreItem_Country() :21
static void EventApp_accessor_ExploreItem_Country__cctor__fn(uType* __type)
{
    EventApp_accessor_ExploreItem_Country::Singleton_ = EventApp_accessor_ExploreItem_Country::New1();
    EventApp_accessor_ExploreItem_Country::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Country"*/]);
}

static void EventApp_accessor_ExploreItem_Country_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Country");
    ::TYPES[0] = ::g::ExploreItem_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_Country::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_Country::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* EventApp_accessor_ExploreItem_Country_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_accessor_ExploreItem_Country);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("EventApp_accessor_ExploreItem_Country", options);
    type->fp_build_ = EventApp_accessor_ExploreItem_Country_build;
    type->fp_ctor_ = (void*)EventApp_accessor_ExploreItem_Country__New1_fn;
    type->fp_cctor_ = EventApp_accessor_ExploreItem_Country__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))EventApp_accessor_ExploreItem_Country__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))EventApp_accessor_ExploreItem_Country__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))EventApp_accessor_ExploreItem_Country__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))EventApp_accessor_ExploreItem_Country__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_accessor_ExploreItem_Country__get_SupportsOriginSetter_fn;
    return type;
}

// public generated EventApp_accessor_ExploreItem_Country() :21
void EventApp_accessor_ExploreItem_Country__ctor_1_fn(EventApp_accessor_ExploreItem_Country* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void EventApp_accessor_ExploreItem_Country__GetAsObject_fn(EventApp_accessor_ExploreItem_Country* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->Country(), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void EventApp_accessor_ExploreItem_Country__get_Name_fn(EventApp_accessor_ExploreItem_Country* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = EventApp_accessor_ExploreItem_Country::_name(), void();
}

// public generated EventApp_accessor_ExploreItem_Country New() :21
void EventApp_accessor_ExploreItem_Country__New1_fn(EventApp_accessor_ExploreItem_Country** __retval)
{
    *__retval = EventApp_accessor_ExploreItem_Country::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void EventApp_accessor_ExploreItem_Country__get_PropertyType_fn(EventApp_accessor_ExploreItem_Country* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void EventApp_accessor_ExploreItem_Country__SetAsObject_fn(EventApp_accessor_ExploreItem_Country* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetCountry(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void EventApp_accessor_ExploreItem_Country__get_SupportsOriginSetter_fn(EventApp_accessor_ExploreItem_Country* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector EventApp_accessor_ExploreItem_Country::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> EventApp_accessor_ExploreItem_Country::Singleton_;

// public generated EventApp_accessor_ExploreItem_Country() [instance] :21
void EventApp_accessor_ExploreItem_Country::ctor_1()
{
    ctor_();
}

// public generated EventApp_accessor_ExploreItem_Country New() [static] :21
EventApp_accessor_ExploreItem_Country* EventApp_accessor_ExploreItem_Country::New1()
{
    EventApp_accessor_ExploreItem_Country* obj1 = (EventApp_accessor_ExploreItem_Country*)uNew(EventApp_accessor_ExploreItem_Country_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
