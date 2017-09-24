// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface IDeferred :845
// {
uInterfaceType* IDeferred_typeof();

struct IDeferred
{
    void(*fp_Perform)(uObject*);
    static void Perform(const uInterface& __this) { __this.VTable<IDeferred>()->fp_Perform(__this); }
};
// }

}} // ::g::Fuse
