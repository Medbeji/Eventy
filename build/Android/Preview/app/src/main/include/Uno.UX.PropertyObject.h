// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public class PropertyObject :323
// {
uType* PropertyObject_typeof();
void PropertyObject__ctor__fn(PropertyObject* __this);
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener);
void PropertyObject__EmulatePropertyChanged_fn(PropertyObject* obj, ::g::Uno::UX::Selector* sel, uObject* origin);
void PropertyObject__GetSimulatedProperty_fn(PropertyObject* __this, uString* name, uObject** __retval);
void PropertyObject__New1_fn(PropertyObject** __retval);
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property);
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin);
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener);
void PropertyObject__SetSimulatedProperty_fn(PropertyObject* __this, uString* name, uObject* value);

struct PropertyObject : uObject
{
    uStrong< ::g::Uno::Collections::List*> _propListeners;
    uStrong< ::g::Uno::Collections::Dictionary*> _simulatedProps;

    void ctor_();
    void AddPropertyListener(uObject* listener);
    uObject* GetSimulatedProperty(uString* name);
    void OnPropertyChanged(::g::Uno::UX::Selector property);
    void OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin);
    void RemovePropertyListener(uObject* listener);
    void SetSimulatedProperty(uString* name, uObject* value);
    static void EmulatePropertyChanged(PropertyObject* obj, ::g::Uno::UX::Selector sel, uObject* origin);
    static PropertyObject* New1();
};
// }

}}} // ::g::Uno::UX
