// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_accessor_ExploreItem_InDetailsMode;}

namespace g{

// internal sealed class EventApp_accessor_ExploreItem_InDetailsMode :41
// {
::g::Uno::UX::PropertyAccessor_type* EventApp_accessor_ExploreItem_InDetailsMode_typeof();
void EventApp_accessor_ExploreItem_InDetailsMode__ctor_1_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this);
void EventApp_accessor_ExploreItem_InDetailsMode__GetAsObject_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void EventApp_accessor_ExploreItem_InDetailsMode__get_Name_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::Selector* __retval);
void EventApp_accessor_ExploreItem_InDetailsMode__New1_fn(EventApp_accessor_ExploreItem_InDetailsMode** __retval);
void EventApp_accessor_ExploreItem_InDetailsMode__get_PropertyType_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, uType** __retval);
void EventApp_accessor_ExploreItem_InDetailsMode__SetAsObject_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void EventApp_accessor_ExploreItem_InDetailsMode__get_SupportsOriginSetter_fn(EventApp_accessor_ExploreItem_InDetailsMode* __this, bool* __retval);

struct EventApp_accessor_ExploreItem_InDetailsMode : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return EventApp_accessor_ExploreItem_InDetailsMode_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return EventApp_accessor_ExploreItem_InDetailsMode_typeof()->Init(), Singleton_; }

    void ctor_1();
    static EventApp_accessor_ExploreItem_InDetailsMode* New1();
};
// }

} // ::g
