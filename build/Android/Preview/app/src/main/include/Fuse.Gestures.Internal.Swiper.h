// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.47.7/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IGesture.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct Swiper;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class Swiper :917
// {
struct Swiper_type : uType
{
    ::g::Fuse::Input::IGesture interface0;
};

Swiper_type* Swiper_typeof();
void Swiper__ctor__fn(Swiper* __this, ::g::Fuse::Elements::Element* elm);
void Swiper__AddRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region);
void Swiper__AttachSwiper_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval);
void Swiper__CheckNeedUpdated_fn(Swiper* __this, bool* off);
void Swiper__Detach_fn(Swiper* __this);
void Swiper__FromWindow_fn(Swiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Swiper__FuseInputIGestureOnCapture_fn(Swiper* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how);
void Swiper__FuseInputIGestureOnLostCapture_fn(Swiper* __this, bool* forced);
void Swiper__FuseInputIGestureOnPointerMoved_fn(Swiper* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval);
void Swiper__FuseInputIGestureOnPointerPressed_fn(Swiper* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval);
void Swiper__FuseInputIGestureOnPointerReleased_fn(Swiper* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval);
void Swiper__MoveUser_fn(Swiper* __this, ::g::Uno::Float2* coord, double* elapsed, bool* release);
void Swiper__New1_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval);
void Swiper__OnRooted_fn(Swiper* __this, ::g::Fuse::Elements::Element* n);
void Swiper__OnUnrooted_fn(Swiper* __this);
void Swiper__OnUpdated_fn(Swiper* __this);
void Swiper__RemoveRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region);
void Swiper__RestartMove_fn(Swiper* __this, ::g::Uno::Float2* currentCoord);
void Swiper__SelectRegion_fn(Swiper* __this, ::g::Uno::Float2* diff, bool* force, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval);
void Swiper__SetActivation_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region, bool* on, bool* bypass);

struct Swiper : uObject
{
    bool _allowNewRegion;
    int _attachCount;
    int _down;
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _excludeRegion;
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    bool _hasUpdated;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _pointerRegion;
    uStrong< ::g::Uno::Collections::List*> _pointerRegions;
    double _prevTime;
    uStrong< ::g::Uno::Collections::List*> _regions;
    ::g::Uno::Float2 _startCoord;
    double _startProgress;
    static uSStrong< ::g::Fuse::PropertyHandle*> _swiperProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _swiperProperty() { return Swiper_typeof()->Init(), _swiperProperty_; }
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    float _velocityThreshold;

    void ctor_(::g::Fuse::Elements::Element* elm);
    void AddRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region);
    void CheckNeedUpdated(bool off);
    void Detach();
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void MoveUser(::g::Uno::Float2 coord, double elapsed, bool release);
    void OnRooted(::g::Fuse::Elements::Element* n);
    void OnUnrooted();
    void OnUpdated();
    void RemoveRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region);
    void RestartMove(::g::Uno::Float2 currentCoord);
    ::g::Fuse::Gestures::Internal::SwipeRegion* SelectRegion(::g::Uno::Float2 diff, bool force);
    void SetActivation(::g::Fuse::Gestures::Internal::SwipeRegion* region, bool on, bool bypass);
    static Swiper* AttachSwiper(::g::Fuse::Elements::Element* elm);
    static Swiper* New1(::g::Fuse::Elements::Element* elm);
};
// }

}}}} // ::g::Fuse::Gestures::Internal
