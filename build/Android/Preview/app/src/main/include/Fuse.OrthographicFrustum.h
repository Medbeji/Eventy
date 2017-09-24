// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IFrustum.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct OrthographicFrustum;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public sealed class OrthographicFrustum :3267
// {
struct OrthographicFrustum_type : uType
{
    ::g::Fuse::IFrustum interface0;
};

OrthographicFrustum_type* OrthographicFrustum_typeof();
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this);
void OrthographicFrustum__GetDepthRange_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval);
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__GetWorldPosition_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval);
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value);
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval);
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval);
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value);
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval);
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value);
void OrthographicFrustum__TryGetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);
void OrthographicFrustum__TryGetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval);

struct OrthographicFrustum : uObject
{
    bool _hasLocalFromWorld;
    bool _hasOrigin;
    bool _hasSize;
    ::g::Uno::Float4x4 _localFromWorld;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _size;

    void ctor_();
    ::g::Uno::Float2 GetDepthRange(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransformInverse(uObject* viewport);
    ::g::Uno::Float3 GetWorldPosition(uObject* viewport);
    ::g::Uno::Float4x4 LocalFromWorld();
    void LocalFromWorld(::g::Uno::Float4x4 value);
    ::g::Uno::Float2 Origin();
    void Origin(::g::Uno::Float2 value);
    ::g::Uno::Float2 Size();
    void Size(::g::Uno::Float2 value);
    bool TryGetProjectionTransform(uObject* viewport, ::g::Uno::Float4x4* result);
    bool TryGetProjectionTransformInverse(uObject* viewport, ::g::Uno::Float4x4* result);
    static OrthographicFrustum* New1();
};
// }

}} // ::g::Fuse
