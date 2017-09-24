// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInactive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInactive :5157
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();
void WhileInactive__ctor_7_fn(WhileInactive* __this);
void WhileInactive__ForceUpdate_fn(WhileInactive* __this);
void WhileInactive__New2_fn(WhileInactive** __retval);
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInactive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    static WhileInactive* New2();
};
// }

}}} // ::g::Fuse::Navigation
