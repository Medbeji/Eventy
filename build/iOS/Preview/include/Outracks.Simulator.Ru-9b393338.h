// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/reflection/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// internal abstract interface IProperty :111
// {
uInterfaceType* IProperty_typeof();

struct IProperty
{
    void(*fp_get_DeclaringType)(uObject*, uType**);
    void(*fp_get_GetMethod)(uObject*, uObject**);
    void(*fp_get_SetMethod)(uObject*, uObject**);
    static uType* DeclaringType(const uInterface& __this) { uType* __retval; return __this.VTable<IProperty>()->fp_get_DeclaringType(__this, &__retval), __retval; }
    static uObject* GetMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IProperty>()->fp_get_GetMethod(__this, &__retval), __retval; }
    static uObject* SetMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IProperty>()->fp_get_SetMethod(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
