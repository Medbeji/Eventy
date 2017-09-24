// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.47.7/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselat-4886a01e.h>
#include <Fuse.Drawing.Tesselat-544868aa.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct EdgeLoopEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class EdgeLoopEnumerable :15
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof();
void EdgeLoopEnumerable__ctor_1_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
void EdgeLoopEnumerable__GetNext_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void EdgeLoopEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge, EdgeLoopEnumerable** __retval);

struct EdgeLoopEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    void ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
    static EdgeLoopEnumerable* New1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
