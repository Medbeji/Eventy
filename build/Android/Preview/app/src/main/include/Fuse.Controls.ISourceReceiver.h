// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface ISourceReceiver :17
// {
uInterfaceType* ISourceReceiver_typeof();

struct ISourceReceiver
{
    void(*fp_get_Source)(uObject*, uString**);
    void(*fp_set_Source)(uObject*, uString*);
    static uString* Source(const uInterface& __this) { uString* __retval; return __this.VTable<ISourceReceiver>()->fp_get_Source(__this, &__retval), __retval; }
    static void Source(const uInterface& __this, uString* value) { __this.VTable<ISourceReceiver>()->fp_set_Source(__this, value); }
};
// }

}}} // ::g::Fuse::Controls
