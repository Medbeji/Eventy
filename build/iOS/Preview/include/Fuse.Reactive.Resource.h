// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Resource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Resource :833
// {
::g::Fuse::Reactive::Expression_type* Resource_typeof();
void Resource__ctor_1_fn(Resource* __this, uString* key);
void Resource__get_Key_fn(Resource* __this, uString** __retval);
void Resource__set_Key_fn(Resource* __this, uString* value);
void Resource__New1_fn(uString* key, Resource** __retval);
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval);

struct Resource : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    void ctor_1(uString* key);
    uString* Key();
    void Key(uString* value);
    static Resource* New1(uString* key);
};
// }

}}} // ::g::Fuse::Reactive
