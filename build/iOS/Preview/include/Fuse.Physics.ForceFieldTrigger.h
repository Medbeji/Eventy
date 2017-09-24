// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Physics/1.0.2/$.uno'.
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
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public abstract class ForceFieldTrigger :394
// {
struct ForceFieldTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_SetForce)(::g::Fuse::Physics::ForceFieldTrigger*, ::g::Fuse::Physics::Body*, float*);
};

ForceFieldTrigger_type* ForceFieldTrigger_typeof();
void ForceFieldTrigger__ctor_5_fn(ForceFieldTrigger* __this);
void ForceFieldTrigger__get_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField** __retval);
void ForceFieldTrigger__set_ForceField_fn(ForceFieldTrigger* __this, ::g::Fuse::Physics::ForceField* value);
void ForceFieldTrigger__SetForce1_fn(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float* force);

struct ForceFieldTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Physics::ForceField*> _ForceField;

    void ctor_5();
    ::g::Fuse::Physics::ForceField* ForceField();
    void ForceField(::g::Fuse::Physics::ForceField* value);
    void SetForce(::g::Fuse::Physics::Body* n, float force) { (((ForceFieldTrigger_type*)__type)->fp_SetForce)(this, n, &force); }
    static void SetForce1(::g::Fuse::Physics::ForceField* field, ::g::Fuse::Physics::Body* body, float force);
};
// }

}}} // ::g::Fuse::Physics
