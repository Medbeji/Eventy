// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract interface IParentObserver :5324
// {
uInterfaceType* IParentObserver_typeof();

struct IParentObserver
{
    void(*fp_OnChildAddedWhileRooted)(uObject*, ::g::Fuse::Node*);
    void(*fp_OnChildRemovedWhileRooted)(uObject*, ::g::Fuse::Node*);
    static void OnChildAddedWhileRooted(const uInterface& __this, ::g::Fuse::Node* n) { __this.VTable<IParentObserver>()->fp_OnChildAddedWhileRooted(__this, n); }
    static void OnChildRemovedWhileRooted(const uInterface& __this, ::g::Fuse::Node* n) { __this.VTable<IParentObserver>()->fp_OnChildRemovedWhileRooted(__this, n); }
};
// }

}} // ::g::Fuse
