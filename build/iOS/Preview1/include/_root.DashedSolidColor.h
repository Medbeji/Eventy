// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DashedSolidColor;}

namespace g{

// public sealed class DashedSolidColor :955
// {
::g::Fuse::Drawing::Brush_type* DashedSolidColor_typeof();
void DashedSolidColor__ctor_3_fn(DashedSolidColor* __this);
void DashedSolidColor__ctor_4_fn(DashedSolidColor* __this, ::g::Uno::Float4* color);
void DashedSolidColor__get_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* __retval);
void DashedSolidColor__set_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* value);
void DashedSolidColor__get_DashSize_fn(DashedSolidColor* __this, float* __retval);
void DashedSolidColor__set_DashSize_fn(DashedSolidColor* __this, float* value);
void DashedSolidColor__get_IsCompletelyTransparent_fn(DashedSolidColor* __this, bool* __retval);
void DashedSolidColor__New2_fn(DashedSolidColor** __retval);
void DashedSolidColor__New3_fn(::g::Uno::Float4* color, DashedSolidColor** __retval);
void DashedSolidColor__SetColor1_fn(DashedSolidColor* __this, ::g::Uno::Float4* c, uObject* origin);

struct DashedSolidColor : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return DashedSolidColor_typeof()->Init(), _colorName_; }
    float _dashSize;
    static ::g::Uno::UX::Selector _dashSizeName_;
    static ::g::Uno::UX::Selector& _dashSizeName() { return DashedSolidColor_typeof()->Init(), _dashSizeName_; }

    void ctor_3();
    void ctor_4(::g::Uno::Float4 color);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float DashSize();
    void DashSize(float value);
    void SetColor1(::g::Uno::Float4 c, uObject* origin);
    static DashedSolidColor* New2();
    static DashedSolidColor* New3(::g::Uno::Float4 color);
};
// }

} // ::g
