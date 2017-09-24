// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct UBrk;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class UBrk :1445
// {
uClassType* UBrk_typeof();
void UBrk__GetSoftLineBreaks_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval);
void UBrk__ubrk_fn(uString* text, int* offset, int* length, uArray* outBitArray, int* __retval);

struct UBrk : uObject
{
    static ::g::Fuse::Text::Implementation::BitArray* GetSoftLineBreaks(::g::Fuse::Text::Substring* text);
    static int ubrk(uString* text, int offset, int length, uArray* outBitArray);
};
// }

}}}} // ::g::Fuse::Text::Implementation
