// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Conditional;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Conditional :495
// {
::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof();
void Conditional__ctor_2_fn(Conditional* __this, ::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval);
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval);
void Conditional__New1_fn(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue, Conditional** __retval);
void Conditional__ToString_fn(Conditional* __this, uString** __retval);

struct Conditional : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
    static Conditional* New1(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue);
};
// }

}}} // ::g::Fuse::Reactive
