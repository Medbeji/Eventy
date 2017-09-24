// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.BasicTheme/0.46.1/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseElementsElement_Height_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :798
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Height_Property_typeof();
void FuseBasicTheme_FuseElementsElement_Height_Property__ctor_2_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseElementsElement_Height_Property__Get_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Height_Property** __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__Set_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin);
void FuseBasicTheme_FuseElementsElement_Height_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseElementsElement_Height_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseElementsElement_Height_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
