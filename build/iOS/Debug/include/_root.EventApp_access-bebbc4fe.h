// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_accessor_ExploreItem_ForegroundColor;}

namespace g{

// internal sealed class EventApp_accessor_ExploreItem_ForegroundColor :31
// {
::g::Uno::UX::PropertyAccessor_type* EventApp_accessor_ExploreItem_ForegroundColor_typeof();
void EventApp_accessor_ExploreItem_ForegroundColor__ctor_1_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this);
void EventApp_accessor_ExploreItem_ForegroundColor__GetAsObject_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void EventApp_accessor_ExploreItem_ForegroundColor__get_Name_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::Selector* __retval);
void EventApp_accessor_ExploreItem_ForegroundColor__New1_fn(EventApp_accessor_ExploreItem_ForegroundColor** __retval);
void EventApp_accessor_ExploreItem_ForegroundColor__get_PropertyType_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, uType** __retval);
void EventApp_accessor_ExploreItem_ForegroundColor__SetAsObject_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void EventApp_accessor_ExploreItem_ForegroundColor__get_SupportsOriginSetter_fn(EventApp_accessor_ExploreItem_ForegroundColor* __this, bool* __retval);

struct EventApp_accessor_ExploreItem_ForegroundColor : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return EventApp_accessor_ExploreItem_ForegroundColor_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return EventApp_accessor_ExploreItem_ForegroundColor_typeof()->Init(), Singleton_; }

    void ctor_1();
    static EventApp_accessor_ExploreItem_ForegroundColor* New1();
};
// }

} // ::g
