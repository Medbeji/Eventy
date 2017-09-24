// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Selection.SelectionEvent.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Selection{struct Deselected;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class Deselected :283
// {
::g::Fuse::Selection::SelectionEvent_type* Deselected_typeof();
void Deselected__ctor_7_fn(Deselected* __this);
void Deselected__IsTriggered_fn(Deselected* __this, bool* on, bool* __retval);
void Deselected__New2_fn(Deselected** __retval);

struct Deselected : ::g::Fuse::Selection::SelectionEvent
{
    void ctor_7();
    static Deselected* New2();
};
// }

}}} // ::g::Fuse::Selection
