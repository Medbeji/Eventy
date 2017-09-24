// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class PointerEventArgs :1933
// {
::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof();
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval);
void PointerEventArgs__DeprecatedReleaseCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__IsCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval);
void PointerEventArgs__IsHardCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval);
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__IsSoftCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval);
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__ReleaseCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__ReleaseHardCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__ReleaseSoftCapture_fn(PointerEventArgs* __this, uObject* behavior);
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s);
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval);
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);

struct PointerEventArgs : ::g::Fuse::VisualEventArgs
{
    uStrong< ::g::Fuse::Input::PointerEventData*> _data;
    static bool _drcWarn_;
    static bool& _drcWarn() { return _drcWarn_; }

    void ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    ::g::Fuse::Input::PointerEventData* Data();
    void DeprecatedReleaseCapture(uObject* behavior);
    bool IsCapturedTo(uObject* behavior);
    bool IsHardCapturedTo(uObject* behavior);
    bool IsPrimary();
    bool IsSoftCapturedTo(uObject* behavior);
    int PointerType();
    int PointIndex();
    void ReleaseCapture(uObject* behavior);
    void ReleaseHardCapture(uObject* behavior);
    void ReleaseSoftCapture(uObject* behavior);
    double Timestamp();
    bool TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    bool TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    ::g::Uno::Float2 WheelDelta();
    int WheelDeltaMode();
    ::g::Uno::Float2 WindowPoint();
};
// }

}}} // ::g::Fuse::Input
