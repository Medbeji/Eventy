// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract interface IDrawObjectWatcherFeedback :2827
// {
uInterfaceType* IDrawObjectWatcherFeedback_typeof();

struct IDrawObjectWatcherFeedback
{
    void(*fp_Changed)(uObject*, uObject*);
    void(*fp_Prepare)(uObject*, uObject*);
    void(*fp_Unprepare)(uObject*, uObject*);
    static void Changed(const uInterface& __this, uObject* obj) { __this.VTable<IDrawObjectWatcherFeedback>()->fp_Changed(__this, obj); }
    static void Prepare(const uInterface& __this, uObject* obj) { __this.VTable<IDrawObjectWatcherFeedback>()->fp_Prepare(__this, obj); }
    static void Unprepare(const uInterface& __this, uObject* obj) { __this.VTable<IDrawObjectWatcherFeedback>()->fp_Unprepare(__this, obj); }
};
// }

}}} // ::g::Fuse::Drawing
