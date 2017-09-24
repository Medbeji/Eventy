// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
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
namespace g{namespace Outracks{namespace Simulator{namespace Client{namespace Dialogs{struct LoadingScreen;}}}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{
namespace Dialogs{

// public partial sealed class LoadingScreen :78
// {
::g::Fuse::Controls::Panel_type* LoadingScreen_typeof();
void LoadingScreen__ctor_7_fn(LoadingScreen* __this);
void LoadingScreen__get_Header_fn(LoadingScreen* __this, uString** __retval);
void LoadingScreen__set_Header_fn(LoadingScreen* __this, uString* value);
void LoadingScreen__InitializeUX_fn(LoadingScreen* __this);
void LoadingScreen__get_Message_fn(LoadingScreen* __this, uString** __retval);
void LoadingScreen__set_Message_fn(LoadingScreen* __this, uString* value);
void LoadingScreen__New4_fn(LoadingScreen** __retval);
void LoadingScreen__SetHeader_fn(LoadingScreen* __this, uString* value, uObject* origin);
void LoadingScreen__SetMessage_fn(LoadingScreen* __this, uString* value, uObject* origin);

struct LoadingScreen : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return LoadingScreen_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return LoadingScreen_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return LoadingScreen_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return LoadingScreen_typeof()->Init(), __selector2_; }
    uStrong<uString*> _field_Header;
    uStrong<uString*> _field_Message;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Header_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Message_inst;

    void ctor_7();
    uString* Header();
    void Header(uString* value);
    void InitializeUX();
    uString* Message();
    void Message(uString* value);
    void SetHeader(uString* value, uObject* origin);
    void SetMessage(uString* value, uObject* origin);
    static LoadingScreen* New4();
};
// }

}}}}} // ::g::Outracks::Simulator::Client::Dialogs
