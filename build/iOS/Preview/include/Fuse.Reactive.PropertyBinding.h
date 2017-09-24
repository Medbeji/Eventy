// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObserver.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class PropertyBinding :415
// {
::g::Fuse::Reactive::DataBinding_type* PropertyBinding_typeof();
void PropertyBinding__ctor_3_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void PropertyBinding__New2_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval);

struct PropertyBinding : ::g::Fuse::Reactive::DataBinding
{
    void ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    static PropertyBinding* New2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Reactive
