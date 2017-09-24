// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{struct LineBreaks;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class LineBreaks :1111
// {
uClassType* LineBreaks_typeof();
void LineBreaks__Get_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval);

struct LineBreaks : uObject
{
    static ::g::Fuse::Text::Implementation::BitArray* Get(::g::Fuse::Text::Substring* text);
};
// }

}}} // ::g::Fuse::Text
