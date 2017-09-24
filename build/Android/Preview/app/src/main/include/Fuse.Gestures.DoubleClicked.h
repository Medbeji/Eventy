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
namespace g{namespace Fuse{namespace Gestures{struct DoubleClicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleClicked :96
// {
::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof();
void DoubleClicked__ctor_6_fn(DoubleClicked* __this);
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value);
void DoubleClicked__New2_fn(DoubleClicked** __retval);
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount);
void DoubleClicked__OnRooted_fn(DoubleClicked* __this);
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this);

struct DoubleClicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount);
    static DoubleClicked* New2();
};
// }

}}} // ::g::Fuse::Gestures
