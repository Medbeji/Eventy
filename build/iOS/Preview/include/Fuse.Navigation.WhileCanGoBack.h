// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.While-943620aa.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileCanGoBack;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileCanGoBack :4892
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof();
void WhileCanGoBack__ctor_7_fn(WhileCanGoBack* __this);
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval);
void WhileCanGoBack__New2_fn(WhileCanGoBack** __retval);

struct WhileCanGoBack : ::g::Fuse::Navigation::WhileHistoryTrigger
{
    void ctor_7();
    static WhileCanGoBack* New2();
};
// }

}}} // ::g::Fuse::Navigation
