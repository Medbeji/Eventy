// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.BasicTheme/0.46.1/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property :789
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof();
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__ctor_2_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property** __retval);
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, bool* __retval);

struct FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInputControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
