// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Triggers/0.46.1/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugAction;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class DebugAction :90
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();
void DebugAction__ctor_2_fn(DebugAction* __this);
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval);
void DebugAction__set_Message_fn(DebugAction* __this, uString* value);
void DebugAction__New2_fn(DebugAction** __retval);
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target);

struct DebugAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Message;

    void ctor_2();
    uString* Message();
    void Message(uString* value);
    static DebugAction* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
