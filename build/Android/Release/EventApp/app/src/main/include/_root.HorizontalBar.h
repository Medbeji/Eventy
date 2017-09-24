// This file was generated based on '.uno/ux11/HorizontalBar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct HorizontalBar;}

namespace g{

// public partial sealed class HorizontalBar :2
// {
::g::Fuse::Controls::Control_type* HorizontalBar_typeof();
void HorizontalBar__ctor_7_fn(HorizontalBar* __this);
void HorizontalBar__InitializeUX_fn(HorizontalBar* __this);
void HorizontalBar__New4_fn(HorizontalBar** __retval);

struct HorizontalBar : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    void InitializeUX();
    static HorizontalBar* New4();
};
// }

} // ::g
