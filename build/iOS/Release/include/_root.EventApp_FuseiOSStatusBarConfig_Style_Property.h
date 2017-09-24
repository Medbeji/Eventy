// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Platform.StatusBarStyle.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseiOSStatusBarConfig_Style_Property;}

namespace g{

// internal sealed class EventApp_FuseiOSStatusBarConfig_Style_Property :253
// {
::g::Uno::UX::Property1_type* EventApp_FuseiOSStatusBarConfig_Style_Property_typeof();
void EventApp_FuseiOSStatusBarConfig_Style_Property__ctor_2_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseiOSStatusBarConfig_Style_Property__Get_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, int* __retval);
void EventApp_FuseiOSStatusBarConfig_Style_Property__New1_fn(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector* name, EventApp_FuseiOSStatusBarConfig_Style_Property** __retval);
void EventApp_FuseiOSStatusBarConfig_Style_Property__get_Object_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseiOSStatusBarConfig_Style_Property__Set_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, int* v, uObject* origin);
void EventApp_FuseiOSStatusBarConfig_Style_Property__get_SupportsOriginSetter_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, bool* __retval);

struct EventApp_FuseiOSStatusBarConfig_Style_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::iOS::StatusBarConfig*> _obj;

    void ctor_2(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseiOSStatusBarConfig_Style_Property* New1(::g::Fuse::iOS::StatusBarConfig* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
