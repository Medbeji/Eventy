// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IFrustum.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PerspectiveFrustum;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public sealed class PerspectiveFrustum :3433
// {
struct PerspectiveFrustum_type : uType
{
    ::g::Fuse::IFrustum interface0;
};

PerspectiveFrustum_type* PerspectiveFrustum_typeof();
void PerspectiveFrustum__ctor__fn(PerspectiveFrustum* __this);
void PerspectiveFrustum__get_Distance_fn(PerspectiveFrustum* __this, float* __retval);
void PerspectiveFrustum__set_Distance_fn(PerspectiveFrustum* __this, float* value);
void PerspectiveFrustum__GetDepthRange_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval);
void PerspectiveFrustum__GetViewTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void PerspectiveFrustum__GetViewTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void PerspectiveFrustum__GetWorldPosition_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval);
void PerspectiveFrustum__New1_fn(PerspectiveFrustum** __retval);
void PerspectiveFrustum__TryGetProjectionTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);
void PerspectiveFrustum__TryGetProjectionTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);

struct PerspectiveFrustum : uObject
{
    float _Distance;

    void ctor_();
    float Distance();
    void Distance(float value);
    ::g::Uno::Float2 GetDepthRange(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransformInverse(uObject* viewport);
    ::g::Uno::Float3 GetWorldPosition(uObject* viewport);
    bool TryGetProjectionTransform(uObject* viewport, ::g::Uno::Float4x4* result);
    bool TryGetProjectionTransformInverse(uObject* viewport, ::g::Uno::Float4x4* result);
    static PerspectiveFrustum* New1();
};
// }

}} // ::g::Fuse
