// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IScrollViewHost :486
// {
uInterfaceType* IScrollViewHost_typeof();

struct IScrollViewHost
{
    void(*fp_OnScrollPositionChanged)(uObject*, ::g::Uno::Float2*);
    static void OnScrollPositionChanged(const uInterface& __this, ::g::Uno::Float2 newScrollPosition);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IScrollViewHost::OnScrollPositionChanged(const uInterface& __this, ::g::Uno::Float2 newScrollPosition) { __this.VTable<IScrollViewHost>()->fp_OnScrollPositionChanged(__this, &newScrollPosition); }
// }

}}}} // ::g::Fuse::Controls::Native
