// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Multiply;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Multiply :455
// {
::g::Fuse::Reactive::InfixOperator_type* Multiply_typeof();
void Multiply__ctor_3_fn(Multiply* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Multiply__Compute_fn(Multiply* __this, uObject* left, uObject* right, uObject** __retval);
void Multiply__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Multiply** __retval);
void Multiply__get_Symbol_fn(Multiply* __this, uString** __retval);

struct Multiply : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Multiply* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
