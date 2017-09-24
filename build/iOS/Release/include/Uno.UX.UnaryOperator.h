// This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Operator.h>
namespace g{namespace Uno{namespace UX{struct UnaryOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class UnaryOperator :253
// {
struct UnaryOperator_type : ::g::Uno::UX::Operator_type
{
    void(*fp_Compute)(::g::Uno::UX::UnaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
};

UnaryOperator_type* UnaryOperator_typeof();
void UnaryOperator__Push_fn(UnaryOperator* __this);

struct UnaryOperator : ::g::Uno::UX::Operator
{
    bool _hasOperand;
    uStrong< ::g::Uno::UX::Value*> _operand;

    ::g::Uno::UX::Value* Compute(::g::Uno::UX::Value* a) { ::g::Uno::UX::Value* __retval; return (((UnaryOperator_type*)__type)->fp_Compute)(this, a, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
