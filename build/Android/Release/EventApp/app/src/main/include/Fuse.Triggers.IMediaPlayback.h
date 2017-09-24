// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Triggers/0.46.1/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IMediaPlayback :278
// {
uInterfaceType* IMediaPlayback_typeof();

struct IMediaPlayback
{
    void(*fp_get_Position)(uObject*, double*);
    void(*fp_set_Position)(uObject*, double*);
    static double Position(const uInterface& __this) { double __retval; return __this.VTable<IMediaPlayback>()->fp_get_Position(__this, &__retval), __retval; }
    static void Position(const uInterface& __this, double value) { __this.VTable<IMediaPlayback>()->fp_set_Position(__this, &value); }
};
// }

}}} // ::g::Fuse::Triggers
