// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LogicalAnd;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalAnd :591
// {
::g::Fuse::Reactive::InfixOperator_type* LogicalAnd_typeof();
void LogicalAnd__ctor_3_fn(LogicalAnd* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LogicalAnd__Compute_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** __retval);
void LogicalAnd__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalAnd** __retval);
void LogicalAnd__get_Symbol_fn(LogicalAnd* __this, uString** __retval);

struct LogicalAnd : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LogicalAnd* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
