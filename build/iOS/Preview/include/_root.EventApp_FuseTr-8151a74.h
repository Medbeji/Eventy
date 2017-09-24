// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseTranslation_X_Property;}

namespace g{

// internal sealed class EventApp_FuseTranslation_X_Property :230
// {
::g::Uno::UX::Property1_type* EventApp_FuseTranslation_X_Property_typeof();
void EventApp_FuseTranslation_X_Property__ctor_3_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseTranslation_X_Property__Get1_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void EventApp_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, EventApp_FuseTranslation_X_Property** __retval);
void EventApp_FuseTranslation_X_Property__get_Object_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseTranslation_X_Property__Set1_fn(EventApp_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct EventApp_FuseTranslation_X_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Translation*> _obj;

    void ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseTranslation_X_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
