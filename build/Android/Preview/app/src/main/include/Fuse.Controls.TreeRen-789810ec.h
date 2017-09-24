// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct TreeRenderer__ViewGroup;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class TreeRenderer.ViewGroup :2425
// {
::g::Fuse::Controls::Native::ViewHandle_type* TreeRenderer__ViewGroup_typeof();
void TreeRenderer__ViewGroup__ctor_2_fn(TreeRenderer__ViewGroup* __this, ::g::Fuse::Controls::Native::ViewHandle* content);
void TreeRenderer__ViewGroup__Dispose_fn(TreeRenderer__ViewGroup* __this);
void TreeRenderer__ViewGroup__Measure_fn(TreeRenderer__ViewGroup* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void TreeRenderer__ViewGroup__New3_fn(::g::Fuse::Controls::Native::ViewHandle* content, TreeRenderer__ViewGroup** __retval);

struct TreeRenderer__ViewGroup : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _content;

    void ctor_2(::g::Fuse::Controls::Native::ViewHandle* content);
    static TreeRenderer__ViewGroup* New3(::g::Fuse::Controls::Native::ViewHandle* content);
};
// }

}}} // ::g::Fuse::Controls
