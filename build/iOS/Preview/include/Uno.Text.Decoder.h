// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct Decoder;}}}

namespace g{
namespace Uno{
namespace Text{

// public abstract class Decoder :145
// {
struct Decoder_type : uType
{
    void(*fp_GetChars)(::g::Uno::Text::Decoder*, uArray*, int*, int*, uArray*, int*, int*);
};

Decoder_type* Decoder_typeof();
void Decoder__ctor__fn(Decoder* __this);

struct Decoder : uObject
{
    void ctor_();
    int GetChars(uArray* bytes, int byteIndex, int byteCount, uArray* chars, int charIndex) { int __retval; return (((Decoder_type*)__type)->fp_GetChars)(this, bytes, &byteIndex, &byteCount, chars, &charIndex, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Text
