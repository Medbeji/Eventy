// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Vector2;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Vector2 :1273
// {
::g::Fuse::Reactive::BinaryOperator_type* Vector2_typeof();
void Vector2__ctor_2_fn(Vector2* __this, ::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y);
void Vector2__Compute_fn(Vector2* __this, uObject* left, uObject* right, uObject** __retval);
void Vector2__New1_fn(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, Vector2** __retval);
void Vector2__ToString_fn(Vector2* __this, uString** __retval);

struct Vector2 : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y);
    static Vector2* New1(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y);
};
// }

}}} // ::g::Fuse::Reactive
