// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct EllipticalShape;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class EllipticalShape :870
// {
::g::Fuse::Controls::Shape_type* EllipticalShape_typeof();
void EllipticalShape__ctor_7_fn(EllipticalShape* __this);
void EllipticalShape__CreateEllipticalPath_fn(EllipticalShape* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Uno::Float2* center, ::g::Uno::Float2* radius, bool* drawArc, ::g::Fuse::Drawing::SurfacePath** __retval);
void EllipticalShape__get_EffectiveEndAngle_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__get_EffectiveEndAngleDegrees_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__get_EndAngle_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_EndAngle_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_EndAngleDegrees_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_EndAngleDegrees_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_LengthAngle_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_LengthAngle_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_LengthAngleDegrees_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_LengthAngleDegrees_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_StartAngle_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_StartAngle_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_StartAngleDegrees_fn(EllipticalShape* __this, float* __retval);
void EllipticalShape__set_StartAngleDegrees_fn(EllipticalShape* __this, float* value);
void EllipticalShape__get_UseAngle_fn(EllipticalShape* __this, bool* __retval);

struct EllipticalShape : ::g::Fuse::Controls::Shape
{
    float _endAngle;
    bool _hasAngle;
    bool _hasLengthAngle;
    float _lengthAngle;
    float _startAngle;
    static ::g::Uno::UX::Selector EndAngleName_;
    static ::g::Uno::UX::Selector& EndAngleName() { return EllipticalShape_typeof()->Init(), EndAngleName_; }
    static ::g::Uno::UX::Selector LengthAngleName_;
    static ::g::Uno::UX::Selector& LengthAngleName() { return EllipticalShape_typeof()->Init(), LengthAngleName_; }
    static ::g::Uno::UX::Selector StartAngleName_;
    static ::g::Uno::UX::Selector& StartAngleName() { return EllipticalShape_typeof()->Init(), StartAngleName_; }

    void ctor_7();
    ::g::Fuse::Drawing::SurfacePath* CreateEllipticalPath(::g::Fuse::Drawing::Surface* surface, ::g::Uno::Float2 center, ::g::Uno::Float2 radius, bool drawArc);
    float EffectiveEndAngle();
    float EffectiveEndAngleDegrees();
    float EndAngle();
    void EndAngle(float value);
    float EndAngleDegrees();
    void EndAngleDegrees(float value);
    float LengthAngle();
    void LengthAngle(float value);
    float LengthAngleDegrees();
    void LengthAngleDegrees(float value);
    float StartAngle();
    void StartAngle(float value);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    bool UseAngle();
};
// }

}}} // ::g::Fuse::Controls
