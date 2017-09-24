// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IOffscreenRendererHost :497
// {
uInterfaceType* IOffscreenRendererHost_typeof();

struct IOffscreenRendererHost
{
    void(*fp_get_RenderToTexture)(uObject*, bool*);
    static bool RenderToTexture(const uInterface& __this) { bool __retval; return __this.VTable<IOffscreenRendererHost>()->fp_get_RenderToTexture(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::Native
