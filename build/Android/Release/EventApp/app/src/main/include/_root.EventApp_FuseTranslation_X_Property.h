// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseTranslation_X_Property;}

namespace g{

// internal sealed class EventApp_FuseTranslation_X_Property :217
// {
::g::Uno::UX::Property1_type* EventApp_FuseTranslation_X_Property_typeof();
void EventApp_FuseTranslation_X_Property__ctor_2_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseTranslation_X_Property__Get_fn(EventApp_FuseTranslation_X_Property* __this, float* __retval);
void EventApp_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseTranslation_X_Property** __retval);
void EventApp_FuseTranslation_X_Property__get_Object_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseTranslation_X_Property__Set_fn(EventApp_FuseTranslation_X_Property* __this, float* v, uObject* origin);
void EventApp_FuseTranslation_X_Property__get_SupportsOriginSetter_fn(EventApp_FuseTranslation_X_Property* __this, bool* __retval);

struct EventApp_FuseTranslation_X_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Translation*> _obj;

    void ctor_2(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseTranslation_X_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
