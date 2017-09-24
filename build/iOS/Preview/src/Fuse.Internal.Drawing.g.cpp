// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-1398d2ef.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing-d2380448.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.Runtime.Implement-81e7ab4c.h>
#include <Uno.Vector.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class SolidRectangle :134
// {
// static SolidRectangle() :134
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

static void SolidRectangle_build(uType* type)
{
    ::TYPES[0] = ::g::DashedSolidColor_typeof();
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_66ccbe7e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_77a0ae88), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_b4859fb9), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c5598fc3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_77a0ae88_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_55f8ce74_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_66ccbe7e_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_77a0ae88_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_b4859fb9_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c5598fc3_7_2_1), 0,
        type, (uintptr_t)&::g::Fuse::Internal::Drawing::SolidRectangle::Impl_, uFieldFlagsStatic);
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_build_ = SolidRectangle_build;
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    return type;
}

// public generated SolidRectangle() :134
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) :138
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls() :134
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New() :134
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance] :134
void SolidRectangle::ctor_()
{
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance] :138
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "DrawElement(Fuse.DrawContext,Fuse.Elements.Element,Fuse.Drawing.Brush,float)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;

    if (uIs(brush, ::TYPES[0/*DashedSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_77a0ae88_4_9_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        _draw_77a0ae88.BlendEnabled(true);
        _draw_77a0ae88.DepthTestEnabled(false);
        _draw_77a0ae88.CullFace(uPtr(dc)->CullFace());
        _draw_77a0ae88.BlendSrcAlpha(7);
        _draw_77a0ae88.BlendDstRgb(3);
        _draw_77a0ae88.Use();
        _draw_77a0ae88.Attrib1(0, 2, DrawElement_VertexData_77a0ae88_7_2_1, 8, 0);
        _draw_77a0ae88.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_77a0ae88.Uniform2(2, (ind1 = uPtr(element)->ActualSize(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
        _draw_77a0ae88.Uniform2(3, element->ActualSize());
        _draw_77a0ae88.Uniform(4, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[0/*DashedSolidColor*/]))->DashSize());
        _draw_77a0ae88.Uniform10(5, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[0/*DashedSolidColor*/]))->Color());
        _draw_77a0ae88.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[0/*DashedSolidColor*/]))->Opacity());
        _draw_77a0ae88.Uniform(7, opacity);
        _draw_77a0ae88.Uniform12(8, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_77a0ae88_4_9_5, element->WorldTransform()) : LocalTransform_77a0ae88_4_9_5);
        _draw_77a0ae88.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c5598fc3_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_c5598fc3_16_8_6 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_c5598fc3.BlendEnabled(true);
        _draw_c5598fc3.DepthTestEnabled(false);
        _draw_c5598fc3.CullFace(uPtr(dc)->CullFace());
        _draw_c5598fc3.BlendSrcAlpha(7);
        _draw_c5598fc3.BlendDstRgb(3);
        _draw_c5598fc3.Const(0, DP_c5598fc3_16_8_6.NeedFract);
        _draw_c5598fc3.Const(1, DP_c5598fc3_16_8_6.Texture == NULL);
        _draw_c5598fc3.Use();
        _draw_c5598fc3.Attrib1(2, 2, DrawElement_VertexData_c5598fc3_7_2_1, 8, 0);
        _draw_c5598fc3.Uniform12(3, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c5598fc3.Uniform2(4, uPtr(element)->ActualSize());
        _draw_c5598fc3.Uniform2(5, DP_c5598fc3_16_8_6.Origin);
        _draw_c5598fc3.Uniform2(6, DP_c5598fc3_16_8_6.Size);
        _draw_c5598fc3.Uniform2(7, ::g::Uno::Float2__op_Subtraction2((ind2 = DP_c5598fc3_16_8_6.UVClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = DP_c5598fc3_16_8_6.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))));
        _draw_c5598fc3.Uniform2(8, (ind4 = DP_c5598fc3_16_8_6.UVClip, ::g::Uno::Float2__New2(ind4.X, ind4.Y)));
        _draw_c5598fc3.Uniform2(9, DP_c5598fc3_16_8_6.TexCoordScale1);
        _draw_c5598fc3.Uniform2(10, DP_c5598fc3_16_8_6.TexCoordBias1);
        _draw_c5598fc3.Uniform2(11, DP_c5598fc3_16_8_6.TexCoordScale2);
        _draw_c5598fc3.Uniform2(12, DP_c5598fc3_16_8_6.TexCoordBias2);
        _draw_c5598fc3.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_c5598fc3.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[2/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_c5598fc3.Uniform(15, opacity);
        _draw_c5598fc3.Uniform12(16, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c5598fc3_4_9_2, element->WorldTransform()) : LocalTransform_c5598fc3_4_9_2);
        _draw_c5598fc3.Sampler3(17, DP_c5598fc3_16_8_6.Texture, DP_c5598fc3_16_8_6.SamplerState);
        _draw_c5598fc3.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66ccbe7e_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        _draw_66ccbe7e.BlendEnabled(true);
        _draw_66ccbe7e.DepthTestEnabled(false);
        _draw_66ccbe7e.CullFace(uPtr(dc)->CullFace());
        _draw_66ccbe7e.BlendSrcAlpha(7);
        _draw_66ccbe7e.BlendDstRgb(3);
        _draw_66ccbe7e.Use();
        _draw_66ccbe7e.Attrib1(0, 2, DrawElement_VertexData_66ccbe7e_7_2_1, 8, 0);
        _draw_66ccbe7e.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_66ccbe7e.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind5 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[3/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_66ccbe7e.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66ccbe7e_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_66ccbe7e_4_9_2);
        _draw_66ccbe7e.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_b4859fb9_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        ::g::Uno::Float4 endPoints_b4859fb9_16_17_8 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(element->ActualSize());
        _draw_b4859fb9.BlendEnabled(true);
        _draw_b4859fb9.DepthTestEnabled(false);
        _draw_b4859fb9.CullFace(uPtr(dc)->CullFace());
        _draw_b4859fb9.BlendSrcAlpha(7);
        _draw_b4859fb9.BlendDstRgb(3);
        _draw_b4859fb9.Use();
        _draw_b4859fb9.Attrib1(0, 2, DrawElement_VertexData_b4859fb9_7_2_1, 8, 0);
        _draw_b4859fb9.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_b4859fb9.Uniform2(2, uPtr(element)->ActualSize());
        _draw_b4859fb9.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_b4859fb9.Uniform(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_b4859fb9.Uniform(5, opacity);
        _draw_b4859fb9.Uniform12(6, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_b4859fb9_4_9_2, element->WorldTransform()) : LocalTransform_b4859fb9_4_9_2);
        _draw_b4859fb9.Uniform10(7, endPoints_b4859fb9_16_17_8);
        _draw_b4859fb9.Uniform2(8, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_b4859fb9_16_17_8.Z, endPoints_b4859fb9_16_17_8.W), ::g::Uno::Float2__New2(endPoints_b4859fb9_16_17_8.X, endPoints_b4859fb9_16_17_8.Y))));
        _draw_b4859fb9.Uniform(9, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_b4859fb9_16_17_8.Z, endPoints_b4859fb9_16_17_8.W), ::g::Uno::Float2__New2(endPoints_b4859fb9_16_17_8.X, endPoints_b4859fb9_16_17_8.Y))));
        _draw_b4859fb9.Sampler3(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[4/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        _draw_b4859fb9.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_55f8ce74_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_77a0ae88_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_77a0ae88_4_9_3, DrawElement_LocalTransform_77a0ae88_4_9_4);
        _draw_66ccbe7e.BlendEnabled(true);
        _draw_66ccbe7e.DepthTestEnabled(false);
        _draw_66ccbe7e.CullFace(uPtr(dc)->CullFace());
        _draw_66ccbe7e.BlendSrcAlpha(7);
        _draw_66ccbe7e.BlendDstRgb(3);
        _draw_66ccbe7e.Use();
        _draw_66ccbe7e.Attrib1(0, 2, DrawElement_VertexData_55f8ce74_7_2_1, 8, 0);
        _draw_66ccbe7e.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_66ccbe7e.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind6 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind6.X, ind6.Y, ind6.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_66ccbe7e.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_55f8ce74_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_55f8ce74_4_9_2);
        _draw_66ccbe7e.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance] :134
void SolidRectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "init_DrawCalls()");
    uArray* Vertices_77a0ae88_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[6/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_77a0ae88_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_LocalTransform_77a0ae88_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_77a0ae88_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_77a0ae88_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_c5598fc3_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_VertexData_66ccbe7e_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_VertexData_b4859fb9_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    DrawElement_VertexData_55f8ce74_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_77a0ae88_7_1_0), 0);
    _draw_77a0ae88 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle2f148815());
    _draw_c5598fc3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangled1bbfcb0());
    _draw_66ccbe7e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle7463714b());
    _draw_b4859fb9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle170ae5e6());
}

// public generated SolidRectangle New() [static] :134
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj7 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj7->ctor_();
    return obj7;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
