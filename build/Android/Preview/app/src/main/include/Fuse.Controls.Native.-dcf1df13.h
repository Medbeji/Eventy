// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-11768b55.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRectangleView :454
// {
uInterfaceType* IRectangleView_typeof();

struct IRectangleView
{
    void(*fp_set_CornerRadius)(uObject*, ::g::Uno::Float4*);
    static void CornerRadius(const uInterface& __this, ::g::Uno::Float4 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IRectangleView::CornerRadius(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<IRectangleView>()->fp_set_CornerRadius(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native