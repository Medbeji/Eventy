// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ILabelView :371
// {
uInterfaceType* ILabelView_typeof();

struct ILabelView
{
    void(*fp_set_Text)(uObject*, uString*);
    static void Text(const uInterface& __this, uString* value) { __this.VTable<ILabelView>()->fp_set_Text(__this, value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
