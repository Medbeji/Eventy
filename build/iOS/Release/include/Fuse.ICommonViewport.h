// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public abstract interface ICommonViewport :3092
// {
uInterfaceType* ICommonViewport_typeof();

struct ICommonViewport
{
    void(*fp_get_PixelsPerPoint)(uObject*, float*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Float2*);
    static float PixelsPerPoint(const uInterface& __this) { float __retval; return __this.VTable<ICommonViewport>()->fp_get_PixelsPerPoint(__this, &__retval), __retval; }
    static ::g::Uno::Float2 Size(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float2.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float2 ICommonViewport::Size(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ICommonViewport>()->fp_get_Size(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
