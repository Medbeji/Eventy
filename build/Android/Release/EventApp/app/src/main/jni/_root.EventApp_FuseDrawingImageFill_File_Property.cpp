// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_FuseDrawingImageFill_File_Property.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class EventApp_FuseDrawingImageFill_File_Property :1
// {
static void EventApp_FuseDrawingImageFill_File_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::ImageFill_typeof(), offsetof(::g::EventApp_FuseDrawingImageFill_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* EventApp_FuseDrawingImageFill_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EventApp_FuseDrawingImageFill_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("EventApp_FuseDrawingImageFill_File_Property", options);
    type->fp_build_ = EventApp_FuseDrawingImageFill_File_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))EventApp_FuseDrawingImageFill_File_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))EventApp_FuseDrawingImageFill_File_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))EventApp_FuseDrawingImageFill_File_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))EventApp_FuseDrawingImageFill_File_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public EventApp_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :4
void EventApp_FuseDrawingImageFill_File_Property__ctor_2_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.FileSource Get() :6
void EventApp_FuseDrawingImageFill_File_Property__Get_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(__this->_obj)->File(), void();
}

// public EventApp_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :4
void EventApp_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, EventApp_FuseDrawingImageFill_File_Property** __retval)
{
    *__retval = EventApp_FuseDrawingImageFill_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void EventApp_FuseDrawingImageFill_File_Property__get_Object_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :7
void EventApp_FuseDrawingImageFill_File_Property__Set_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(__this->_obj)->File(v);
}

// public override sealed bool get_SupportsOriginSetter() :8
void EventApp_FuseDrawingImageFill_File_Property__get_SupportsOriginSetter_fn(EventApp_FuseDrawingImageFill_File_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public EventApp_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :4
void EventApp_FuseDrawingImageFill_File_Property::ctor_2(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public EventApp_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :4
EventApp_FuseDrawingImageFill_File_Property* EventApp_FuseDrawingImageFill_File_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    EventApp_FuseDrawingImageFill_File_Property* obj1 = (EventApp_FuseDrawingImageFill_File_Property*)uNew(EventApp_FuseDrawingImageFill_File_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
