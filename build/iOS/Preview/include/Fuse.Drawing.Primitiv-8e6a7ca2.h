// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.VertexAt-28188a9f.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct FloatBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Coverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Falloff;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct FillCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Rectangle;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// public sealed class Rectangle :231
// {
uType* Rectangle_typeof();
void Rectangle__ctor__fn(Rectangle* __this);
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval);
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff);
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness);
void Rectangle__init_DrawCalls_fn(Rectangle* __this);
void Rectangle__InitBuffers_fn(Rectangle* __this);
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval);
void Rectangle__New1_fn(Rectangle** __retval);
void Rectangle__Shadow_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness);
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness);
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval);

struct Rectangle : uObject
{
    uStrong< ::g::Fuse::Drawing::Internal::FloatBuffer*> _bufferDistance;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_1a0ff276;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_270a9c68;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2b82e760;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_2b82e77f;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_37dd72b4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_48b7d8c3;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_74c263e5;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_85953c31;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8c000b28;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8d31c878;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a73f4dc1;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d9c096a5;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_dd2b0145;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e193fb34;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e1942474;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e194259b;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e1942cb4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e1942d57;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e19434f4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e1943513;
    ::g::Uno::Graphics::VertexAttributeInfo _edgeInfo;
    uStrong< ::g::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::Falloff*> _shadowFalloff;
    uStrong< ::g::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    uStrong<uArray*> _uniforms;
    ::g::Uno::Graphics::VertexAttributeInfo _vertexInfo;
    static uSStrong<Rectangle*> Singleton_;
    static uSStrong<Rectangle*>& Singleton() { return Rectangle_typeof()->Init(), Singleton_; }

    void ctor_();
    uArray* add(uArray* a, uArray* b);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff);
    void Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness);
    void init_DrawCalls();
    void InitBuffers();
    uArray* neg(uArray* a);
    void Shadow(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness);
    void Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness);
    uArray* sub(uArray* a, uArray* b);
    static Rectangle* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
