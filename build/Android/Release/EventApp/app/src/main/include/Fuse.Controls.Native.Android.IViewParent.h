// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal abstract extern interface IViewParent :3317
// {
uInterfaceType* IViewParent_typeof();

struct IViewParent
{
    void(*fp_UpdateChildRect)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Int2*, ::g::Uno::Int2*);
    static void UpdateChildRect(const uInterface& __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Int2 position, ::g::Uno::Int2 size);
};

}}}}} // ::g::Fuse::Controls::Native::Android

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

inline void IViewParent::UpdateChildRect(const uInterface& __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Int2 position, ::g::Uno::Int2 size) { __this.VTable<IViewParent>()->fp_UpdateChildRect(__this, view, &position, &size); }
// }

}}}}} // ::g::Fuse::Controls::Native::Android
