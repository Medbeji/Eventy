// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract class LayoutFunction :3646
// {
struct LayoutFunction_type : ::g::Fuse::Reactive::UnaryOperator_type
{
    void(*fp_GetValue)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**);
};

LayoutFunction_type* LayoutFunction_typeof();
void LayoutFunction__ctor_2_fn(LayoutFunction* __this, ::g::Fuse::Reactive::Expression* element);
void LayoutFunction__Subscribe_fn(LayoutFunction* __this, uObject* dc, uObject* listener, uObject** __retval);

struct LayoutFunction : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* element);
    uObject* GetValue(::g::Fuse::PlacedArgs* args) { uObject* __retval; return (((LayoutFunction_type*)__type)->fp_GetValue)(this, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Elements
