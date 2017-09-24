// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.47.7/textcontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-92d9dd5d.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextEditRenderer;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class TextEditRenderer :1500
// {
struct TextEditRenderer_type : uType
{
    ::g::Fuse::Controls::Native::IViewHandleRenderer interface0;
    ::g::Uno::IDisposable interface1;
};

TextEditRenderer_type* TextEditRenderer_typeof();
void TextEditRenderer__ctor__fn(TextEditRenderer* __this);
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval);
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval);
void TextEditRenderer__FuseControlsNativeIViewHandleRendererDraw_fn(TextEditRenderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void TextEditRenderer__FuseControlsNativeIViewHandleRendererInvalidate_fn(TextEditRenderer* __this);
void TextEditRenderer__New1_fn(TextEditRenderer** __retval);
void TextEditRenderer__UnoIDisposableDispose_fn(TextEditRenderer* __this);

struct TextEditRenderer : uObject
{
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _container;
    uStrong<uObject*> _nativeViewRenderer;
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _target;
    bool _valid;

    void ctor_();
    static void CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
    static ::g::Java::Object* CreateContainer();
    static ::g::Java::Object* CreateTextEdit();
    static TextEditRenderer* New1();
};
// }

}}} // ::g::Fuse::Controls
