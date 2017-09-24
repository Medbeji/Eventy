// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Min;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Min :324
// {
::g::Fuse::Reactive::BinaryOperator_type* Min_typeof();
void Min__ctor_2_fn(Min* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Min__Compute_fn(Min* __this, uObject* left, uObject* right, uObject** __retval);
void Min__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Min** __retval);
void Min__ToString_fn(Min* __this, uString** __retval);

struct Min : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Min* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
