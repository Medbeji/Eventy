// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct GraphicsView;}}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class GraphicsView :384
// {
uType* GraphicsView_typeof();
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host);
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval);

struct GraphicsView : uObject
{
    void ctor_(::g::Fuse::Visual* host);
    static GraphicsView* New1(::g::Fuse::Visual* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
