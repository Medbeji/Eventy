// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.Enter-2bf42e15.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ExitingAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class ExitingAnimation :1310
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();
void ExitingAnimation__ctor_7_fn(ExitingAnimation* __this);
void ExitingAnimation__New2_fn(ExitingAnimation** __retval);

struct ExitingAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_7();
    static ExitingAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
