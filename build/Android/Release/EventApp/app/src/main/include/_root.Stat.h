// This file was generated based on '.uno/ux11/Stat.g.uno'.
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
namespace g{struct Stat;}

namespace g{

// public partial sealed class Stat :2
// {
::g::Fuse::Controls::TextControl_type* Stat_typeof();
void Stat__ctor_8_fn(Stat* __this);
void Stat__InitializeUX_fn(Stat* __this);
void Stat__New4_fn(Stat** __retval);

struct Stat : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static Stat* New4();
};
// }

} // ::g
