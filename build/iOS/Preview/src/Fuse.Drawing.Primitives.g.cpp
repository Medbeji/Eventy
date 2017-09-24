// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseDrawingPrim-c6713933.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-1398d2ef.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal-3dcc41e8.h>
#include <Fuse.Drawing.Internal-b9d8148e.h>
#include <Fuse.Drawing.Internal-bacec382.h>
#include <Fuse.Drawing.Internal-bcd6298f.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitiv-19cb13fc.h>
#include <Fuse.Drawing.Primitiv-1b750ab3.h>
#include <Fuse.Drawing.Primitiv-330a8dc2.h>
#include <Fuse.Drawing.Primitiv-5853c2d0.h>
#include <Fuse.Drawing.Primitiv-6417a2eb.h>
#include <Fuse.Drawing.Primitiv-8a015a04.h>
#include <Fuse.Drawing.Primitiv-8e6a7ca2.h>
#include <Fuse.Drawing.Primitiv-af20238a.h>
#include <Fuse.Drawing.Primitiv-caafe7bf.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitiv-f4d76a57.h>
#include <Fuse.Drawing.Primitiv-f6feaa19.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-4a875e1d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class Circle :21
// {
// static Circle() :21
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::DashedSolidColor_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferIndex), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferVertex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_1551e075), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_1551e0d6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_2ae49885), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_337df6ed), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_3851f461), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_3bb8888f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_4451e6f7), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_5d5c9248), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_78b9bb95), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_78b9bbf6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_7cb5cfa3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_7cb5cfc2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_7cb5d004), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_87cbf821), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_989fe82b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99b6ca99), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99b6cadb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99b6cafa), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_af8989f2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_cc53f0e5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_da955b3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_da95781), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_da957e2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_dd2bb74a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_e5c515b2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_e658c966), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_efe3d79c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_efe3d7bb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_efe3d7fd), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_fecfc103), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Circle, _strokeCoverage), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Circle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 35));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Circle__Fill_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Circle__Stroke_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle() :21
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) :79
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) :43
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls() :21
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :53
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New() :21
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) :27
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance] :21
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) [instance] :79
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2 extend, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Draw(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,Fuse.Drawing.Primitives.LimitCoverage,float2,float2,float)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float2 ind2;
    ::g::Uno::Float2 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float2 ind19;
    ::g::Uno::Float2 ind20;
    ::g::Uno::Float2 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;
    ::g::Uno::Float4 ind31;
    ::g::Uno::Float4 ind32;
    ::g::Uno::Float4 ind33;
    ::g::Uno::Float4 ind34;
    ::g::Uno::Float4 ind35;
    ::g::Uno::Float4 ind36;

    if (_bufferVertex == NULL)
        InitBuffers();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_87cbf821_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_87cbf821_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_87cbf821.BlendEnabled(true);
                _draw_87cbf821.DepthTestEnabled(false);
                _draw_87cbf821.CullFace(uPtr(dc)->CullFace());
                _draw_87cbf821.BlendSrcAlpha(7);
                _draw_87cbf821.BlendDstRgb(3);
                _draw_87cbf821.Use();
                _draw_87cbf821.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_87cbf821.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_87cbf821.Uniform2(2, center);
                _draw_87cbf821.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_87cbf821.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_87cbf821.Uniform2(5, (ind1 = visual->ActualSize(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
                _draw_87cbf821.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_87cbf821.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_87cbf821.Uniform(8, radius);
                _draw_87cbf821.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_87cbf821.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_87cbf821.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_87cbf821.Uniform(12, 1.0f / smoothness);
                _draw_87cbf821.Uniform(13, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_87cbf821.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_87cbf821_20_2_12, EndVec_87cbf821_20_3_13)));
                _draw_87cbf821.Uniform2(15, StartVec_87cbf821_20_2_12);
                _draw_87cbf821.Uniform2(16, EndVec_87cbf821_20_3_13);
                _draw_87cbf821.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_e658c966_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_e658c966_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_e658c966.BlendEnabled(true);
                _draw_e658c966.DepthTestEnabled(false);
                _draw_e658c966.CullFace(uPtr(dc)->CullFace());
                _draw_e658c966.BlendSrcAlpha(7);
                _draw_e658c966.BlendDstRgb(3);
                _draw_e658c966.Use();
                _draw_e658c966.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e658c966.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_e658c966.Uniform2(2, center);
                _draw_e658c966.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_e658c966.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_e658c966.Uniform2(5, (ind2 = visual->ActualSize(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
                _draw_e658c966.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_e658c966.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_e658c966.Uniform(8, radius);
                _draw_e658c966.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e658c966.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e658c966.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e658c966.Uniform(12, 1.0f / smoothness);
                _draw_e658c966.Uniform(13, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_e658c966.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_e658c966_20_2_12, EndVec_e658c966_20_3_13)));
                _draw_e658c966.Uniform2(15, StartVec_e658c966_20_2_12);
                _draw_e658c966.Uniform2(16, EndVec_e658c966_20_3_13);
                _draw_e658c966.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_989fe82b.BlendEnabled(true);
                _draw_989fe82b.DepthTestEnabled(false);
                _draw_989fe82b.CullFace(uPtr(dc)->CullFace());
                _draw_989fe82b.BlendSrcAlpha(7);
                _draw_989fe82b.BlendDstRgb(3);
                _draw_989fe82b.Use();
                _draw_989fe82b.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_989fe82b.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_989fe82b.Uniform2(2, center);
                _draw_989fe82b.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_989fe82b.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_989fe82b.Uniform2(5, (ind3 = visual->ActualSize(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_989fe82b.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_989fe82b.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_989fe82b.Uniform(8, radius);
                _draw_989fe82b.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_989fe82b.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_989fe82b.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_989fe82b.Uniform(12, 1.0f / smoothness);
                _draw_989fe82b.Uniform(13, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_989fe82b.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_4451e6f7_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_4451e6f7_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4451e6f7_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_4451e6f7.BlendEnabled(true);
                _draw_4451e6f7.DepthTestEnabled(false);
                _draw_4451e6f7.CullFace(uPtr(dc)->CullFace());
                _draw_4451e6f7.BlendSrcAlpha(7);
                _draw_4451e6f7.BlendDstRgb(3);
                _draw_4451e6f7.Const(0, DP_4451e6f7_14_8_4.NeedFract);
                _draw_4451e6f7.Const(1, DP_4451e6f7_14_8_4.Texture == NULL);
                _draw_4451e6f7.Use();
                _draw_4451e6f7.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4451e6f7.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_4451e6f7.Uniform2(4, center);
                _draw_4451e6f7.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_4451e6f7.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_4451e6f7.Uniform2(7, DP_4451e6f7_14_8_4.Origin);
                _draw_4451e6f7.Uniform2(8, DP_4451e6f7_14_8_4.Size);
                _draw_4451e6f7.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_4451e6f7_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_4451e6f7_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_4451e6f7.Uniform2(10, (ind6 = DP_4451e6f7_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_4451e6f7.Uniform2(11, DP_4451e6f7_14_8_4.TexCoordScale1);
                _draw_4451e6f7.Uniform2(12, DP_4451e6f7_14_8_4.TexCoordBias1);
                _draw_4451e6f7.Uniform2(13, DP_4451e6f7_14_8_4.TexCoordScale2);
                _draw_4451e6f7.Uniform2(14, DP_4451e6f7_14_8_4.TexCoordBias2);
                _draw_4451e6f7.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_4451e6f7.Uniform(16, radius);
                _draw_4451e6f7.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4451e6f7.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4451e6f7.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_4451e6f7.Uniform(20, 1.0f / smoothness);
                _draw_4451e6f7.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_4451e6f7.Uniform2(22, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4451e6f7_20_2_16, EndVec_4451e6f7_20_3_17)));
                _draw_4451e6f7.Uniform2(23, StartVec_4451e6f7_20_2_16);
                _draw_4451e6f7.Uniform2(24, EndVec_4451e6f7_20_3_17);
                _draw_4451e6f7.Sampler3(25, DP_4451e6f7_14_8_4.Texture, DP_4451e6f7_14_8_4.SamplerState);
                _draw_4451e6f7.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e5c515b2_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_e5c515b2_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_e5c515b2_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_e5c515b2.BlendEnabled(true);
                _draw_e5c515b2.DepthTestEnabled(false);
                _draw_e5c515b2.CullFace(uPtr(dc)->CullFace());
                _draw_e5c515b2.BlendSrcAlpha(7);
                _draw_e5c515b2.BlendDstRgb(3);
                _draw_e5c515b2.Const(0, DP_e5c515b2_14_8_4.NeedFract);
                _draw_e5c515b2.Const(1, DP_e5c515b2_14_8_4.Texture == NULL);
                _draw_e5c515b2.Use();
                _draw_e5c515b2.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e5c515b2.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_e5c515b2.Uniform2(4, center);
                _draw_e5c515b2.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_e5c515b2.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_e5c515b2.Uniform2(7, DP_e5c515b2_14_8_4.Origin);
                _draw_e5c515b2.Uniform2(8, DP_e5c515b2_14_8_4.Size);
                _draw_e5c515b2.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_e5c515b2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_e5c515b2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_e5c515b2.Uniform2(10, (ind9 = DP_e5c515b2_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_e5c515b2.Uniform2(11, DP_e5c515b2_14_8_4.TexCoordScale1);
                _draw_e5c515b2.Uniform2(12, DP_e5c515b2_14_8_4.TexCoordBias1);
                _draw_e5c515b2.Uniform2(13, DP_e5c515b2_14_8_4.TexCoordScale2);
                _draw_e5c515b2.Uniform2(14, DP_e5c515b2_14_8_4.TexCoordBias2);
                _draw_e5c515b2.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e5c515b2.Uniform(16, radius);
                _draw_e5c515b2.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e5c515b2.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e5c515b2.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_e5c515b2.Uniform(20, 1.0f / smoothness);
                _draw_e5c515b2.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e5c515b2.Uniform2(22, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_e5c515b2_20_2_16, EndVec_e5c515b2_20_3_17)));
                _draw_e5c515b2.Uniform2(23, StartVec_e5c515b2_20_2_16);
                _draw_e5c515b2.Uniform2(24, EndVec_e5c515b2_20_3_17);
                _draw_e5c515b2.Sampler3(25, DP_e5c515b2_14_8_4.Texture, DP_e5c515b2_14_8_4.SamplerState);
                _draw_e5c515b2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_337df6ed_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_337df6ed.BlendEnabled(true);
                _draw_337df6ed.DepthTestEnabled(false);
                _draw_337df6ed.CullFace(uPtr(dc)->CullFace());
                _draw_337df6ed.BlendSrcAlpha(7);
                _draw_337df6ed.BlendDstRgb(3);
                _draw_337df6ed.Const(0, DP_337df6ed_14_8_4.NeedFract);
                _draw_337df6ed.Const(1, DP_337df6ed_14_8_4.Texture == NULL);
                _draw_337df6ed.Use();
                _draw_337df6ed.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_337df6ed.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_337df6ed.Uniform2(4, center);
                _draw_337df6ed.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_337df6ed.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_337df6ed.Uniform2(7, DP_337df6ed_14_8_4.Origin);
                _draw_337df6ed.Uniform2(8, DP_337df6ed_14_8_4.Size);
                _draw_337df6ed.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind10 = DP_337df6ed_14_8_4.UVClip, ::g::Uno::Float2__New2(ind10.Z, ind10.W)), (ind11 = DP_337df6ed_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.X, ind11.Y))));
                _draw_337df6ed.Uniform2(10, (ind12 = DP_337df6ed_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y)));
                _draw_337df6ed.Uniform2(11, DP_337df6ed_14_8_4.TexCoordScale1);
                _draw_337df6ed.Uniform2(12, DP_337df6ed_14_8_4.TexCoordBias1);
                _draw_337df6ed.Uniform2(13, DP_337df6ed_14_8_4.TexCoordScale2);
                _draw_337df6ed.Uniform2(14, DP_337df6ed_14_8_4.TexCoordBias2);
                _draw_337df6ed.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_337df6ed.Uniform(16, radius);
                _draw_337df6ed.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_337df6ed.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_337df6ed.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_337df6ed.Uniform(20, 1.0f / smoothness);
                _draw_337df6ed.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_337df6ed.Sampler3(22, DP_337df6ed_14_8_4.Texture, DP_337df6ed_14_8_4.SamplerState);
                _draw_337df6ed.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_3851f461_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_3851f461_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_3851f461.BlendEnabled(true);
                _draw_3851f461.DepthTestEnabled(false);
                _draw_3851f461.CullFace(uPtr(dc)->CullFace());
                _draw_3851f461.BlendSrcAlpha(7);
                _draw_3851f461.BlendDstRgb(3);
                _draw_3851f461.Use();
                _draw_3851f461.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_3851f461.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_3851f461.Uniform2(2, center);
                _draw_3851f461.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_3851f461.Uniform(4, radius);
                _draw_3851f461.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_3851f461.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_3851f461.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_3851f461.Uniform(8, 1.0f / smoothness);
                _draw_3851f461.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind13 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_3851f461.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_3851f461.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_3851f461_20_2_7, EndVec_3851f461_20_3_8)));
                _draw_3851f461.Uniform2(12, StartVec_3851f461_20_2_7);
                _draw_3851f461.Uniform2(13, EndVec_3851f461_20_3_8);
                _draw_3851f461.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_1551e075_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1551e075_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_1551e075.BlendEnabled(true);
                _draw_1551e075.DepthTestEnabled(false);
                _draw_1551e075.CullFace(uPtr(dc)->CullFace());
                _draw_1551e075.BlendSrcAlpha(7);
                _draw_1551e075.BlendDstRgb(3);
                _draw_1551e075.Use();
                _draw_1551e075.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1551e075.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_1551e075.Uniform2(2, center);
                _draw_1551e075.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1551e075.Uniform(4, radius);
                _draw_1551e075.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1551e075.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1551e075.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_1551e075.Uniform(8, 1.0f / smoothness);
                _draw_1551e075.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind14 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_1551e075.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_1551e075.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1551e075_20_2_7, EndVec_1551e075_20_3_8)));
                _draw_1551e075.Uniform2(12, StartVec_1551e075_20_2_7);
                _draw_1551e075.Uniform2(13, EndVec_1551e075_20_3_8);
                _draw_1551e075.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_1551e0d6.BlendEnabled(true);
                _draw_1551e0d6.DepthTestEnabled(false);
                _draw_1551e0d6.CullFace(uPtr(dc)->CullFace());
                _draw_1551e0d6.BlendSrcAlpha(7);
                _draw_1551e0d6.BlendDstRgb(3);
                _draw_1551e0d6.Use();
                _draw_1551e0d6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1551e0d6.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_1551e0d6.Uniform2(2, center);
                _draw_1551e0d6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1551e0d6.Uniform(4, radius);
                _draw_1551e0d6.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1551e0d6.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1551e0d6.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_1551e0d6.Uniform(8, 1.0f / smoothness);
                _draw_1551e0d6.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind15 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_1551e0d6.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_1551e0d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_fecfc103_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_fecfc103_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_fecfc103_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_fecfc103.BlendEnabled(true);
                _draw_fecfc103.DepthTestEnabled(false);
                _draw_fecfc103.CullFace(uPtr(dc)->CullFace());
                _draw_fecfc103.BlendSrcAlpha(7);
                _draw_fecfc103.BlendDstRgb(3);
                _draw_fecfc103.Use();
                _draw_fecfc103.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_fecfc103.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_fecfc103.Uniform2(2, center);
                _draw_fecfc103.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_fecfc103.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_fecfc103.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_fecfc103.Uniform(6, radius);
                _draw_fecfc103.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_fecfc103.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_fecfc103.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_fecfc103.Uniform(10, 1.0f / smoothness);
                _draw_fecfc103.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_fecfc103.Uniform10(12, endPoints_fecfc103_14_17_6);
                _draw_fecfc103.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_fecfc103_14_17_6.Z, endPoints_fecfc103_14_17_6.W), ::g::Uno::Float2__New2(endPoints_fecfc103_14_17_6.X, endPoints_fecfc103_14_17_6.Y))));
                _draw_fecfc103.Uniform(14, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_fecfc103_14_17_6.Z, endPoints_fecfc103_14_17_6.W), ::g::Uno::Float2__New2(endPoints_fecfc103_14_17_6.X, endPoints_fecfc103_14_17_6.Y))));
                _draw_fecfc103.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_fecfc103_20_2_14, EndVec_fecfc103_20_3_15)));
                _draw_fecfc103.Uniform2(16, StartVec_fecfc103_20_2_14);
                _draw_fecfc103.Uniform2(17, EndVec_fecfc103_20_3_15);
                _draw_fecfc103.Sampler3(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_fecfc103.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_5d5c9248_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_5d5c9248_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_5d5c9248_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_5d5c9248.BlendEnabled(true);
                _draw_5d5c9248.DepthTestEnabled(false);
                _draw_5d5c9248.CullFace(uPtr(dc)->CullFace());
                _draw_5d5c9248.BlendSrcAlpha(7);
                _draw_5d5c9248.BlendDstRgb(3);
                _draw_5d5c9248.Use();
                _draw_5d5c9248.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_5d5c9248.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_5d5c9248.Uniform2(2, center);
                _draw_5d5c9248.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_5d5c9248.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_5d5c9248.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_5d5c9248.Uniform(6, radius);
                _draw_5d5c9248.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_5d5c9248.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_5d5c9248.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_5d5c9248.Uniform(10, 1.0f / smoothness);
                _draw_5d5c9248.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_5d5c9248.Uniform10(12, endPoints_5d5c9248_14_17_6);
                _draw_5d5c9248.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_5d5c9248_14_17_6.Z, endPoints_5d5c9248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_5d5c9248_14_17_6.X, endPoints_5d5c9248_14_17_6.Y))));
                _draw_5d5c9248.Uniform(14, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_5d5c9248_14_17_6.Z, endPoints_5d5c9248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_5d5c9248_14_17_6.X, endPoints_5d5c9248_14_17_6.Y))));
                _draw_5d5c9248.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_5d5c9248_20_2_14, EndVec_5d5c9248_20_3_15)));
                _draw_5d5c9248.Uniform2(16, StartVec_5d5c9248_20_2_14);
                _draw_5d5c9248.Uniform2(17, EndVec_5d5c9248_20_3_15);
                _draw_5d5c9248.Sampler3(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_5d5c9248.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_cc53f0e5_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_cc53f0e5.BlendEnabled(true);
                _draw_cc53f0e5.DepthTestEnabled(false);
                _draw_cc53f0e5.CullFace(uPtr(dc)->CullFace());
                _draw_cc53f0e5.BlendSrcAlpha(7);
                _draw_cc53f0e5.BlendDstRgb(3);
                _draw_cc53f0e5.Use();
                _draw_cc53f0e5.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_cc53f0e5.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_cc53f0e5.Uniform2(2, center);
                _draw_cc53f0e5.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_cc53f0e5.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_cc53f0e5.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_cc53f0e5.Uniform(6, radius);
                _draw_cc53f0e5.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_cc53f0e5.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_cc53f0e5.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_cc53f0e5.Uniform(10, 1.0f / smoothness);
                _draw_cc53f0e5.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_cc53f0e5.Uniform10(12, endPoints_cc53f0e5_14_17_6);
                _draw_cc53f0e5.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_cc53f0e5_14_17_6.Z, endPoints_cc53f0e5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_cc53f0e5_14_17_6.X, endPoints_cc53f0e5_14_17_6.Y))));
                _draw_cc53f0e5.Uniform(14, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_cc53f0e5_14_17_6.Z, endPoints_cc53f0e5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_cc53f0e5_14_17_6.X, endPoints_cc53f0e5_14_17_6.Y))));
                _draw_cc53f0e5.Sampler3(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_cc53f0e5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_2ae49885_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_2ae49885_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_2ae49885.BlendEnabled(true);
                _draw_2ae49885.DepthTestEnabled(false);
                _draw_2ae49885.CullFace(uPtr(dc)->CullFace());
                _draw_2ae49885.BlendSrcAlpha(7);
                _draw_2ae49885.BlendDstRgb(3);
                _draw_2ae49885.Use();
                _draw_2ae49885.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2ae49885.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_2ae49885.Uniform2(2, center);
                _draw_2ae49885.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_2ae49885.Uniform(4, radius);
                _draw_2ae49885.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2ae49885.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2ae49885.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_2ae49885.Uniform(8, 1.0f / smoothness);
                _draw_2ae49885.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind16 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind16.X, ind16.Y, ind16.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2ae49885.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_2ae49885_20_2_7, EndVec_2ae49885_20_3_8)));
                _draw_2ae49885.Uniform2(11, StartVec_2ae49885_20_2_7);
                _draw_2ae49885.Uniform2(12, EndVec_2ae49885_20_3_8);
                _draw_2ae49885.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_dd2bb74a_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_dd2bb74a_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_dd2bb74a.BlendEnabled(true);
                _draw_dd2bb74a.DepthTestEnabled(false);
                _draw_dd2bb74a.CullFace(uPtr(dc)->CullFace());
                _draw_dd2bb74a.BlendSrcAlpha(7);
                _draw_dd2bb74a.BlendDstRgb(3);
                _draw_dd2bb74a.Use();
                _draw_dd2bb74a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_dd2bb74a.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_dd2bb74a.Uniform2(2, center);
                _draw_dd2bb74a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_dd2bb74a.Uniform(4, radius);
                _draw_dd2bb74a.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_dd2bb74a.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_dd2bb74a.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_dd2bb74a.Uniform(8, 1.0f / smoothness);
                _draw_dd2bb74a.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_dd2bb74a.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_dd2bb74a_20_2_7, EndVec_dd2bb74a_20_3_8)));
                _draw_dd2bb74a.Uniform2(11, StartVec_dd2bb74a_20_2_7);
                _draw_dd2bb74a.Uniform2(12, EndVec_dd2bb74a_20_3_8);
                _draw_dd2bb74a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_3bb8888f.BlendEnabled(true);
                _draw_3bb8888f.DepthTestEnabled(false);
                _draw_3bb8888f.CullFace(uPtr(dc)->CullFace());
                _draw_3bb8888f.BlendSrcAlpha(7);
                _draw_3bb8888f.BlendDstRgb(3);
                _draw_3bb8888f.Use();
                _draw_3bb8888f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_3bb8888f.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_3bb8888f.Uniform2(2, center);
                _draw_3bb8888f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_3bb8888f.Uniform(4, radius);
                _draw_3bb8888f.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_3bb8888f.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_3bb8888f.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_3bb8888f.Uniform(8, 1.0f / smoothness);
                _draw_3bb8888f.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_3bb8888f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_78b9bb95_20_2_11 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_78b9bb95_20_3_12 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_78b9bb95.BlendEnabled(true);
                _draw_78b9bb95.DepthTestEnabled(false);
                _draw_78b9bb95.CullFace(uPtr(dc)->CullFace());
                _draw_78b9bb95.BlendSrcAlpha(7);
                _draw_78b9bb95.BlendDstRgb(3);
                _draw_78b9bb95.Use();
                _draw_78b9bb95.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_78b9bb95.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_78b9bb95.Uniform2(2, center);
                _draw_78b9bb95.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_78b9bb95.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_78b9bb95.Uniform2(5, (ind19 = visual->ActualSize(), ::g::Uno::Float2__New2(ind19.X, ind19.Y)));
                _draw_78b9bb95.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_78b9bb95.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_78b9bb95.Uniform(8, radius);
                _draw_78b9bb95.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_78b9bb95.Uniform(10, 1.0f / smoothness);
                _draw_78b9bb95.Uniform(11, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_78b9bb95.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_78b9bb95_20_2_11, EndVec_78b9bb95_20_3_12)));
                _draw_78b9bb95.Uniform2(13, StartVec_78b9bb95_20_2_11);
                _draw_78b9bb95.Uniform2(14, EndVec_78b9bb95_20_3_12);
                _draw_78b9bb95.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_78b9bbf6_20_2_11 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_78b9bbf6_20_3_12 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_78b9bbf6.BlendEnabled(true);
                _draw_78b9bbf6.DepthTestEnabled(false);
                _draw_78b9bbf6.CullFace(uPtr(dc)->CullFace());
                _draw_78b9bbf6.BlendSrcAlpha(7);
                _draw_78b9bbf6.BlendDstRgb(3);
                _draw_78b9bbf6.Use();
                _draw_78b9bbf6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_78b9bbf6.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_78b9bbf6.Uniform2(2, center);
                _draw_78b9bbf6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_78b9bbf6.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_78b9bbf6.Uniform2(5, (ind20 = visual->ActualSize(), ::g::Uno::Float2__New2(ind20.X, ind20.Y)));
                _draw_78b9bbf6.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_78b9bbf6.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_78b9bbf6.Uniform(8, radius);
                _draw_78b9bbf6.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_78b9bbf6.Uniform(10, 1.0f / smoothness);
                _draw_78b9bbf6.Uniform(11, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_78b9bbf6.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_78b9bbf6_20_2_11, EndVec_78b9bbf6_20_3_12)));
                _draw_78b9bbf6.Uniform2(13, StartVec_78b9bbf6_20_2_11);
                _draw_78b9bbf6.Uniform2(14, EndVec_78b9bbf6_20_3_12);
                _draw_78b9bbf6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_af8989f2.BlendEnabled(true);
                _draw_af8989f2.DepthTestEnabled(false);
                _draw_af8989f2.CullFace(uPtr(dc)->CullFace());
                _draw_af8989f2.BlendSrcAlpha(7);
                _draw_af8989f2.BlendDstRgb(3);
                _draw_af8989f2.Use();
                _draw_af8989f2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_af8989f2.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_af8989f2.Uniform2(2, center);
                _draw_af8989f2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_af8989f2.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_af8989f2.Uniform2(5, (ind21 = visual->ActualSize(), ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_af8989f2.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_af8989f2.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_af8989f2.Uniform(8, radius);
                _draw_af8989f2.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_af8989f2.Uniform(10, 1.0f / smoothness);
                _draw_af8989f2.Uniform(11, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_af8989f2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_99b6cadb_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_99b6cadb_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_99b6cadb_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_99b6cadb.BlendEnabled(true);
                _draw_99b6cadb.DepthTestEnabled(false);
                _draw_99b6cadb.CullFace(uPtr(dc)->CullFace());
                _draw_99b6cadb.BlendSrcAlpha(7);
                _draw_99b6cadb.BlendDstRgb(3);
                _draw_99b6cadb.Const(0, DP_99b6cadb_14_8_4.NeedFract);
                _draw_99b6cadb.Const(1, DP_99b6cadb_14_8_4.Texture == NULL);
                _draw_99b6cadb.Use();
                _draw_99b6cadb.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99b6cadb.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99b6cadb.Uniform2(4, center);
                _draw_99b6cadb.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_99b6cadb.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_99b6cadb.Uniform2(7, DP_99b6cadb_14_8_4.Origin);
                _draw_99b6cadb.Uniform2(8, DP_99b6cadb_14_8_4.Size);
                _draw_99b6cadb.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_99b6cadb_14_8_4.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_99b6cadb_14_8_4.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_99b6cadb.Uniform2(10, (ind24 = DP_99b6cadb_14_8_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_99b6cadb.Uniform2(11, DP_99b6cadb_14_8_4.TexCoordScale1);
                _draw_99b6cadb.Uniform2(12, DP_99b6cadb_14_8_4.TexCoordBias1);
                _draw_99b6cadb.Uniform2(13, DP_99b6cadb_14_8_4.TexCoordScale2);
                _draw_99b6cadb.Uniform2(14, DP_99b6cadb_14_8_4.TexCoordBias2);
                _draw_99b6cadb.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_99b6cadb.Uniform(16, radius);
                _draw_99b6cadb.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_99b6cadb.Uniform(18, 1.0f / smoothness);
                _draw_99b6cadb.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_99b6cadb.Uniform2(20, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_99b6cadb_20_2_15, EndVec_99b6cadb_20_3_16)));
                _draw_99b6cadb.Uniform2(21, StartVec_99b6cadb_20_2_15);
                _draw_99b6cadb.Uniform2(22, EndVec_99b6cadb_20_3_16);
                _draw_99b6cadb.Sampler3(23, DP_99b6cadb_14_8_4.Texture, DP_99b6cadb_14_8_4.SamplerState);
                _draw_99b6cadb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_99b6cafa_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_99b6cafa_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_99b6cafa_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_99b6cafa.BlendEnabled(true);
                _draw_99b6cafa.DepthTestEnabled(false);
                _draw_99b6cafa.CullFace(uPtr(dc)->CullFace());
                _draw_99b6cafa.BlendSrcAlpha(7);
                _draw_99b6cafa.BlendDstRgb(3);
                _draw_99b6cafa.Const(0, DP_99b6cafa_14_8_4.NeedFract);
                _draw_99b6cafa.Const(1, DP_99b6cafa_14_8_4.Texture == NULL);
                _draw_99b6cafa.Use();
                _draw_99b6cafa.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99b6cafa.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99b6cafa.Uniform2(4, center);
                _draw_99b6cafa.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_99b6cafa.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_99b6cafa.Uniform2(7, DP_99b6cafa_14_8_4.Origin);
                _draw_99b6cafa.Uniform2(8, DP_99b6cafa_14_8_4.Size);
                _draw_99b6cafa.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind25 = DP_99b6cafa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind25.Z, ind25.W)), (ind26 = DP_99b6cafa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind26.X, ind26.Y))));
                _draw_99b6cafa.Uniform2(10, (ind27 = DP_99b6cafa_14_8_4.UVClip, ::g::Uno::Float2__New2(ind27.X, ind27.Y)));
                _draw_99b6cafa.Uniform2(11, DP_99b6cafa_14_8_4.TexCoordScale1);
                _draw_99b6cafa.Uniform2(12, DP_99b6cafa_14_8_4.TexCoordBias1);
                _draw_99b6cafa.Uniform2(13, DP_99b6cafa_14_8_4.TexCoordScale2);
                _draw_99b6cafa.Uniform2(14, DP_99b6cafa_14_8_4.TexCoordBias2);
                _draw_99b6cafa.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_99b6cafa.Uniform(16, radius);
                _draw_99b6cafa.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_99b6cafa.Uniform(18, 1.0f / smoothness);
                _draw_99b6cafa.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_99b6cafa.Uniform2(20, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_99b6cafa_20_2_15, EndVec_99b6cafa_20_3_16)));
                _draw_99b6cafa.Uniform2(21, StartVec_99b6cafa_20_2_15);
                _draw_99b6cafa.Uniform2(22, EndVec_99b6cafa_20_3_16);
                _draw_99b6cafa.Sampler3(23, DP_99b6cafa_14_8_4.Texture, DP_99b6cafa_14_8_4.SamplerState);
                _draw_99b6cafa.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_99b6ca99_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_99b6ca99.BlendEnabled(true);
                _draw_99b6ca99.DepthTestEnabled(false);
                _draw_99b6ca99.CullFace(uPtr(dc)->CullFace());
                _draw_99b6ca99.BlendSrcAlpha(7);
                _draw_99b6ca99.BlendDstRgb(3);
                _draw_99b6ca99.Const(0, DP_99b6ca99_14_8_4.NeedFract);
                _draw_99b6ca99.Const(1, DP_99b6ca99_14_8_4.Texture == NULL);
                _draw_99b6ca99.Use();
                _draw_99b6ca99.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99b6ca99.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99b6ca99.Uniform2(4, center);
                _draw_99b6ca99.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_99b6ca99.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_99b6ca99.Uniform2(7, DP_99b6ca99_14_8_4.Origin);
                _draw_99b6ca99.Uniform2(8, DP_99b6ca99_14_8_4.Size);
                _draw_99b6ca99.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind28 = DP_99b6ca99_14_8_4.UVClip, ::g::Uno::Float2__New2(ind28.Z, ind28.W)), (ind29 = DP_99b6ca99_14_8_4.UVClip, ::g::Uno::Float2__New2(ind29.X, ind29.Y))));
                _draw_99b6ca99.Uniform2(10, (ind30 = DP_99b6ca99_14_8_4.UVClip, ::g::Uno::Float2__New2(ind30.X, ind30.Y)));
                _draw_99b6ca99.Uniform2(11, DP_99b6ca99_14_8_4.TexCoordScale1);
                _draw_99b6ca99.Uniform2(12, DP_99b6ca99_14_8_4.TexCoordBias1);
                _draw_99b6ca99.Uniform2(13, DP_99b6ca99_14_8_4.TexCoordScale2);
                _draw_99b6ca99.Uniform2(14, DP_99b6ca99_14_8_4.TexCoordBias2);
                _draw_99b6ca99.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_99b6ca99.Uniform(16, radius);
                _draw_99b6ca99.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_99b6ca99.Uniform(18, 1.0f / smoothness);
                _draw_99b6ca99.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_99b6ca99.Sampler3(20, DP_99b6ca99_14_8_4.Texture, DP_99b6ca99_14_8_4.SamplerState);
                _draw_99b6ca99.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_efe3d7fd_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_efe3d7fd_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_efe3d7fd.BlendEnabled(true);
                _draw_efe3d7fd.DepthTestEnabled(false);
                _draw_efe3d7fd.CullFace(uPtr(dc)->CullFace());
                _draw_efe3d7fd.BlendSrcAlpha(7);
                _draw_efe3d7fd.BlendDstRgb(3);
                _draw_efe3d7fd.Use();
                _draw_efe3d7fd.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_efe3d7fd.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_efe3d7fd.Uniform2(2, center);
                _draw_efe3d7fd.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_efe3d7fd.Uniform(4, radius);
                _draw_efe3d7fd.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_efe3d7fd.Uniform(6, 1.0f / smoothness);
                _draw_efe3d7fd.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind31 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind31.X, ind31.Y, ind31.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_efe3d7fd.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_efe3d7fd.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_efe3d7fd_20_2_6, EndVec_efe3d7fd_20_3_7)));
                _draw_efe3d7fd.Uniform2(10, StartVec_efe3d7fd_20_2_6);
                _draw_efe3d7fd.Uniform2(11, EndVec_efe3d7fd_20_3_7);
                _draw_efe3d7fd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_efe3d79c_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_efe3d79c_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_efe3d79c.BlendEnabled(true);
                _draw_efe3d79c.DepthTestEnabled(false);
                _draw_efe3d79c.CullFace(uPtr(dc)->CullFace());
                _draw_efe3d79c.BlendSrcAlpha(7);
                _draw_efe3d79c.BlendDstRgb(3);
                _draw_efe3d79c.Use();
                _draw_efe3d79c.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_efe3d79c.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_efe3d79c.Uniform2(2, center);
                _draw_efe3d79c.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_efe3d79c.Uniform(4, radius);
                _draw_efe3d79c.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_efe3d79c.Uniform(6, 1.0f / smoothness);
                _draw_efe3d79c.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind32 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind32.X, ind32.Y, ind32.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_efe3d79c.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_efe3d79c.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_efe3d79c_20_2_6, EndVec_efe3d79c_20_3_7)));
                _draw_efe3d79c.Uniform2(10, StartVec_efe3d79c_20_2_6);
                _draw_efe3d79c.Uniform2(11, EndVec_efe3d79c_20_3_7);
                _draw_efe3d79c.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_efe3d7bb.BlendEnabled(true);
                _draw_efe3d7bb.DepthTestEnabled(false);
                _draw_efe3d7bb.CullFace(uPtr(dc)->CullFace());
                _draw_efe3d7bb.BlendSrcAlpha(7);
                _draw_efe3d7bb.BlendDstRgb(3);
                _draw_efe3d7bb.Use();
                _draw_efe3d7bb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_efe3d7bb.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_efe3d7bb.Uniform2(2, center);
                _draw_efe3d7bb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_efe3d7bb.Uniform(4, radius);
                _draw_efe3d7bb.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_efe3d7bb.Uniform(6, 1.0f / smoothness);
                _draw_efe3d7bb.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind33 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind33.X, ind33.Y, ind33.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_efe3d7bb.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_efe3d7bb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_da955b3_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_da955b3_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_da955b3_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_da955b3.BlendEnabled(true);
                _draw_da955b3.DepthTestEnabled(false);
                _draw_da955b3.CullFace(uPtr(dc)->CullFace());
                _draw_da955b3.BlendSrcAlpha(7);
                _draw_da955b3.BlendDstRgb(3);
                _draw_da955b3.Use();
                _draw_da955b3.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_da955b3.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_da955b3.Uniform2(2, center);
                _draw_da955b3.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_da955b3.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_da955b3.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_da955b3.Uniform(6, radius);
                _draw_da955b3.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_da955b3.Uniform(8, 1.0f / smoothness);
                _draw_da955b3.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_da955b3.Uniform10(10, endPoints_da955b3_14_17_6);
                _draw_da955b3.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da955b3_14_17_6.Z, endPoints_da955b3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da955b3_14_17_6.X, endPoints_da955b3_14_17_6.Y))));
                _draw_da955b3.Uniform(12, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da955b3_14_17_6.Z, endPoints_da955b3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da955b3_14_17_6.X, endPoints_da955b3_14_17_6.Y))));
                _draw_da955b3.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_da955b3_20_2_13, EndVec_da955b3_20_3_14)));
                _draw_da955b3.Uniform2(14, StartVec_da955b3_20_2_13);
                _draw_da955b3.Uniform2(15, EndVec_da955b3_20_3_14);
                _draw_da955b3.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_da955b3.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_da957e2_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_da957e2_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_da957e2_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_da957e2.BlendEnabled(true);
                _draw_da957e2.DepthTestEnabled(false);
                _draw_da957e2.CullFace(uPtr(dc)->CullFace());
                _draw_da957e2.BlendSrcAlpha(7);
                _draw_da957e2.BlendDstRgb(3);
                _draw_da957e2.Use();
                _draw_da957e2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_da957e2.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_da957e2.Uniform2(2, center);
                _draw_da957e2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_da957e2.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_da957e2.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_da957e2.Uniform(6, radius);
                _draw_da957e2.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_da957e2.Uniform(8, 1.0f / smoothness);
                _draw_da957e2.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_da957e2.Uniform10(10, endPoints_da957e2_14_17_6);
                _draw_da957e2.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da957e2_14_17_6.Z, endPoints_da957e2_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da957e2_14_17_6.X, endPoints_da957e2_14_17_6.Y))));
                _draw_da957e2.Uniform(12, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da957e2_14_17_6.Z, endPoints_da957e2_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da957e2_14_17_6.X, endPoints_da957e2_14_17_6.Y))));
                _draw_da957e2.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_da957e2_20_2_13, EndVec_da957e2_20_3_14)));
                _draw_da957e2.Uniform2(14, StartVec_da957e2_20_2_13);
                _draw_da957e2.Uniform2(15, EndVec_da957e2_20_3_14);
                _draw_da957e2.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_da957e2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_da95781_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_da95781.BlendEnabled(true);
                _draw_da95781.DepthTestEnabled(false);
                _draw_da95781.CullFace(uPtr(dc)->CullFace());
                _draw_da95781.BlendSrcAlpha(7);
                _draw_da95781.BlendDstRgb(3);
                _draw_da95781.Use();
                _draw_da95781.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_da95781.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_da95781.Uniform2(2, center);
                _draw_da95781.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_da95781.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_da95781.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_da95781.Uniform(6, radius);
                _draw_da95781.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_da95781.Uniform(8, 1.0f / smoothness);
                _draw_da95781.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_da95781.Uniform10(10, endPoints_da95781_14_17_6);
                _draw_da95781.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da95781_14_17_6.Z, endPoints_da95781_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da95781_14_17_6.X, endPoints_da95781_14_17_6.Y))));
                _draw_da95781.Uniform(12, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_da95781_14_17_6.Z, endPoints_da95781_14_17_6.W), ::g::Uno::Float2__New2(endPoints_da95781_14_17_6.X, endPoints_da95781_14_17_6.Y))));
                _draw_da95781.Sampler3(13, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_da95781.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_7cb5d004_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_7cb5d004_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_7cb5d004.BlendEnabled(true);
                _draw_7cb5d004.DepthTestEnabled(false);
                _draw_7cb5d004.CullFace(uPtr(dc)->CullFace());
                _draw_7cb5d004.BlendSrcAlpha(7);
                _draw_7cb5d004.BlendDstRgb(3);
                _draw_7cb5d004.Use();
                _draw_7cb5d004.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_7cb5d004.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_7cb5d004.Uniform2(2, center);
                _draw_7cb5d004.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_7cb5d004.Uniform(4, radius);
                _draw_7cb5d004.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_7cb5d004.Uniform(6, 1.0f / smoothness);
                _draw_7cb5d004.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind34 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind34.X, ind34.Y, ind34.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_7cb5d004.Uniform2(8, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_7cb5d004_20_2_6, EndVec_7cb5d004_20_3_7)));
                _draw_7cb5d004.Uniform2(9, StartVec_7cb5d004_20_2_6);
                _draw_7cb5d004.Uniform2(10, EndVec_7cb5d004_20_3_7);
                _draw_7cb5d004.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_7cb5cfa3_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_7cb5cfa3_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_7cb5cfa3.BlendEnabled(true);
                _draw_7cb5cfa3.DepthTestEnabled(false);
                _draw_7cb5cfa3.CullFace(uPtr(dc)->CullFace());
                _draw_7cb5cfa3.BlendSrcAlpha(7);
                _draw_7cb5cfa3.BlendDstRgb(3);
                _draw_7cb5cfa3.Use();
                _draw_7cb5cfa3.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_7cb5cfa3.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_7cb5cfa3.Uniform2(2, center);
                _draw_7cb5cfa3.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_7cb5cfa3.Uniform(4, radius);
                _draw_7cb5cfa3.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_7cb5cfa3.Uniform(6, 1.0f / smoothness);
                _draw_7cb5cfa3.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind35 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind35.X, ind35.Y, ind35.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_7cb5cfa3.Uniform2(8, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_7cb5cfa3_20_2_6, EndVec_7cb5cfa3_20_3_7)));
                _draw_7cb5cfa3.Uniform2(9, StartVec_7cb5cfa3_20_2_6);
                _draw_7cb5cfa3.Uniform2(10, EndVec_7cb5cfa3_20_3_7);
                _draw_7cb5cfa3.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_7cb5cfc2.BlendEnabled(true);
                _draw_7cb5cfc2.DepthTestEnabled(false);
                _draw_7cb5cfc2.CullFace(uPtr(dc)->CullFace());
                _draw_7cb5cfc2.BlendSrcAlpha(7);
                _draw_7cb5cfc2.BlendDstRgb(3);
                _draw_7cb5cfc2.Use();
                _draw_7cb5cfc2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_7cb5cfc2.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_7cb5cfc2.Uniform2(2, center);
                _draw_7cb5cfc2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_7cb5cfc2.Uniform(4, radius);
                _draw_7cb5cfc2.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_7cb5cfc2.Uniform(6, 1.0f / smoothness);
                _draw_7cb5cfc2.Uniform10(7, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind36 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind36.X, ind36.Y, ind36.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_7cb5cfc2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance] :43
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float)");
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private generated void init_DrawCalls() [instance] :21
void Circle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "init_DrawCalls()");
    _draw_87cbf821 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle038d0b56());
    _draw_e658c966 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle60e596bb());
    _draw_989fe82b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlebe3e2220());
    _draw_4451e6f7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4c78c62c());
    _draw_e5c515b2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleef203ac7());
    _draw_337df6ed = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle91c7af62());
    _draw_3851f461 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle01247f96());
    _draw_1551e075 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe());
    _draw_1551e0d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff());
    _draw_fecfc103 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74());
    _draw_5d5c9248 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled802ead9());
    _draw_cc53f0e5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4a971b16());
    _draw_2ae49885 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlea7efa75e());
    _draw_dd2bb74a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle054832c3());
    _draw_3bb8888f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle62a0be28());
    _draw_78b9bb95 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee8ef393e());
    _draw_78b9bbf6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee8ef393f());
    _draw_af8989f2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled0e59707());
    _draw_99b6cadb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0962c76c());
    _draw_99b6cafa = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0962c76b());
    _draw_99b6ca99 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0962c76a());
    _draw_efe3d7fd = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28d6b1a());
    _draw_efe3d79c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28d6b19());
    _draw_efe3d7bb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28d6b18());
    _draw_da955b3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle832ca9c8());
    _draw_da957e2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle832ca9d7());
    _draw_da95781 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle832ca9d6());
    _draw_7cb5d004 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7c3f435());
    _draw_7cb5cfa3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7c3f434());
    _draw_7cb5cfc2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7c3f433());
}

// private void InitBuffers() [instance] :53
void Circle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "InitBuffers()");
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance] :27
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Circle New() [static] :21
Circle* Circle::New1()
{
    Circle* obj37 = (Circle*)uNew(Circle_typeof());
    obj37->ctor_();
    return obj37;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage :589
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage() :589
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New() :589
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance] :589
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static] :589
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage :584
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage() :584
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New() :584
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance] :584
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static] :584
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal abstract class Coverage :200
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage() :200
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance] :200
void Coverage::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal class Falloff :219
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff() :219
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New() :219
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance] :219
void Falloff::ctor_()
{
}

// public generated Falloff New() [static] :219
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class FillCoverage :204
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage() :204
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New() :204
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance] :204
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static] :204
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal abstract class LimitCoverage :12
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage() :12
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance] :12
void LimitCoverage::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class OneLimitCoverage :16
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage() :16
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New() :16
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance] :16
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static] :16
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class Rectangle :231
// {
// static Rectangle() :231
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[10] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::DashedSolidColor_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[13] = ::TYPES[10/*float[]*/]->Array();
    ::TYPES[14] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _bufferDistance), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_1a0ff276), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_270a9c68), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_2b82e760), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_2b82e77f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_37dd72b4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_48b7d8c3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_74c263e5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_85953c31), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_8c000b28), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_8d31c878), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_a73f4dc1), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_d9c096a5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_dd2b0145), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e193fb34), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942474), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e194259b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942cb4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942d57), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e19434f4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1943513), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _edgeInfo), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _shadowFalloff), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _strokeCoverage), 0,
        ::TYPES[10/*float[]*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _uniforms), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _vertexInfo), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Rectangle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 27));
    type->Reflection.SetFunctions(4,
        new uFunction("Fill", NULL, (void*)Rectangle__Fill_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, type, 0),
        new uFunction("Shadow", NULL, (void*)Rectangle__Shadow_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Stroke", NULL, (void*)Rectangle__Stroke_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle() :231
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b) :267
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) :471
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :252
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls() :231
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :302
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a) :283
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New() :231
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :260
void Rectangle__Shadow_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Shadow(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) :236
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b) :275
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance] :231
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[10/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance] :267
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "add(float[],float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance] :471
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Draw(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,float2,float2,float,[Fuse.Drawing.Primitives.Falloff])");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[11/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e1942474.BlendEnabled(true);
                _draw_e1942474.DepthTestEnabled(false);
                _draw_e1942474.CullFace(uPtr(dc)->CullFace());
                _draw_e1942474.BlendSrcAlpha(7);
                _draw_e1942474.BlendDstRgb(3);
                _draw_e1942474.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942474.Use();
                _draw_e1942474.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942474.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942474.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942474.Uniform1(4, _uniforms);
                _draw_e1942474.Uniform2(5, position);
                _draw_e1942474.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942474.Uniform2(7, csz);
                _draw_e1942474.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e1942474.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_e1942474.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_e1942474.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942474.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942474.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_e1942474.Uniform(14, 1.0f / smoothness);
                _draw_e1942474.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_e1942474.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e194259b.BlendEnabled(true);
                _draw_e194259b.DepthTestEnabled(false);
                _draw_e194259b.CullFace(uPtr(dc)->CullFace());
                _draw_e194259b.BlendSrcAlpha(7);
                _draw_e194259b.BlendDstRgb(3);
                _draw_e194259b.Const1(0, uPtr(_uniforms)->Length());
                _draw_e194259b.Use();
                _draw_e194259b.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e194259b.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e194259b.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e194259b.Uniform1(4, _uniforms);
                _draw_e194259b.Uniform2(5, position);
                _draw_e194259b.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e194259b.Uniform2(7, csz);
                _draw_e194259b.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e194259b.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_e194259b.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_e194259b.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e194259b.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e194259b.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_e194259b.Uniform(14, 1.0f / smoothness);
                _draw_e194259b.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_e194259b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942cb4_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942cb4.BlendEnabled(true);
                _draw_e1942cb4.DepthTestEnabled(false);
                _draw_e1942cb4.CullFace(uPtr(dc)->CullFace());
                _draw_e1942cb4.BlendSrcAlpha(7);
                _draw_e1942cb4.BlendDstRgb(3);
                _draw_e1942cb4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942cb4.Const(1, DP_e1942cb4_14_8_4.NeedFract);
                _draw_e1942cb4.Const(2, DP_e1942cb4_14_8_4.Texture == NULL);
                _draw_e1942cb4.Use();
                _draw_e1942cb4.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942cb4.Uniform1(6, _uniforms);
                _draw_e1942cb4.Uniform2(7, position);
                _draw_e1942cb4.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942cb4.Uniform2(9, csz);
                _draw_e1942cb4.Uniform2(10, DP_e1942cb4_14_8_4.Origin);
                _draw_e1942cb4.Uniform2(11, DP_e1942cb4_14_8_4.Size);
                _draw_e1942cb4.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_e1942cb4.Uniform2(13, (ind3 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_e1942cb4.Uniform2(14, DP_e1942cb4_14_8_4.TexCoordScale1);
                _draw_e1942cb4.Uniform2(15, DP_e1942cb4_14_8_4.TexCoordBias1);
                _draw_e1942cb4.Uniform2(16, DP_e1942cb4_14_8_4.TexCoordScale2);
                _draw_e1942cb4.Uniform2(17, DP_e1942cb4_14_8_4.TexCoordBias2);
                _draw_e1942cb4.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942cb4.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942cb4.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942cb4.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_e1942cb4.Uniform(22, 1.0f / smoothness);
                _draw_e1942cb4.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942cb4.Sampler3(24, DP_e1942cb4_14_8_4.Texture, DP_e1942cb4_14_8_4.SamplerState);
                _draw_e1942cb4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942d57_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942d57.BlendEnabled(true);
                _draw_e1942d57.DepthTestEnabled(false);
                _draw_e1942d57.CullFace(uPtr(dc)->CullFace());
                _draw_e1942d57.BlendSrcAlpha(7);
                _draw_e1942d57.BlendDstRgb(3);
                _draw_e1942d57.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942d57.Const(1, DP_e1942d57_14_8_4.NeedFract);
                _draw_e1942d57.Const(2, DP_e1942d57_14_8_4.Texture == NULL);
                _draw_e1942d57.Use();
                _draw_e1942d57.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942d57.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942d57.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942d57.Uniform1(6, _uniforms);
                _draw_e1942d57.Uniform2(7, position);
                _draw_e1942d57.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942d57.Uniform2(9, csz);
                _draw_e1942d57.Uniform2(10, DP_e1942d57_14_8_4.Origin);
                _draw_e1942d57.Uniform2(11, DP_e1942d57_14_8_4.Size);
                _draw_e1942d57.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_e1942d57.Uniform2(13, (ind6 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_e1942d57.Uniform2(14, DP_e1942d57_14_8_4.TexCoordScale1);
                _draw_e1942d57.Uniform2(15, DP_e1942d57_14_8_4.TexCoordBias1);
                _draw_e1942d57.Uniform2(16, DP_e1942d57_14_8_4.TexCoordScale2);
                _draw_e1942d57.Uniform2(17, DP_e1942d57_14_8_4.TexCoordBias2);
                _draw_e1942d57.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942d57.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942d57.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942d57.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_e1942d57.Uniform(22, 1.0f / smoothness);
                _draw_e1942d57.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942d57.Sampler3(24, DP_e1942d57_14_8_4.Texture, DP_e1942d57_14_8_4.SamplerState);
                _draw_e1942d57.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e19434f4.BlendEnabled(true);
                _draw_e19434f4.DepthTestEnabled(false);
                _draw_e19434f4.CullFace(uPtr(dc)->CullFace());
                _draw_e19434f4.BlendSrcAlpha(7);
                _draw_e19434f4.BlendDstRgb(3);
                _draw_e19434f4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e19434f4.Use();
                _draw_e19434f4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e19434f4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e19434f4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e19434f4.Uniform1(4, _uniforms);
                _draw_e19434f4.Uniform2(5, position);
                _draw_e19434f4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e19434f4.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e19434f4.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e19434f4.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_e19434f4.Uniform(10, 1.0f / smoothness);
                _draw_e19434f4.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_e19434f4.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e19434f4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e1943513.BlendEnabled(true);
                _draw_e1943513.DepthTestEnabled(false);
                _draw_e1943513.CullFace(uPtr(dc)->CullFace());
                _draw_e1943513.BlendSrcAlpha(7);
                _draw_e1943513.BlendDstRgb(3);
                _draw_e1943513.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1943513.Use();
                _draw_e1943513.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1943513.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1943513.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1943513.Uniform1(4, _uniforms);
                _draw_e1943513.Uniform2(5, position);
                _draw_e1943513.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1943513.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1943513.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1943513.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_e1943513.Uniform(10, 1.0f / smoothness);
                _draw_e1943513.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_e1943513.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e1943513.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_e193fb34_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_e193fb34.BlendEnabled(true);
                _draw_e193fb34.DepthTestEnabled(false);
                _draw_e193fb34.CullFace(uPtr(dc)->CullFace());
                _draw_e193fb34.BlendSrcAlpha(7);
                _draw_e193fb34.BlendDstRgb(3);
                _draw_e193fb34.Const1(0, uPtr(_uniforms)->Length());
                _draw_e193fb34.Use();
                _draw_e193fb34.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e193fb34.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e193fb34.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e193fb34.Uniform1(4, _uniforms);
                _draw_e193fb34.Uniform2(5, position);
                _draw_e193fb34.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e193fb34.Uniform2(7, csz);
                _draw_e193fb34.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e193fb34.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e193fb34.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e193fb34.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e193fb34.Uniform(12, 1.0f / smoothness);
                _draw_e193fb34.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e193fb34.Uniform10(14, endPoints_e193fb34_14_17_6);
                _draw_e193fb34.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.Z, endPoints_e193fb34_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.X, endPoints_e193fb34_14_17_6.Y))));
                _draw_e193fb34.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.Z, endPoints_e193fb34_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.X, endPoints_e193fb34_14_17_6.Y))));
                _draw_e193fb34.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_e193fb34.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_8d31c878_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_8d31c878.BlendEnabled(true);
                _draw_8d31c878.DepthTestEnabled(false);
                _draw_8d31c878.CullFace(uPtr(dc)->CullFace());
                _draw_8d31c878.BlendSrcAlpha(7);
                _draw_8d31c878.BlendDstRgb(3);
                _draw_8d31c878.Const1(0, uPtr(_uniforms)->Length());
                _draw_8d31c878.Use();
                _draw_8d31c878.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8d31c878.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8d31c878.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8d31c878.Uniform1(4, _uniforms);
                _draw_8d31c878.Uniform2(5, position);
                _draw_8d31c878.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8d31c878.Uniform2(7, csz);
                _draw_8d31c878.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_8d31c878.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8d31c878.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8d31c878.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_8d31c878.Uniform(12, 1.0f / smoothness);
                _draw_8d31c878.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_8d31c878.Uniform10(14, endPoints_8d31c878_14_17_6);
                _draw_8d31c878.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.Z, endPoints_8d31c878_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.X, endPoints_8d31c878_14_17_6.Y))));
                _draw_8d31c878.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.Z, endPoints_8d31c878_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.X, endPoints_8d31c878_14_17_6.Y))));
                _draw_8d31c878.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_8d31c878.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_2b82e760.BlendEnabled(true);
                _draw_2b82e760.DepthTestEnabled(false);
                _draw_2b82e760.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e760.BlendSrcAlpha(7);
                _draw_2b82e760.BlendDstRgb(3);
                _draw_2b82e760.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e760.Use();
                _draw_2b82e760.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e760.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e760.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e760.Uniform1(4, _uniforms);
                _draw_2b82e760.Uniform2(5, position);
                _draw_2b82e760.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e760.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e760.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e760.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_2b82e760.Uniform(10, 1.0f / smoothness);
                _draw_2b82e760.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind9 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2b82e760.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_2b82e77f.BlendEnabled(true);
                _draw_2b82e77f.DepthTestEnabled(false);
                _draw_2b82e77f.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e77f.BlendSrcAlpha(7);
                _draw_2b82e77f.BlendDstRgb(3);
                _draw_2b82e77f.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e77f.Use();
                _draw_2b82e77f.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e77f.Uniform1(4, _uniforms);
                _draw_2b82e77f.Uniform2(5, position);
                _draw_2b82e77f.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e77f.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e77f.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e77f.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_2b82e77f.Uniform(10, 1.0f / smoothness);
                _draw_2b82e77f.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2b82e77f.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_a73f4dc1.BlendEnabled(true);
                _draw_a73f4dc1.DepthTestEnabled(false);
                _draw_a73f4dc1.CullFace(uPtr(dc)->CullFace());
                _draw_a73f4dc1.BlendSrcAlpha(7);
                _draw_a73f4dc1.BlendDstRgb(3);
                _draw_a73f4dc1.Const1(0, uPtr(_uniforms)->Length());
                _draw_a73f4dc1.Use();
                _draw_a73f4dc1.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_a73f4dc1.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_a73f4dc1.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_a73f4dc1.Uniform1(4, _uniforms);
                _draw_a73f4dc1.Uniform2(5, position);
                _draw_a73f4dc1.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_a73f4dc1.Uniform2(7, csz);
                _draw_a73f4dc1.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_a73f4dc1.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_a73f4dc1.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_a73f4dc1.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_a73f4dc1.Uniform(12, 1.0f / smoothness);
                _draw_a73f4dc1.Uniform(13, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_a73f4dc1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_270a9c68.BlendEnabled(true);
                _draw_270a9c68.DepthTestEnabled(false);
                _draw_270a9c68.CullFace(uPtr(dc)->CullFace());
                _draw_270a9c68.BlendSrcAlpha(7);
                _draw_270a9c68.BlendDstRgb(3);
                _draw_270a9c68.Const1(0, uPtr(_uniforms)->Length());
                _draw_270a9c68.Use();
                _draw_270a9c68.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_270a9c68.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_270a9c68.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_270a9c68.Uniform1(4, _uniforms);
                _draw_270a9c68.Uniform2(5, position);
                _draw_270a9c68.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_270a9c68.Uniform2(7, csz);
                _draw_270a9c68.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_270a9c68.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_270a9c68.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_270a9c68.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_270a9c68.Uniform(12, 1.0f / smoothness);
                _draw_270a9c68.Uniform(13, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_270a9c68.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_74c263e5_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_74c263e5.BlendEnabled(true);
                _draw_74c263e5.DepthTestEnabled(false);
                _draw_74c263e5.CullFace(uPtr(dc)->CullFace());
                _draw_74c263e5.BlendSrcAlpha(7);
                _draw_74c263e5.BlendDstRgb(3);
                _draw_74c263e5.Const1(0, uPtr(_uniforms)->Length());
                _draw_74c263e5.Const(1, DP_74c263e5_14_8_4.NeedFract);
                _draw_74c263e5.Const(2, DP_74c263e5_14_8_4.Texture == NULL);
                _draw_74c263e5.Use();
                _draw_74c263e5.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_74c263e5.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_74c263e5.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_74c263e5.Uniform1(6, _uniforms);
                _draw_74c263e5.Uniform2(7, position);
                _draw_74c263e5.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_74c263e5.Uniform2(9, csz);
                _draw_74c263e5.Uniform2(10, DP_74c263e5_14_8_4.Origin);
                _draw_74c263e5.Uniform2(11, DP_74c263e5_14_8_4.Size);
                _draw_74c263e5.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind11 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.Z, ind11.W)), (ind12 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y))));
                _draw_74c263e5.Uniform2(13, (ind13 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_74c263e5.Uniform2(14, DP_74c263e5_14_8_4.TexCoordScale1);
                _draw_74c263e5.Uniform2(15, DP_74c263e5_14_8_4.TexCoordBias1);
                _draw_74c263e5.Uniform2(16, DP_74c263e5_14_8_4.TexCoordScale2);
                _draw_74c263e5.Uniform2(17, DP_74c263e5_14_8_4.TexCoordBias2);
                _draw_74c263e5.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_74c263e5.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_74c263e5.Uniform(20, 1.0f / smoothness);
                _draw_74c263e5.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_74c263e5.Sampler3(22, DP_74c263e5_14_8_4.Texture, DP_74c263e5_14_8_4.SamplerState);
                _draw_74c263e5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_37dd72b4_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_37dd72b4.BlendEnabled(true);
                _draw_37dd72b4.DepthTestEnabled(false);
                _draw_37dd72b4.CullFace(uPtr(dc)->CullFace());
                _draw_37dd72b4.BlendSrcAlpha(7);
                _draw_37dd72b4.BlendDstRgb(3);
                _draw_37dd72b4.Const1(0, uPtr(_uniforms)->Length());
                _draw_37dd72b4.Const(1, DP_37dd72b4_14_8_4.NeedFract);
                _draw_37dd72b4.Const(2, DP_37dd72b4_14_8_4.Texture == NULL);
                _draw_37dd72b4.Use();
                _draw_37dd72b4.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_37dd72b4.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_37dd72b4.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_37dd72b4.Uniform1(6, _uniforms);
                _draw_37dd72b4.Uniform2(7, position);
                _draw_37dd72b4.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_37dd72b4.Uniform2(9, csz);
                _draw_37dd72b4.Uniform2(10, DP_37dd72b4_14_8_4.Origin);
                _draw_37dd72b4.Uniform2(11, DP_37dd72b4_14_8_4.Size);
                _draw_37dd72b4.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind14 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind14.Z, ind14.W)), (ind15 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y))));
                _draw_37dd72b4.Uniform2(13, (ind16 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.X, ind16.Y)));
                _draw_37dd72b4.Uniform2(14, DP_37dd72b4_14_8_4.TexCoordScale1);
                _draw_37dd72b4.Uniform2(15, DP_37dd72b4_14_8_4.TexCoordBias1);
                _draw_37dd72b4.Uniform2(16, DP_37dd72b4_14_8_4.TexCoordScale2);
                _draw_37dd72b4.Uniform2(17, DP_37dd72b4_14_8_4.TexCoordBias2);
                _draw_37dd72b4.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_37dd72b4.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_37dd72b4.Uniform(20, 1.0f / smoothness);
                _draw_37dd72b4.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_37dd72b4.Sampler3(22, DP_37dd72b4_14_8_4.Texture, DP_37dd72b4_14_8_4.SamplerState);
                _draw_37dd72b4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_85953c31.BlendEnabled(true);
                _draw_85953c31.DepthTestEnabled(false);
                _draw_85953c31.CullFace(uPtr(dc)->CullFace());
                _draw_85953c31.BlendSrcAlpha(7);
                _draw_85953c31.BlendDstRgb(3);
                _draw_85953c31.Const1(0, uPtr(_uniforms)->Length());
                _draw_85953c31.Use();
                _draw_85953c31.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_85953c31.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_85953c31.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_85953c31.Uniform1(4, _uniforms);
                _draw_85953c31.Uniform2(5, position);
                _draw_85953c31.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_85953c31.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_85953c31.Uniform(8, 1.0f / smoothness);
                _draw_85953c31.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_85953c31.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_85953c31.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_8c000b28.BlendEnabled(true);
                _draw_8c000b28.DepthTestEnabled(false);
                _draw_8c000b28.CullFace(uPtr(dc)->CullFace());
                _draw_8c000b28.BlendSrcAlpha(7);
                _draw_8c000b28.BlendDstRgb(3);
                _draw_8c000b28.Const1(0, uPtr(_uniforms)->Length());
                _draw_8c000b28.Use();
                _draw_8c000b28.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8c000b28.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8c000b28.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8c000b28.Uniform1(4, _uniforms);
                _draw_8c000b28.Uniform2(5, position);
                _draw_8c000b28.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8c000b28.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_8c000b28.Uniform(8, 1.0f / smoothness);
                _draw_8c000b28.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_8c000b28.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_8c000b28.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_d9c096a5_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_d9c096a5.BlendEnabled(true);
                _draw_d9c096a5.DepthTestEnabled(false);
                _draw_d9c096a5.CullFace(uPtr(dc)->CullFace());
                _draw_d9c096a5.BlendSrcAlpha(7);
                _draw_d9c096a5.BlendDstRgb(3);
                _draw_d9c096a5.Const1(0, uPtr(_uniforms)->Length());
                _draw_d9c096a5.Use();
                _draw_d9c096a5.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_d9c096a5.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_d9c096a5.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_d9c096a5.Uniform1(4, _uniforms);
                _draw_d9c096a5.Uniform2(5, position);
                _draw_d9c096a5.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_d9c096a5.Uniform2(7, csz);
                _draw_d9c096a5.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_d9c096a5.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_d9c096a5.Uniform(10, 1.0f / smoothness);
                _draw_d9c096a5.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_d9c096a5.Uniform10(12, endPoints_d9c096a5_14_17_6);
                _draw_d9c096a5.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.Z, endPoints_d9c096a5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.X, endPoints_d9c096a5_14_17_6.Y))));
                _draw_d9c096a5.Uniform(14, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.Z, endPoints_d9c096a5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.X, endPoints_d9c096a5_14_17_6.Y))));
                _draw_d9c096a5.Sampler3(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_d9c096a5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_48b7d8c3_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_48b7d8c3.BlendEnabled(true);
                _draw_48b7d8c3.DepthTestEnabled(false);
                _draw_48b7d8c3.CullFace(uPtr(dc)->CullFace());
                _draw_48b7d8c3.BlendSrcAlpha(7);
                _draw_48b7d8c3.BlendDstRgb(3);
                _draw_48b7d8c3.Const1(0, uPtr(_uniforms)->Length());
                _draw_48b7d8c3.Use();
                _draw_48b7d8c3.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_48b7d8c3.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_48b7d8c3.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_48b7d8c3.Uniform1(4, _uniforms);
                _draw_48b7d8c3.Uniform2(5, position);
                _draw_48b7d8c3.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_48b7d8c3.Uniform2(7, csz);
                _draw_48b7d8c3.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_48b7d8c3.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_48b7d8c3.Uniform(10, 1.0f / smoothness);
                _draw_48b7d8c3.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_48b7d8c3.Uniform10(12, endPoints_48b7d8c3_14_17_6);
                _draw_48b7d8c3.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.Z, endPoints_48b7d8c3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.X, endPoints_48b7d8c3_14_17_6.Y))));
                _draw_48b7d8c3.Uniform(14, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.Z, endPoints_48b7d8c3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.X, endPoints_48b7d8c3_14_17_6.Y))));
                _draw_48b7d8c3.Sampler3(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_48b7d8c3.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_dd2b0145.BlendEnabled(true);
                _draw_dd2b0145.DepthTestEnabled(false);
                _draw_dd2b0145.CullFace(uPtr(dc)->CullFace());
                _draw_dd2b0145.BlendSrcAlpha(7);
                _draw_dd2b0145.BlendDstRgb(3);
                _draw_dd2b0145.Const1(0, uPtr(_uniforms)->Length());
                _draw_dd2b0145.Use();
                _draw_dd2b0145.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_dd2b0145.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_dd2b0145.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_dd2b0145.Uniform1(4, _uniforms);
                _draw_dd2b0145.Uniform2(5, position);
                _draw_dd2b0145.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_dd2b0145.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_dd2b0145.Uniform(8, 1.0f / smoothness);
                _draw_dd2b0145.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind19 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind19.X, ind19.Y, ind19.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_dd2b0145.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_1a0ff276.BlendEnabled(true);
                _draw_1a0ff276.DepthTestEnabled(false);
                _draw_1a0ff276.CullFace(uPtr(dc)->CullFace());
                _draw_1a0ff276.BlendSrcAlpha(7);
                _draw_1a0ff276.BlendDstRgb(3);
                _draw_1a0ff276.Const1(0, uPtr(_uniforms)->Length());
                _draw_1a0ff276.Use();
                _draw_1a0ff276.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_1a0ff276.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_1a0ff276.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_1a0ff276.Uniform1(4, _uniforms);
                _draw_1a0ff276.Uniform2(5, position);
                _draw_1a0ff276.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_1a0ff276.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_1a0ff276.Uniform(8, 1.0f / smoothness);
                _draw_1a0ff276.Uniform10(9, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind20 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind20.X, ind20.Y, ind20.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1a0ff276.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :252
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Fill(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance] :231
void Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "init_DrawCalls()");
    _draw_e1942474 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc());
    _draw_e194259b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f503());
    _draw_e1942cb4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c());
    _draw_e1942d57 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f());
    _draw_e19434f4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c());
    _draw_e1943513 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b());
    _draw_e193fb34 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc());
    _draw_8d31c878 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4());
    _draw_2b82e760 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26dc());
    _draw_2b82e77f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26db());
    _draw_a73f4dc1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle26472755());
    _draw_270a9c68 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle538c6e5c());
    _draw_74c263e5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglef633e2b5());
    _draw_37dd72b4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle0e3d84e4());
    _draw_85953c31 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb0e4f93d());
    _draw_8c000b28 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb3b2f694());
    _draw_d9c096a5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle565a6cfd());
    _draw_48b7d8c3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglec8ee9d37());
    _draw_dd2b0145 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleec761c79());
    _draw_1a0ff276 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangled46c7a4a());
}

// private void InitBuffers() [instance] :302
void Rectangle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "InitBuffers()");
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[13/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[14/*float2[]*/], vr->Length());

    for (int i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int>(::TYPES[15/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int>(::TYPES[15/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    ::g::Uno::Buffer* bufferVertex = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    ::g::Uno::Buffer* bufferEdge = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);

    for (int i1 = 0; i1 < vsr->Length(); ++i1)
    {
        uPtr(bufferVertex)->Set8(i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(bufferEdge)->Set8(i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance] :283
uArray* Rectangle::neg(uArray* a)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "neg(float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :260
void Rectangle::Shadow(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Shadow(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, _shadowFalloff);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance] :236
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Stroke(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Stroke,[float2],[float])");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance] :275
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "sub(float[],float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static] :231
Rectangle* Rectangle::New1()
{
    Rectangle* obj21 = (Rectangle*)uNew(Rectangle_typeof());
    obj21->ctor_();
    return obj21;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class ShadowFalloff :224
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff() :224
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New() :224
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance] :224
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static] :224
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class StrokeCoverage :210
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Center), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Radius), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage() :210
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New() :210
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance] :210
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static] :210
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// public sealed class Wedge :594
// {
// static Wedge() :594
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _strokeCoverage), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Wedge::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 4));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Wedge__Fill_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Wedge__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Wedge__Stroke_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge() :594
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) :635
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New() :594
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) :601
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) :618
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance] :594
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance] :635
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float,float,float)");
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance] :601
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "SetupWedgeCoverage(float,float)");
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance] :618
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float,float,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Wedge New() [static] :594
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno
// -------------------------------------------------------------------------------------------------

// internal abstract class WedgeCoverage :553
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, EndAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, StartAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage() :553
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance] :553
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
