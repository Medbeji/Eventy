// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/0.47.7/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseEffectsDropShadow_Color_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :809
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof();
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__ctor_3_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseEffectsDropShadow_Color_Property** __retval);
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct FuseBasicTheme_FuseEffectsDropShadow_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Effects::DropShadow*> _obj;

    void ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseEffectsDropShadow_Color_Property* New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
