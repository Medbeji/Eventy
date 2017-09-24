// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRangeViewHost :412
// {
uInterfaceType* IRangeViewHost_typeof();

struct IRangeViewHost
{
    void(*fp_OnProgressChanged)(uObject*, double*);
    static void OnProgressChanged(const uInterface& __this, double newProgress) { __this.VTable<IRangeViewHost>()->fp_OnProgressChanged(__this, &newProgress); }
};
// }

}}}} // ::g::Fuse::Controls::Native
