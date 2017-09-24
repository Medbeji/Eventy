// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Subtract;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Subtract :443
// {
::g::Fuse::Reactive::InfixOperator_type* Subtract_typeof();
void Subtract__ctor_3_fn(Subtract* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Subtract__Compute_fn(Subtract* __this, uObject* left, uObject* right, uObject** __retval);
void Subtract__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Subtract** __retval);
void Subtract__get_Symbol_fn(Subtract* __this, uString** __retval);

struct Subtract : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Subtract* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
