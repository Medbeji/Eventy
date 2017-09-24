// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct SimulatedProperties;}}}

namespace g{
namespace Uno{
namespace UX{

// public static extern class SimulatedProperties :398
// {
uClassType* SimulatedProperties_typeof();
void SimulatedProperties__Get_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject** __retval);
void SimulatedProperties__Set_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin);

struct SimulatedProperties : uObject
{
    static uObject* Get(::g::Uno::UX::PropertyObject* obj, uString* name);
    static void Set(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin);
};
// }

}}} // ::g::Uno::UX
