// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseControlsScrollViewBase_UserScroll_Property;}

namespace g{

// internal sealed class EventApp_FuseControlsScrollViewBase_UserScroll_Property :208
// {
::g::Uno::UX::Property1_type* EventApp_FuseControlsScrollViewBase_UserScroll_Property_typeof();
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__ctor_2_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__Get_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval);
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsScrollViewBase_UserScroll_Property** __retval);
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__Set_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* v, uObject* origin);
void EventApp_FuseControlsScrollViewBase_UserScroll_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval);

struct EventApp_FuseControlsScrollViewBase_UserScroll_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ScrollViewBase*> _obj;

    void ctor_2(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseControlsScrollViewBase_UserScroll_Property* New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
