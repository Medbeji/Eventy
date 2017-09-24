// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Member;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Member :365
// {
::g::Fuse::Reactive::UnaryOperator_type* Member_typeof();
void Member__ctor_2_fn(Member* __this, ::g::Fuse::Reactive::Expression* obj, uString* name);
void Member__get_Name_fn(Member* __this, uString** __retval);
void Member__set_Name_fn(Member* __this, uString* value);
void Member__New1_fn(::g::Fuse::Reactive::Expression* obj, uString* name, Member** __retval);
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval);
void Member__ToString_fn(Member* __this, uString** __retval);

struct Member : ::g::Fuse::Reactive::UnaryOperator
{
    uStrong<uString*> _Name;

    void ctor_2(::g::Fuse::Reactive::Expression* obj, uString* name);
    uString* Name();
    void Name(uString* value);
    static Member* New1(::g::Fuse::Reactive::Expression* obj, uString* name);
};
// }

}}} // ::g::Fuse::Reactive
