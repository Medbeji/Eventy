// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Selection.Select-383213fc.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Fuse{namespace Selection{struct SelectionEvent;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public abstract class SelectionEvent :222
// {
struct SelectionEvent_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_IsTriggered)(::g::Fuse::Selection::SelectionEvent*, bool*, bool*);
};

SelectionEvent_type* SelectionEvent_typeof();
void SelectionEvent__ctor_6_fn(SelectionEvent* __this);
void SelectionEvent__OnRooted_fn(SelectionEvent* __this);
void SelectionEvent__OnSelectionChanged_fn(SelectionEvent* __this, uObject* s, uObject* args);
void SelectionEvent__OnUnrooted_fn(SelectionEvent* __this);

struct SelectionEvent : ::g::Fuse::Triggers::PulseTrigger
{
    uStrong< ::g::Fuse::Selection::Selectable*> _selectable;
    bool _selected;
    uStrong< ::g::Fuse::Selection::Selection*> _selection;

    void ctor_6();
    bool IsTriggered(bool on) { bool __retval; return (((SelectionEvent_type*)__type)->fp_IsTriggered)(this, &on, &__retval), __retval; }
    void OnSelectionChanged(uObject* s, uObject* args);
};
// }

}}} // ::g::Fuse::Selection
