// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineParser;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LineParser :3163
// {
uType* LineParser_typeof();
void LineParser__ctor__fn(LineParser* __this);
void LineParser__New1_fn(LineParser** __retval);
void LineParser__ParseSVGPath_fn(uString* data, uObject* segments);

struct LineParser : uObject
{
    void ctor_();
    static LineParser* New1();
    static void ParseSVGPath(uString* data, uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
