// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Triggers/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.IBeginRemoveVisualListener.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation;}}}
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class RemovingAnimation :1721
// {
struct RemovingAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::IBeginRemoveVisualListener interface6;
};

RemovingAnimation_type* RemovingAnimation_typeof();
void RemovingAnimation__ctor_5_fn(RemovingAnimation* __this);
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr);
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this);
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this);

struct RemovingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::PendingRemoveVisual*> _args;

    void ctor_5();
    void OnDone();
};
// }

}}} // ::g::Fuse::Triggers
