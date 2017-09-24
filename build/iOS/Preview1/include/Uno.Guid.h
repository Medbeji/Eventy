// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Guid;}}

namespace g{
namespace Uno{

// public struct Guid :3151
// {
uStructType* Guid_typeof();
void Guid__ctor_3_fn(Guid* __this, uString* g);
void Guid__Equals_fn(Guid* __this, uType* __type, uObject* other, bool* __retval);
void Guid__Equals2_fn(Guid* __this, Guid* other, bool* __retval);
void Guid__GetHashCode_fn(Guid* __this, uType* __type, int* __retval);
void Guid__New4_fn(uString* g, Guid* __retval);
void Guid__ToString_fn(Guid* __this, uType* __type, uString** __retval);
void Guid__ToUint_fn(Guid* __this, uString* str, uint32_t* __retval);
void Guid__ValidateGuid_fn(Guid* __this, uString* guid, uArray** __retval);
void Guid__ValidatePart_fn(Guid* __this, uString* part, int* expectedLength);

struct Guid
{
    uint32_t Data1;
    uint16_t Data2;
    uint16_t Data3;
    uint8_t Data4_1;
    uint8_t Data4_2;
    uint8_t Data4_3;
    uint8_t Data4_4;
    uint8_t Data4_5;
    uint8_t Data4_6;
    uint8_t Data4_7;
    uint8_t Data4_8;
    static Guid Empty_;
    static Guid& Empty() { return Empty_; }

    void ctor_3(uString* g);
    bool Equals(uType* __type, uObject* other) { bool __retval; return Guid__Equals_fn(this, __type, other, &__retval), __retval; }
    bool Equals2(Guid other);
    int GetHashCode(uType* __type) { int __retval; return Guid__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Guid__ToString_fn(this, __type, &__retval), __retval; }
    uint32_t ToUint(uString* str);
    uArray* ValidateGuid(uString* guid);
    void ValidatePart(uString* part, int expectedLength);
};

Guid Guid__New4(uString* g);
// }

}} // ::g::Uno
