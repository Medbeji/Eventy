// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Navigation/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInEnterState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInEnterState :4940
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this);
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInEnterState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
};
// }

}}} // ::g::Fuse::Navigation
