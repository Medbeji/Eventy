// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectPropertyRegistry;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public static class ObjectPropertyRegistry :577
// {
uClassType* ObjectPropertyRegistry_typeof();
void ObjectPropertyRegistry__Clear_fn();
void ObjectPropertyRegistry__GetProperty_fn(uString* type, uString* property, uObject** __retval);
void ObjectPropertyRegistry__RegisterProperty_fn(uString* type, uString* property, uObject* propertyObject);

struct ObjectPropertyRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> Objects_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& Objects() { return ObjectPropertyRegistry_typeof()->Init(), Objects_; }

    static void Clear();
    static uObject* GetProperty(uString* type, uString* property);
    static void RegisterProperty(uString* type, uString* property, uObject* propertyObject);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
