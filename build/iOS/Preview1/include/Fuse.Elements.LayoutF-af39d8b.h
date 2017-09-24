// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction__LayoutSubscription;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class LayoutFunction.LayoutSubscription :3659
// {
::g::Fuse::Reactive::UnaryOperator__Subscription_type* LayoutFunction__LayoutSubscription_typeof();
void LayoutFunction__LayoutSubscription__ctor_2_fn(LayoutFunction__LayoutSubscription* __this, ::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
void LayoutFunction__LayoutSubscription__Dispose_fn(LayoutFunction__LayoutSubscription* __this);
void LayoutFunction__LayoutSubscription__New2_fn(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener, LayoutFunction__LayoutSubscription** __retval);
void LayoutFunction__LayoutSubscription__OnNewOperand_fn(LayoutFunction__LayoutSubscription* __this, uObject* elmObj);
void LayoutFunction__LayoutSubscription__OnPlaced_fn(LayoutFunction__LayoutSubscription* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);

struct LayoutFunction__LayoutSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong< ::g::Fuse::Elements::LayoutFunction*> _lf;

    void ctor_2(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    static LayoutFunction__LayoutSubscription* New2(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Elements
