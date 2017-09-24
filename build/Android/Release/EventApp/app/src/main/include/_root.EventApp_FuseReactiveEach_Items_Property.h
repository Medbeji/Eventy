// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class EventApp_FuseReactiveEach_Items_Property :46
// {
::g::Uno::UX::Property1_type* EventApp_FuseReactiveEach_Items_Property_typeof();
void EventApp_FuseReactiveEach_Items_Property__ctor_2_fn(EventApp_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseReactiveEach_Items_Property__Get_fn(EventApp_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void EventApp_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, EventApp_FuseReactiveEach_Items_Property** __retval);
void EventApp_FuseReactiveEach_Items_Property__get_Object_fn(EventApp_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseReactiveEach_Items_Property__Set_fn(EventApp_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void EventApp_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(EventApp_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct EventApp_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
