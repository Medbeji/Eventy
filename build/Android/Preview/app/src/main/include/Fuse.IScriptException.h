// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Common/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IScriptException :219
// {
uInterfaceType* IScriptException_typeof();

struct IScriptException
{
    void(*fp_get_FileName)(uObject*, uString**);
    void(*fp_get_LineNumber)(uObject*, int*);
    static uString* FileName(const uInterface& __this) { uString* __retval; return __this.VTable<IScriptException>()->fp_get_FileName(__this, &__retval), __retval; }
    static int LineNumber(const uInterface& __this) { int __retval; return __this.VTable<IScriptException>()->fp_get_LineNumber(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
