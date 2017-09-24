// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct HeightFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class HeightFunction :3698
// {
::g::Fuse::Elements::LayoutFunction_type* HeightFunction_typeof();
void HeightFunction__ctor_3_fn(HeightFunction* __this, ::g::Fuse::Reactive::Expression* element);
void HeightFunction__GetValue_fn(HeightFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);
void HeightFunction__New1_fn(::g::Fuse::Reactive::Expression* element, HeightFunction** __retval);

struct HeightFunction : ::g::Fuse::Elements::LayoutFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* element);
    static HeightFunction* New1(::g::Fuse::Reactive::Expression* element);
};
// }

}}} // ::g::Fuse::Elements
