// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_access-c2a9c2a6.h>
#include <_root.ExploreItem.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class EventApp_accessor_ExploreItem_InDetailsMode :41
// {
// static EventApp_accessor_ExploreItem_InDetailsMode() :41
static void EventApp_accessor_ExploreItem_InDetailsMode__cctor__fn(uType* __type)
{
    EventApp_accessor_ExploreItem_InDetailsMode::Singleton_ = EventApp_accessor_ExploreItem_InDetailsMode::New1();
    EventApp_accessor_ExploreItem_InDetailsMode::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"InDetailsMode"*/]);
}

static void EventApp_accessor_ExploreItem_InDetailsMode_build(uType* type)
{
    ::STRINGS[0] = uString::Const("InDetailsMode");
    ::TYPES[0] = ::g::ExploreItem_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_InDetailsMode::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::EventApp_accessor_ExploreItem_InDetailsMode::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* EventApp_accessor_ExploreItem_InDetailsMode_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_accessor_ExploreItem_InDetailsMode);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("EventApp_accessor_ExploreItem_InDetailsMode", options);
    type->fp_build_ = EventApp_accessor_ExploreItem_InDetailsMode_build;
    type->fp_ctor_ = (void*)EventApp_accessor_ExploreItem_InDetailsMode__New1_fn;
    type->fp_cctor_ = EventApp_accessor_ExploreItem_InDetailsMode__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))EventApp_accessor_ExploreItem_InDetailsMode__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))EventApp_accessor_ExploreItem_InDetailsMode__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))EventApp_accessor_ExploreItem_InDetailsMode__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))EventApp_accessor_ExploreItem_InDetailsMode__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))EventApp_accessor_ExploreItem_InDetailsMode__get_SupportsOriginSetter_fn;
    return type;
}

// public generated EventApp_accessor_ExploreItem_InDetailsMode() :41
void EventApp_accessor_ExploreItem_InDetailsMode__ctor_1_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void EventApp_accessor_ExploreItem_InDetailsMode__GetAsObject_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("EventApp_accessor_ExploreItem_InDetailsMode", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->InDetailsMode()), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void EventApp_accessor_ExploreItem_InDetailsMode__get_Name_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = EventApp_accessor_ExploreItem_InDetailsMode::_name(), void();
}

// public generated EventApp_accessor_ExploreItem_InDetailsMode New() :41
void EventApp_accessor_ExploreItem_InDetailsMode__New1_fn(EventApp_accessor_ExploreItem_InDetailsMode** __retval)
{
    *__retval = EventApp_accessor_ExploreItem_InDetailsMode::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void EventApp_accessor_ExploreItem_InDetailsMode__get_PropertyType_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void EventApp_accessor_ExploreItem_InDetailsMode__SetAsObject_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("EventApp_accessor_ExploreItem_InDetailsMode", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ExploreItem*>(obj, ::TYPES[0/*ExploreItem*/]))->SetInDetailsMode(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void EventApp_accessor_ExploreItem_InDetailsMode__get_SupportsOriginSetter_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector EventApp_accessor_ExploreItem_InDetailsMode::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> EventApp_accessor_ExploreItem_InDetailsMode::Singleton_;

// public generated EventApp_accessor_ExploreItem_InDetailsMode() [instance] :41
void EventApp_accessor_ExploreItem_InDetailsMode::ctor_1()
{
    ctor_();
}

// public generated EventApp_accessor_ExploreItem_InDetailsMode New() [static] :41
EventApp_accessor_ExploreItem_InDetailsMode* EventApp_accessor_ExploreItem_InDetailsMode::New1()
{
    EventApp_accessor_ExploreItem_InDetailsMode* obj1 = (EventApp_accessor_ExploreItem_InDetailsMode*)uNew(EventApp_accessor_ExploreItem_InDetailsMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
