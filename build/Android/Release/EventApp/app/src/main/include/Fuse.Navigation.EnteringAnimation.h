// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Navigation/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct EnteringAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class EnteringAnimation :1345
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();
void EnteringAnimation__ctor_7_fn(EnteringAnimation* __this);
void EnteringAnimation__New2_fn(EnteringAnimation** __retval);

struct EnteringAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_7();
    static EnteringAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
