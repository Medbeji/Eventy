// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct LongPressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LongPressed :286
// {
::g::Fuse::Triggers::Trigger_type* LongPressed_typeof();
void LongPressed__ctor_6_fn(LongPressed* __this);
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value);
void LongPressed__New2_fn(LongPressed** __retval);
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count);
void LongPressed__OnRooted_fn(LongPressed* __this);
void LongPressed__OnUnrooted_fn(LongPressed* __this);

struct LongPressed : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count);
    static LongPressed* New2();
};
// }

}}} // ::g::Fuse::Gestures
