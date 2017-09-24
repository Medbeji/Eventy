// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Container;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Container :74
// {
::g::Fuse::Controls::Panel_type* Container_typeof();
void Container__ctor_7_fn(Container* __this);
void Container__New4_fn(Container** __retval);
void Container__OnNodeAdded_fn(Container* __this, ::g::Fuse::Node* n);
void Container__OnNodeRemoved_fn(Container* __this, ::g::Fuse::Node* n);
void Container__OnRooted_fn(Container* __this);
void Container__OnUnrooted_fn(Container* __this);
void Container__get_Subtree_fn(Container* __this, ::g::Fuse::Visual** __retval);
void Container__set_Subtree_fn(Container* __this, ::g::Fuse::Visual* value);
void Container__get_SubtreeNodes_fn(Container* __this, uObject** __retval);

struct Container : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Visual*> _subtree;
    uStrong< ::g::Uno::Collections::RootableList*> _subtreeNodes;

    void ctor_7();
    void OnNodeAdded(::g::Fuse::Node* n);
    void OnNodeRemoved(::g::Fuse::Node* n);
    ::g::Fuse::Visual* Subtree();
    void Subtree(::g::Fuse::Visual* value);
    uObject* SubtreeNodes();
    static Container* New4();
};
// }

}}} // ::g::Fuse::Controls
