// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/$.uno'.
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
namespace g{namespace Fuse{namespace Gestures{struct Released;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Released :809
// {
::g::Fuse::Triggers::Trigger_type* Released_typeof();
void Released__ctor_5_fn(Released* __this);
void Released__New2_fn(Released** __retval);
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a);
void Released__OnRooted_fn(Released* __this);
void Released__OnUnrooted_fn(Released* __this);

struct Released : ::g::Fuse::Triggers::Trigger
{
    void ctor_5();
    void OnReleased(uObject* s, uObject* a);
    static Released* New2();
};
// }

}}} // ::g::Fuse::Gestures
