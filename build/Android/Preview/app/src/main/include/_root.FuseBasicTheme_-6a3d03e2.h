// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/0.47.7/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseControlsTextControl_TextColor_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsTextControl_TextColor_Property :784
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextControl_TextColor_Property_typeof();
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextControl_TextColor_Property** __retval);
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct FuseBasicTheme_FuseControlsTextControl_TextColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseControlsTextControl_TextColor_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
