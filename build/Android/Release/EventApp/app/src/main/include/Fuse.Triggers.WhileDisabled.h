// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Triggers/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileDisabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileDisabled :1073
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();
void WhileDisabled__ctor_7_fn(WhileDisabled* __this);
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval);
void WhileDisabled__New2_fn(WhileDisabled** __retval);

struct WhileDisabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_7();
    static WhileDisabled* New2();
};
// }

}}} // ::g::Fuse::Triggers
