// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/content/models/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class VertexAttributeArray :1522
// {
uType* VertexAttributeArray_typeof();
void VertexAttributeArray__ctor_3_fn(VertexAttributeArray* __this, uArray* data);
void VertexAttributeArray__ctor_4_fn(VertexAttributeArray* __this, uArray* data);
void VertexAttributeArray__ctor_7_fn(VertexAttributeArray* __this, int* type, ::g::Uno::Buffer* buffer);
void VertexAttributeArray__New4_fn(uArray* data, VertexAttributeArray** __retval);
void VertexAttributeArray__New5_fn(uArray* data, VertexAttributeArray** __retval);

struct VertexAttributeArray : uObject
{
    uStrong< ::g::Uno::Buffer*> _buffer;
    int _type;

    void ctor_3(uArray* data);
    void ctor_4(uArray* data);
    void ctor_7(int type, ::g::Uno::Buffer* buffer);
    static VertexAttributeArray* New4(uArray* data);
    static VertexAttributeArray* New5(uArray* data);
};
// }

}}}} // ::g::Uno::Content::Models
