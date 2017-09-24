// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Animations/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IPlayerFeedback :4124
// {
uInterfaceType* IPlayerFeedback_typeof();

struct IPlayerFeedback
{
    void(*fp_OnProgressUpdated)(uObject*, uObject*, int*);
    static void OnProgressUpdated(const uInterface& __this, uObject* s, int flags) { __this.VTable<IPlayerFeedback>()->fp_OnProgressUpdated(__this, s, &flags); }
};
// }

}}} // ::g::Fuse::Animations
