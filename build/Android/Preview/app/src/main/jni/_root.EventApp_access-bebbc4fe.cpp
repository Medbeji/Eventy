// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/Android/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_access-bebbc4fe.h>
#include <_root.ExploreItem.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class EventApp_accessor_ExploreItem_ForegroundColor :31
// {
// static EventApp_accessor_ExploreItem_ForegroundColor() :31
static void EventApp_accessor_ExploreItem_ForegroundColor__cctor__fn(uType* __type)
{
    EventApp_accessor_ExploreItem_ForegroundColor::Singleton_ = EventApp_accessor_ExploreItem_ForegroundColor::New1();
    EventApp_accessor_ExploreItem_ForegroundColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"ForegroundC...*/]);
}

static void EventApp_accessor_ExploreItem_ForegroundColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ForegroundColor");
    ::TYPES[0] = ::g::ExploreItem_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_ForegroundColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_ForegroundColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* EventApp_accessor_ExploreItem_ForegroundColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_accessor_ExploreItem_ForegroundColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("EventApp_accessor_ExploreItem_ForegroundColor", options);
    type->fp_build_ = EventApp_accessor_ExploreItem_ForegroundColor_build;
    type->fp_ctor_ = (void*)EventApp_accessor_ExploreItem_ForegroundColor__New1_fn;
    type->fp_cctor_ = EventApp_accessor_ExploreItem_ForegroundColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))EventApp_accessor_ExploreItem_ForegroundColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))EventApp_accessor_ExploreItem_ForegroundColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))EventApp_accessor_ExploreItem_ForegroundColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))EventApp_accessor_ExploreItem_ForegroundColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_accessor_ExploreItem_ForegroundColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated EventApp_accessor_ExploreItem_ForegroundColor() :31
void EventApp_accessor_ExploreItem_ForegroundColor__ctor_1_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void EventApp_accessor_ExploreItem_ForegroundColor__GetAsObject_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("EventApp_accessor_ExploreItem_ForegroundColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->ForegroundColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void EventApp_accessor_ExploreItem_ForegroundColor__get_Name_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = EventApp_accessor_ExploreItem_ForegroundColor::_name(), void();
}

// public generated EventApp_accessor_ExploreItem_ForegroundColor New() :31
void EventApp_accessor_ExploreItem_ForegroundColor__New1_fn(EventApp_accessor_ExploreItem_ForegroundColor** __retval)
{
    *__retval = EventApp_accessor_ExploreItem_ForegroundColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void EventApp_accessor_ExploreItem_ForegroundColor__get_PropertyType_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void EventApp_accessor_ExploreItem_ForegroundColor__SetAsObject_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("EventApp_accessor_ExploreItem_ForegroundColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetForegroundColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void EventApp_accessor_ExploreItem_ForegroundColor__get_SupportsOriginSetter_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector EventApp_accessor_ExploreItem_ForegroundColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> EventApp_accessor_ExploreItem_ForegroundColor::Singleton_;

// public generated EventApp_accessor_ExploreItem_ForegroundColor() [instance] :31
void EventApp_accessor_ExploreItem_ForegroundColor::ctor_1()
{
    ctor_();
}

// public generated EventApp_accessor_ExploreItem_ForegroundColor New() [static] :31
EventApp_accessor_ExploreItem_ForegroundColor* EventApp_accessor_ExploreItem_ForegroundColor::New1()
{
    EventApp_accessor_ExploreItem_ForegroundColor* obj1 = (EventApp_accessor_ExploreItem_ForegroundColor*)uNew(EventApp_accessor_ExploreItem_ForegroundColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
