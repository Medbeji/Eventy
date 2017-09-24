// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct Memory;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class Memory :1490
// {
uClassType* Memory_typeof();
void Memory__Copy_fn(uArray* dst, void** src, int* len);

struct Memory : uObject
{
    static void Copy(uArray* dst, void* src, int len);
};
// }

}}}} // ::g::Fuse::Text::Implementation
