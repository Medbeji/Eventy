// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.47.7/$.uno'.
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
namespace g{namespace Fuse{namespace Navigation{struct WhileInEnterState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInEnterState :5097
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();
void WhileInEnterState__ctor_7_fn(WhileInEnterState* __this);
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this);
void WhileInEnterState__New2_fn(WhileInEnterState** __retval);
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInEnterState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    static WhileInEnterState* New2();
};
// }

}}} // ::g::Fuse::Navigation
