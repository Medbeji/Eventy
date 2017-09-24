// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IProxyHost :261
// {
uInterfaceType* IProxyHost_typeof();

struct IProxyHost
{
    void(*fp_Insert)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_get_LocalTransform)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_Remove)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    static void Insert(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<IProxyHost>()->fp_Insert(__this, viewHandle); }
    static ::g::Uno::Float4x4 LocalTransform(const uInterface& __this);
    static void Remove(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<IProxyHost>()->fp_Remove(__this, viewHandle); }
};

}}} // ::g::Fuse::Controls

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4x4 IProxyHost::LocalTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IProxyHost>()->fp_get_LocalTransform(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
