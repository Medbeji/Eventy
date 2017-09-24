// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class View :2577
// {
struct View_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Controls::Native::IView interface1;
};

View_type* View_typeof();
void View__ctor_2_fn(View* __this, ::g::Java::Object* handle);
void View__ctor_3_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView);
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval);

struct View : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_2(::g::Java::Object* handle);
    void ctor_3(::g::Java::Object* handle, bool isLeafView);
    ::g::Java::Object* Handle();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
