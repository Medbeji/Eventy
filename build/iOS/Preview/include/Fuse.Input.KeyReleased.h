// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct KeyReleased;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class KeyReleased :1008
// {
::g::Fuse::VisualEvent_type* KeyReleased_typeof();
void KeyReleased__ctor_1_fn(KeyReleased* __this);
void KeyReleased__Invoke_fn(KeyReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyReleasedArgs* args);
void KeyReleased__New1_fn(KeyReleased** __retval);

struct KeyReleased : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static KeyReleased* New1();
};
// }

}}} // ::g::Fuse::Input
