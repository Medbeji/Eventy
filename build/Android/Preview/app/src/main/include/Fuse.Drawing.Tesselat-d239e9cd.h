// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.47.7/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselat-4a402373.h>
#include <Fuse.Drawing.Tesselat-544868aa.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct DictNodeEnumerable;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal sealed class DictNodeEnumerable<T> :115
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof();
void DictNodeEnumerable__ctor_1_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head);
void DictNodeEnumerable__GetNext_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* current, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void DictNodeEnumerable__New1_fn(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head, DictNodeEnumerable** __retval);

struct DictNodeEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::DictNode*> _head;

    void ctor_1(::g::Fuse::Drawing::Tesselation::Collections::DictNode* head);
    static DictNodeEnumerable* New1(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head);
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
