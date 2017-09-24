// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct NotEqual;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NotEqual :578
// {
::g::Fuse::Reactive::InfixOperator_type* NotEqual_typeof();
void NotEqual__ctor_3_fn(NotEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void NotEqual__Compute_fn(NotEqual* __this, uObject* left, uObject* right, uObject** __retval);
void NotEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NotEqual** __retval);
void NotEqual__get_Symbol_fn(NotEqual* __this, uString** __retval);

struct NotEqual : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static NotEqual* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
