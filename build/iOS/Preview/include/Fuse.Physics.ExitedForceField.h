// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Physics/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Physics.ForceFie-91943ec1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ExitedForceField;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class ExitedForceField :507
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof();
void ExitedForceField__ctor_7_fn(ExitedForceField* __this);
void ExitedForceField__New2_fn(ExitedForceField** __retval);
void ExitedForceField__SetForce_fn(ExitedForceField* __this, ::g::Fuse::Physics::Body* body, float* force);
void ExitedForceField__get_Threshold_fn(ExitedForceField* __this, float* __retval);
void ExitedForceField__set_Threshold_fn(ExitedForceField* __this, float* value);

struct ExitedForceField : ::g::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void ctor_7();
    float Threshold();
    void Threshold(float value);
    static ExitedForceField* New2();
};
// }

}}} // ::g::Fuse::Physics
