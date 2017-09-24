// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Alignment.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_ExploreItem_CardAlignment_Property;}
namespace g{struct ExploreItem;}

namespace g{

// internal sealed class EventApp_ExploreItem_CardAlignment_Property :204
// {
::g::Uno::UX::Property1_type* EventApp_ExploreItem_CardAlignment_Property_typeof();
void EventApp_ExploreItem_CardAlignment_Property__ctor_3_fn(EventApp_ExploreItem_CardAlignment_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name);
void EventApp_ExploreItem_CardAlignment_Property__Get1_fn(EventApp_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void EventApp_ExploreItem_CardAlignment_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, EventApp_ExploreItem_CardAlignment_Property** __retval);
void EventApp_ExploreItem_CardAlignment_Property__get_Object_fn(EventApp_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_ExploreItem_CardAlignment_Property__Set1_fn(EventApp_ExploreItem_CardAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);
void EventApp_ExploreItem_CardAlignment_Property__get_SupportsOriginSetter_fn(EventApp_ExploreItem_CardAlignment_Property* __this, bool* __retval);

struct EventApp_ExploreItem_CardAlignment_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ExploreItem*> _obj;

    void ctor_3(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
    static EventApp_ExploreItem_CardAlignment_Property* New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
