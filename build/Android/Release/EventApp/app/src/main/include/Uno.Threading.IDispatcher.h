// This file was generated based on '../../AppData/Local/Fusetools/Packages/Uno.Threading/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Threading{

// public abstract interface IDispatcher :494
// {
uInterfaceType* IDispatcher_typeof();

struct IDispatcher
{
    void(*fp_Invoke)(uObject*, uDelegate*);
    static void Invoke(const uInterface& __this, uDelegate* action) { __this.VTable<IDispatcher>()->fp_Invoke(__this, action); }
};
// }

}}} // ::g::Uno::Threading
