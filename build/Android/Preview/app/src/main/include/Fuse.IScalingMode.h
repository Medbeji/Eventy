// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public abstract interface IScalingMode :3913
// {
uInterfaceType* IScalingMode_typeof();

struct IScalingMode
{
    void(*fp_GetScaleVector)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*);
    static ::g::Uno::Float3 GetScaleVector(const uInterface& __this, ::g::Fuse::Scaling* t);
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 IScalingMode::GetScaleVector(const uInterface& __this, ::g::Fuse::Scaling* t) { ::g::Uno::Float3 __retval; return __this.VTable<IScalingMode>()->fp_GetScaleVector(__this, t, &__retval), __retval; }
// }

}} // ::g::Fuse
