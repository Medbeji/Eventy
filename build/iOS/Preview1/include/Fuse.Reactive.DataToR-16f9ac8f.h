// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResource;}}}
namespace g{namespace Fuse{namespace Reactive{struct DataToResource__DataToResourceSubscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class DataToResource.DataToResourceSubscription :167
// {
::g::Fuse::Reactive::UnaryOperator__Subscription_type* DataToResource__DataToResourceSubscription_typeof();
void DataToResource__DataToResourceSubscription__ctor_2_fn(DataToResource__DataToResourceSubscription* __this, ::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
void DataToResource__DataToResourceSubscription__Dispose_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__New2_fn(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener, DataToResource__DataToResourceSubscription** __retval);
void DataToResource__DataToResourceSubscription__OnChanged_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__OnNewData_fn(DataToResource__DataToResourceSubscription* __this, uObject* source, uObject* value);
void DataToResource__DataToResourceSubscription__Subscribe_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__Unsubscribe_fn(DataToResource__DataToResourceSubscription* __this);

struct DataToResource__DataToResourceSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong<uString*> _key;
    uStrong< ::g::Fuse::Node*> _node;

    void ctor_2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
    void OnChanged();
    void Subscribe();
    void Unsubscribe();
    static DataToResource__DataToResourceSubscription* New2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
