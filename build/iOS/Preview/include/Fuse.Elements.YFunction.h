// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct YFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class YFunction :3738
// {
::g::Fuse::Elements::LayoutFunction_type* YFunction_typeof();
void YFunction__ctor_3_fn(YFunction* __this, ::g::Fuse::Reactive::Expression* element);
void YFunction__GetValue_fn(YFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);
void YFunction__New1_fn(::g::Fuse::Reactive::Expression* element, YFunction** __retval);

struct YFunction : ::g::Fuse::Elements::LayoutFunction
{
    void ctor_3(::g::Fuse::Reactive::Expression* element);
    static YFunction* New1(::g::Fuse::Reactive::Expression* element);
};
// }

}}} // ::g::Fuse::Elements
