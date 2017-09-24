// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Interna-1993c609.h>
#include <Fuse.Gestures.Interna-24f4f437.h>
#include <Fuse.Gestures.Interna-3d271d8a.h>
#include <Fuse.Gestures.Interna-3d53a127.h>
#include <Fuse.Gestures.Interna-44ea7a95.h>
#include <Fuse.Gestures.Interna-47e25f2f.h>
#include <Fuse.Gestures.Interna-4c26ec11.h>
#include <Fuse.Gestures.Interna-bc586d01.h>
#include <Fuse.Gestures.Interna-e54305f8.h>
#include <Fuse.Gestures.Interna-e613cada.h>
#include <Fuse.Gestures.Interna-ea178680.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.SwipeGe-f1aed91a.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPre-d85d5994.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerRel-5863e73d.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Motion.Simulatio-73b2da14.h>
#include <Fuse.Motion.Simulatio-7cce7e04.h>
#include <Fuse.Motion.Simulatio-8063728b.h>
#include <Fuse.Motion.Simulatio-a4ba96c1.h>
#include <Fuse.Motion.Simulatio-b08eb1c5.h>
#include <Fuse.Motion.Simulatio-edb97e3.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[10];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// private sealed class SwipeRegion.DoSwiped :812
// {
static void SwipeRegion__DoSwiped_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Cancelled), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Region), 0);
}

uType* SwipeRegion__DoSwiped_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(SwipeRegion__DoSwiped);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.SwipeRegion.DoSwiped", options);
    type->fp_build_ = SwipeRegion__DoSwiped_build;
    type->fp_ctor_ = (void*)SwipeRegion__DoSwiped__New1_fn;
    return type;
}

// public generated DoSwiped() :812
void SwipeRegion__DoSwiped__ctor__fn(SwipeRegion__DoSwiped* __this)
{
    __this->ctor_();
}

// public generated DoSwiped New() :812
void SwipeRegion__DoSwiped__New1_fn(SwipeRegion__DoSwiped** __retval)
{
    *__retval = SwipeRegion__DoSwiped::New1();
}

// public void Perform() :818
void SwipeRegion__DoSwiped__Perform_fn(SwipeRegion__DoSwiped* __this)
{
    __this->Perform();
}

// public generated DoSwiped() [instance] :812
void SwipeRegion__DoSwiped::ctor_()
{
}

// public void Perform() [instance] :818
void SwipeRegion__DoSwiped::Perform()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion.DoSwiped", "Perform()");

    if (::g::Uno::Delegate::op_Inequality(uPtr(Region)->Swiped1, NULL))
        uPtr(uPtr(Region)->Swiped1)->Invoke(2, uCRef(Active), uCRef(Cancelled));
}

// public generated DoSwiped New() [static] :812
SwipeRegion__DoSwiped* SwipeRegion__DoSwiped::New1()
{
    SwipeRegion__DoSwiped* obj1 = (SwipeRegion__DoSwiped*)uNew(SwipeRegion__DoSwiped_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class EdgeSwiper :282
// {
// static EdgeSwiper() :282
static void EdgeSwiper__cctor__fn(uType* __type)
{
    EdgeSwiper::_leftRightSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f)));
    EdgeSwiper::_upDownSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f)));
}

static void EdgeSwiper_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _currentCoord), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _down), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edgeThreshold), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _isHardCapture), 0,
        ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _pointBody1D), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _previousCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _prevTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _progress), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startProgress), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _target), 0,
        ::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocityThreshold), 0,
        ::TYPES[10/*Uno.Action<object, double>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, ProgressChanged1), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_leftRightSwipe_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_upDownSwipe_, uFieldFlagsStatic);
}

uType* EdgeSwiper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(EdgeSwiper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.EdgeSwiper", options);
    type->fp_build_ = EdgeSwiper_build;
    type->fp_ctor_ = (void*)EdgeSwiper__New1_fn;
    type->fp_cctor_ = EdgeSwiper__cctor__fn;
    return type;
}

// public generated EdgeSwiper() :282
void EdgeSwiper__ctor__fn(EdgeSwiper* __this)
{
    __this->ctor_();
}

// private void CalcProgress() :555
void EdgeSwiper__CalcProgress_fn(EdgeSwiper* __this)
{
    __this->CalcProgress();
}

// private void CheckNeedUpdated([bool off]) :383
void EdgeSwiper__CheckNeedUpdated_fn(EdgeSwiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Disable() :376
void EdgeSwiper__Disable_fn(EdgeSwiper* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :286
void EdgeSwiper__get_Edge_fn(EdgeSwiper* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :287
void EdgeSwiper__set_Edge_fn(EdgeSwiper* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :292
void EdgeSwiper__get_EdgeThreshold_fn(EdgeSwiper* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :293
void EdgeSwiper__set_EdgeThreshold_fn(EdgeSwiper* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :370
void EdgeSwiper__Enable_fn(EdgeSwiper* __this)
{
    __this->Enable();
}

// private float2 FromWindow(float2 p) :435
void EdgeSwiper__FromWindow_fn(EdgeSwiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public bool get_IsEnabled() :364
void EdgeSwiper__get_IsEnabled_fn(EdgeSwiper* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// private bool IsWithinSwipeBounds(float2 windowPoint) :528
void EdgeSwiper__IsWithinSwipeBounds_fn(EdgeSwiper* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsWithinSwipeBounds(*windowPoint);
}

// private void MoveUser(float2 coord, [bool release]) :443
void EdgeSwiper__MoveUser_fn(EdgeSwiper* __this, ::g::Uno::Float2* coord, bool* release)
{
    __this->MoveUser(*coord, *release);
}

// public generated EdgeSwiper New() :282
void EdgeSwiper__New1_fn(EdgeSwiper** __retval)
{
    *__retval = EdgeSwiper::New1();
}

// private void OnLostCapture() :408
void EdgeSwiper__OnLostCapture_fn(EdgeSwiper* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :458
void EdgeSwiper__OnPointerMoved_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :417
void EdgeSwiper__OnPointerPressed_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :495
void EdgeSwiper__OnPointerReleased_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnUpdated() :401
void EdgeSwiper__OnUpdated_fn(EdgeSwiper* __this)
{
    __this->OnUpdated();
}

// private float PrimaryValue(float2 v) :563
void EdgeSwiper__PrimaryValue_fn(EdgeSwiper* __this, ::g::Uno::Float2* v, float* __retval)
{
    *__retval = __this->PrimaryValue(*v);
}

// public double get_Progress() :316
void EdgeSwiper__get_Progress_fn(EdgeSwiper* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :317
void EdgeSwiper__set_Progress_fn(EdgeSwiper* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) :312
void EdgeSwiper__add_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) :312
void EdgeSwiper__remove_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Rooted(Fuse.Elements.Element e) :347
void EdgeSwiper__Rooted_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* e)
{
    __this->Rooted(e);
}

// public void Seek(double progress) :325
void EdgeSwiper__Seek_fn(EdgeSwiper* __this, double* progress)
{
    __this->Seek(*progress);
}

// public Fuse.Elements.Element get_Target() :298
void EdgeSwiper__get_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :299
void EdgeSwiper__set_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public void Unrooted() :355
void EdgeSwiper__Unrooted_fn(EdgeSwiper* __this)
{
    __this->Unrooted();
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_leftRightSwipe_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_upDownSwipe_;

// public generated EdgeSwiper() [instance] :282
void EdgeSwiper::ctor_()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", ".ctor()");
    _pointBody1D = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateNormalized(::TYPES[1/*Fuse.Motion.Simulation.SmoothSnap<float>*/]));
    _edgeThreshold = 32.0f;
    _previousCoord = ::g::Uno::Float2__New1(0.0f);
    _currentCoord = ::g::Uno::Float2__New1(0.0f);
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _velocityThreshold = 300.0f;
    _down = -1;
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
}

// private void CalcProgress() [instance] :555
void EdgeSwiper::CalcProgress()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "CalcProgress()");
    ::g::Fuse::Elements::Element* ind1 = Target();
    ::g::Fuse::Elements::Element* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Elements::Element*)_element;
    ::g::Uno::Float2 bounds = uPtr(t)->ActualSize();
    ::g::Uno::Float2 progress = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord), bounds);
    Progress(::g::Uno::Math::Clamp(_startProgress + (double)PrimaryValue(progress), 0.0, 1.0));
}

// private void CheckNeedUpdated([bool off]) [instance] :383
void EdgeSwiper::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "CheckNeedUpdated([bool])");
    bool needUpdated = (_down == -1) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_pointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Disable() [instance] :376
void EdgeSwiper::Disable()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "Disable()");
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(0.0f));
    CheckNeedUpdated(false);
}

// public Fuse.Gestures.Edge get_Edge() [instance] :286
int EdgeSwiper::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :287
void EdgeSwiper::Edge(int value)
{
    _edge = value;
}

// public float get_EdgeThreshold() [instance] :292
float EdgeSwiper::EdgeThreshold()
{
    return _edgeThreshold;
}

// public void set_EdgeThreshold(float value) [instance] :293
void EdgeSwiper::EdgeThreshold(float value)
{
    _edgeThreshold = value;
}

// public void Enable() [instance] :370
void EdgeSwiper::Enable()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "Enable()");
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(1.0f));
    CheckNeedUpdated(false);
}

// private float2 FromWindow(float2 p) [instance] :435
::g::Uno::Float2 EdgeSwiper::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "FromWindow(float2)");

    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// public bool get_IsEnabled() [instance] :364
bool EdgeSwiper::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "get_IsEnabled()");
    return (Progress() > 0.0) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_pointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]));
}

// private bool IsWithinSwipeBounds(float2 windowPoint) [instance] :528
bool EdgeSwiper::IsWithinSwipeBounds(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "IsWithinSwipeBounds(float2)");

    if ((Target() != NULL) && (uPtr(Target())->GetHitWindowPoint(windowPoint) != NULL))
        return true;

    ::g::Uno::Float2 coord = uPtr(_element)->WindowToLocal(windowPoint);
    ::g::Uno::Float2 bounds = uPtr(_element)->ActualSize();
    float threshold = EdgeThreshold();

    switch (Edge())
    {
        case 0:
            return (coord.X >= 0.0f) && (coord.X <= threshold);
        case 1:
            return (coord.X <= bounds.X) && (coord.X >= (bounds.X - threshold));
        case 2:
            return (coord.Y >= 0.0f) && (coord.Y <= threshold);
        case 3:
            return (coord.Y <= bounds.Y) && (coord.Y >= (bounds.Y - threshold));
    }

    return false;
}

// private void MoveUser(float2 coord, [bool release]) [instance] :443
void EdgeSwiper::MoveUser(::g::Uno::Float2 coord, bool release)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "MoveUser(float2,[bool])");
    _currentCoord = coord;
    _previousCoord = coord;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef((double)(float)elapsed), uCRef<int>((!_isHardCapture ? 1 : 0) | (release ? 2 : 0)));
}

// private void OnLostCapture() [instance] :408
void EdgeSwiper::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "OnLostCapture()");
    _down = -1;
    _isHardCapture = false;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)Progress()));
    ::g::Fuse::Input::Pointer::ReleaseCapture(this);
    CheckNeedUpdated(false);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :458
void EdgeSwiper::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    MoveUser(FromWindow(uPtr(args)->WindowPoint()), false);

    if (!_isHardCapture)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = false;

        switch (Edge())
        {
            case 1:
            case 0:
            {
                withinBounds = uPtr(EdgeSwiper::_leftRightSwipe())->IsWithinBounds(diff);
                break;
            }
            case 2:
            case 3:
            {
                withinBounds = uPtr(EdgeSwiper::_upDownSwipe())->IsWithinBounds(diff);
                break;
            }
        }

        if (withinBounds)
        {
            if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
                _isHardCapture = true;
            else
                OnLostCapture();
        }
    }

    CalcProgress();
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :417
void EdgeSwiper::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if ((_down != -1) || !IsWithinSwipeBounds(uPtr(args)->WindowPoint()))
        return;

    _isHardCapture = false;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
    {
        _startProgress = Progress();
        _down = uPtr(args)->PointIndex();
        _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
        _previousCoord = FromWindow(args->WindowPoint());
        _currentCoord = FromWindow(args->WindowPoint());
        _startCoord = FromWindow(args->WindowPoint());
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :495
void EdgeSwiper::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret3;

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!_isHardCapture)
    {
        OnLostCapture();
        return;
    }

    MoveUser(FromWindow(uPtr(args)->WindowPoint()), true);
    ::g::Fuse::Input::Pointer::ReleaseCapture(this);
    float v = PrimaryValue((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3));
    bool on = false;

    if (v < -_velocityThreshold)
        on = false;
    else if (v > _velocityThreshold)
        on = true;
    else if (Progress() > 0.5)
        on = true;

    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef((float)(on ? 1 : 0)));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)Progress()));
    _down = -1;
    _isHardCapture = false;
    CheckNeedUpdated(false);
}

// private void OnUpdated() [instance] :401
void EdgeSwiper::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "OnUpdated()");
    float ret4;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_pointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    Progress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// private float PrimaryValue(float2 v) [instance] :563
float EdgeSwiper::PrimaryValue(::g::Uno::Float2 v)
{
    switch (Edge())
    {
        case 0:
            return v.X;
        case 1:
            return -v.X;
        case 2:
            return v.Y;
        case 3:
            return -v.Y;
    }

    return 0.0f;
}

// public double get_Progress() [instance] :316
double EdgeSwiper::Progress()
{
    return _progress;
}

// private void set_Progress(double value) [instance] :317
void EdgeSwiper::Progress(double value)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "set_Progress(double)");
    _progress = ::g::Uno::Math::Max(value, 0.0);

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, uCRef(_progress));
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) [instance] :312
void EdgeSwiper::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "add_ProgressChanged(Uno.Action<object, double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[10/*Uno.Action<object, double>*/]);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) [instance] :312
void EdgeSwiper::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "remove_ProgressChanged(Uno.Action<object, double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[10/*Uno.Action<object, double>*/]);
}

// public void Rooted(Fuse.Elements.Element e) [instance] :347
void EdgeSwiper::Rooted(::g::Fuse::Elements::Element* e)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "Rooted(Fuse.Elements.Element)");
    _element = e;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public void Seek(double progress) [instance] :325
void EdgeSwiper::Seek(double progress)
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "Seek(double)");
    Progress(progress);
}

// public Fuse.Elements.Element get_Target() [instance] :298
::g::Fuse::Elements::Element* EdgeSwiper::Target()
{
    return _target;
}

// public void set_Target(Fuse.Elements.Element value) [instance] :299
void EdgeSwiper::Target(::g::Fuse::Elements::Element* value)
{
    _target = value;
}

// public void Unrooted() [instance] :355
void EdgeSwiper::Unrooted()
{
    uStackFrame __("Fuse.Gestures.Internal.EdgeSwiper", "Unrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public generated EdgeSwiper New() [static] :282
EdgeSwiper* EdgeSwiper::New1()
{
    EdgeSwiper* obj2 = (EdgeSwiper*)uNew(EdgeSwiper_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// private sealed class TwoFinger.Point :1399
// {
static void TwoFinger__Point_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger__Point, Current), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger__Point, Down), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger__Point, Previous), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger__Point, Start), 0);
}

uType* TwoFinger__Point_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TwoFinger__Point);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.TwoFinger.Point", options);
    type->fp_build_ = TwoFinger__Point_build;
    type->fp_ctor_ = (void*)TwoFinger__Point__New1_fn;
    return type;
}

// public generated Point() :1399
void TwoFinger__Point__ctor__fn(TwoFinger__Point* __this)
{
    __this->ctor_();
}

// public generated Point New() :1399
void TwoFinger__Point__New1_fn(TwoFinger__Point** __retval)
{
    *__retval = TwoFinger__Point::New1();
}

// public generated Point() [instance] :1399
void TwoFinger__Point::ctor_()
{
    Down = -1;
}

// public generated Point New() [static] :1399
TwoFinger__Point* TwoFinger__Point::New1()
{
    TwoFinger__Point* obj1 = (TwoFinger__Point*)uNew(TwoFinger__Point_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// public enum SwipeRegion.ProgressFlags :707
uEnumType* SwipeRegion__ProgressFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Internal.SwipeRegion.ProgressFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Interacting", 1LL,
        "EndProgress", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class Swiper :943
// {
// static Swiper() :943
static void Swiper__cctor__fn(uType* __type)
{
    Swiper::_swiperProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Swiper_build(uType* type)
{
    ::STRINGS[0] = uString::Const("incomplete swipe detected");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno");
    ::STRINGS[2] = uString::Const("CheckNeedUpdated");
    ::STRINGS[3] = uString::Const("invalid OnCapture");
    ::STRINGS[4] = uString::Const("Fuse.Input.IGesture.OnCapture");
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Swiper_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _allowNewRegion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _down), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _element), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _excludeRegion), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _hasUpdated), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegion), 0,
        ::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegions), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _prevTime), 0,
        ::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _regions), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _significance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startProgress), 0,
        ::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocityThreshold), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::Swiper::_swiperProperty_, uFieldFlagsStatic);
}

Swiper_type* Swiper_typeof()
{
    static uSStrong<Swiper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Swiper);
    options.TypeSize = sizeof(Swiper_type);
    type = (Swiper_type*)uClassType::New("Fuse.Gestures.Internal.Swiper", options);
    type->fp_build_ = Swiper_build;
    type->fp_cctor_ = Swiper__cctor__fn;
    type->interface0.fp_OnLostCapture = (void(*)(uObject*, bool*))Swiper__FuseInputIGestureOnLostCapture_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int*))Swiper__FuseInputIGestureOnPointerPressed_fn;
    type->interface0.fp_OnCapture = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int*))Swiper__FuseInputIGestureOnCapture_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int*))Swiper__FuseInputIGestureOnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int*))Swiper__FuseInputIGestureOnPointerReleased_fn;
    type->interface0.fp_get_Significance = (void(*)(uObject*, float*))Swiper__FuseInputIGestureget_Significance_fn;
    type->interface0.fp_get_PriorityAdjustment = (void(*)(uObject*, int*))Swiper__FuseInputIGestureget_PriorityAdjustment_fn;
    type->interface0.fp_get_Priority = (void(*)(uObject*, int*))Swiper__FuseInputIGestureget_Priority_fn;
    return type;
}

// private Swiper(Fuse.Elements.Element elm) :949
void Swiper__ctor__fn(Swiper* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) :989
void Swiper__AddRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->AddRegion(region);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) :955
void Swiper__AttachSwiper_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::AttachSwiper(elm);
}

// private void CheckNeedUpdated([bool off]) :1023
void Swiper__CheckNeedUpdated_fn(Swiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Detach() :971
void Swiper__Detach_fn(Swiper* __this)
{
    __this->Detach();
}

// private float2 FromWindow(float2 p) :1144
void Swiper__FromWindow_fn(Swiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void Fuse.Input.IGesture.OnCapture(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how) :1132
void Swiper__FuseInputIGestureOnCapture_fn(Swiper* __this, ::g::Fuse::Input::PointerEventArgs* args, int* how)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.OnCapture(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType)");

    if (uPtr(__this->_pointerRegions)->Count() == 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"invalid OnC...*/], NULL, ::STRINGS[1/*"/Users/medb...*/], 1136, ::STRINGS[4/*"Fuse.Input....*/]);
        return;
    }

    __this->RestartMove(__this->FromWindow(uPtr(args)->WindowPoint()));
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced) :1072
void Swiper__FuseInputIGestureOnLostCapture_fn(Swiper* __this, bool* forced)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.OnLostCapture(bool)");
    bool forced_ = *forced;
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret4;
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret5;
    __this->_significance = 0.0f;

    if (forced_)
    {
        for (int i = 0; i < uPtr(__this->_pointerRegions)->Count(); ++i)
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_pointerRegions), uCRef<int>(i), &ret4), ret4))->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_pointerRegions), uCRef<int>(i), &ret5), ret5))->Progress()));

        if (__this->_pointerRegion != NULL)
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(__this->_pointerRegion)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)uPtr(__this->_pointerRegion)->Progress()));
    }

    __this->CheckNeedUpdated(false);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args) :1166
void Swiper__FuseInputIGestureOnPointerMoved_fn(Swiper* __this, ::g::Fuse::Input::PointerMovedArgs* args, int* __retval)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    __this->MoveUser(__this->FromWindow(uPtr(args)->WindowPoint()), uPtr(args)->Timestamp() - __this->_prevTime, false);
    ::g::Uno::Float2 currentCoord = __this->FromWindow(args->WindowPoint());
    __this->_prevTime = args->Timestamp();

    for (int i = 0; i < 2; ++i)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(currentCoord, __this->_startCoord);

        if (!uPtr(__this->_gesture)->IsHardCapture() || __this->_allowNewRegion)
        {
            ::g::Fuse::Gestures::Internal::SwipeRegion* selRegion = __this->SelectRegion(diff);

            if ((selRegion == __this->_excludeRegion) && (__this->_excludeRegion != NULL))
                __this->RestartMove(currentCoord);
            else if ((selRegion != NULL) && (selRegion != __this->_pointerRegion))
            {
                if (__this->_pointerRegion != NULL)
                    __this->SetActivation(__this->_pointerRegion, uPtr(__this->_pointerRegion)->StableProgress() > 0.5, false);

                __this->_excludeRegion = NULL;
                __this->_pointerRegion = selRegion;
                __this->_startProgress = uPtr(__this->_pointerRegion)->Progress();
                currentCoord = __this->FromWindow(uPtr(args)->WindowPoint());
                diff = ::g::Uno::Float2__op_Subtraction2(currentCoord, __this->_startCoord);
                __this->_allowNewRegion = false;
            }
        }

        __this->_significance = ((__this->_pointerRegion == NULL) ? 0.0f : ::g::Uno::Math::Abs1(uPtr(__this->_pointerRegion)->ScalarDistance(diff)));

        if ((__this->_pointerRegion != NULL) && uPtr(__this->_gesture)->IsHardCapture())
        {
            if (uPtr(__this->_pointerRegion)->InteractProgress(diff, __this->_startProgress))
            {
                __this->RestartMove(currentCoord);
                __this->_excludeRegion = __this->_pointerRegion;
                __this->_pointerRegion = NULL;
                __this->_allowNewRegion = true;
            }
            else if (!__this->_allowNewRegion)
            {
                __this->_allowNewRegion = ((__this->_startProgress == 0.0) && (uPtr(__this->_pointerRegion)->Progress() == 0.0));
                continue;
            }
        }

        break;
    }

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args) :1113
void Swiper__FuseInputIGestureOnPointerPressed_fn(Swiper* __this, ::g::Fuse::Input::PointerPressedArgs* args, int* __retval)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret6;
    ::g::Uno::Float2 coord = __this->FromWindow(uPtr(args)->WindowPoint());
    __this->_prevTime = args->Timestamp();
    uPtr(__this->_pointerRegions)->Clear();
    __this->_pointerRegion = NULL;
    __this->_excludeRegion = NULL;
    __this->_significance = 0.0f;

    for (int i = 0; i < uPtr(__this->_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_regions), uCRef<int>(i), &ret6), ret6);

        if (uPtr(region)->IsSelectable() && uPtr(region)->IsPointInside(__this->_element, coord))
            ::g::Uno::Collections::List__Add_fn(uPtr(__this->_pointerRegions), region);
    }

    if (uPtr(__this->_pointerRegions)->Count() == 0)
        return *__retval = 0, void();

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :1249
void Swiper__FuseInputIGestureOnPointerReleased_fn(Swiper* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int* __retval)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret7;

    if (!uPtr(__this->_gesture)->IsHardCapture() || (__this->_pointerRegion == NULL))
        return *__retval = 2, void();

    ::g::Uno::Float2 currentCoord = __this->FromWindow(uPtr(args)->WindowPoint());
    uPtr(__this->_pointerRegion)->InteractProgress(::g::Uno::Float2__op_Subtraction2(currentCoord, __this->_startCoord), __this->_startProgress);
    __this->MoveUser(currentCoord, args->Timestamp() - __this->_prevTime, true);
    float v = uPtr(__this->_pointerRegion)->ScalarValue((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(__this->_velocity), &ret7), ret7));
    double pdiff = uPtr(__this->_pointerRegion)->Progress() - __this->_startProgress;
    bool on = false;

    if (v < -__this->_velocityThreshold)
        on = false;
    else if (v > __this->_velocityThreshold)
        on = true;
    else if (pdiff >= 0.0)
        on = uPtr(__this->_pointerRegion)->Progress() > (double)uPtr(__this->_pointerRegion)->ActivationThreshold;
    else
        on = !(uPtr(__this->_pointerRegion)->Progress() < (double)uPtr(__this->_pointerRegion)->DeactivationThreshold);

    __this->SetActivation(__this->_pointerRegion, on, false);
    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriority Fuse.Input.IGesture.get_Priority() :1110
void Swiper__FuseInputIGestureget_Priority_fn(Swiper* __this, int* __retval)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.get_Priority()");
    return *__retval = (__this->_pointerRegion == NULL) ? 2 : uPtr(__this->_pointerRegion)->GesturePriority(), void();
}

// private int Fuse.Input.IGesture.get_PriorityAdjustment() :1101
void Swiper__FuseInputIGestureget_PriorityAdjustment_fn(Swiper* __this, int* __retval)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Fuse.Input.IGesture.get_PriorityAdjustment()");
    return *__retval = (__this->_pointerRegion == NULL) ? 0 : (uPtr(__this->_pointerRegion)->Priority < 100) ? 1 : 0, void();
}

// private float Fuse.Input.IGesture.get_Significance() :1096
void Swiper__FuseInputIGestureget_Significance_fn(Swiper* __this, float* __retval)
{
    return *__retval = __this->_significance, void();
}

// private void MoveUser(float2 coord, double elapsed, [bool release]) :1152
void Swiper__MoveUser_fn(Swiper* __this, ::g::Uno::Float2* coord, double* elapsed, bool* release)
{
    __this->MoveUser(*coord, *elapsed, *release);
}

// private Swiper New(Fuse.Elements.Element elm) :949
void Swiper__New1_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::New1(elm);
}

// private void OnRooted(Fuse.Elements.Element n) :1007
void Swiper__OnRooted_fn(Swiper* __this, ::g::Fuse::Elements::Element* n)
{
    __this->OnRooted(n);
}

// private void OnUnrooted() :1016
void Swiper__OnUnrooted_fn(Swiper* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdated() :1056
void Swiper__OnUpdated_fn(Swiper* __this)
{
    __this->OnUpdated();
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) :1000
void Swiper__RemoveRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->RemoveRegion(region);
}

// private void RestartMove(float2 currentCoord) :1159
void Swiper__RestartMove_fn(Swiper* __this, ::g::Uno::Float2* currentCoord)
{
    __this->RestartMove(*currentCoord);
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff) :1228
void Swiper__SelectRegion_fn(Swiper* __this, ::g::Uno::Float2* diff, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->SelectRegion(*diff);
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, [bool bypass]) :1275
void Swiper__SetActivation_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region, bool* on, bool* bypass)
{
    __this->SetActivation(region, *on, *bypass);
}

uSStrong< ::g::Fuse::PropertyHandle*> Swiper::_swiperProperty_;

// private Swiper(Fuse.Elements.Element elm) [instance] :949
void Swiper::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", ".ctor(Fuse.Elements.Element)");
    _attachCount = 1;
    _pointerRegions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _regions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _down = -1;
    _velocityThreshold = 300.0f;
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _element = elm;
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :989
void Swiper::AddRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "AddRegion(Fuse.Gestures.Internal.SwipeRegion)");
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret2;
    int i = 0;

    for (i = 0; i < uPtr(_regions)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret2), ret2))->Priority > uPtr(region)->Priority)
            break;

    ::g::Uno::Collections::List__Insert_fn(uPtr(_regions), uCRef<int>(i), region);
    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :1023
void Swiper::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "CheckNeedUpdated([bool])");
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret3;
    bool needUpdated = false;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret3), ret3);

        if (!uPtr(region)->IsStatic())
            needUpdated = true;
        else if (uPtr(region)->InProgress())
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"incomplete ...*/], this, ::STRINGS[1/*"/Users/medb...*/], 1036, ::STRINGS[2/*"CheckNeedUp...*/]);
            uPtr(region)->SetProgress(uPtr(region)->StableProgress(), 2);
        }
    }

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Detach() [instance] :971
void Swiper::Detach()
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        uPtr(uPtr(_element)->Properties())->Clear(Swiper::_swiperProperty());
        OnUnrooted();
    }
}

// private float2 FromWindow(float2 p) [instance] :1144
::g::Uno::Float2 Swiper::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "FromWindow(float2)");

    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// private void MoveUser(float2 coord, double elapsed, [bool release]) [instance] :1152
void Swiper::MoveUser(::g::Uno::Float2 coord, double elapsed, bool release)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "MoveUser(float2,double,[bool])");
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(coord), uCRef((double)(float)elapsed), uCRef<int>((!uPtr(_gesture)->IsHardCapture() ? 1 : 0) | (release ? 2 : 0)));
}

// private void OnRooted(Fuse.Elements.Element n) [instance] :1007
void Swiper::OnRooted(::g::Fuse::Elements::Element* n)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "OnRooted(Fuse.Elements.Element)");
    _pointerRegion = NULL;
    uPtr(_pointerRegions)->Clear();
    _element = n;
    _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _element, 5);
}

// private void OnUnrooted() [instance] :1016
void Swiper::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "OnUnrooted()");
    uPtr(_gesture)->Dispose();
    _element = NULL;
}

// private void OnUpdated() [instance] :1056
void Swiper::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "OnUpdated()");
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret8;
    float ret9;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret8), ret8);

        if (uPtr(region)->IsStatic() && !uPtr(region)->InProgress())
            continue;

        if (!uPtr(region)->IsStatic())
            ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * uPtr(region)->TimeMultiplier);

        uPtr(region)->SetProgress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret9), ret9), uPtr(region)->IsStatic() ? 2 : 0);
    }

    CheckNeedUpdated(true);
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :1000
void Swiper::RemoveRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "RemoveRegion(Fuse.Gestures.Internal.SwipeRegion)");
    bool ret10;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_regions), region, &ret10);
    CheckNeedUpdated(false);
}

// private void RestartMove(float2 currentCoord) [instance] :1159
void Swiper::RestartMove(::g::Uno::Float2 currentCoord)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "RestartMove(float2)");
    _startCoord = currentCoord;
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset_fn(uPtr(_velocity), uCRef(_startCoord));
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff) [instance] :1228
::g::Fuse::Gestures::Internal::SwipeRegion* Swiper::SelectRegion(::g::Uno::Float2 diff)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "SelectRegion(float2)");
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret11;
    ::g::Fuse::Gestures::Internal::SwipeRegion* sel = NULL;

    for (int i = 0; i < uPtr(_pointerRegions)->Count(); i++)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret11), ret11);
        float str = uPtr(region)->ActivateStrength(diff);

        if (str <= 0.0f)
            continue;

        if ((sel == NULL) || (uPtr(sel)->Progress() < region->Progress()))
            sel = region;
    }

    return sel;
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, [bool bypass]) [instance] :1275
void Swiper::SetActivation(::g::Fuse::Gestures::Internal::SwipeRegion* region, bool on, bool bypass)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "SetActivation(Fuse.Gestures.Internal.SwipeRegion,bool,[bool])");
    float ret12;
    float ret13;
    float d = on ? 1.0f : 0.0f;

    if (d != (::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), &ret12), ret12))
    {
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(d));
        region->IsActive(on);
    }

    if (bypass)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef(d));
        region->SetProgress((double)d, 2);
    }
    else
    {
        uPtr(region)->TriggerSwipe = true;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(region->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)region->Progress()));

        if (region->IsStatic())
            uPtr(region)->SetProgress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret13), ret13), 2);
    }

    CheckNeedUpdated(false);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) [static] :955
Swiper* Swiper::AttachSwiper(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Gestures.Internal.Swiper", "AttachSwiper(Fuse.Elements.Element)");
    Swiper_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Swiper::_swiperProperty(), &v))
    {
        Swiper* s = uAs<Swiper*>(v, Swiper_typeof());
        uPtr(s)->_attachCount++;
        return s;
    }

    Swiper* ns = Swiper::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Swiper::_swiperProperty(), ns);
    ns->OnRooted(elm);
    return ns;
}

// private Swiper New(Fuse.Elements.Element elm) [static] :949
Swiper* Swiper::New1(::g::Fuse::Elements::Element* elm)
{
    Swiper* obj1 = (Swiper*)uNew(Swiper_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class SwipeRegion :677
// {
// static SwipeRegion() :677
static void SwipeRegion__cctor__fn(uType* __type)
{
    SwipeRegion::InProgressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"InProgress"*/]);
    SwipeRegion::ProgressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Progress"*/]);
    SwipeRegion::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"IsActive"*/]);
}

static void SwipeRegion_build(uType* type)
{
    ::STRINGS[5] = uString::Const("InProgress");
    ::STRINGS[6] = uString::Const("Progress");
    ::STRINGS[7] = uString::Const("IsActive");
    ::STRINGS[8] = uString::Const("Unexpected progress in swipe");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno");
    ::STRINGS[9] = uString::Const("SetProgress");
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[12] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeRegion_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _gesturePriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _inProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _isActive), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _isEnabled), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _stableProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, ActivationThreshold), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegionArea_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Area), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVector), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVectorDistance), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AutoTrigger), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, DeactivationThreshold), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, IsInterruptible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, LengthElement), 0,
        ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/], offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, PointBody1D), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Priority), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Range), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, RevertActive), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TimeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TriggerSwipe), 0,
        ::TYPES[12/*Uno.Action<bool, bool>*/], offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Swiped1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::_isActiveName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::InProgressName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName_, uFieldFlagsStatic);
}

SwipeRegion_type* SwipeRegion_typeof()
{
    static uSStrong<SwipeRegion_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SwipeRegion);
    options.TypeSize = sizeof(SwipeRegion_type);
    type = (SwipeRegion_type*)uClassType::New("Fuse.Gestures.Internal.SwipeRegion", options);
    type->fp_build_ = SwipeRegion_build;
    type->fp_ctor_ = (void*)SwipeRegion__New2_fn;
    type->fp_cctor_ = SwipeRegion__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeRegion__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public generated SwipeRegion() :677
void SwipeRegion__ctor_1_fn(SwipeRegion* __this)
{
    __this->ctor_1();
}

// public float ActivateStrength(float2 diff) :895
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval)
{
    *__retval = __this->ActivateStrength(*diff);
}

// private void DoRevertActive() :804
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this)
{
    __this->DoRevertActive();
}

// private double get_EffectiveLength() :919
void SwipeRegion__get_EffectiveLength_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->EffectiveLength();
}

// public Fuse.Input.GesturePriority get_GesturePriority() :691
void SwipeRegion__get_GesturePriority_fn(SwipeRegion* __this, int* __retval)
{
    *__retval = __this->GesturePriority();
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) :692
void SwipeRegion__set_GesturePriority_fn(SwipeRegion* __this, int* value)
{
    __this->GesturePriority(*value);
}

// public bool get_InProgress() :718
void SwipeRegion__get_InProgress_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->InProgress();
}

// private void set_InProgress(bool value) :719
void SwipeRegion__set_InProgress_fn(SwipeRegion* __this, bool* value)
{
    __this->InProgress(*value);
}

// public bool InteractProgress(float2 diff, double startProgress) :927
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress, bool* __retval)
{
    *__retval = __this->InteractProgress(*diff, *startProgress);
}

// public bool get_IsActive() :791
void SwipeRegion__get_IsActive_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :792
void SwipeRegion__set_IsActive_fn(SwipeRegion* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled() :684
void SwipeRegion__get_IsEnabled_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :685
void SwipeRegion__set_IsEnabled_fn(SwipeRegion* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) :874
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval)
{
    *__retval = __this->IsPointInside(prime, *coord);
}

// public bool get_IsSelectable() :840
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsSelectable();
}

// public bool get_IsStatic() :835
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public generated SwipeRegion New() :677
void SwipeRegion__New2_fn(SwipeRegion** __retval)
{
    *__retval = SwipeRegion::New2();
}

// public double get_Progress() :698
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public float ScalarDistance(float2 diff) :912
void SwipeRegion__ScalarDistance_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval)
{
    *__retval = __this->ScalarDistance(*diff);
}

// public float ScalarValue(float2 x) :937
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval)
{
    *__retval = __this->ScalarValue(*x);
}

// public void SetActive(bool active) :729
void SwipeRegion__SetActive_fn(SwipeRegion* __this, bool* active)
{
    __this->SetActive(*active);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :795
void SwipeRegion__SetIsActive_fn(SwipeRegion* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// internal bool SetProgress(double value, [Fuse.Gestures.Internal.SwipeRegion.ProgressFlags flags]) :735
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, int* flags, bool* __retval)
{
    *__retval = __this->SetProgress(*value, *flags);
}

// public double get_StableProgress() :704
void SwipeRegion__get_StableProgress_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->StableProgress();
}

// public generated void add_Swiped(Uno.Action<bool, bool> value) :785
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->add_Swiped(value);
}

// public generated void remove_Swiped(Uno.Action<bool, bool> value) :785
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->remove_Swiped(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :679
void SwipeRegion__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeRegion* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
}

::g::Uno::UX::Selector SwipeRegion::_isActiveName_;
::g::Uno::UX::Selector SwipeRegion::InProgressName_;
::g::Uno::UX::Selector SwipeRegion::ProgressName_;

// public generated SwipeRegion() [instance] :677
void SwipeRegion::ctor_1()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", ".ctor()");
    _isEnabled = true;
    _gesturePriority = 3;
    Range = ::g::Uno::Math::DegreesToRadians1(30.0f);
    PointBody1D = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateNormalized(::TYPES[1/*Fuse.Motion.Simulation.SmoothSnap<float>*/]));
    AreaVectorDistance = 100.0f;
    Length = 100.0;
    ActivationThreshold = 0.5f;
    DeactivationThreshold = 0.5f;
    IsInterruptible = true;
    TimeMultiplier = 1.0;
    ctor_();
}

// public float ActivateStrength(float2 diff) [instance] :895
float SwipeRegion::ActivateStrength(::g::Uno::Float2 diff)
{
    float l = ::g::Uno::Vector::Length(diff);

    if (l < 1e-05f)
        return 0.0f;

    float a = ::g::Fuse::Internal::VectorUtil::Angle(diff, Direction);

    if ((Progress() < 1.0) && (a < (Range / 2.0f)))
        return l;

    if ((Progress() > 0.0) && (a > (3.14159274f - (Range / 2.0f))))
        return l;

    return 0.0f;
}

// private void DoRevertActive() [instance] :804
void SwipeRegion::DoRevertActive()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "DoRevertActive()");
    SetProgress(0.0, 2);
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(0.0f));
    IsActive(false);
}

// private double get_EffectiveLength() [instance] :919
double SwipeRegion::EffectiveLength()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "get_EffectiveLength()");

    if (LengthElement == NULL)
        return Length;

    return (double)::g::Uno::Math::Abs1(::g::Uno::Vector::Dot(Direction, uPtr(LengthElement)->ActualSize()));
}

// public Fuse.Input.GesturePriority get_GesturePriority() [instance] :691
int SwipeRegion::GesturePriority()
{
    return _gesturePriority;
}

// public void set_GesturePriority(Fuse.Input.GesturePriority value) [instance] :692
void SwipeRegion::GesturePriority(int value)
{
    _gesturePriority = value;
}

// public bool get_InProgress() [instance] :718
bool SwipeRegion::InProgress()
{
    return _inProgress;
}

// private void set_InProgress(bool value) [instance] :719
void SwipeRegion::InProgress(bool value)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "set_InProgress(bool)");

    if (value == _inProgress)
        return;

    _inProgress = value;
    OnPropertyChanged(SwipeRegion::InProgressName());
}

// public bool InteractProgress(float2 diff, double startProgress) [instance] :927
bool SwipeRegion::InteractProgress(::g::Uno::Float2 diff, double startProgress)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "InteractProgress(float2,double)");
    float l = ScalarDistance(diff);
    double p = ::g::Uno::Math::Clamp(((double)l / EffectiveLength()) + startProgress, 0.0, 1.0);
    int flags = 1;

    if (AutoTrigger && (p == 1.0))
        flags = flags | 2;

    return SetProgress(p, flags);
}

// public bool get_IsActive() [instance] :791
bool SwipeRegion::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :792
void SwipeRegion::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "set_IsActive(bool)");
    SetIsActive(value, (uObject*)this);
}

// public bool get_IsEnabled() [instance] :684
bool SwipeRegion::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :685
void SwipeRegion::IsEnabled(bool value)
{
    _isEnabled = value;
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) [instance] :874
bool SwipeRegion::IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "IsPointInside(Fuse.Elements.Element,float2)");

    if (Area == 0)
        return true;

    if (Area == 1)
    {
        ::g::Uno::Float2 size = uPtr(prime)->ActualSize();

        if ((((coord.X < 0.0f) || (coord.Y < 0.0f)) || (coord.X > size.X)) || (coord.Y > size.Y))
            return false;

        ::g::Uno::Float4 v = ::g::Uno::Float4__op_Multiply2(AreaVector, ::g::Uno::Float4__New7(size, size));
        float l = ::g::Fuse::Internal::VectorUtil::DistanceLine(v, coord);
        return (double)l < ::g::Uno::Math::Max((double)AreaVectorDistance, EffectiveLength() * Progress());
    }

    return false;
}

// public bool get_IsSelectable() [instance] :840
bool SwipeRegion::IsSelectable()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "get_IsSelectable()");
    return (IsStatic() || IsInterruptible) && IsEnabled();
}

// public bool get_IsStatic() [instance] :835
bool SwipeRegion::IsStatic()
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "get_IsStatic()");
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(PointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]));
}

// public double get_Progress() [instance] :698
double SwipeRegion::Progress()
{
    return _progress;
}

// public float ScalarDistance(float2 diff) [instance] :912
float SwipeRegion::ScalarDistance(::g::Uno::Float2 diff)
{
    return ::g::Fuse::Internal::VectorUtil::ScalarProjection(diff, Direction);
}

// public float ScalarValue(float2 x) [instance] :937
float SwipeRegion::ScalarValue(::g::Uno::Float2 x)
{
    return ::g::Fuse::Internal::VectorUtil::ScalarProjection(x, Direction);
}

// public void SetActive(bool active) [instance] :729
void SwipeRegion::SetActive(bool active)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "SetActive(bool)");
    SetProgress((double)(active ? 1 : 0), 2);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :795
void SwipeRegion::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "SetIsActive(bool,Uno.UX.IPropertyListener)");

    if (value == _isActive)
        return;

    _isActive = value;
    OnPropertyChanged(SwipeRegion::_isActiveName());
}

// internal bool SetProgress(double value, [Fuse.Gestures.Internal.SwipeRegion.ProgressFlags flags]) [instance] :735
bool SwipeRegion::SetProgress(double value, int flags)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "SetProgress(double,[Fuse.Gestures.Internal.SwipeRegion.ProgressFlags])");
    SwipeRegion__DoSwiped* collection1;
    bool interacting = (flags & 1) == 1;
    bool endProgress = (flags & 2) == 2;
    _progress = value;
    OnPropertyChanged(SwipeRegion::ProgressName());
    InProgress(!endProgress);

    if (interacting && !AutoTrigger)
        return false;

    bool swiped = false;

    if (endProgress)
    {
        if (::g::Uno::Math::Abs(_progress) < 9.9999997473787516e-06)
            _progress = 0.0;
        else if (::g::Uno::Math::Abs(_progress - 1.0) < 9.9999997473787516e-06)
            _progress = 1.0;
        else
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[8/*"Unexpected ...*/], this, ::STRINGS[1/*"/Users/medb...*/], 760, ::STRINGS[9/*"SetProgress"*/]);

        bool active = _progress == 1.0;
        bool cancelled = _stableProgress == _progress;

        if (TriggerSwipe || AutoTrigger)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)SwipeRegion__DoSwiped__Perform_fn, uPtr((collection1 = SwipeRegion__DoSwiped::New1(), uPtr(collection1)->Active = active, uPtr(collection1)->Region = this, uPtr(collection1)->Cancelled = cancelled, collection1))), -1, 0);
            TriggerSwipe = false;
            swiped = true;
        }

        _stableProgress = _progress;

        if (active && RevertActive)
            ::g::Fuse::UpdateManager::AddDeferredAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)SwipeRegion__DoRevertActive_fn, this), ::g::Fuse::LayoutPriority::Post());
    }

    return swiped;
}

// public double get_StableProgress() [instance] :704
double SwipeRegion::StableProgress()
{
    return _stableProgress;
}

// public generated void add_Swiped(Uno.Action<bool, bool> value) [instance] :785
void SwipeRegion::add_Swiped(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "add_Swiped(Uno.Action<bool, bool>)");
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Swiped1, value), ::TYPES[12/*Uno.Action<bool, bool>*/]);
}

// public generated void remove_Swiped(Uno.Action<bool, bool> value) [instance] :785
void SwipeRegion::remove_Swiped(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.SwipeRegion", "remove_Swiped(Uno.Action<bool, bool>)");
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Swiped1, value), ::TYPES[12/*Uno.Action<bool, bool>*/]);
}

// public generated SwipeRegion New() [static] :677
SwipeRegion* SwipeRegion::New2()
{
    SwipeRegion* obj2 = (SwipeRegion*)uNew(SwipeRegion_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal enum SwipeRegionArea :671
uEnumType* SwipeRegionArea_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Internal.SwipeRegionArea", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "All", 0LL,
        "Vector", 1LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class TwoFinger :1323
// {
// static TwoFinger() :1323
static void TwoFinger__cctor__fn(uType* __type)
{
    TwoFinger::_property_ = ::g::Fuse::Properties::CreateHandle();
}

static void TwoFinger_build(uType* type)
{
    ::TYPES[13] = TwoFinger__Point_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::Internal::TwoFingerEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Gestures::Internal::TwoFingerRotateHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Gestures::Internal::TwoFingerTranslateHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Gestures::Internal::TwoFingerZoomHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _allowKeyControl), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _attachCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _begun), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _fullTrans), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _keyZoomRangeDown), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _keyZoomRangeUp), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _node), 0,
        ::TYPES[13/*Fuse.Gestures.Internal.TwoFinger.Point[]*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _point), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::TwoFinger, _startThresholdDistance), 0,
        ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, Ended1), 0,
        ::TYPES[15/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, Rotated1), 0,
        ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, Started1), 0,
        ::TYPES[16/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, Translated1), 0,
        ::TYPES[17/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], offsetof(::g::Fuse::Gestures::Internal::TwoFinger, Zoomed1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::TwoFinger::_property_, uFieldFlagsStatic);
}

uType* TwoFinger_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(TwoFinger);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.TwoFinger", options);
    type->fp_build_ = TwoFinger_build;
    type->fp_cctor_ = TwoFinger__cctor__fn;
    return type;
}

// private TwoFinger(Fuse.Visual n) :1332
void TwoFinger__ctor__fn(TwoFinger* __this, ::g::Fuse::Visual* n)
{
    __this->ctor_(n);
}

// public static Fuse.Gestures.Internal.TwoFinger Attach(Fuse.Visual n) :1340
void TwoFinger__Attach_fn(::g::Fuse::Visual* n, TwoFinger** __retval)
{
    *__retval = TwoFinger::Attach(n);
}

// private void Begin() :1431
void TwoFinger__Begin_fn(TwoFinger* __this)
{
    __this->Begin();
}

// public void Detach() :1356
void TwoFinger__Detach_fn(TwoFinger* __this)
{
    __this->Detach();
}

// public generated void add_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler value) :1381
void TwoFinger__add_Ended_fn(TwoFinger* __this, uDelegate* value)
{
    __this->add_Ended(value);
}

// public generated void remove_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler value) :1381
void TwoFinger__remove_Ended_fn(TwoFinger* __this, uDelegate* value)
{
    __this->remove_Ended(value);
}

// private float2 FromWindow(float2 p) :1450
void TwoFinger__FromWindow_fn(TwoFinger* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private TwoFinger New(Fuse.Visual n) :1332
void TwoFinger__New1_fn(::g::Fuse::Visual* n, TwoFinger** __retval)
{
    *__retval = TwoFinger::New1(n);
}

// private void OnLostCapture() :1386
void TwoFinger__OnLostCapture_fn(TwoFinger* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :1467
void TwoFinger__OnPointerMoved_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :1407
void TwoFinger__OnPointerPressed_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :1539
void TwoFinger__OnPointerReleased_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :1366
void TwoFinger__OnRooted_fn(TwoFinger* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :1373
void TwoFinger__OnUnrooted_fn(TwoFinger* __this)
{
    __this->OnUnrooted();
}

// private Fuse.Gestures.Internal.TwoFinger.Point PointFromArgs(Fuse.Input.PointerEventArgs args) :1458
void TwoFinger__PointFromArgs_fn(TwoFinger* __this, ::g::Fuse::Input::PointerEventArgs* args, TwoFinger__Point** __retval)
{
    *__retval = __this->PointFromArgs(args);
}

// public generated void add_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler value) :1383
void TwoFinger__add_Rotated_fn(TwoFinger* __this, uDelegate* value)
{
    __this->add_Rotated(value);
}

// public generated void remove_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler value) :1383
void TwoFinger__remove_Rotated_fn(TwoFinger* __this, uDelegate* value)
{
    __this->remove_Rotated(value);
}

// public generated void add_Started(Fuse.Gestures.Internal.TwoFingerEventHandler value) :1380
void TwoFinger__add_Started_fn(TwoFinger* __this, uDelegate* value)
{
    __this->add_Started(value);
}

// public generated void remove_Started(Fuse.Gestures.Internal.TwoFingerEventHandler value) :1380
void TwoFinger__remove_Started_fn(TwoFinger* __this, uDelegate* value)
{
    __this->remove_Started(value);
}

// public generated void add_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler value) :1384
void TwoFinger__add_Translated_fn(TwoFinger* __this, uDelegate* value)
{
    __this->add_Translated(value);
}

// public generated void remove_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler value) :1384
void TwoFinger__remove_Translated_fn(TwoFinger* __this, uDelegate* value)
{
    __this->remove_Translated(value);
}

// public generated void add_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler value) :1382
void TwoFinger__add_Zoomed_fn(TwoFinger* __this, uDelegate* value)
{
    __this->add_Zoomed(value);
}

// public generated void remove_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler value) :1382
void TwoFinger__remove_Zoomed_fn(TwoFinger* __this, uDelegate* value)
{
    __this->remove_Zoomed(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> TwoFinger::_property_;

// private TwoFinger(Fuse.Visual n) [instance] :1332
void TwoFinger::ctor_(::g::Fuse::Visual* n)
{
    _keyZoomRangeUp = 200.0f;
    _keyZoomRangeDown = 100.0f;
    _startThresholdDistance = 20.0f;
    _attachCount = 1;
    _allowKeyControl = true;
    _point = uArray::Init<TwoFinger__Point*>(::TYPES[13/*Fuse.Gestures.Internal.TwoFinger.Point[]*/], 2, (TwoFinger__Point*)TwoFinger__Point::New1(), (TwoFinger__Point*)TwoFinger__Point::New1());
    _node = n;
}

// private void Begin() [instance] :1431
void TwoFinger::Begin()
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "Begin()");

    if (!::g::Fuse::Input::Pointer::ModifyCapture(this, 2))
    {
        OnLostCapture();
        return;
    }

    _begun = true;
    uPtr(_node)->BeginInteraction(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)TwoFinger__OnLostCapture_fn, this));
    uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Start = uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Current;
    uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Start = uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Current;
    _fullTrans = ::g::Uno::Float2__New1(0.0f);

    if (::g::Uno::Delegate::op_Inequality(Started1, NULL))
        uPtr(Started1)->InvokeVoid();
}

// public void Detach() [instance] :1356
void TwoFinger::Detach()
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_node)->Properties())->Clear(TwoFinger::_property());
    }
}

// public generated void add_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler value) [instance] :1381
void TwoFinger::add_Ended(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "add_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler)");
    Ended1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Ended1, value), ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/]);
}

// public generated void remove_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler value) [instance] :1381
void TwoFinger::remove_Ended(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "remove_Ended(Fuse.Gestures.Internal.TwoFingerEventHandler)");
    Ended1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Ended1, value), ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/]);
}

// private float2 FromWindow(float2 p) [instance] :1450
::g::Uno::Float2 TwoFinger::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "FromWindow(float2)");

    if (uPtr(_node)->Parent() == NULL)
        return p;

    return uPtr(uPtr(_node)->Parent())->WindowToLocal(p);
}

// private void OnLostCapture() [instance] :1386
void TwoFinger::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnLostCapture()");
    uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Down = (uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Down = -1);
    ::g::Fuse::Input::Pointer::ReleaseCapture(this);

    if (_begun)
    {
        uPtr(_node)->EndInteraction(this);

        if (::g::Uno::Delegate::op_Inequality(Ended1, NULL))
            uPtr(Ended1)->InvokeVoid();
    }

    _begun = false;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :1467
void TwoFinger::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");
    ::g::Uno::Float4 ind1;
    TwoFinger__Point* p = PointFromArgs(args);

    if (p == NULL)
        return;

    uPtr(p)->Current = FromWindow(uPtr(args)->WindowPoint());
    float scale = 1.0f;
    float angle = 0.0f;
    ::g::Uno::Float2 trans = ::g::Uno::Float2__New1(0.0f);

    if (uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Down != -1)
    {
        ::g::Uno::Float2 start = ::g::Uno::Float2__op_Subtraction2(uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Start, uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Start);
        ::g::Uno::Float2 current = ::g::Uno::Float2__op_Subtraction2(uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Current, uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Current);
        scale = ::g::Uno::Vector::Length(current) / ::g::Uno::Vector::Length(start);
        float sa = ::g::Uno::Math::Atan22(start.Y, start.X);
        float ea = ::g::Uno::Math::Atan22(current.Y, current.X);
        angle = ea - sa;
        ::g::Uno::Float2 startCenter = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Subtraction2(uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Start, uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Start), 2.0f), uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Start);
        ::g::Uno::Float2 currentCenter = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Subtraction2(uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Current, uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Current), 2.0f), uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Current);
        ::g::Uno::Float2 rawTrans = ::g::Uno::Float2__op_Subtraction2(currentCenter, startCenter);
        ::g::Uno::Float4x4 rot = ::g::Uno::Matrix::RotationZ(-angle);
        trans = ::g::Uno::Float2__op_Division1((ind1 = ::g::Uno::Vector::Transform1(rawTrans, rot), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), scale);
    }
    else if (_allowKeyControl)
    {
        if (::g::Fuse::Input::Keyboard::IsKeyPressed(17))
        {
            float diff = uPtr(p)->Current.Y - uPtr(p)->Start.Y;
            scale = (diff < 0.0f) ? (-diff / _keyZoomRangeUp) + 1.0f : _keyZoomRangeDown / (_keyZoomRangeDown + diff);
            ::g::Uno::Float2 l = ::g::Uno::Float2__op_Subtraction2(p->Current, p->Start);

            if ((::g::Uno::Math::Abs1(l.X) + ::g::Uno::Math::Abs1(l.Y)) > 10.0f)
                angle = ::g::Uno::Math::Atan22((diff < 0.0f) ? l.Y : -l.Y, (diff < 0.0f) ? l.X : -l.X) + 1.57079637f;
        }
        else if (::g::Fuse::Input::Keyboard::IsKeyPressed(16))
            trans = ::g::Uno::Float2__op_Subtraction2(uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Current, uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Start);
    }

    if (_begun)
    {
        if (::g::Uno::Delegate::op_Inequality(Zoomed1, NULL))
            uPtr(Zoomed1)->InvokeVoid(uCRef(scale));

        if (::g::Uno::Delegate::op_Inequality(Rotated1, NULL))
            uPtr(Rotated1)->InvokeVoid(uCRef(angle));

        if (::g::Uno::Delegate::op_Inequality(Translated1, NULL))
            uPtr(Translated1)->InvokeVoid(uCRef(trans));
    }
    else
        Begin();
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :1407
void TwoFinger::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Down != -1)
        return;

    if (((uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Down == -1) && !::g::Fuse::Input::Pointer::ModifyCapture1(this, _node, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)TwoFinger__OnLostCapture_fn, this), 1, uPtr(args)->PointIndex())) || !::g::Fuse::Input::Pointer::ExtendCapture(this, uPtr(args)->PointIndex()))
    {
        OnLostCapture();
        return;
    }

    TwoFinger__Point* p = (uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Down == -1) ? (TwoFinger__Point*)uPtr(_point)->Strong<TwoFinger__Point*>(0) : (TwoFinger__Point*)uPtr(_point)->Strong<TwoFinger__Point*>(1);
    uPtr(p)->Start = (uPtr(p)->Current = (uPtr(p)->Previous = FromWindow(uPtr(args)->WindowPoint())));
    p->Down = args->PointIndex();
    uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Start = (uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Previous = uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Current);
    _fullTrans = ::g::Uno::Float2__New1(0.0f);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :1539
void TwoFinger::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if ((uPtr(args)->PointIndex() == uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Down) || (uPtr(args)->PointIndex() == uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Down))
        OnLostCapture();
}

// private void OnRooted() [instance] :1366
void TwoFinger::OnRooted()
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnRooted()");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)TwoFinger__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)TwoFinger__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)TwoFinger__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :1373
void TwoFinger::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)TwoFinger__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)TwoFinger__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)TwoFinger__OnPointerMoved_fn, this));
}

// private Fuse.Gestures.Internal.TwoFinger.Point PointFromArgs(Fuse.Input.PointerEventArgs args) [instance] :1458
TwoFinger__Point* TwoFinger::PointFromArgs(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "PointFromArgs(Fuse.Input.PointerEventArgs)");

    if (uPtr(args)->PointIndex() == uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(0))->Down)
        return uPtr(_point)->Strong<TwoFinger__Point*>(0);

    if (uPtr(args)->PointIndex() == uPtr(uPtr(_point)->Strong<TwoFinger__Point*>(1))->Down)
        return uPtr(_point)->Strong<TwoFinger__Point*>(1);

    return NULL;
}

// public generated void add_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler value) [instance] :1383
void TwoFinger::add_Rotated(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "add_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler)");
    Rotated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Rotated1, value), ::TYPES[15/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/]);
}

// public generated void remove_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler value) [instance] :1383
void TwoFinger::remove_Rotated(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "remove_Rotated(Fuse.Gestures.Internal.TwoFingerRotateHandler)");
    Rotated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Rotated1, value), ::TYPES[15/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/]);
}

// public generated void add_Started(Fuse.Gestures.Internal.TwoFingerEventHandler value) [instance] :1380
void TwoFinger::add_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "add_Started(Fuse.Gestures.Internal.TwoFingerEventHandler)");
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Started1, value), ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/]);
}

// public generated void remove_Started(Fuse.Gestures.Internal.TwoFingerEventHandler value) [instance] :1380
void TwoFinger::remove_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "remove_Started(Fuse.Gestures.Internal.TwoFingerEventHandler)");
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Started1, value), ::TYPES[14/*Fuse.Gestures.Internal.TwoFingerEventHandler*/]);
}

// public generated void add_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler value) [instance] :1384
void TwoFinger::add_Translated(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "add_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler)");
    Translated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Translated1, value), ::TYPES[16/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/]);
}

// public generated void remove_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler value) [instance] :1384
void TwoFinger::remove_Translated(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "remove_Translated(Fuse.Gestures.Internal.TwoFingerTranslateHandler)");
    Translated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Translated1, value), ::TYPES[16/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/]);
}

// public generated void add_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler value) [instance] :1382
void TwoFinger::add_Zoomed(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "add_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler)");
    Zoomed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Zoomed1, value), ::TYPES[17/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/]);
}

// public generated void remove_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler value) [instance] :1382
void TwoFinger::remove_Zoomed(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "remove_Zoomed(Fuse.Gestures.Internal.TwoFingerZoomHandler)");
    Zoomed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Zoomed1, value), ::TYPES[17/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/]);
}

// public static Fuse.Gestures.Internal.TwoFinger Attach(Fuse.Visual n) [static] :1340
TwoFinger* TwoFinger::Attach(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Gestures.Internal.TwoFinger", "Attach(Fuse.Visual)");
    TwoFinger_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(TwoFinger::_property(), &v))
    {
        TwoFinger* t = uAs<TwoFinger*>(v, TwoFinger_typeof());
        uPtr(t)->_attachCount++;
        return t;
    }

    TwoFinger* nt = TwoFinger::New1(n);
    uPtr(uPtr(n)->Properties())->Set(TwoFinger::_property(), nt);
    nt->OnRooted();
    return nt;
}

// private TwoFinger New(Fuse.Visual n) [static] :1332
TwoFinger* TwoFinger::New1(::g::Fuse::Visual* n)
{
    TwoFinger* obj2 = (TwoFinger*)uNew(TwoFinger_typeof());
    obj2->ctor_(n);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal delegate void TwoFingerEventHandler() :1318
uDelegateType* TwoFingerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.Internal.TwoFingerEventHandler", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal delegate void TwoFingerRotateHandler(float angle) :1320
uDelegateType* TwoFingerRotateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.Internal.TwoFingerRotateHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal delegate void TwoFingerTranslateHandler(float2 amount) :1321
uDelegateType* TwoFingerTranslateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.Internal.TwoFingerTranslateHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Float2_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Gestures/1.0.2/internal/$.uno
// ------------------------------------------------------------------------------------------------

// internal delegate void TwoFingerZoomHandler(float factor) :1319
uDelegateType* TwoFingerZoomHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.Internal.TwoFingerZoomHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

}}}} // ::g::Fuse::Gestures::Internal
