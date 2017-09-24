// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct NullCoalesce;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NullCoalesce :479
// {
::g::Fuse::Reactive::InfixOperator_type* NullCoalesce_typeof();
void NullCoalesce__ctor_3_fn(NullCoalesce* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void NullCoalesce__Compute_fn(NullCoalesce* __this, uObject* left, uObject* right, uObject** __retval);
void NullCoalesce__get_IsLeftOptional_fn(NullCoalesce* __this, bool* __retval);
void NullCoalesce__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NullCoalesce** __retval);
void NullCoalesce__get_Symbol_fn(NullCoalesce* __this, uString** __retval);

struct NullCoalesce : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static NullCoalesce* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
