// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LessThan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LessThan :516
// {
::g::Fuse::Reactive::InfixOperator_type* LessThan_typeof();
void LessThan__ctor_3_fn(LessThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LessThan__Compute_fn(LessThan* __this, uObject* left, uObject* right, uObject** __retval);
void LessThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessThan** __retval);
void LessThan__get_Symbol_fn(LessThan* __this, uString** __retval);

struct LessThan : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LessThan* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
