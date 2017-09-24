// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Short4;}}

namespace g{
namespace Uno{

// public intrinsic struct Short4 :6625
// {
uStructType* Short4_typeof();
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval);
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int* __retval);
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval);

struct Short4
{
    int16_t X;
    int16_t Y;
    int16_t Z;
    int16_t W;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Short4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Short4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Short4__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
