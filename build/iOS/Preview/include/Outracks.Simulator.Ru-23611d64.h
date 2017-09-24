// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxProperty;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :493
// {
::g::Uno::UX::Property1_type* UxProperty_typeof();
void UxProperty__ctor_3_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter);
void UxProperty__Get1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval);
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval);
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void UxProperty__Set1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin);
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval);

struct UxProperty : ::g::Uno::UX::Property1
{
    uStrong<uDelegate*> _getter;
    uStrong< ::g::Uno::UX::PropertyObject*> _obj;
    uStrong<uDelegate*> _setter;
    bool _supportsOriginSetter;

    void ctor_3(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter);
    static UxProperty* New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
