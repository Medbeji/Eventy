// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.47.7/$.uno'.
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
namespace g{namespace Fuse{namespace Gestures{struct DoubleTapped;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleTapped :1641
// {
::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof();
void DoubleTapped__ctor_6_fn(DoubleTapped* __this);
void DoubleTapped__ctor_7_fn(DoubleTapped* __this, uDelegate* handler);
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value);
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value);
void DoubleTapped__New2_fn(DoubleTapped** __retval);
void DoubleTapped__New3_fn(uDelegate* handler, DoubleTapped** __retval);
void DoubleTapped__OnRooted_fn(DoubleTapped* __this);
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount);
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this);

struct DoubleTapped : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void ctor_7(uDelegate* handler);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount);
    static DoubleTapped* New2();
    static DoubleTapped* New3(uDelegate* handler);
};
// }

}}} // ::g::Fuse::Gestures
