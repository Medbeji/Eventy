// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseElementsElement_Opacity_Property :825
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Opacity_Property_typeof();
void FuseBasicTheme_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FuseBasicTheme_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Opacity_Property** __retval);
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
