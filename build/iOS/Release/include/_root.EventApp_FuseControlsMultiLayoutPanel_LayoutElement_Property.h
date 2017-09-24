// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property;}

namespace g{

// internal sealed class EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property :244
// {
::g::Uno::UX::Property1_type* EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property_typeof();
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__ctor_2_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element** __retval);
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__New1_fn(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property** __retval);
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element* v, uObject* origin);
void EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_SupportsOriginSetter_fn(EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, bool* __retval);

struct EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::MultiLayoutPanel*> _obj;

    void ctor_2(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property* New1(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
