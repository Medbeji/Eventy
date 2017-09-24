// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IScriptEvent :773
// {
uInterfaceType* IScriptEvent_typeof();

struct IScriptEvent
{
    void(*fp_Serialize)(uObject*, uObject*);
    static void Serialize(const uInterface& __this, uObject* s) { __this.VTable<IScriptEvent>()->fp_Serialize(__this, s); }
};
// }

}}} // ::g::Fuse::Scripting
