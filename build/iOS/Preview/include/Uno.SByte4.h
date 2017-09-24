// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct SByte4;}}

namespace g{
namespace Uno{

// public intrinsic struct SByte4 :6375
// {
uStructType* SByte4_typeof();
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval);
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int* __retval);
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval);

struct SByte4
{
    int8_t X;
    int8_t Y;
    int8_t Z;
    int8_t W;

    bool Equals(uType* __type, uObject* o) { bool __retval; return SByte4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return SByte4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return SByte4__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
