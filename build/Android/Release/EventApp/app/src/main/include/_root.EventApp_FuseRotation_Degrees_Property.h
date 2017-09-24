// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseRotation_Degrees_Property;}

namespace g{

// internal sealed class EventApp_FuseRotation_Degrees_Property :226
// {
::g::Uno::UX::Property1_type* EventApp_FuseRotation_Degrees_Property_typeof();
void EventApp_FuseRotation_Degrees_Property__ctor_2_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseRotation_Degrees_Property__Get_fn(EventApp_FuseRotation_Degrees_Property* __this, float* __retval);
void EventApp_FuseRotation_Degrees_Property__New1_fn(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseRotation_Degrees_Property** __retval);
void EventApp_FuseRotation_Degrees_Property__get_Object_fn(EventApp_FuseRotation_Degrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseRotation_Degrees_Property__Set_fn(EventApp_FuseRotation_Degrees_Property* __this, float* v, uObject* origin);
void EventApp_FuseRotation_Degrees_Property__get_SupportsOriginSetter_fn(EventApp_FuseRotation_Degrees_Property* __this, bool* __retval);

struct EventApp_FuseRotation_Degrees_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Rotation*> _obj;

    void ctor_2(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseRotation_Degrees_Property* New1(::g::Fuse::Rotation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
