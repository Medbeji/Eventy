// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract interface IDisposable :3414
// {
uInterfaceType* IDisposable_typeof();

struct IDisposable
{
    void(*fp_Dispose)(uObject*);
    static void Dispose(const uInterface& __this) { __this.VTable<IDisposable>()->fp_Dispose(__this); }
};
// }

}} // ::g::Uno
