// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.ContourTerminator.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct ClosePath;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class ClosePath :1105
// {
::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof();
void ClosePath__ctor_3_fn(ClosePath* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition);
void ClosePath__New2_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, ClosePath** __retval);
void ClosePath__Serialize_fn(ClosePath* __this, uString** __retval);

struct ClosePath : ::g::Fuse::Drawing::ContourTerminator
{
    ::g::Uno::Float2 _lastPosition;

    void ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition);
    static ClosePath* New2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition);
};
// }

}}} // ::g::Fuse::Drawing
