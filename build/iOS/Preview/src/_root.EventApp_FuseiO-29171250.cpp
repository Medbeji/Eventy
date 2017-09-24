// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseiO-29171250.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseiOSStatusBarConfig_Style_Property :271
// {
static void EventApp_FuseiOSStatusBarConfig_Style_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.iOS.StatusBarConfig*/], offsetof(::g::EventApp_FuseiOSStatusBarConfig_Style_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseiOSStatusBarConfig_Style_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseiOSStatusBarConfig_Style_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseiOSStatusBarConfig_Style_Property", options);
    type->fp_build_ = EventApp_FuseiOSStatusBarConfig_Style_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseiOSStatusBarConfig_Style_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseiOSStatusBarConfig_Style_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseiOSStatusBarConfig_Style_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Platform.StatusBarStyle Get(Uno.UX.PropertyObject obj) :276
void EventApp_FuseiOSStatusBarConfig_Style_Property__Get1_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    uStackFrame __("EventApp_FuseiOSStatusBarConfig_Style_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::iOS::StatusBarConfig*>(obj, ::TYPES[0/*Fuse.iOS.StatusBarConfig*/]))->Style(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :275
void EventApp_FuseiOSStatusBarConfig_Style_Property__get_Object_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Platform.StatusBarStyle v, Uno.UX.IPropertyListener origin) :277
void EventApp_FuseiOSStatusBarConfig_Style_Property__Set1_fn(EventApp_FuseiOSStatusBarConfig_Style_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    uStackFrame __("EventApp_FuseiOSStatusBarConfig_Style_Property", "Set(Uno.UX.PropertyObject,Fuse.Platform.StatusBarStyle,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::iOS::StatusBarConfig*>(obj, ::TYPES[0/*Fuse.iOS.StatusBarConfig*/]))->Style(v_);
}
// }

} // ::g
