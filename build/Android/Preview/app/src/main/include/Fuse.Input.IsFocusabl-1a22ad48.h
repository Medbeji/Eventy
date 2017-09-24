// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class IsFocusableChangedArgs :467
// {
::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof();
void IsFocusableChangedArgs__ctor_2_fn(IsFocusableChangedArgs* __this, ::g::Fuse::Visual* visual);
void IsFocusableChangedArgs__New3_fn(::g::Fuse::Visual* visual, IsFocusableChangedArgs** __retval);

struct IsFocusableChangedArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* visual);
    static IsFocusableChangedArgs* New3(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
