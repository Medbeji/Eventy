// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IGraphicsView :364
// {
uInterfaceType* IGraphicsView_typeof();

struct IGraphicsView
{
    void(*fp_BeginDraw)(uObject*, ::g::Uno::Int2*, bool*);
    void(*fp_EndDraw)(uObject*);
    static bool BeginDraw(const uInterface& __this, ::g::Uno::Int2 size);
    static void EndDraw(const uInterface& __this) { __this.VTable<IGraphicsView>()->fp_EndDraw(__this); }
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline bool IGraphicsView::BeginDraw(const uInterface& __this, ::g::Uno::Int2 size) { bool __retval; return __this.VTable<IGraphicsView>()->fp_BeginDraw(__this, &size, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::Native
