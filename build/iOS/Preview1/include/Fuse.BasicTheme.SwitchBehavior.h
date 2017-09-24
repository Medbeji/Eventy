// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace BasicTheme{struct SwitchBehavior;}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// internal sealed class SwitchBehavior :113
// {
::g::Fuse::Triggers::Trigger_type* SwitchBehavior_typeof();
void SwitchBehavior__ctor_5_fn(SwitchBehavior* __this);
void SwitchBehavior__get_Bounds_fn(SwitchBehavior* __this, ::g::Fuse::Elements::Element** __retval);
void SwitchBehavior__set_Bounds_fn(SwitchBehavior* __this, ::g::Fuse::Elements::Element* value);
void SwitchBehavior__New2_fn(SwitchBehavior** __retval);
void SwitchBehavior__OnCaptureLost_fn(SwitchBehavior* __this);
void SwitchBehavior__OnPlaced_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void SwitchBehavior__OnPointerMoved_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void SwitchBehavior__OnPointerPressed_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void SwitchBehavior__OnPointerReleased_fn(SwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void SwitchBehavior__OnPointerTapped_fn(SwitchBehavior* __this, uObject* a, int* tapCount);
void SwitchBehavior__OnRooted_fn(SwitchBehavior* __this);
void SwitchBehavior__OnUnrooted_fn(SwitchBehavior* __this);
void SwitchBehavior__OnValueChanged_fn(SwitchBehavior* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void SwitchBehavior__ReleaseCapture_fn(SwitchBehavior* __this, bool* __retval);
void SwitchBehavior__get_Size_fn(SwitchBehavior* __this, ::g::Uno::Float2* __retval);

struct SwitchBehavior : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Elements::Element*> _bounds;
    bool _captured;
    int _capturedIndex;
    uStrong< ::g::Fuse::Gestures::Clicker*> _clicker;
    ::g::Uno::Float2 _currentCoord;
    ::g::Uno::Float2 _originalP;
    ::g::Uno::Float2 _prevCoord;
    uStrong< ::g::Fuse::Controls::ToggleControl*> _switch;

    void ctor_5();
    ::g::Fuse::Elements::Element* Bounds();
    void Bounds(::g::Fuse::Elements::Element* value);
    void OnCaptureLost();
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnPointerTapped(uObject* a, int tapCount);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    bool ReleaseCapture();
    ::g::Uno::Float2 Size();
    static SwitchBehavior* New2();
};
// }

}}} // ::g::Fuse::BasicTheme
