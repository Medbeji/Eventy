// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Navigation/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface IPageResourceBinding :1454
// {
uInterfaceType* IPageResourceBinding_typeof();

struct IPageResourceBinding
{
    void(*fp_UpdateSource)(uObject*);
    static void UpdateSource(const uInterface& __this) { __this.VTable<IPageResourceBinding>()->fp_UpdateSource(__this); }
};
// }

}}} // ::g::Fuse::Navigation
