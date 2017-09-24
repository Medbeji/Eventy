// This file was generated based on '.uno/ux11/EventApp.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EventApp_FuseDrawingImageFill_File_Property;}

namespace g{

// internal sealed class EventApp_FuseDrawingImageFill_File_Property :1
// {
::g::Uno::UX::Property1_type* EventApp_FuseDrawingImageFill_File_Property_typeof();
void EventApp_FuseDrawingImageFill_File_Property__ctor_2_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name);
void EventApp_FuseDrawingImageFill_File_Property__Get_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::FileSource** __retval);
void EventApp_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, EventApp_FuseDrawingImageFill_File_Property** __retval);
void EventApp_FuseDrawingImageFill_File_Property__get_Object_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void EventApp_FuseDrawingImageFill_File_Property__Set_fn(EventApp_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::FileSource* v, uObject* origin);
void EventApp_FuseDrawingImageFill_File_Property__get_SupportsOriginSetter_fn(EventApp_FuseDrawingImageFill_File_Property* __this, bool* __retval);

struct EventApp_FuseDrawingImageFill_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::ImageFill*> _obj;

    void ctor_2(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
    static EventApp_FuseDrawingImageFill_File_Property* New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
