// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewParent;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class ViewParent :3742
// {
struct ViewParent_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    void(*fp_NotifyChildNewSize)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*);
};

ViewParent_type* ViewParent_typeof();
void ViewParent__ctor_1_fn(ViewParent* __this, ::g::ObjC::Object* handle);

struct ViewParent : ::g::Fuse::Controls::Native::iOS::View
{
    void ctor_1(::g::ObjC::Object* handle);
    void NotifyChildNewSize(::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2 size);
};

}}}}} // ::g::Fuse::Controls::Native::iOS

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

inline void ViewParent::NotifyChildNewSize(::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2 size) { (((ViewParent_type*)__type)->fp_NotifyChildNewSize)(this, child, &size); }
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
