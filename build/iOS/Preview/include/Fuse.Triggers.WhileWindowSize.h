// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WindowS-8233f733.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowSize;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowSize :4477
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof();
void WhileWindowSize__ctor_7_fn(WhileWindowSize* __this);
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval);
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval);
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value);
void WhileWindowSize__New2_fn(WhileWindowSize** __retval);

struct WhileWindowSize : ::g::Fuse::Triggers::WindowSizeTrigger
{
    ::g::Uno::Float2 _EqualTo;
    ::g::Uno::Float2 _GreaterThan;
    ::g::Uno::Float2 _LessThan;

    void ctor_7();
    ::g::Uno::Float2 EqualTo();
    void EqualTo(::g::Uno::Float2 value);
    ::g::Uno::Float2 GreaterThan();
    void GreaterThan(::g::Uno::Float2 value);
    ::g::Uno::Float2 LessThan();
    void LessThan(::g::Uno::Float2 value);
    static WhileWindowSize* New2();
};
// }

}}} // ::g::Fuse::Triggers
