// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LogicalOr;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalOr :604
// {
::g::Fuse::Reactive::InfixOperator_type* LogicalOr_typeof();
void LogicalOr__ctor_3_fn(LogicalOr* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LogicalOr__Compute_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** __retval);
void LogicalOr__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalOr** __retval);
void LogicalOr__get_Symbol_fn(LogicalOr* __this, uString** __retval);

struct LogicalOr : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LogicalOr* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
