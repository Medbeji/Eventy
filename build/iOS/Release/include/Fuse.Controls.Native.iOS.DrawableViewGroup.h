// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DrawableViewGroup;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class DrawableViewGroup :134
// {
struct DrawableViewGroup_type : ::g::Fuse::Controls::Native::iOS::ViewParent_type
{
    ::g::Fuse::Controls::Native::IViewGroup interface2;
    ::g::Fuse::Controls::Native::IOffscreenRenderer interface3;
    ::g::Fuse::Controls::Native::INativeViewRenderer interface4;
};

DrawableViewGroup_type* DrawableViewGroup_typeof();
void DrawableViewGroup__ctor_2_fn(DrawableViewGroup* __this, int* initialState, ::g::Fuse::Visual* visual);
void DrawableViewGroup__Add_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void DrawableViewGroup__Add1_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index);
void DrawableViewGroup__Add2_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle);
void DrawableViewGroup__Add3_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle, int* index);
void DrawableViewGroup__Create_fn(::g::ObjC::Object** __retval);
void DrawableViewGroup__CreateContainer_fn(::g::ObjC::Object** __retval);
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child);
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index);
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child);
void DrawableViewGroup__New1_fn(int* initialState, ::g::Fuse::Visual* visual, DrawableViewGroup** __retval);
void DrawableViewGroup__NotifyChildNewSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size);
void DrawableViewGroup__OnSetFrame_fn(DrawableViewGroup* __this, ::g::ObjC::Object* handle);
void DrawableViewGroup__Remove_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void DrawableViewGroup__Remove1_fn(::g::ObjC::Object* childHandle);
void DrawableViewGroup__SetSetFrameCallback_fn(::g::ObjC::Object* handle, uDelegate* callback);
void DrawableViewGroup__UpdateFrame_fn(::g::ObjC::Object* sourceHandle, ::g::ObjC::Object* targetHandle);

struct DrawableViewGroup : ::g::Fuse::Controls::Native::iOS::ViewParent
{
    uStrong< ::g::ObjC::Object*> _container;
    bool _offscreenEnabled;
    uStrong<uObject*> _renderer;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(int initialState, ::g::Fuse::Visual* visual);
    void Add(::g::Fuse::Controls::Native::iOS::View* child);
    void Add1(::g::Fuse::Controls::Native::iOS::View* child, int index);
    void OnSetFrame(::g::ObjC::Object* handle);
    void Remove(::g::Fuse::Controls::Native::iOS::View* child);
    static void Add2(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle);
    static void Add3(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle, int index);
    static ::g::ObjC::Object* Create();
    static ::g::ObjC::Object* CreateContainer();
    static DrawableViewGroup* New1(int initialState, ::g::Fuse::Visual* visual);
    static void Remove1(::g::ObjC::Object* childHandle);
    static void SetSetFrameCallback(::g::ObjC::Object* handle, uDelegate* callback);
    static void UpdateFrame(::g::ObjC::Object* sourceHandle, ::g::ObjC::Object* targetHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
