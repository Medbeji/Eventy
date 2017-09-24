// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.iOS/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :438
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__New2_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    bool _hasStyle;
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return StatusBarConfig_typeof()->Init(), _stack_; }
    int _style;

    void ctor_3();
    int Style();
    void Style(int value);
    static void Apply();
    static StatusBarConfig* New2();
};
// }

}}} // ::g::Fuse::iOS
