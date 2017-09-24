// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{namespace Dialogs{struct ModalDialog;}}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property :426
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property_typeof();
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, bool* __retval);

struct OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*> _obj;

    void ctor_3(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* New1(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
