// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IExpression :63
// {
uInterfaceType* IExpression_typeof();

struct IExpression
{
    void(*fp_Subscribe)(uObject*, uObject*, uObject*, uObject**);
    static uObject* Subscribe(const uInterface& __this, uObject* context, uObject* listener) { uObject* __retval; return __this.VTable<IExpression>()->fp_Subscribe(__this, context, listener, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
