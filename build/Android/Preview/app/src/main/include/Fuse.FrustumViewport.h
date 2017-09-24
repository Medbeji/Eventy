// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// internal sealed class FrustumViewport :1316
// {
uType* FrustumViewport_typeof();
void FrustumViewport__ctor__fn(FrustumViewport* __this);
void FrustumViewport__GetClipToVisualSpace_fn(FrustumViewport* __this, ::g::Uno::Float2* size, ::g::Uno::Float4x4* __retval);
void FrustumViewport__GetFlatWorldToVisualTransform_fn(FrustumViewport* __this, ::g::Uno::Float2* size, ::g::Uno::Float4x4* __retval);
void FrustumViewport__New1_fn(FrustumViewport** __retval);
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum);
void FrustumViewport__Update1_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum, ::g::Fuse::Visual* where);

struct FrustumViewport : uObject
{
    ::g::Uno::Float4x4 LocalViewProjectionTransform;
    ::g::Uno::Float4x4 ProjectionTransform;
    ::g::Uno::Float4x4 ProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewProjectionTransform;
    ::g::Uno::Float4x4 ViewProjectionTransformInverse;
    ::g::Uno::Float4x4 ViewTransform;
    ::g::Uno::Float4x4 ViewTransformInverse;

    void ctor_();
    ::g::Uno::Float4x4 GetClipToVisualSpace(::g::Uno::Float2 size);
    ::g::Uno::Float4x4 GetFlatWorldToVisualTransform(::g::Uno::Float2 size);
    void Update(uObject* viewport, uObject* frustum);
    void Update1(uObject* viewport, uObject* frustum, ::g::Fuse::Visual* where);
    static FrustumViewport* New1();
};
// }

}} // ::g::Fuse
