// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct WhileDragging;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class WhileDragging :327
// {
::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();
void WhileDragging__ctor_5_fn(WhileDragging* __this);
void WhileDragging__Begin_fn(::g::Fuse::Visual* n);
void WhileDragging__End_fn(::g::Fuse::Visual* n);
void WhileDragging__New2_fn(WhileDragging** __retval);

struct WhileDragging : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    static void Begin(::g::Fuse::Visual* n);
    static void End(::g::Fuse::Visual* n);
    static WhileDragging* New2();
};
// }

}}} // ::g::Fuse::Physics
