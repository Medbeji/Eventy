// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseVisual_IsEnabled_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseVisual_IsEnabled_Property :801
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseVisual_IsEnabled_Property_typeof();
void FuseBasicTheme_FuseVisual_IsEnabled_Property__ctor_3_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FuseBasicTheme_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseVisual_IsEnabled_Property** __retval);
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct FuseBasicTheme_FuseVisual_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseVisual_IsEnabled_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
