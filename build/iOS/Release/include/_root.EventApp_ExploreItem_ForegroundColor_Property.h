// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_ExploreItem_ForegroundColor_Property;}
namespace g{struct ExploreItem;}

namespace g{

// internal sealed class EventApp_ExploreItem_ForegroundColor_Property :109
// {
::g::Uno::UX::Property1_type* EventApp_ExploreItem_ForegroundColor_Property_typeof();
void EventApp_ExploreItem_ForegroundColor_Property__ctor_2_fn(EventApp_ExploreItem_ForegroundColor_Property* __this, ::g::ExploreItem* obj, ::g::Uno::UX::Selector* name);
void EventApp_ExploreItem_ForegroundColor_Property__Get_fn(EventApp_ExploreItem_ForegroundColor_Property* __this, ::g::Uno::Float4* __retval);
void EventApp_ExploreItem_ForegroundColor_Property__New1_fn(::g::ExploreItem* obj, ::g::Uno::UX::Selector* name, EventApp_ExploreItem_ForegroundColor_Property** __retval);
void EventApp_ExploreItem_ForegroundColor_Property__get_Object_fn(EventApp_ExploreItem_ForegroundColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_ExploreItem_ForegroundColor_Property__Set_fn(EventApp_ExploreItem_ForegroundColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void EventApp_ExploreItem_ForegroundColor_Property__get_SupportsOriginSetter_fn(EventApp_ExploreItem_ForegroundColor_Property* __this, bool* __retval);

struct EventApp_ExploreItem_ForegroundColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ExploreItem*> _obj;

    void ctor_2(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
    static EventApp_ExploreItem_ForegroundColor_Property* New1(::g::ExploreItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
