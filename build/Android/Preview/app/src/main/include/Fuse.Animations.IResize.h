// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IResize :2671
// {
uInterfaceType* IResize_typeof();

struct IResize
{
    void(*fp_SetSize)(uObject*, ::g::Uno::Float2*);
    static void SetSize(const uInterface& __this, ::g::Uno::Float2 size);
};

}}} // ::g::Fuse::Animations

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Animations{

inline void IResize::SetSize(const uInterface& __this, ::g::Uno::Float2 size) { __this.VTable<IResize>()->fp_SetSize(__this, &size); }
// }

}}} // ::g::Fuse::Animations
