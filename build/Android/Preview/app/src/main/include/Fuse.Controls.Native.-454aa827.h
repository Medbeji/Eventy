// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-3800373f.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ScrollView;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ScrollView :1191
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IScrollView interface2;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_4_fn(ScrollView* __this, uObject* host);
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__Create_fn(::g::Java::Object** __retval);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__New3_fn(uObject* host, ScrollView** __retval);
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y);

struct ScrollView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _callbackHandle;
    uStrong<uObject*> _host;

    void ctor_4(uObject* host);
    ::g::Java::Object* AddCallback(::g::Java::Object* handle);
    void AllowedScrollDirections(int value);
    void OnScrollChanged(int x, int y, int oldx, int oldy);
    void ScrollPosition(::g::Uno::Float2 value);
    static ::g::Java::Object* Create();
    static ScrollView* New3(uObject* host);
    static void SetScrollPosition(::g::Java::Object* handle, int x, int y);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
