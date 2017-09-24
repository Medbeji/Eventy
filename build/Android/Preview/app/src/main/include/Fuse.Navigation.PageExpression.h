// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct PageExpression;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PageExpression :1460
// {
::g::Fuse::Reactive::Expression_type* PageExpression_typeof();
void PageExpression__ctor_1_fn(PageExpression* __this, uString* key);
void PageExpression__get_Key_fn(PageExpression* __this, uString** __retval);
void PageExpression__set_Key_fn(PageExpression* __this, uString* value);
void PageExpression__New1_fn(uString* key, PageExpression** __retval);
void PageExpression__Subscribe_fn(PageExpression* __this, uObject* dc, uObject* listener, uObject** __retval);

struct PageExpression : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    void ctor_1(uString* key);
    uString* Key();
    void Key(uString* value);
    static PageExpression* New1(uString* key);
};
// }

}}} // ::g::Fuse::Navigation
