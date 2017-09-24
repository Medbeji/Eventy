// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseControlsImage_Url_Property;}

namespace g{

// internal sealed class EventApp_FuseControlsImage_Url_Property :76
// {
::g::Uno::UX::Property1_type* EventApp_FuseControlsImage_Url_Property_typeof();
void EventApp_FuseControlsImage_Url_Property__ctor_3_fn(EventApp_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseControlsImage_Url_Property__Get1_fn(EventApp_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void EventApp_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsImage_Url_Property** __retval);
void EventApp_FuseControlsImage_Url_Property__get_Object_fn(EventApp_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseControlsImage_Url_Property__Set1_fn(EventApp_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct EventApp_FuseControlsImage_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseControlsImage_Url_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
