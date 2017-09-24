// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Navigation/0.46.1/navigationinternal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct ExitHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class ExitHorizontal :44
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof();
void ExitHorizontal__ctor_8_fn(ExitHorizontal* __this);
void ExitHorizontal__InitializeUX_fn(ExitHorizontal* __this);
void ExitHorizontal__New3_fn(ExitHorizontal** __retval);

struct ExitHorizontal : ::g::Fuse::Navigation::ExitingAnimation
{
    void ctor_8();
    void InitializeUX();
    static ExitHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
