// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct UnaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class UnaryOperator :1173
// {
::g::Fuse::Reactive::Expression_type* UnaryOperator_typeof();
void UnaryOperator__ctor_1_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand);
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval);
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand);
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval);
void UnaryOperator__set_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* value);
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval);

struct UnaryOperator : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Operand;

    void ctor_1(::g::Fuse::Reactive::Expression* operand);
    uObject* Compute(uObject* operand);
    void OnNewOperand(uObject* listener, uObject* operand);
    ::g::Fuse::Reactive::Expression* Operand();
    void Operand(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
