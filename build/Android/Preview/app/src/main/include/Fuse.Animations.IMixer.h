// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IMixer :1550
// {
uInterfaceType* IMixer_typeof();

struct IMixer
{
    void(*fp_Register)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**);
    void(*fp_RegisterTransform)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**);
    static uObject* Register(const uInterface& __this, uType* __type, ::g::Uno::UX::Property1* property, int mode) { uObject* __retval; return __this.VTable<IMixer>()->fp_Register(__this, __type, property, &mode, &__retval), __retval; }
    static uObject* RegisterTransform(const uInterface& __this, ::g::Fuse::Visual* element, int mode, int priority) { uObject* __retval; return __this.VTable<IMixer>()->fp_RegisterTransform(__this, element, &mode, &priority, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
