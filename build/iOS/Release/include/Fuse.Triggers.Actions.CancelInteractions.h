// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Triggers/0.46.1/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct CancelInteractions;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class CancelInteractions :56
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target);
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval);
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value);

struct CancelInteractions : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
