// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno'.
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
namespace g{namespace Fuse{namespace Triggers{struct WhileFocusWithin;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFocusWithin :3829
// {
::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof();
void WhileFocusWithin__ctor_6_fn(WhileFocusWithin* __this);
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval);
void WhileFocusWithin__New2_fn(WhileFocusWithin** __retval);
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this);
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this);

struct WhileFocusWithin : ::g::Fuse::Triggers::WhileTrigger
{
    void ctor_6();
    bool IsOn();
    void OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args);
    static WhileFocusWithin* New2();
};
// }

}}} // ::g::Fuse::Triggers
