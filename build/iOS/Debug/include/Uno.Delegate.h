// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public class Delegate :1726
// {
uType* Delegate_typeof();
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval);
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval);
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__GetHashCode_fn(uDelegate* __this, int* __retval);
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval);

struct Delegate
{
    static uDelegate* Combine(uDelegate* source, uDelegate* value);
    static bool EqualsImpl(uDelegate* left, uDelegate* right);
    static bool op_Equality(uDelegate* left, uDelegate* right);
    static bool op_Inequality(uDelegate* left, uDelegate* right);
    static uDelegate* Remove(uDelegate* source, uDelegate* value);
};
// }

}} // ::g::Uno
