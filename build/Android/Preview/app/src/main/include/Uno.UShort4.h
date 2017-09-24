// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct UShort4;}}

namespace g{
namespace Uno{

// public intrinsic struct UShort4 :8597
// {
uStructType* UShort4_typeof();
void UShort4__Equals_fn(UShort4* __this, uType* __type, uObject* o, bool* __retval);
void UShort4__GetHashCode_fn(UShort4* __this, uType* __type, int* __retval);
void UShort4__ToString_fn(UShort4* __this, uType* __type, uString** __retval);

struct UShort4
{
    uint16_t X;
    uint16_t Y;
    uint16_t Z;
    uint16_t W;

    bool Equals(uType* __type, uObject* o) { bool __retval; return UShort4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return UShort4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return UShort4__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
