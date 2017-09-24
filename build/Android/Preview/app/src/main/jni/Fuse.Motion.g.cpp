// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Marshal.h>
#include <Fuse.Motion.DelayFunc-f2d2023d.h>
#include <Fuse.Motion.DelayFunction.h>
#include <Fuse.Motion.Destinati-bd678751.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.MotionDes-5490bd7d.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.OverflowType.h>
#include <Fuse.Motion.ScrollViewMotion.h>
#include <Fuse.Motion.Simulatio-17bdd43e.h>
#include <Fuse.Motion.Simulatio-1b299d00.h>
#include <Fuse.Motion.Simulatio-2e0ddcfb.h>
#include <Fuse.Motion.Simulatio-73b2da14.h>
#include <Fuse.Motion.Simulatio-8063728b.h>
#include <Fuse.Motion.Simulatio-8291fa3c.h>
#include <Fuse.Motion.Simulatio-871f3635.h>
#include <Fuse.Motion.Simulatio-b08483ab.h>
#include <Fuse.Motion.Simulatio-b08eb1c5.h>
#include <Fuse.Motion.Simulatio-ca33dcbb.h>
#include <Fuse.Motion.SpringFun-9f762851.h>
#include <Fuse.Motion.SpringFunction.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Time.h>
#include <Fuse.Timer.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Motion{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public sealed class DelayFunction :516
// {
static void DelayFunction_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DelayFunction__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* DelayFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DelayFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Motion.DelayFunction", options);
    type->fp_build_ = DelayFunction_build;
    type->fp_OnNewOperands = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject*))DelayFunction__OnNewOperands_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public DelayFunction(Fuse.Reactive.Expression value, Fuse.Reactive.Expression delay) :519
void DelayFunction__ctor_2_fn(DelayFunction* __this, ::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay)
{
    __this->ctor_2(value, delay);
}

// public DelayFunction New(Fuse.Reactive.Expression value, Fuse.Reactive.Expression delay) :519
void DelayFunction__New1_fn(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay, DelayFunction** __retval)
{
    *__retval = DelayFunction::New1(value, delay);
}

// protected override sealed void OnNewOperands(Fuse.Reactive.IListener listener, object value, object delay) :521
void DelayFunction__OnNewOperands_fn(DelayFunction* __this, uObject* listener, uObject* value, uObject* delay)
{
    uStackFrame __("Fuse.Motion.DelayFunction", "OnNewOperands(Fuse.Reactive.IListener,object,object)");
    ::g::Fuse::Timer::Wait(::g::Fuse::Marshal::ToDouble(delay), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)DelayFunction__SetClosure__Run_fn, DelayFunction__SetClosure::New1(__this, listener, value)));
}

// public DelayFunction(Fuse.Reactive.Expression value, Fuse.Reactive.Expression delay) [instance] :519
void DelayFunction::ctor_2(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay)
{
    ctor_1(value, delay);
}

// public DelayFunction New(Fuse.Reactive.Expression value, Fuse.Reactive.Expression delay) [static] :519
DelayFunction* DelayFunction::New1(::g::Fuse::Reactive::Expression* value, ::g::Fuse::Reactive::Expression* delay)
{
    DelayFunction* obj1 = (DelayFunction*)uNew(DelayFunction_typeof());
    obj1->ctor_2(value, delay);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public sealed class DestinationMotion<T> :246
// {
static void DestinationMotion_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalidate simulation type: ");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno");
    ::STRINGS[2] = uString::Const("Create");
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::EasingMotion_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof();
    ::TYPES[4] = ::g::Fuse::Motion::Simulation::AngularAdapter_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::EasingMotion_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::AngularAdapter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _distance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _duration), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _durationExp), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _easing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _explicitType), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _hasDistance), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _hasDuration), 0,
        ::g::Fuse::Motion::MotionDestinationType_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _type), 0,
        ::g::Fuse::Motion::MotionUnit_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _unit), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Distance", NULL, (void*)DestinationMotion__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)DestinationMotion__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Duration", NULL, (void*)DestinationMotion__get_Duration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)DestinationMotion__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DurationExp", NULL, (void*)DestinationMotion__get_DurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DurationExp", NULL, (void*)DestinationMotion__set_DurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Easing", NULL, (void*)DestinationMotion__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)DestinationMotion__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction(".ctor", type, (void*)DestinationMotion__New1_fn, 0, true, type, 0),
        new uFunction("get_Type", NULL, (void*)DestinationMotion__get_Type_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)DestinationMotion__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)DestinationMotion__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)DestinationMotion__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()));
}

uType* DestinationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(DestinationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DestinationMotion`1", options);
    type->fp_build_ = DestinationMotion_build;
    type->fp_ctor_ = (void*)DestinationMotion__New1_fn;
    return type;
}

// public generated DestinationMotion() :246
void DestinationMotion__ctor__fn(DestinationMotion* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create() :354
void DestinationMotion__Create_fn(DestinationMotion* __this, uObject** __retval)
{
    *__retval = __this->Create();
}

// public float get_Distance() :346
void DestinationMotion__get_Distance_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :347
void DestinationMotion__set_Distance_fn(DestinationMotion* __this, float* value)
{
    __this->Distance(*value);
}

// public float get_Duration() :296
void DestinationMotion__get_Duration_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :297
void DestinationMotion__set_Duration_fn(DestinationMotion* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :313
void DestinationMotion__get_DurationExp_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :314
void DestinationMotion__set_DurationExp_fn(DestinationMotion* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :275
void DestinationMotion__get_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :276
void DestinationMotion__set_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public generated DestinationMotion New() :246
void DestinationMotion__New1_fn(uType* __type, DestinationMotion** __retval)
{
    *__retval = DestinationMotion::New1(__type);
}

// public Fuse.Motion.MotionDestinationType get_Type() :257
void DestinationMotion__get_Type_fn(DestinationMotion* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) :258
void DestinationMotion__set_Type_fn(DestinationMotion* __this, int* value)
{
    __this->Type(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :329
void DestinationMotion__get_Unit_fn(DestinationMotion* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :330
void DestinationMotion__set_Unit_fn(DestinationMotion* __this, int* value)
{
    __this->Unit(*value);
}

// public generated DestinationMotion() [instance] :246
void DestinationMotion::ctor_()
{
    _type = 1;
    _easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    _duration = 0.5f;
    _durationExp = 0.5f;
    _distance = 1000.0f;
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create() [instance] :354
uObject* DestinationMotion::Create()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.EasingMotion<T>*/),
        __type->Precalced(1/*Fuse.Motion.Simulation.ElasticForce<T>*/),
        __type->Precalced(2/*Fuse.Motion.Simulation.SmoothSnap<T>*/),
        __type->Precalced(3/*Fuse.Motion.Simulation.AngularAdapter<T>*/),
        __type->Precalced(4/*Fuse.Motion.Simulation.AdapterMultiplier<T>*/),
    };
    uStackFrame __("Fuse.Motion.DestinationMotion`1", "Create()");
    int effectiveUnit = Unit();
    float multiplier = 1.0f;

    if (effectiveUnit == 3)
    {
        effectiveUnit = 2;
        multiplier = ::g::Uno::Math::DegreesToRadians1(1.0f);
    }

    uObject* dest;

    switch (Type())
    {
        case 0:
        {
            ::g::Fuse::Motion::Simulation::EasingMotion* q = (::g::Fuse::Motion::Simulation::EasingMotion*)::g::Fuse::Motion::Simulation::EasingMotion::CreateUnit(__types[0], effectiveUnit);
            uPtr(q)->Easing(Easing());
            q->DurationExp(DurationExp());

            if (_hasDuration)
                uPtr(q)->Duration(Duration());

            if (_hasDistance)
                uPtr(q)->NominalDistance(Distance() * multiplier);

            dest = (uObject*)q;
            break;
        }
        case 1:
        {
            ::g::Fuse::Motion::Simulation::ElasticForce* q1 = (::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateUnit(__types[1], effectiveUnit);
            dest = (uObject*)q1;
            break;
        }
        case 2:
        {
            ::g::Fuse::Motion::Simulation::SmoothSnap* q2 = (::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateUnit(__types[2], effectiveUnit);

            if (_hasDistance)
                uPtr(q2)->SpeedDropoutDistance(Distance() * multiplier);

            if (_hasDuration)
                uPtr(q2)->SetDuration(Duration());

            dest = (uObject*)q2;
            break;
        }
        default:
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[0/*"Invalidate ...*/], uBox<int>(::g::Fuse::Motion::MotionDestinationType_typeof(), Type())), this, ::STRINGS[1/*"/Users/medb...*/], 401, ::STRINGS[2/*"Create"*/], NULL);
            dest = (uObject*)((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateNormalized(__types[1]));
            break;
        }
    }

    if ((Unit() == 2) || (Unit() == 3))
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AngularAdapter*)::g::Fuse::Motion::Simulation::AngularAdapter::New1(__types[3], dest));

    if (multiplier != 1.0f)
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AdapterMultiplier*)::g::Fuse::Motion::Simulation::AdapterMultiplier::New1(__types[4], dest, (double)multiplier));

    return dest;
}

// public float get_Distance() [instance] :346
float DestinationMotion::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance] :347
void DestinationMotion::Distance(float value)
{
    _distance = value;
    _hasDistance = true;
}

// public float get_Duration() [instance] :296
float DestinationMotion::Duration()
{
    return _duration;
}

// public void set_Duration(float value) [instance] :297
void DestinationMotion::Duration(float value)
{
    _duration = value;
    _hasDuration = true;
}

// public float get_DurationExp() [instance] :313
float DestinationMotion::DurationExp()
{
    return _durationExp;
}

// public void set_DurationExp(float value) [instance] :314
void DestinationMotion::DurationExp(float value)
{
    _durationExp = value;
}

// public Fuse.Animations.Easing get_Easing() [instance] :275
::g::Fuse::Animations::Easing* DestinationMotion::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :276
void DestinationMotion::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;

    if (!_explicitType)
        _type = 0;
}

// public Fuse.Motion.MotionDestinationType get_Type() [instance] :257
int DestinationMotion::Type()
{
    return _type;
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) [instance] :258
void DestinationMotion::Type(int value)
{
    if ((_type == value) && !_explicitType)
        return;

    _type = value;
    _explicitType = true;
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :329
int DestinationMotion::Unit()
{
    return _unit;
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :330
void DestinationMotion::Unit(int value)
{
    _unit = value;
}

// public generated DestinationMotion New() [static] :246
DestinationMotion* DestinationMotion::New1(uType* __type)
{
    DestinationMotion* obj1 = (DestinationMotion*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public class MotionConfig :18
// {
static void MotionConfig_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(::g::Fuse::Motion::MotionConfig, _goto), 0,
        ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _impl), 0,
        ::g::Fuse::Motion::OverflowType_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _overflow), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _overflowExtent), 0,
        ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(::g::Fuse::Motion::MotionConfig, _snap), 0);
    type->Reflection.SetFunctions(28,
        new uFunction("get_Goto", NULL, (void*)MotionConfig__get_Goto_fn, 0, false, ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], 0),
        new uFunction("get_GotoDistance", NULL, (void*)MotionConfig__get_GotoDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDistance", NULL, (void*)MotionConfig__set_GotoDistance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoDuration", NULL, (void*)MotionConfig__get_GotoDuration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDuration", NULL, (void*)MotionConfig__set_GotoDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoDurationExp", NULL, (void*)MotionConfig__get_GotoDurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDurationExp", NULL, (void*)MotionConfig__set_GotoDurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoEasing", NULL, (void*)MotionConfig__get_GotoEasing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_GotoEasing", NULL, (void*)MotionConfig__set_GotoEasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_GotoType", NULL, (void*)MotionConfig__get_GotoType_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_GotoType", NULL, (void*)MotionConfig__set_GotoType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Overflow", NULL, (void*)MotionConfig__get_Overflow_fn, 0, false, ::g::Fuse::Motion::OverflowType_typeof(), 0),
        new uFunction("set_Overflow", NULL, (void*)MotionConfig__set_Overflow_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::OverflowType_typeof()),
        new uFunction("get_OverflowExtent", NULL, (void*)MotionConfig__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_OverflowExtent", NULL, (void*)MotionConfig__set_OverflowExtent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Snap", NULL, (void*)MotionConfig__get_Snap_fn, 0, false, ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], 0),
        new uFunction("get_SnapDistance", NULL, (void*)MotionConfig__get_SnapDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDistance", NULL, (void*)MotionConfig__set_SnapDistance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapDuration", NULL, (void*)MotionConfig__get_SnapDuration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDuration", NULL, (void*)MotionConfig__set_SnapDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapDurationExp", NULL, (void*)MotionConfig__get_SnapDurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDurationExp", NULL, (void*)MotionConfig__set_SnapDurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapEasing", NULL, (void*)MotionConfig__get_SnapEasing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_SnapEasing", NULL, (void*)MotionConfig__set_SnapEasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_SnapType", NULL, (void*)MotionConfig__get_SnapType_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_SnapType", NULL, (void*)MotionConfig__set_SnapType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)MotionConfig__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)MotionConfig__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()));
}

uType* MotionConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MotionConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.MotionConfig", options);
    type->fp_build_ = MotionConfig_build;
    type->fp_ctor_ = (void*)MotionConfig__New1_fn;
    return type;
}

// protected MotionConfig() :22
void MotionConfig__ctor__fn(MotionConfig* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() :29
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval)
{
    *__retval = __this->AcquireSimulation();
}

// private void CreateImpl() :179
void MotionConfig__CreateImpl_fn(MotionConfig* __this)
{
    __this->CreateImpl();
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() :49
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Goto();
}

// public float get_GotoDistance() :83
void MotionConfig__get_GotoDistance_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDistance();
}

// public void set_GotoDistance(float value) :84
void MotionConfig__set_GotoDistance_fn(MotionConfig* __this, float* value)
{
    __this->GotoDistance(*value);
}

// public float get_GotoDuration() :69
void MotionConfig__get_GotoDuration_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDuration();
}

// public void set_GotoDuration(float value) :70
void MotionConfig__set_GotoDuration_fn(MotionConfig* __this, float* value)
{
    __this->GotoDuration(*value);
}

// public float get_GotoDurationExp() :76
void MotionConfig__get_GotoDurationExp_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDurationExp();
}

// public void set_GotoDurationExp(float value) :77
void MotionConfig__set_GotoDurationExp_fn(MotionConfig* __this, float* value)
{
    __this->GotoDurationExp(*value);
}

// public Fuse.Animations.Easing get_GotoEasing() :62
void MotionConfig__get_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->GotoEasing();
}

// public void set_GotoEasing(Fuse.Animations.Easing value) :63
void MotionConfig__set_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->GotoEasing(value);
}

// public Fuse.Motion.MotionDestinationType get_GotoType() :55
void MotionConfig__get_GotoType_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->GotoType();
}

// public void set_GotoType(Fuse.Motion.MotionDestinationType value) :56
void MotionConfig__set_GotoType_fn(MotionConfig* __this, int* value)
{
    __this->GotoType(*value);
}

// protected MotionConfig New() :22
void MotionConfig__New1_fn(MotionConfig** __retval)
{
    *__retval = MotionConfig::New1();
}

// public Fuse.Motion.OverflowType get_Overflow() :142
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->Overflow();
}

// public void set_Overflow(Fuse.Motion.OverflowType value) :143
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int* value)
{
    __this->Overflow(*value);
}

// public float2 get_OverflowExtent() :157
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value) :158
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// internal void ReleaseSimulation() :38
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this)
{
    __this->ReleaseSimulation();
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() :93
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Snap();
}

// public float get_SnapDistance() :127
void MotionConfig__get_SnapDistance_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDistance();
}

// public void set_SnapDistance(float value) :128
void MotionConfig__set_SnapDistance_fn(MotionConfig* __this, float* value)
{
    __this->SnapDistance(*value);
}

// public float get_SnapDuration() :113
void MotionConfig__get_SnapDuration_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDuration();
}

// public void set_SnapDuration(float value) :114
void MotionConfig__set_SnapDuration_fn(MotionConfig* __this, float* value)
{
    __this->SnapDuration(*value);
}

// public float get_SnapDurationExp() :120
void MotionConfig__get_SnapDurationExp_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDurationExp();
}

// public void set_SnapDurationExp(float value) :121
void MotionConfig__set_SnapDurationExp_fn(MotionConfig* __this, float* value)
{
    __this->SnapDurationExp(*value);
}

// public Fuse.Animations.Easing get_SnapEasing() :106
void MotionConfig__get_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->SnapEasing();
}

// public void set_SnapEasing(Fuse.Animations.Easing value) :107
void MotionConfig__set_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->SnapEasing(value);
}

// public Fuse.Motion.MotionDestinationType get_SnapType() :99
void MotionConfig__get_SnapType_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->SnapType();
}

// public void set_SnapType(Fuse.Motion.MotionDestinationType value) :100
void MotionConfig__set_SnapType_fn(MotionConfig* __this, int* value)
{
    __this->SnapType(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :171
void MotionConfig__get_Unit_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :172
void MotionConfig__set_Unit_fn(MotionConfig* __this, int* value)
{
    __this->Unit(*value);
}

// protected MotionConfig() [instance] :22
void MotionConfig::ctor_()
{
    _goto = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/]));
    _snap = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/]));
    _overflowExtent = ::g::Uno::Float2__New1(150.0f);
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() [instance] :29
uObject* MotionConfig::AcquireSimulation()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "AcquireSimulation()");
    CreateImpl();
    return (uObject*)_impl;
}

// private void CreateImpl() [instance] :179
void MotionConfig::CreateImpl()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "CreateImpl()");
    _impl = ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::New1();
    uPtr(_impl)->DestinationSimulation((uObject*)uPtr(_goto)->Create());
    uPtr(_impl)->SnapSimulation((uObject*)uPtr(_snap)->Create());
    uPtr(_impl)->OverflowExtent(OverflowExtent());
    uPtr(_impl)->Overflow(Overflow());
    uPtr(_impl)->FrictionSimulation((uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreateUnit(::TYPES[7/*Fuse.Motion.Simulation.Friction<float2>*/], Unit())));
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() [instance] :49
::g::Fuse::Motion::DestinationMotion* MotionConfig::Goto()
{
    return _goto;
}

// public float get_GotoDistance() [instance] :83
float MotionConfig::GotoDistance()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDistance()");
    return uPtr(_goto)->Distance();
}

// public void set_GotoDistance(float value) [instance] :84
void MotionConfig::GotoDistance(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDistance(float)");
    uPtr(_goto)->Distance(value);
}

// public float get_GotoDuration() [instance] :69
float MotionConfig::GotoDuration()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDuration()");
    return uPtr(_goto)->Duration();
}

// public void set_GotoDuration(float value) [instance] :70
void MotionConfig::GotoDuration(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDuration(float)");
    uPtr(_goto)->Duration(value);
}

// public float get_GotoDurationExp() [instance] :76
float MotionConfig::GotoDurationExp()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDurationExp()");
    return uPtr(_goto)->DurationExp();
}

// public void set_GotoDurationExp(float value) [instance] :77
void MotionConfig::GotoDurationExp(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDurationExp(float)");
    uPtr(_goto)->DurationExp(value);
}

// public Fuse.Animations.Easing get_GotoEasing() [instance] :62
::g::Fuse::Animations::Easing* MotionConfig::GotoEasing()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoEasing()");
    return uPtr(_goto)->Easing();
}

// public void set_GotoEasing(Fuse.Animations.Easing value) [instance] :63
void MotionConfig::GotoEasing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoEasing(Fuse.Animations.Easing)");
    uPtr(_goto)->Easing(value);
}

// public Fuse.Motion.MotionDestinationType get_GotoType() [instance] :55
int MotionConfig::GotoType()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoType()");
    return uPtr(_goto)->Type();
}

// public void set_GotoType(Fuse.Motion.MotionDestinationType value) [instance] :56
void MotionConfig::GotoType(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoType(Fuse.Motion.MotionDestinationType)");
    uPtr(_goto)->Type(value);
}

// public Fuse.Motion.OverflowType get_Overflow() [instance] :142
int MotionConfig::Overflow()
{
    return _overflow;
}

// public void set_Overflow(Fuse.Motion.OverflowType value) [instance] :143
void MotionConfig::Overflow(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_Overflow(Fuse.Motion.OverflowType)");
    _overflow = value;

    if (_impl != NULL)
        uPtr(_impl)->Overflow(_overflow);
}

// public float2 get_OverflowExtent() [instance] :157
::g::Uno::Float2 MotionConfig::OverflowExtent()
{
    return _overflowExtent;
}

// public void set_OverflowExtent(float2 value) [instance] :158
void MotionConfig::OverflowExtent(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_OverflowExtent(float2)");
    _overflowExtent = value;

    if (_impl != NULL)
        uPtr(_impl)->OverflowExtent(_overflowExtent);
}

// internal void ReleaseSimulation() [instance] :38
void MotionConfig::ReleaseSimulation()
{
    _impl = NULL;
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() [instance] :93
::g::Fuse::Motion::DestinationMotion* MotionConfig::Snap()
{
    return _snap;
}

// public float get_SnapDistance() [instance] :127
float MotionConfig::SnapDistance()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDistance()");
    return uPtr(_snap)->Distance();
}

// public void set_SnapDistance(float value) [instance] :128
void MotionConfig::SnapDistance(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDistance(float)");
    uPtr(_snap)->Distance(value);
}

// public float get_SnapDuration() [instance] :113
float MotionConfig::SnapDuration()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDuration()");
    return uPtr(_snap)->Duration();
}

// public void set_SnapDuration(float value) [instance] :114
void MotionConfig::SnapDuration(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDuration(float)");
    uPtr(_snap)->Duration(value);
}

// public float get_SnapDurationExp() [instance] :120
float MotionConfig::SnapDurationExp()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDurationExp()");
    return uPtr(_snap)->DurationExp();
}

// public void set_SnapDurationExp(float value) [instance] :121
void MotionConfig::SnapDurationExp(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDurationExp(float)");
    uPtr(_snap)->DurationExp(value);
}

// public Fuse.Animations.Easing get_SnapEasing() [instance] :106
::g::Fuse::Animations::Easing* MotionConfig::SnapEasing()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapEasing()");
    return uPtr(_snap)->Easing();
}

// public void set_SnapEasing(Fuse.Animations.Easing value) [instance] :107
void MotionConfig::SnapEasing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapEasing(Fuse.Animations.Easing)");
    uPtr(_snap)->Easing(value);
}

// public Fuse.Motion.MotionDestinationType get_SnapType() [instance] :99
int MotionConfig::SnapType()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapType()");
    return uPtr(_snap)->Type();
}

// public void set_SnapType(Fuse.Motion.MotionDestinationType value) [instance] :100
void MotionConfig::SnapType(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapType(Fuse.Motion.MotionDestinationType)");
    uPtr(_snap)->Type(value);
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :171
int MotionConfig::Unit()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_Unit()");
    return uPtr(_goto)->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :172
void MotionConfig::Unit(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_Unit(Fuse.Motion.MotionUnit)");
    uPtr(_goto)->Unit(value);
    uPtr(_snap)->Unit(value);
}

// protected MotionConfig New() [static] :22
MotionConfig* MotionConfig::New1()
{
    MotionConfig* obj1 = (MotionConfig*)uNew(MotionConfig_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public enum MotionDestinationType :569
uEnumType* MotionDestinationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionDestinationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Easing", 0LL,
        "Elastic", 1LL,
        "SmoothSnap", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public enum MotionUnit :582
uEnumType* MotionUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionUnit", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Points", 0LL,
        "Normalized", 1LL,
        "Radians", 2LL,
        "Degrees", 3LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public sealed class NavigationMotion :194
// {
static void NavigationMotion_build(uType* type)
{
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavigationMotion__New2_fn, 0, true, type, 0));
}

uType* NavigationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(NavigationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.NavigationMotion", options);
    type->fp_build_ = NavigationMotion_build;
    type->fp_ctor_ = (void*)NavigationMotion__New2_fn;
    return type;
}

// public NavigationMotion() :196
void NavigationMotion__ctor_1_fn(NavigationMotion* __this)
{
    __this->ctor_1();
}

// public NavigationMotion New() :196
void NavigationMotion__New2_fn(NavigationMotion** __retval)
{
    *__retval = NavigationMotion::New2();
}

// public NavigationMotion() [instance] :196
void NavigationMotion::ctor_1()
{
    uStackFrame __("Fuse.Motion.NavigationMotion", ".ctor()");
    ctor_();
    Unit(1);
    uPtr(Goto())->_type = 0;
    uPtr(Goto())->_easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    Overflow(1);
    OverflowExtent(::g::Uno::Float2__New1(0.25f));
}

// public NavigationMotion New() [static] :196
NavigationMotion* NavigationMotion::New2()
{
    NavigationMotion* obj1 = (NavigationMotion*)uNew(NavigationMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public enum OverflowType :556
uEnumType* OverflowType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.OverflowType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Clamp", 1LL,
        "Elastic", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public sealed class ScrollViewMotion :213
// {
static void ScrollViewMotion_build(uType* type)
{
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollViewMotion__New2_fn, 0, true, type, 0));
}

uType* ScrollViewMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ScrollViewMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.ScrollViewMotion", options);
    type->fp_build_ = ScrollViewMotion_build;
    type->fp_ctor_ = (void*)ScrollViewMotion__New2_fn;
    return type;
}

// public ScrollViewMotion() :215
void ScrollViewMotion__ctor_1_fn(ScrollViewMotion* __this)
{
    __this->ctor_1();
}

// public ScrollViewMotion New() :215
void ScrollViewMotion__New2_fn(ScrollViewMotion** __retval)
{
    *__retval = ScrollViewMotion::New2();
}

// public ScrollViewMotion() [instance] :215
void ScrollViewMotion::ctor_1()
{
    uStackFrame __("Fuse.Motion.ScrollViewMotion", ".ctor()");
    ctor_();
    Unit(0);
    uPtr(Goto())->_type = 1;
    uPtr(Snap())->_type = 2;
    Overflow(2);
    OverflowExtent(::g::Uno::Float2__New1(150.0f));
}

// public ScrollViewMotion New() [static] :215
ScrollViewMotion* ScrollViewMotion::New2()
{
    ScrollViewMotion* obj1 = (ScrollViewMotion*)uNew(ScrollViewMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// private sealed class DelayFunction.SetClosure :526
// {
static void DelayFunction__SetClosure_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetFields(0,
        ::g::Fuse::Motion::DelayFunction_typeof(), offsetof(::g::Fuse::Motion::DelayFunction__SetClosure, _func), 0,
        ::TYPES[8/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Motion::DelayFunction__SetClosure, _target), 0,
        uObject_typeof(), offsetof(::g::Fuse::Motion::DelayFunction__SetClosure, _v), 0);
}

uType* DelayFunction__SetClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DelayFunction__SetClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DelayFunction.SetClosure", options);
    type->fp_build_ = DelayFunction__SetClosure_build;
    return type;
}

// public SetClosure(Fuse.Motion.DelayFunction func, Fuse.Reactive.IListener target, object v) :531
void DelayFunction__SetClosure__ctor__fn(DelayFunction__SetClosure* __this, ::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v)
{
    __this->ctor_(func, target, v);
}

// public SetClosure New(Fuse.Motion.DelayFunction func, Fuse.Reactive.IListener target, object v) :531
void DelayFunction__SetClosure__New1_fn(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v, DelayFunction__SetClosure** __retval)
{
    *__retval = DelayFunction__SetClosure::New1(func, target, v);
}

// public void Run() :537
void DelayFunction__SetClosure__Run_fn(DelayFunction__SetClosure* __this)
{
    __this->Run();
}

// public SetClosure(Fuse.Motion.DelayFunction func, Fuse.Reactive.IListener target, object v) [instance] :531
void DelayFunction__SetClosure::ctor_(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v)
{
    _func = func;
    _target = target;
    _v = v;
}

// public void Run() [instance] :537
void DelayFunction__SetClosure::Run()
{
    uStackFrame __("Fuse.Motion.DelayFunction.SetClosure", "Run()");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_target), ::TYPES[8/*Fuse.Reactive.IListener*/]), (uObject*)_func, _v);
}

// public SetClosure New(Fuse.Motion.DelayFunction func, Fuse.Reactive.IListener target, object v) [static] :531
DelayFunction__SetClosure* DelayFunction__SetClosure::New1(::g::Fuse::Motion::DelayFunction* func, uObject* target, uObject* v)
{
    DelayFunction__SetClosure* obj1 = (DelayFunction__SetClosure*)uNew(DelayFunction__SetClosure_typeof());
    obj1->ctor_(func, target, v);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// public sealed class SpringFunction :427
// {
static void SpringFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Motion::SpringFunction, _Value), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SpringFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()),
        new uFunction("get_Value", NULL, (void*)SpringFunction__get_Value_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

::g::Fuse::Reactive::Expression_type* SpringFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SpringFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Motion.SpringFunction", options);
    type->fp_build_ = SpringFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SpringFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SpringFunction__Subscribe_fn;
    return type;
}

// public SpringFunction(Fuse.Reactive.Expression value) :432
void SpringFunction__ctor_1_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_1(value);
}

// public SpringFunction New(Fuse.Reactive.Expression value) :432
void SpringFunction__New1_fn(::g::Fuse::Reactive::Expression* value, SpringFunction** __retval)
{
    *__retval = SpringFunction::New1(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :438
void SpringFunction__Subscribe_fn(SpringFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Motion.SpringFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)SpringFunction__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Value() :429
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(Fuse.Reactive.Expression value) :429
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Value(value);
}

// public SpringFunction(Fuse.Reactive.Expression value) [instance] :432
void SpringFunction::ctor_1(::g::Fuse::Reactive::Expression* value)
{
    ctor_();
    Value(value);
}

// public generated Fuse.Reactive.Expression get_Value() [instance] :429
::g::Fuse::Reactive::Expression* SpringFunction::Value()
{
    return _Value;
}

// private generated void set_Value(Fuse.Reactive.Expression value) [instance] :429
void SpringFunction::Value(::g::Fuse::Reactive::Expression* value)
{
    _Value = value;
}

// public SpringFunction New(Fuse.Reactive.Expression value) [static] :432
SpringFunction* SpringFunction::New1(::g::Fuse::Reactive::Expression* value)
{
    SpringFunction* obj1 = (SpringFunction*)uNew(SpringFunction_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.47.7/$.uno
// --------------------------------------------------------------------------------------

// private sealed class SpringFunction.Subscription :443
// {
static void SpringFunction__Subscription_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[8] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::TYPES[9/*Uno.IDisposable*/], offsetof(SpringFunction__Subscription_type, interface0),
        ::TYPES[8/*Fuse.Reactive.IListener*/], offsetof(SpringFunction__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _hasStartValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _isSimulating), 0,
        ::TYPES[8/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _listener), 0,
        ::g::Fuse::Motion::SpringFunction_typeof(), offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _sf), 0,
        ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _sim), 0,
        ::TYPES[9/*Uno.IDisposable*/], offsetof(::g::Fuse::Motion::SpringFunction__Subscription, _valueSub), 0);
}

SpringFunction__Subscription_type* SpringFunction__Subscription_typeof()
{
    static uSStrong<SpringFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SpringFunction__Subscription);
    options.TypeSize = sizeof(SpringFunction__Subscription_type);
    type = (SpringFunction__Subscription_type*)uClassType::New("Fuse.Motion.SpringFunction.Subscription", options);
    type->fp_build_ = SpringFunction__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))SpringFunction__Subscription__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))SpringFunction__Subscription__OnNewData_fn;
    return type;
}

// public Subscription(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :452
void SpringFunction__Subscription__ctor__fn(SpringFunction__Subscription* __this, ::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    __this->ctor_(sf, context, listener);
}

// public void Dispose() :459
void SpringFunction__Subscription__Dispose_fn(SpringFunction__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :452
void SpringFunction__Subscription__New1_fn(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener, SpringFunction__Subscription** __retval)
{
    *__retval = SpringFunction__Subscription::New1(sf, context, listener);
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) :467
void SpringFunction__Subscription__OnNewData_fn(SpringFunction__Subscription* __this, uObject* source, uObject* value)
{
    __this->OnNewData(source, value);
}

// private void Simulate() :497
void SpringFunction__Subscription__Simulate_fn(SpringFunction__Subscription* __this)
{
    __this->Simulate();
}

// private void StartSimulation() :483
void SpringFunction__Subscription__StartSimulation_fn(SpringFunction__Subscription* __this)
{
    __this->StartSimulation();
}

// private void StopSimulation() :490
void SpringFunction__Subscription__StopSimulation_fn(SpringFunction__Subscription* __this)
{
    __this->StopSimulation();
}

// public Subscription(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :452
void SpringFunction__Subscription::ctor_(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", ".ctor(Fuse.Motion.SpringFunction,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    _sf = sf;
    _valueSub = uPtr(uPtr(sf)->Value())->Subscribe(context, (uObject*)this);
    _listener = listener;
}

// public void Dispose() [instance] :459
void SpringFunction__Subscription::Dispose()
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_valueSub), ::TYPES[9/*Uno.IDisposable*/]));
    _valueSub = NULL;
    _listener = NULL;
    StopSimulation();
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) [instance] :467
void SpringFunction__Subscription::OnNewData(uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    ::g::Uno::Float4 ret2;
    ::g::Uno::Float4 v = ::g::Fuse::Marshal::ToFloat4(value);

    if (!_hasStartValue)
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__Reset_fn(uPtr(_sim), uCRef(v));
        _hasStartValue = true;
    }
    else if (::g::Uno::Float4__op_Inequality((::g::Fuse::Motion::Simulation::ElasticForce__get_Destination_fn(uPtr(_sim), &ret2), ret2), v))
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__set_Destination_fn(uPtr(_sim), uCRef(v));
        StartSimulation();
    }
}

// private void Simulate() [instance] :497
void SpringFunction__Subscription::Simulate()
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", "Simulate()");
    ::g::Uno::Float4 ret3;
    uPtr(_sim)->Update(::g::Fuse::Time::FrameInterval());
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[8/*Fuse.Reactive.IListener*/]), (uObject*)_sf, uBox(::g::Uno::Float4_typeof(), (::g::Fuse::Motion::Simulation::ElasticForce__get_Position_fn(uPtr(_sim), &ret3), ret3)));

    if (uPtr(_sim)->IsStatic())
        StopSimulation();
}

// private void StartSimulation() [instance] :483
void SpringFunction__Subscription::StartSimulation()
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", "StartSimulation()");

    if (_isSimulating)
        return;

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)SpringFunction__Subscription__Simulate_fn, this), 0);
    _isSimulating = true;
}

// private void StopSimulation() [instance] :490
void SpringFunction__Subscription::StopSimulation()
{
    uStackFrame __("Fuse.Motion.SpringFunction.Subscription", "StopSimulation()");

    if (!_isSimulating)
        return;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)SpringFunction__Subscription__Simulate_fn, this), 0);
    _isSimulating = false;
}

// public Subscription New(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :452
SpringFunction__Subscription* SpringFunction__Subscription::New1(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    SpringFunction__Subscription* obj1 = (SpringFunction__Subscription*)uNew(SpringFunction__Subscription_typeof());
    obj1->ctor_(sf, context, listener);
    return obj1;
}
// }

}}} // ::g::Fuse::Motion
