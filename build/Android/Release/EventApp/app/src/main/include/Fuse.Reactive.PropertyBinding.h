// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class PropertyBinding :50
// {
struct PropertyBinding_type : ::g::Fuse::Binding_type
{
    ::g::Uno::UX::IPropertyListener interface0;
};

PropertyBinding_type* PropertyBinding_typeof();
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void PropertyBinding__ctor_2_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool* read, bool* write);
void PropertyBinding__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval);
void PropertyBinding__OnRooted_fn(PropertyBinding* __this);
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this);
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value);
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value);
void PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(PropertyBinding* __this, ::g::Uno::UX::PropertyObject* src, ::g::Uno::UX::Selector* prop);

struct PropertyBinding : ::g::Fuse::Binding
{
    bool _read;
    bool _write;
    uStrong< ::g::Uno::UX::Property*> _Source;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    void ctor_2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool read, bool write);
    ::g::Uno::UX::Property* Source();
    void Source(::g::Uno::UX::Property* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static PropertyBinding* New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Reactive
