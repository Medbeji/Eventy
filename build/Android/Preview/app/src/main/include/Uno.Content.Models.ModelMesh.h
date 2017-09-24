// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/content/models/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct IndexArray;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelMesh :624
// {
uType* ModelMesh_typeof();
void ModelMesh__ctor__fn(ModelMesh* __this, uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
void ModelMesh__New1_fn(uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices, ModelMesh** __retval);

struct ModelMesh : uObject
{
    uStrong< ::g::Uno::Content::Models::IndexArray*> _indices;
    uStrong<uString*> _name;
    int _primitiveType;
    uStrong< ::g::Uno::Collections::Dictionary*> _vertexAttributes;

    void ctor_(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
    static ModelMesh* New1(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
};
// }

}}}} // ::g::Uno::Content::Models
