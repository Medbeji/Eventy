// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ScrollView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ScrollView :1950
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::iOS::ViewParent_type
{
    ::g::Fuse::Controls::Native::IScrollView interface2;
    ::g::Fuse::Controls::Native::IViewGroup interface3;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_2_fn(ScrollView* __this, uObject* host);
void ScrollView__Add_fn(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle);
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__get_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View** __retval);
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View* value);
void ScrollView__Create_fn(::g::ObjC::Object** __retval);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child);
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index);
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child);
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y);
void ScrollView__New1_fn(uObject* host, ScrollView** __retval);
void ScrollView__NotifyChildNewSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size);
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle);
void ScrollView__Remove_fn(::g::ObjC::Object* childHandle);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y);
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h);

struct ScrollView : ::g::Fuse::Controls::Native::iOS::ViewParent
{
    uStrong< ::g::Fuse::Controls::Native::iOS::View*> _content;
    uStrong< ::g::ObjC::Object*> _delegateHandle;
    uStrong<uObject*> _host;

    void ctor_2(uObject* host);
    void AllowedScrollDirections(int value);
    ::g::Fuse::Controls::Native::iOS::View* Content();
    void Content(::g::Fuse::Controls::Native::iOS::View* value);
    void OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle);
    void ScrollPosition(::g::Uno::Float2 value);
    static void Add(::g::ObjC::Object* parentHandle, ::g::ObjC::Object* childHandle);
    static ::g::ObjC::Object* AddCallback(::g::ObjC::Object* handle, uDelegate* callback);
    static ::g::ObjC::Object* Create();
    static void GetContentOffset(::g::ObjC::Object* handle, float* x, float* y);
    static ScrollView* New1(uObject* host);
    static void Remove(::g::ObjC::Object* childHandle);
    static void SetContentOffset(::g::ObjC::Object* handle, float x, float y);
    static void SetContentSize(::g::ObjC::Object* handle, float w, float h);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
