// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Gestures/0.46.1/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct ClickerTrigger;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class ClickerTrigger :13
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();
void ClickerTrigger__ctor_5_fn(ClickerTrigger* __this);
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this);
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this);

struct ClickerTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;

    void ctor_5();
};
// }

}}} // ::g::Fuse::Gestures
