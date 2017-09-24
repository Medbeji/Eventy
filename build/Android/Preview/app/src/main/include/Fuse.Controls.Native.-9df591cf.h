// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewHost.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class GraphicsView :145
// {
struct GraphicsView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
    ::g::Fuse::Controls::Native::IViewHost interface3;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_4_fn(GraphicsView* __this, ::g::Java::Object* handle);
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsView__DestroySurface_fn(GraphicsView* __this);
void GraphicsView__EndDraw_fn(GraphicsView* __this);
void GraphicsView__FuseControlsNativeIViewHostInsert_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* child);
void GraphicsView__FuseControlsNativeIViewHostRemove_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* child);
void GraphicsView__get_GraphicsViewHandle_fn(GraphicsView* __this, ::g::Java::Object** __retval);
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle);

struct GraphicsView : ::g::Fuse::Controls::Native::Android::View
{
    void* _eglSurface;
    uStrong< ::g::Java::Object*> _graphicsViewHandle;
    void* _nativeWindow;
    uStrong< ::g::Java::Object*> _surfaceHandle;

    void ctor_4(::g::Java::Object* handle);
    bool BeginDraw(::g::Uno::Int2 size);
    void DestroySurface();
    void EndDraw();
    ::g::Java::Object* GraphicsViewHandle();
    void SetSurface(::g::Java::Object* surfaceHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
