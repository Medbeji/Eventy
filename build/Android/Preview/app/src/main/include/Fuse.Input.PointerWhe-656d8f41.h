// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMovedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerWheelMovedArgs :1936
// {
::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof();
void PointerWheelMovedArgs__ctor_3_fn(PointerWheelMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerWheelMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerWheelMovedArgs** __retval);

struct PointerWheelMovedArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    static PointerWheelMovedArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
