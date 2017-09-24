// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPoin-ba20e234.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct LongPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LongPressedArgs :272
// {
::g::Fuse::VisualEventArgs_type* LongPressedArgs_typeof();
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, LongPressedArgs** __retval);

struct LongPressedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
    static LongPressedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Gestures
