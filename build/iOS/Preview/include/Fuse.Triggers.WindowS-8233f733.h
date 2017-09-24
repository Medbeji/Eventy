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
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WindowSizeTrigger :4397
// {
struct WindowSizeTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsActive)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*);
};

WindowSizeTrigger_type* WindowSizeTrigger_typeof();
void WindowSizeTrigger__ctor_6_fn(WindowSizeTrigger* __this);
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this);
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this);
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, uObject** __retval);
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, uObject* value);

struct WindowSizeTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _Viewport;

    void ctor_6();
    bool IsActive() { bool __retval; return (((WindowSizeTrigger_type*)__type)->fp_get_IsActive)(this, &__retval), __retval; }
    void OnResize(uObject* sender, ::g::Uno::EventArgs* args);
    uObject* Viewport();
    void Viewport(uObject* value);
};
// }

}}} // ::g::Fuse::Triggers
