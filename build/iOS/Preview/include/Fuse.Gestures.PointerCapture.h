// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Gestures{struct PointerCapture;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class PointerCapture :521
// {
struct PointerCapture_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Input::IGesture interface6;
    ::g::Uno::UX::IPropertyListener interface7;
};

PointerCapture_type* PointerCapture_typeof();
void PointerCapture__ctor_3_fn(PointerCapture* __this);
void PointerCapture__FuseInputIGestureOnCapture_fn(PointerCapture* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how);
void PointerCapture__FuseInputIGestureOnLostCapture_fn(PointerCapture* __this, bool* forced);
void PointerCapture__FuseInputIGestureOnPointerMoved_fn(PointerCapture* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval);
void PointerCapture__FuseInputIGestureOnPointerPressed_fn(PointerCapture* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval);
void PointerCapture__FuseInputIGestureOnPointerReleased_fn(PointerCapture* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval);
void PointerCapture__FuseInputIGestureget_Priority_fn(PointerCapture* __this, int* __retval);
void PointerCapture__FuseInputIGestureget_PriorityAdjustment_fn(PointerCapture* __this, int* __retval);
void PointerCapture__FuseInputIGestureget_Significance_fn(PointerCapture* __this, float* __retval);
void PointerCapture__get_IsActive_fn(PointerCapture* __this, bool* __retval);
void PointerCapture__set_IsActive_fn(PointerCapture* __this, bool* value);
void PointerCapture__New2_fn(PointerCapture** __retval);
void PointerCapture__get_On_fn(PointerCapture* __this, int* __retval);
void PointerCapture__set_On_fn(PointerCapture* __this, int* value);
void PointerCapture__OnRooted_fn(PointerCapture* __this);
void PointerCapture__OnUnrooted_fn(PointerCapture* __this);
void PointerCapture__SetIsActive_fn(PointerCapture* __this, bool* value, uObject* origin);
void PointerCapture__UnoUXIPropertyListenerOnPropertyChanged_fn(PointerCapture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* value);

struct PointerCapture : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    bool _isActive;
    int _on;
    static ::g::Uno::UX::Selector IsActiveName_;
    static ::g::Uno::UX::Selector& IsActiveName() { return PointerCapture_typeof()->Init(), IsActiveName_; }

    void ctor_3();
    bool IsActive();
    void IsActive(bool value);
    int On();
    void On(int value);
    void SetIsActive(bool value, uObject* origin);
    static PointerCapture* New2();
};
// }

}}} // ::g::Fuse::Gestures
