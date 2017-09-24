// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LessOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LessOrEqual :553
// {
::g::Fuse::Reactive::InfixOperator_type* LessOrEqual_typeof();
void LessOrEqual__ctor_3_fn(LessOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LessOrEqual__Compute_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** __retval);
void LessOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessOrEqual** __retval);
void LessOrEqual__get_Symbol_fn(LessOrEqual* __this, uString** __retval);

struct LessOrEqual : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LessOrEqual* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
