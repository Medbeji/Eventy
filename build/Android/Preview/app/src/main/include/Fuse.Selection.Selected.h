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
namespace g{namespace Fuse{namespace Selection{struct Selected;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class Selected :272
// {
::g::Fuse::Selection::SelectionEvent_type* Selected_typeof();
void Selected__ctor_7_fn(Selected* __this);
void Selected__IsTriggered_fn(Selected* __this, bool* on, bool* __retval);
void Selected__New2_fn(Selected** __retval);

struct Selected : ::g::Fuse::Selection::SelectionEvent
{
    void ctor_7();
    static Selected* New2();
};
// }

}}} // ::g::Fuse::Selection
