// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.47.7/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselat-4886a01e.h>
#include <Fuse.Drawing.Tesselat-544868aa.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct OriginEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class OriginEnumerable :1238
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* OriginEnumerable_typeof();
void OriginEnumerable__ctor_1_fn(OriginEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
void OriginEnumerable__GetNext_fn(OriginEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* edge, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void OriginEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge, OriginEnumerable** __retval);

struct OriginEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    void ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
    static OriginEnumerable* New1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
