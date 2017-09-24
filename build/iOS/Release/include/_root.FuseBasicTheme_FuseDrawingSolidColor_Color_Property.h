// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.BasicTheme/0.46.1/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseDrawingSolidColor_Color_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :708
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof();
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingSolidColor_Color_Property** __retval);
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseDrawingSolidColor_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::SolidColor*> _obj;

    void ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseDrawingSolidColor_Color_Property* New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
