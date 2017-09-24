// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToUpper;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToUpper :916
// {
::g::Fuse::Reactive::UnaryOperator_type* ToUpper_typeof();
void ToUpper__ctor_2_fn(ToUpper* __this, ::g::Fuse::Reactive::Expression* value);
void ToUpper__Compute_fn(ToUpper* __this, uObject* s, uObject** __retval);
void ToUpper__New1_fn(::g::Fuse::Reactive::Expression* value, ToUpper** __retval);
void ToUpper__ToString_fn(ToUpper* __this, uString** __retval);

struct ToUpper : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* value);
    static ToUpper* New1(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
