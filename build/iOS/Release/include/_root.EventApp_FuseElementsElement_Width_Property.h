// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseElementsElement_Width_Property;}

namespace g{

// internal sealed class EventApp_FuseElementsElement_Width_Property :235
// {
::g::Uno::UX::Property1_type* EventApp_FuseElementsElement_Width_Property_typeof();
void EventApp_FuseElementsElement_Width_Property__ctor_2_fn(EventApp_FuseElementsElement_Width_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseElementsElement_Width_Property__Get_fn(EventApp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::Size* __retval);
void EventApp_FuseElementsElement_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, EventApp_FuseElementsElement_Width_Property** __retval);
void EventApp_FuseElementsElement_Width_Property__get_Object_fn(EventApp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseElementsElement_Width_Property__Set_fn(EventApp_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin);
void EventApp_FuseElementsElement_Width_Property__get_SupportsOriginSetter_fn(EventApp_FuseElementsElement_Width_Property* __this, bool* __retval);

struct EventApp_FuseElementsElement_Width_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseElementsElement_Width_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
