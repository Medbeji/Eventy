// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileVisible;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileVisible :4341
// {
::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof();
void WhileVisible__ctor_6_fn(WhileVisible* __this);
void WhileVisible__New2_fn(WhileVisible** __retval);
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileVisible__OnRooted_fn(WhileVisible* __this);
void WhileVisible__OnUnrooted_fn(WhileVisible* __this);

struct WhileVisible : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_6();
    void OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileVisible* New2();
};
// }

}}} // ::g::Fuse::Triggers
