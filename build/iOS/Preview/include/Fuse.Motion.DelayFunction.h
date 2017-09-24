// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Motion{struct DelayFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class DelayFunction :520
// {
::g::Fuse::Reactive::BinaryOperator_type* DelayFunction_typeof();
void DelayFunction__ctor_2_fn(DelayFunction* __this, ::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
void DelayFunction__New1_fn(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay, DelayFunction** __retval);
void DelayFunction__OnNewOperands_fn(DelayFunction* __this, uObject* listener, uObject* value, uObject* delay);

struct DelayFunction : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
    static DelayFunction* New1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay);
};
// }

}}} // ::g::Fuse::Motion
