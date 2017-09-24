// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/SignUpPage.g.uno.
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
namespace g{namespace Basic{struct TextInput;}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SignUpPage;}

namespace g{

// public partial sealed class SignUpPage :2
// {
::g::Fuse::Controls::Panel_type* SignUpPage_typeof();
void SignUpPage__ctor_8_fn(SignUpPage* __this, ::g::Fuse::Navigation::Router* router1);
void SignUpPage__InitializeUX_fn(SignUpPage* __this);
void SignUpPage__New5_fn(::g::Fuse::Navigation::Router* router1, SignUpPage** __retval);

struct SignUpPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SignUpPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SignUpPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SignUpPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SignUpPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return SignUpPage_typeof()->Init(), __selector3_; }
    uStrong< ::g::Basic::TextInput*> password;
    uStrong< ::g::Uno::UX::Property1*> password_Value_inst;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb16;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb17;
    uStrong< ::g::Basic::TextInput*> userEmail;
    uStrong< ::g::Uno::UX::Property1*> userEmail_Value_inst;
    uStrong< ::g::Basic::TextInput*> userName;
    uStrong< ::g::Uno::UX::Property1*> userName_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static SignUpPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
