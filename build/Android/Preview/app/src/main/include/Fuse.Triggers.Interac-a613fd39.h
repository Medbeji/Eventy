// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.47.7/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct InteractionCompleted;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class InteractionCompleted :184
// {
::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof();
void InteractionCompleted__ctor_5_fn(InteractionCompleted* __this);
void InteractionCompleted__New2_fn(InteractionCompleted** __retval);
void InteractionCompleted__OnInteractingChanged_fn(InteractionCompleted* __this, uObject* s, uObject* a);
void InteractionCompleted__OnRooted_fn(InteractionCompleted* __this);
void InteractionCompleted__OnUnrooted_fn(InteractionCompleted* __this);
void InteractionCompleted__get_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual** __retval);
void InteractionCompleted__set_Source_fn(InteractionCompleted* __this, ::g::Fuse::Visual* value);

struct InteractionCompleted : ::g::Fuse::Triggers::Trigger
{
    bool _on;
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_5();
    void OnInteractingChanged(uObject* s, uObject* a);
    ::g::Fuse::Visual* Source();
    void Source(::g::Fuse::Visual* value);
    static InteractionCompleted* New2();
};
// }

}}} // ::g::Fuse::Triggers
