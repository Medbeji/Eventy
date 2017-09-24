// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/EventApp.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseCo-f281e402.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class EventApp_FuseControlsImage_File_Property :84
// {
static void EventApp_FuseControlsImage_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(::g::EventApp_FuseControlsImage_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseControlsImage_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseControlsImage_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseControlsImage_File_Property", options);
    type->fp_build_ = EventApp_FuseControlsImage_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))EventApp_FuseControlsImage_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseControlsImage_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))EventApp_FuseControlsImage_File_Property__Set1_fn;
    return type;
}

// public EventApp_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :87
void EventApp_FuseControlsImage_File_Property__ctor_3_fn(EventApp_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :89
void EventApp_FuseControlsImage_File_Property__Get1_fn(EventApp_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(), void();
}

// public EventApp_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :87
void EventApp_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, EventApp_FuseControlsImage_File_Property** __retval)
{
    *__retval = EventApp_FuseControlsImage_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :88
void EventApp_FuseControlsImage_File_Property__get_Object_fn(EventApp_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :90
void EventApp_FuseControlsImage_File_Property__Set1_fn(EventApp_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(v);
}

// public EventApp_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :87
void EventApp_FuseControlsImage_File_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public EventApp_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :87
EventApp_FuseControlsImage_File_Property* EventApp_FuseControlsImage_File_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseControlsImage_File_Property* obj1 = (EventApp_FuseControlsImage_File_Property*)uNew(EventApp_FuseControlsImage_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
