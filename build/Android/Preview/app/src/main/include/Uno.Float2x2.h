// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float2x2;}}

namespace g{
namespace Uno{

// public intrinsic struct Float2x2 :2468
// {
uStructType* Float2x2_typeof();
void Float2x2__ctor__fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22);
void Float2x2__ctor_1_fn(Float2x2* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b);
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval);
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int* __retval);
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval);
void Float2x2__New2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, Float2x2* __retval);
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval);

struct Float2x2
{
    float M11;
    float M12;
    float M21;
    float M22;

    void ctor_(float m11, float m12, float m21, float m22);
    void ctor_1(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float2x2__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Float2x2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Float2x2__ToString_fn(this, __type, &__retval), __retval; }
};

Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22);
Float2x2 Float2x2__New2(::g::Uno::Float2 a, ::g::Uno::Float2 b);
// }

}} // ::g::Uno
