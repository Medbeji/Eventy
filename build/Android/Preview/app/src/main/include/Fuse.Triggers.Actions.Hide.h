// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Hide;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Hide :1097
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();
void Hide__ctor_2_fn(Hide* __this);
void Hide__New2_fn(Hide** __retval);
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target);

struct Hide : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_2();
    static Hide* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
