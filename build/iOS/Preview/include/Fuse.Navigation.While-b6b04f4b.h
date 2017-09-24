// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhilePageActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhilePageActive :5222
// {
::g::Fuse::Triggers::Trigger_type* WhilePageActive_typeof();
void WhilePageActive__ctor_6_fn(WhilePageActive* __this);
void WhilePageActive__get_Limit_fn(WhilePageActive* __this, float* __retval);
void WhilePageActive__set_Limit_fn(WhilePageActive* __this, float* value);
void WhilePageActive__get_NameEquals_fn(WhilePageActive* __this, uString** __retval);
void WhilePageActive__set_NameEquals_fn(WhilePageActive* __this, uString* value);
void WhilePageActive__New2_fn(WhilePageActive** __retval);
void WhilePageActive__OnRooted_fn(WhilePageActive* __this);
void WhilePageActive__OnStateChanged_fn(WhilePageActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
void WhilePageActive__OnUnrooted_fn(WhilePageActive* __this);
void WhilePageActive__get_Threshold_fn(WhilePageActive* __this, float* __retval);
void WhilePageActive__set_Threshold_fn(WhilePageActive* __this, float* value);
void WhilePageActive__Update_fn(WhilePageActive* __this);

struct WhilePageActive : ::g::Fuse::Triggers::WhileTrigger
{
    bool _hasLimit;
    float _limit;
    uStrong<uString*> _nameEquals;
    uStrong<uObject*> _navigation;
    float _threshold;

    void ctor_6();
    float Limit();
    void Limit(float value);
    uString* NameEquals();
    void NameEquals(uString* value);
    void OnStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
    float Threshold();
    void Threshold(float value);
    void Update();
    static WhilePageActive* New2();
};
// }

}}} // ::g::Fuse::Navigation
