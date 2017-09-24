// This file was generated based on '.uno/ux11/ActionIcon.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
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
namespace g{struct ActionIcon;}

namespace g{

// public partial sealed class ActionIcon :2
// {
::g::Fuse::Controls::Control_type* ActionIcon_typeof();
void ActionIcon__ctor_7_fn(ActionIcon* __this);
void ActionIcon__InitializeUX_fn(ActionIcon* __this);
void ActionIcon__New4_fn(ActionIcon** __retval);

struct ActionIcon : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static ActionIcon* New4();
};
// }

} // ::g
