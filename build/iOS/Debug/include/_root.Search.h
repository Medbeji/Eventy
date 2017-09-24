// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/Search.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Search;}

namespace g{

// public partial sealed class Search :2
// {
::g::Fuse::Controls::Panel_type* Search_typeof();
void Search__ctor_7_fn(Search* __this, ::g::Fuse::Navigation::Router* router1);
void Search__InitializeUX_fn(Search* __this);
void Search__New4_fn(::g::Fuse::Navigation::Router* router1, Search** __retval);

struct Search : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Search_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Search_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Search_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Search_typeof()->Init(), __selector2_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb15;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::TextInput*> text;
    uStrong< ::g::Uno::UX::Property1*> text_Value_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> topBar;

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static Search* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
