// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface IRenderViewport :1226
// {
uInterfaceType* IRenderViewport_typeof();

struct IRenderViewport
{
    void(*fp_get_ProjectionTransform)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_get_ViewOrigin)(uObject*, ::g::Uno::Float3*);
    void(*fp_get_ViewProjectionTransform)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_get_ViewRange)(uObject*, ::g::Uno::Float2*);
    static ::g::Uno::Float4x4 ProjectionTransform(const uInterface& __this);
    static ::g::Uno::Float3 ViewOrigin(const uInterface& __this);
    static ::g::Uno::Float4x4 ViewProjectionTransform(const uInterface& __this);
    static ::g::Uno::Float2 ViewRange(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float4x4 IRenderViewport::ProjectionTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IRenderViewport>()->fp_get_ProjectionTransform(__this, &__retval), __retval; }
inline ::g::Uno::Float3 IRenderViewport::ViewOrigin(const uInterface& __this) { ::g::Uno::Float3 __retval; return __this.VTable<IRenderViewport>()->fp_get_ViewOrigin(__this, &__retval), __retval; }
inline ::g::Uno::Float4x4 IRenderViewport::ViewProjectionTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IRenderViewport>()->fp_get_ViewProjectionTransform(__this, &__retval), __retval; }
inline ::g::Uno::Float2 IRenderViewport::ViewRange(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<IRenderViewport>()->fp_get_ViewRange(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
