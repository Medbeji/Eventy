// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Vector3;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Vector3 :1290
// {
::g::Fuse::Reactive::TernaryOperator_type* Vector3_typeof();
void Vector3__ctor_2_fn(Vector3* __this, ::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z);
void Vector3__Compute_fn(Vector3* __this, uObject* first, uObject* second, uObject* third, uObject** __retval);
void Vector3__New1_fn(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z, Vector3** __retval);
void Vector3__ToString_fn(Vector3* __this, uString** __retval);

struct Vector3 : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z);
    static Vector3* New1(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z);
};
// }

}}} // ::g::Fuse::Reactive
