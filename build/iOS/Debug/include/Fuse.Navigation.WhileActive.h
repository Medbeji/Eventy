// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileActive :5116
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();
void WhileActive__ctor_7_fn(WhileActive* __this);
void WhileActive__ForceUpdate_fn(WhileActive* __this);
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval);
void WhileActive__New2_fn(WhileActive** __retval);
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileActive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    double InvertProgress(double p);
    static WhileActive* New2();
};
// }

}}} // ::g::Fuse::Navigation
