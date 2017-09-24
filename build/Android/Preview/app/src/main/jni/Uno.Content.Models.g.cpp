// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.Ve-6f162678.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/content/models/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class IndexArray :10
// {
static void IndexArray_build(uType* type)
{
}

uType* IndexArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(IndexArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.IndexArray", options);
    type->fp_build_ = IndexArray_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/content/models/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class ModelMesh :624
// {
static void ModelMesh_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Models::IndexArray_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _indices), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _name), 0,
        ::g::Uno::Graphics::PrimitiveType_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _primitiveType), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), offsetof(::g::Uno::Content::Models::ModelMesh, _vertexAttributes), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ModelMesh__New1_fn, 0, true, type, 4, ::g::Uno::String_typeof(), ::g::Uno::Graphics::PrimitiveType_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), ::g::Uno::Content::Models::IndexArray_typeof()));
}

uType* ModelMesh_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ModelMesh);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelMesh", options);
    type->fp_build_ = ModelMesh_build;
    return type;
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :651
void ModelMesh__ctor__fn(ModelMesh* __this, uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    __this->ctor_(name, *type, vertexAttributes, indices);
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :651
void ModelMesh__New1_fn(uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices, ModelMesh** __retval)
{
    *__retval = ModelMesh::New1(name, *type, vertexAttributes, indices);
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [instance] :651
void ModelMesh::ctor_(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    _name = name;
    _primitiveType = type;
    _vertexAttributes = vertexAttributes;
    _indices = indices;
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [static] :651
ModelMesh* ModelMesh::New1(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    ModelMesh* obj2 = (ModelMesh*)uNew(ModelMesh_typeof());
    obj2->ctor_(name, type, vertexAttributes, indices);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/content/models/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class VertexAttributeArray :1522
// {
static void VertexAttributeArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _buffer), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _type), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)VertexAttributeArray__New4_fn, 0, true, type, 1, ::g::Uno::Float3_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)VertexAttributeArray__New5_fn, 0, true, type, 1, ::g::Uno::Float4_typeof()->Array()));
}

uType* VertexAttributeArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(VertexAttributeArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.VertexAttributeArray", options);
    type->fp_build_ = VertexAttributeArray_build;
    return type;
}

// public VertexAttributeArray(float3[] data) :1558
void VertexAttributeArray__ctor_3_fn(VertexAttributeArray* __this, uArray* data)
{
    __this->ctor_3(data);
}

// public VertexAttributeArray(float4[] data) :1563
void VertexAttributeArray__ctor_4_fn(VertexAttributeArray* __this, uArray* data)
{
    __this->ctor_4(data);
}

// public VertexAttributeArray(Uno.Graphics.VertexAttributeType type, Uno.Buffer buffer) :1542
void VertexAttributeArray__ctor_7_fn(VertexAttributeArray* __this, int* type, ::g::Uno::Buffer* buffer)
{
    __this->ctor_7(*type, buffer);
}

// public VertexAttributeArray New(float3[] data) :1558
void VertexAttributeArray__New4_fn(uArray* data, VertexAttributeArray** __retval)
{
    *__retval = VertexAttributeArray::New4(data);
}

// public VertexAttributeArray New(float4[] data) :1563
void VertexAttributeArray__New5_fn(uArray* data, VertexAttributeArray** __retval)
{
    *__retval = VertexAttributeArray::New5(data);
}

// public VertexAttributeArray(float3[] data) [instance] :1558
void VertexAttributeArray::ctor_3(uArray* data)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(float3[])");
    ctor_7(3, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(data));
}

// public VertexAttributeArray(float4[] data) [instance] :1563
void VertexAttributeArray::ctor_4(uArray* data)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(float4[])");
    ctor_7(4, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer5(data));
}

// public VertexAttributeArray(Uno.Graphics.VertexAttributeType type, Uno.Buffer buffer) [instance] :1542
void VertexAttributeArray::ctor_7(int type, ::g::Uno::Buffer* buffer)
{
    _buffer = buffer;
    _type = type;
}

// public VertexAttributeArray New(float3[] data) [static] :1558
VertexAttributeArray* VertexAttributeArray::New4(uArray* data)
{
    VertexAttributeArray* obj4 = (VertexAttributeArray*)uNew(VertexAttributeArray_typeof());
    obj4->ctor_3(data);
    return obj4;
}

// public VertexAttributeArray New(float4[] data) [static] :1563
VertexAttributeArray* VertexAttributeArray::New5(uArray* data)
{
    VertexAttributeArray* obj5 = (VertexAttributeArray*)uNew(VertexAttributeArray_typeof());
    obj5->ctor_4(data);
    return obj5;
}
// }

}}}} // ::g::Uno::Content::Models
