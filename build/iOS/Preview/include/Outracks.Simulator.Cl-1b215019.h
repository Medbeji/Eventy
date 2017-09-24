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
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{namespace Dialogs{struct ModalDialog;}}}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{
namespace Dialogs{

// public partial sealed class ModalDialog :170
// {
::g::Fuse::Controls::Panel_type* ModalDialog_typeof();
void ModalDialog__ctor_7_fn(ModalDialog* __this);
void ModalDialog__get_Body_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Body_fn(ModalDialog* __this, uString* value);
void ModalDialog__get_Details_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Details_fn(ModalDialog* __this, uString* value);
void ModalDialog__get_Header_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Header_fn(ModalDialog* __this, uString* value);
void ModalDialog__InitializeUX_fn(ModalDialog* __this);
void ModalDialog__New4_fn(ModalDialog** __retval);
void ModalDialog__SetBody_fn(ModalDialog* __this, uString* value, uObject* origin);
void ModalDialog__SetDetails_fn(ModalDialog* __this, uString* value, uObject* origin);
void ModalDialog__SetHeader_fn(ModalDialog* __this, uString* value, uObject* origin);

struct ModalDialog : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ModalDialog_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ModalDialog_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ModalDialog_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ModalDialog_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ModalDialog_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ModalDialog_typeof()->Init(), __selector4_; }
    uStrong<uString*> _field_Body;
    uStrong<uString*> _field_Details;
    uStrong<uString*> _field_Header;
    uStrong< ::g::Fuse::Controls::Grid*> ButtonGrid;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Body_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Details_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Header_inst;

    void ctor_7();
    uString* Body();
    void Body(uString* value);
    uString* Details();
    void Details(uString* value);
    uString* Header();
    void Header(uString* value);
    void InitializeUX();
    void SetBody(uString* value, uObject* origin);
    void SetDetails(uString* value, uObject* origin);
    void SetHeader(uString* value, uObject* origin);
    static ModalDialog* New4();
};
// }

}}}}} // ::g::Outracks::Simulator::Client::Dialogs
