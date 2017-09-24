// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct GraphicsView;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class GraphicsView :591
// {
struct GraphicsView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Fuse::Visual* visual);
void GraphicsView__BeginDraw_fn(::g::ObjC::Object* handle, int* x, int* y, bool* __retval);
void GraphicsView__Create_fn(::g::ObjC::Object** __retval);
void GraphicsView__DeleteDrawable_fn(::g::ObjC::Object* handle);
void GraphicsView__Dispose_fn(GraphicsView* __this);
void GraphicsView__EndDraw_fn(::g::ObjC::Object* handle);
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this);
void GraphicsView__New1_fn(::g::Fuse::Visual* visual, GraphicsView** __retval);
void GraphicsView__OnTouch_fn(GraphicsView* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
void GraphicsView__SetCallback_fn(::g::ObjC::Object* handle, uDelegate* callback);

struct GraphicsView : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_1(::g::Fuse::Visual* visual);
    void OnTouch(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
    static bool BeginDraw(::g::ObjC::Object* handle, int x, int y);
    static ::g::ObjC::Object* Create();
    static void DeleteDrawable(::g::ObjC::Object* handle);
    static void EndDraw(::g::ObjC::Object* handle);
    static GraphicsView* New1(::g::Fuse::Visual* visual);
    static void SetCallback(::g::ObjC::Object* handle, uDelegate* callback);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
