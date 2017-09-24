// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Focus;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGained;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct FocusLost;}}}
namespace g{namespace Fuse{namespace Input{struct FocusLostArgs;}}}
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedEvent;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}

namespace g{
namespace Fuse{
namespace Input{

// public partial static class Focus :173
// {
uClassType* Focus_typeof();
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval);
void Focus__ChangeFocusedVisual_fn(::g::Fuse::Visual* node, uString* memberName);
void Focus__FindRoot_fn(::g::Fuse::Visual** __retval);
void Focus__get_FocusedVisual_fn(::g::Fuse::Visual** __retval);
void Focus__get_Gained_fn(::g::Fuse::VisualEvent** __retval);
void Focus__GetDelegator_fn(::g::Fuse::Visual* n, uDelegate** __retval);
void Focus__GetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval);
void Focus__GiveTo_fn(::g::Fuse::Visual* n);
void Focus__HandlesFocusEvent_fn(::g::Fuse::Visual* n, bool* __retval);
void Focus__IsFocusable_fn(::g::Fuse::Visual* n, bool* __retval);
void Focus__get_IsFocusableChanged_fn(::g::Fuse::VisualEvent** __retval);
void Focus__IsWithin_fn(::g::Fuse::Visual* n, bool* __retval);
void Focus__get_Lost_fn(::g::Fuse::VisualEvent** __retval);
void Focus__Move_fn(int* direction);
void Focus__Obtained_fn(::g::Fuse::Visual* n);
void Focus__Predict_fn(int* direction, ::g::Fuse::Visual** __retval);
void Focus__Release_fn();
void Focus__ReleaseFrom_fn(::g::Fuse::Visual* n);
void Focus__ResetFocusDelegate_fn(::g::Fuse::Visual* n);
void Focus__ResetIsFocusable_fn(::g::Fuse::Visual* n);
void Focus__SetDelegator_fn(::g::Fuse::Visual* n, uDelegate* delegator);
void Focus__SetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual* d);
void Focus__SetIsFocusable_fn(::g::Fuse::Visual* n, bool* focusable);

struct Focus : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _focusDelegatorHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _focusDelegatorHandle() { return Focus_typeof()->Init(), _focusDelegatorHandle_; }
    static uSStrong< ::g::Fuse::Visual*> _focusedObject_;
    static uSStrong< ::g::Fuse::Visual*>& _focusedObject() { return Focus_typeof()->Init(), _focusedObject_; }
    static uSStrong< ::g::Fuse::Input::FocusGained*> _gained_;
    static uSStrong< ::g::Fuse::Input::FocusGained*>& _gained() { return Focus_typeof()->Init(), _gained_; }
    static uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> _isFoucsableChanged_;
    static uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*>& _isFoucsableChanged() { return Focus_typeof()->Init(), _isFoucsableChanged_; }
    static uSStrong< ::g::Fuse::Visual*> _lastFocusedVisual_;
    static uSStrong< ::g::Fuse::Visual*>& _lastFocusedVisual() { return Focus_typeof()->Init(), _lastFocusedVisual_; }
    static uSStrong< ::g::Fuse::Input::FocusLost*> _lost_;
    static uSStrong< ::g::Fuse::Input::FocusLost*>& _lost() { return Focus_typeof()->Init(), _lost_; }

    static bool CanSetFocus(::g::Fuse::Node* node);
    static void ChangeFocusedVisual(::g::Fuse::Visual* node, uString* memberName);
    static ::g::Fuse::Visual* FindRoot();
    static uDelegate* GetDelegator(::g::Fuse::Visual* n);
    static ::g::Fuse::Visual* GetFocusDelegate(::g::Fuse::Visual* n);
    static void GiveTo(::g::Fuse::Visual* n);
    static bool HandlesFocusEvent(::g::Fuse::Visual* n);
    static bool IsFocusable(::g::Fuse::Visual* n);
    static bool IsWithin(::g::Fuse::Visual* n);
    static void Move(int direction);
    static void Obtained(::g::Fuse::Visual* n);
    static ::g::Fuse::Visual* Predict(int direction);
    static void Release();
    static void ReleaseFrom(::g::Fuse::Visual* n);
    static void ResetFocusDelegate(::g::Fuse::Visual* n);
    static void ResetIsFocusable(::g::Fuse::Visual* n);
    static void SetDelegator(::g::Fuse::Visual* n, uDelegate* delegator);
    static void SetFocusDelegate(::g::Fuse::Visual* n, ::g::Fuse::Visual* d);
    static void SetIsFocusable(::g::Fuse::Visual* n, bool focusable);
    static ::g::Fuse::Visual* FocusedVisual();
    static ::g::Fuse::VisualEvent* Gained();
    static ::g::Fuse::VisualEvent* IsFocusableChanged();
    static ::g::Fuse::VisualEvent* Lost();
};
// }

}}} // ::g::Fuse::Input
