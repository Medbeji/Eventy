// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Effects/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Effects{struct Duotone;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Duotone :201
// {
::g::Fuse::Effects::BasicEffect_type* Duotone_typeof();
void Duotone__ctor_4_fn(Duotone* __this);
void Duotone__get_Amount_fn(Duotone* __this, float* __retval);
void Duotone__set_Amount_fn(Duotone* __this, float* value);
void Duotone__init_DrawCalls_fn(Duotone* __this);
void Duotone__get_Light_fn(Duotone* __this, ::g::Uno::Float3* __retval);
void Duotone__set_Light_fn(Duotone* __this, ::g::Uno::Float3* value);
void Duotone__New2_fn(Duotone** __retval);
void Duotone__OnRender_fn(Duotone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Duotone__get_Shadow_fn(Duotone* __this, ::g::Uno::Float3* __retval);
void Duotone__set_Shadow_fn(Duotone* __this, ::g::Uno::Float3* value);

struct Duotone : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_80b7f54b;
    ::g::Uno::Float3 _light;
    ::g::Uno::Float3 _shadow;
    ::g::Uno::Float4x4 OnRender_LocalTransform_80b7f54b_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_80b7f54b_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_80b7f54b_7_2_1;

    void ctor_4();
    float Amount();
    void Amount(float value);
    void init_DrawCalls();
    ::g::Uno::Float3 Light();
    void Light(::g::Uno::Float3 value);
    ::g::Uno::Float3 Shadow();
    void Shadow(::g::Uno::Float3 value);
    static Duotone* New2();
};
// }

}}} // ::g::Fuse::Effects
