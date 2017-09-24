// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct GreaterThan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterThan :528
// {
::g::Fuse::Reactive::InfixOperator_type* GreaterThan_typeof();
void GreaterThan__ctor_3_fn(GreaterThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void GreaterThan__Compute_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** __retval);
void GreaterThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterThan** __retval);
void GreaterThan__get_Symbol_fn(GreaterThan* __this, uString** __retval);

struct GreaterThan : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static GreaterThan* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
