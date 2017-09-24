// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PlaybackAction;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract class PlaybackAction :300
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof();
void PlaybackAction__ctor_2_fn(PlaybackAction* __this);
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval);
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value);

struct PlaybackAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _Target;

    void ctor_2();
    uObject* Target();
    void Target(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
