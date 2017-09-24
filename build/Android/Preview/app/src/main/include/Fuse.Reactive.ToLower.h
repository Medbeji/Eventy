// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ToLower;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ToLower :932
// {
::g::Fuse::Reactive::UnaryOperator_type* ToLower_typeof();
void ToLower__ctor_2_fn(ToLower* __this, ::g::Fuse::Reactive::Expression* value);
void ToLower__Compute_fn(ToLower* __this, uObject* s, uObject** __retval);
void ToLower__New1_fn(::g::Fuse::Reactive::Expression* value, ToLower** __retval);
void ToLower__ToString_fn(ToLower* __this, uString** __retval);

struct ToLower : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* value);
    static ToLower* New1(::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
