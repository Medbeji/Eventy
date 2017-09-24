// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct NodeGroup;}}

namespace g{
namespace Fuse{

// public sealed class NodeGroup :3302
// {
::g::Fuse::Node_type* NodeGroup_typeof();
void NodeGroup__ctor_4_fn(NodeGroup* __this);
void NodeGroup__get_IsActive_fn(NodeGroup* __this, bool* __retval);
void NodeGroup__set_IsActive_fn(NodeGroup* __this, bool* value);
void NodeGroup__New2_fn(NodeGroup** __retval);

struct NodeGroup : ::g::Fuse::NodeGroupBase
{
    void ctor_4();
    bool IsActive();
    void IsActive(bool value);
    static NodeGroup* New2();
};
// }

}} // ::g::Fuse
