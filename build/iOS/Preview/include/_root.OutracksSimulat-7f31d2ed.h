// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property :400
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property_typeof();
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Get1_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property** __retval);
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Set1_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileString*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
