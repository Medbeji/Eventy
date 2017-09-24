// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Drawing/0.46.1/brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class GradientStop :13
// {
uType* GradientStop_typeof();
void GradientStop__ctor_1_fn(GradientStop* __this);
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval);
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value);
void GradientStop__New2_fn(GradientStop** __retval);
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval);
void GradientStop__set_Offset_fn(GradientStop* __this, float* value);

struct GradientStop : ::g::Uno::UX::PropertyObject
{
    ::g::Uno::Float4 _color;
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return GradientStop_typeof()->Init(), _colorName_; }
    float _offset;
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return GradientStop_typeof()->Init(), _offsetName_; }

    void ctor_1();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float Offset();
    void Offset(float value);
    static GradientStop* New2();
};
// }

}}} // ::g::Fuse::Drawing
