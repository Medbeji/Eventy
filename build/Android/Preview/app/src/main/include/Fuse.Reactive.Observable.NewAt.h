// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observa-9616d070.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__NewAt;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.NewAt :898
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAt_typeof();
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue);
void Observable__NewAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval);
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub);
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this);

struct Observable__NewAt : ::g::Fuse::Reactive::Observable__Operation
{
    int _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue);
    static Observable__NewAt* New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue);
};
// }

}}} // ::g::Fuse::Reactive
