// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Expression :227
// {
struct Expression_type : uType
{
    ::g::Fuse::Reactive::IExpression interface0;
    void(*fp_Subscribe)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**);
};

Expression_type* Expression_typeof();
void Expression__ctor__fn(Expression* __this);

struct Expression : uObject
{
    void ctor_();
    uObject* Subscribe(uObject* context, uObject* listener) { uObject* __retval; return (((Expression_type*)__type)->fp_Subscribe)(this, context, listener, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
