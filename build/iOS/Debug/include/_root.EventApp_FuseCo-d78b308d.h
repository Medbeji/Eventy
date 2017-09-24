// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class EventApp_FuseControlsShape_Color_Property :108
// {
::g::Uno::UX::Property1_type* EventApp_FuseControlsShape_Color_Property_typeof();
void EventApp_FuseControlsShape_Color_Property__ctor_3_fn(EventApp_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseControlsShape_Color_Property__Get1_fn(EventApp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void EventApp_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsShape_Color_Property** __retval);
void EventApp_FuseControlsShape_Color_Property__get_Object_fn(EventApp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseControlsShape_Color_Property__Set1_fn(EventApp_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void EventApp_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsShape_Color_Property* __this, bool* __retval);

struct EventApp_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
