// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Snapshot;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Snapshot :860
// {
::g::Fuse::Reactive::Expression_type* Snapshot_typeof();
void Snapshot__ctor_1_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* source);
void Snapshot__New1_fn(::g::Fuse::Reactive::Expression* source, Snapshot** __retval);
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval);
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value);
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval);

struct Snapshot : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Source;

    void ctor_1(::g::Fuse::Reactive::Expression* source);
    ::g::Fuse::Reactive::Expression* Source();
    void Source(::g::Fuse::Reactive::Expression* value);
    static Snapshot* New1(::g::Fuse::Reactive::Expression* source);
};
// }

}}} // ::g::Fuse::Reactive
