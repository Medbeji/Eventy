// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-92d9dd5d.h>
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct NativeViewRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public sealed extern class NativeViewRenderer :551
// {
struct NativeViewRenderer_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Controls::Native::IViewHandleRenderer interface1;
};

NativeViewRenderer_type* NativeViewRenderer_typeof();
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this);
void NativeViewRenderer__AllocPixelBuffer_fn(int* w, int* h, ::g::Java::Object** __retval);
void NativeViewRenderer__Dispose_fn(NativeViewRenderer* __this);
void NativeViewRenderer__Draw_fn(NativeViewRenderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void NativeViewRenderer__FreePixelBuffer_fn(::g::Java::Object* bitmap);
void NativeViewRenderer__Invalidate_fn(NativeViewRenderer* __this);
void NativeViewRenderer__New1_fn(NativeViewRenderer** __retval);
void NativeViewRenderer__ReleaseResources_fn(NativeViewRenderer* __this);
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* pixelBuffer, bool* reuse, int* w, int* h);

struct NativeViewRenderer : uObject
{
    uStrong<uObject*> _pixelBuffer;
    ::g::Uno::Int2 _prevSize;
    uint32_t _textureHandle;
    bool _valid;

    void ctor_();
    void Dispose();
    void Draw(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density);
    void Invalidate();
    void ReleaseResources();
    static ::g::Java::Object* AllocPixelBuffer(int w, int h);
    static void FreePixelBuffer(::g::Java::Object* bitmap);
    static NativeViewRenderer* New1();
    static void Upload(::g::Java::Object* viewHandle, ::g::Java::Object* pixelBuffer, bool reuse, int w, int h);
};
// }

}}}} // ::g::Fuse::Controls::Native
