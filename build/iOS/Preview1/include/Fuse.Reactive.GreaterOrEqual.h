// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct GreaterOrEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterOrEqual :540
// {
::g::Fuse::Reactive::InfixOperator_type* GreaterOrEqual_typeof();
void GreaterOrEqual__ctor_3_fn(GreaterOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void GreaterOrEqual__Compute_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** __retval);
void GreaterOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterOrEqual** __retval);
void GreaterOrEqual__get_Symbol_fn(GreaterOrEqual* __this, uString** __retval);

struct GreaterOrEqual : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static GreaterOrEqual* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
