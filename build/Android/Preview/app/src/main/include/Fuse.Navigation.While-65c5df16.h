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
namespace g{namespace Fuse{namespace Navigation{struct WhileInExitState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInExitState :5079
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();
void WhileInExitState__ctor_7_fn(WhileInExitState* __this);
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this);
void WhileInExitState__New2_fn(WhileInExitState** __retval);
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInExitState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    static WhileInExitState* New2();
};
// }

}}} // ::g::Fuse::Navigation
