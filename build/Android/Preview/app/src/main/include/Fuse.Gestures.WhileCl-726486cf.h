// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.47.7/internal/$.uno'.
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
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileClickerTrigger;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class WhileClickerTrigger :30
// {
::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof();
void WhileClickerTrigger__ctor_6_fn(WhileClickerTrigger* __this);
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this);
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this);

struct WhileClickerTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;

    void ctor_6();
};
// }

}}} // ::g::Fuse::Gestures
