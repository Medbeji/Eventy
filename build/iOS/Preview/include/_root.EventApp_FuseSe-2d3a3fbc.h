// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseSelectionSelectable_Value_Property;}

namespace g{

// internal sealed class EventApp_FuseSelectionSelectable_Value_Property :213
// {
::g::Uno::UX::Property1_type* EventApp_FuseSelectionSelectable_Value_Property_typeof();
void EventApp_FuseSelectionSelectable_Value_Property__ctor_3_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseSelectionSelectable_Value_Property__Get1_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void EventApp_FuseSelectionSelectable_Value_Property__New1_fn(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector* name, EventApp_FuseSelectionSelectable_Value_Property** __retval);
void EventApp_FuseSelectionSelectable_Value_Property__get_Object_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseSelectionSelectable_Value_Property__Set1_fn(EventApp_FuseSelectionSelectable_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct EventApp_FuseSelectionSelectable_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Selection::Selectable*> _obj;

    void ctor_3(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseSelectionSelectable_Value_Property* New1(::g::Fuse::Selection::Selectable* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
