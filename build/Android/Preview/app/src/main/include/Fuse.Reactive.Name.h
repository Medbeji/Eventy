// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Expressions/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Name;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Name :257
// {
::g::Fuse::Reactive::ConstantExpression_type* Name_typeof();
void Name__ctor_2_fn(Name* __this, uString* identifier);
void Name__GetValue_fn(Name* __this, uObject* context, uObject** __retval);
void Name__get_Identifier_fn(Name* __this, uString** __retval);
void Name__set_Identifier_fn(Name* __this, uString* value);
void Name__New1_fn(uString* identifier, Name** __retval);
void Name__ToString_fn(Name* __this, uString** __retval);

struct Name : ::g::Fuse::Reactive::ConstantExpression
{
    uStrong<uString*> _Identifier;

    void ctor_2(uString* identifier);
    uString* Identifier();
    void Identifier(uString* value);
    static Name* New1(uString* identifier);
};
// }

}}} // ::g::Fuse::Reactive
