// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{struct ErrorToast;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property :376
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof();
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval);

struct OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Outracks::Simulator::ErrorToast*> _obj;

    void ctor_3(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
