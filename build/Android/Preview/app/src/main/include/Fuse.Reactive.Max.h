// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Max;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Max :340
// {
::g::Fuse::Reactive::BinaryOperator_type* Max_typeof();
void Max__ctor_2_fn(Max* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Max__Compute_fn(Max* __this, uObject* left, uObject* right, uObject** __retval);
void Max__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Max** __retval);
void Max__ToString_fn(Max* __this, uString** __retval);

struct Max : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Max* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
