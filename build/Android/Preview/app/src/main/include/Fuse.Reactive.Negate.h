// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Negate;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Negate :1255
// {
::g::Fuse::Reactive::UnaryOperator_type* Negate_typeof();
void Negate__ctor_2_fn(Negate* __this, ::g::Fuse::Reactive::Expression* operand);
void Negate__Compute_fn(Negate* __this, uObject* operand, uObject** __retval);
void Negate__New1_fn(::g::Fuse::Reactive::Expression* operand, Negate** __retval);

struct Negate : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand);
    static Negate* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
