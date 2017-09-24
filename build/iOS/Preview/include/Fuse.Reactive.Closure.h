// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.Bindings/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Closure;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Closure :45
// {
::g::Fuse::Node_type* Closure_typeof();
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable);
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval);
void Closure__OnRooted_fn(Closure* __this);
void Closure__add_Ready_fn(Closure* __this, uDelegate* value);
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value);
void Closure__ScheduleReady_fn(Closure* __this);

struct Closure : ::g::Fuse::Node
{
    uStrong< ::g::Uno::UX::NameTable*> _nameTable;
    uStrong<uDelegate*> _ready;

    void ctor_2(::g::Uno::UX::NameTable* nameTable);
    void add_Ready(uDelegate* value);
    void remove_Ready(uDelegate* value);
    void ScheduleReady();
    static Closure* New2(::g::Uno::UX::NameTable* nameTable);
};
// }

}}} // ::g::Fuse::Reactive
