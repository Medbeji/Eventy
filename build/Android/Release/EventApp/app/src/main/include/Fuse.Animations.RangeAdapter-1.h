// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Animations/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct RangeAdapter;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class RangeAdapter<T> :2530
// {
struct RangeAdapter_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface4;
};

RangeAdapter_type* RangeAdapter_typeof();
void RangeAdapter__OnRooted_fn(RangeAdapter* __this);
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this);
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval);
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value);
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel);

struct RangeAdapter : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::UX::Property1*> _Source;

    ::g::Uno::UX::Property1* Source();
    void Source(::g::Uno::UX::Property1* value);
};
// }

}}} // ::g::Fuse::Animations
