// This file was generated based on '.uno/ux11/Article.g.uno'.
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
namespace g{struct Article;}

namespace g{

// public partial sealed class Article :2
// {
::g::Fuse::Controls::TextControl_type* Article_typeof();
void Article__ctor_8_fn(Article* __this);
void Article__InitializeUX_fn(Article* __this);
void Article__New4_fn(Article** __retval);

struct Article : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static Article* New4();
};
// }

} // ::g
