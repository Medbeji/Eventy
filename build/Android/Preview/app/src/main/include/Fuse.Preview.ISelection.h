// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Preview{

// public abstract interface ISelection :2744
// {
uInterfaceType* ISelection_typeof();

struct ISelection
{
    void(*fp_IsPropertySelected)(uObject*, uObject*, uString*, bool*);
    void(*fp_IsSelected)(uObject*, uObject*, bool*);
    static bool IsPropertySelected(const uInterface& __this, uObject* obj, uString* property) { bool __retval; return __this.VTable<ISelection>()->fp_IsPropertySelected(__this, obj, property, &__retval), __retval; }
    static bool IsSelected(const uInterface& __this, uObject* obj) { bool __retval; return __this.VTable<ISelection>()->fp_IsSelected(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Preview
