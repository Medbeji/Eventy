// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/1.0.2/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TransitionState;}}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TransitionState :759
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();
void TransitionState__ctor_2_fn(TransitionState* __this);
void TransitionState__New2_fn(TransitionState** __retval);
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target);
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval);
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value);
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval);
void TransitionState__set_Type_fn(TransitionState* __this, int* value);

struct TransitionState : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::StateGroup*> _Target;
    int _Type;

    void ctor_2();
    ::g::Fuse::Triggers::StateGroup* Target();
    void Target(::g::Fuse::Triggers::StateGroup* value);
    int Type();
    void Type(int value);
    static TransitionState* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
