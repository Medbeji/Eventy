// This file was generated based on '.uno/ux11/MenuLabel.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct MenuLabel;}

namespace g{

// public partial sealed class MenuLabel :2
// {
::g::Fuse::Controls::TextControl_type* MenuLabel_typeof();
void MenuLabel__ctor_8_fn(MenuLabel* __this);
void MenuLabel__InitializeUX_fn(MenuLabel* __this);
void MenuLabel__New4_fn(MenuLabel** __retval);

struct MenuLabel : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static MenuLabel* New4();
};
// }

} // ::g
