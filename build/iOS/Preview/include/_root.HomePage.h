// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HomePage;}
namespace g{struct Sidebar;}

namespace g{

// public partial sealed class HomePage :2
// {
::g::Fuse::Controls::Panel_type* HomePage_typeof();
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1);
void HomePage__InitializeUX_fn(HomePage* __this);
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval);

struct HomePage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return HomePage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return HomePage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return HomePage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return HomePage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return HomePage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return HomePage_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return HomePage_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return HomePage_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return HomePage_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return HomePage_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return HomePage_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return HomePage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return HomePage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return HomePage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return HomePage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return HomePage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return HomePage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return HomePage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return HomePage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Rotation*> bottomMenuRotation;
    uStrong< ::g::Uno::UX::Property1*> bottomMenuRotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> bottomMenuTranslation;
    uStrong< ::g::Uno::UX::Property1*> bottomMenuTranslation_Y_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> bottomRectangle;
    uStrong< ::g::Uno::UX::Property1*> bottomRectangle_Width_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> content;
    uStrong< ::g::Fuse::Controls::EdgeNavigator*> EdgeNavigator;
    uStrong< ::g::Fuse::Translation*> mainAppTranslation;
    uStrong< ::g::Uno::UX::Property1*> mainAppTranslation_X_inst;
    uStrong< ::g::Sidebar*> menu;
    uStrong< ::g::Fuse::Controls::Rectangle*> middleRectangle;
    uStrong< ::g::Uno::UX::Property1*> middleRectangle_Opacity_inst;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;
    uStrong< ::g::Fuse::Rotation*> topMenuRotation;
    uStrong< ::g::Uno::UX::Property1*> topMenuRotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> topMenuTranslation;
    uStrong< ::g::Uno::UX::Property1*> topMenuTranslation_Y_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> topRectangle;
    uStrong< ::g::Uno::UX::Property1*> topRectangle_Width_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static HomePage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
