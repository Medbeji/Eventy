// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewFactory;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewFactory :1486
// {
uClassType* ViewFactory_typeof();
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval);
void ViewFactory__InstantiateViewGroupImpl_fn(::g::ObjC::Object** __retval);

struct ViewFactory : uObject
{
    static ::g::Fuse::Controls::Native::ViewHandle* InstantiateViewGroup();
    static ::g::ObjC::Object* InstantiateViewGroupImpl();
};
// }

}}}} // ::g::Fuse::Controls::Native
