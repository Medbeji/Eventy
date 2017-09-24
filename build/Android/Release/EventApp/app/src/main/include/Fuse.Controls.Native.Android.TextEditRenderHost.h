// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEdit;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEditRenderHost;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class TextEditRenderHost :2699
// {
struct TextEditRenderHost_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IViewGroup interface2;
    ::g::Fuse::Controls::Native::IOffscreenRenderer interface3;
    ::g::Fuse::Controls::Native::Android::IViewParent interface4;
    ::g::Fuse::Controls::Native::INativeViewRenderer interface5;
};

TextEditRenderHost_type* TextEditRenderHost_typeof();
void TextEditRenderHost__ctor_1_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::TextEdit* textEdit);
void TextEditRenderHost__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void TextEditRenderHost__Create_fn(::g::Java::Object** __retval);
void TextEditRenderHost__Dispose_fn(TextEditRenderHost* __this);
void TextEditRenderHost__FuseControlsNativeAndroidIViewParentUpdateChildRect_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Int2* position, ::g::Uno::Int2* size);
void TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderHost* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderHost* __this);
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(TextEditRenderHost* __this);
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(TextEditRenderHost* __this);
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn(TextEditRenderHost* __this, uObject* child);
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn(TextEditRenderHost* __this, uObject* child, int* index);
void TextEditRenderHost__FuseControlsNativeIViewGroupset_ClipToBounds_fn(TextEditRenderHost* __this, bool* value);
void TextEditRenderHost__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(TextEditRenderHost* __this, bool* value);
void TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn(TextEditRenderHost* __this, uObject* child);
void TextEditRenderHost__New1_fn(::g::Fuse::Controls::Native::Android::TextEdit* textEdit, TextEditRenderHost** __retval);
void TextEditRenderHost__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void TextEditRenderHost__UpdateChildRect_fn(::g::Java::Object* handle, int* x, int* y, int* w, int* h);

struct TextEditRenderHost : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _container;
    bool _isEnabled;
    uStrong<uObject*> _nativeViewRenderer;
    uStrong< ::g::Fuse::Controls::Native::Android::TextEdit*> _textEdit;

    void ctor_1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit);
    static void AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static ::g::Java::Object* Create();
    static TextEditRenderHost* New1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit);
    static void RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void UpdateChildRect(::g::Java::Object* handle, int x, int y, int w, int h);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
