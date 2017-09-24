// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Quatern-4692c3b2.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Vector4;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Vector4 :1305
// {
::g::Fuse::Reactive::QuaternaryOperator_type* Vector4_typeof();
void Vector4__ctor_2_fn(Vector4* __this, ::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z, ::g::Fuse::Reactive::Expression* w);
void Vector4__Compute_fn(Vector4* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** __retval);
void Vector4__New1_fn(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z, ::g::Fuse::Reactive::Expression* w, Vector4** __retval);
void Vector4__ToString_fn(Vector4* __this, uString** __retval);

struct Vector4 : ::g::Fuse::Reactive::QuaternaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z, ::g::Fuse::Reactive::Expression* w);
    static Vector4* New1(::g::Fuse::Reactive::Expression* x, ::g::Fuse::Reactive::Expression* y, ::g::Fuse::Reactive::Expression* z, ::g::Fuse::Reactive::Expression* w);
};
// }

}}} // ::g::Fuse::Reactive
