// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPulseTrigger :2176
// {
uInterfaceType* IPulseTrigger_typeof();

struct IPulseTrigger
{
    void(*fp_Pulse)(uObject*);
    static void Pulse(const uInterface& __this) { __this.VTable<IPulseTrigger>()->fp_Pulse(__this); }
};
// }

}}} // ::g::Fuse::Triggers
