// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Android.Bootstrapper.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Platform.AndroidDisplay.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ClosingEventArgs.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.EventSou-774431f7.h>
#include <Uno.Platform.EventSou-b16da529.h>
#include <Uno.Platform.FrameCha-70b333cb.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.OSFrame.h>
#include <Uno.Platform.PointerCursor.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInpu-ce73556b.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implement-ce657879.h>
#include <Uno.Runtime.Implement-e6156e0b.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
void uInitRtti();
void uStartApp();
static uString* STRINGS[17];
static uType* TYPES[9];

namespace g{
namespace Uno{
namespace Platform{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/android/$.uno
// ---------------------------------------------------------------------------------------------------------------

// public sealed extern class AndroidDisplay :12
// {
static void AndroidDisplay_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Platform::AndroidDisplay::_initialized_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AndroidDisplay__New1_fn, 0, true, type, 0));
}

::g::Uno::Platform::Display_type* AndroidDisplay_typeof()
{
    static uSStrong< ::g::Uno::Platform::Display_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::Display_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AndroidDisplay);
    options.TypeSize = sizeof(::g::Uno::Platform::Display_type);
    type = (::g::Uno::Platform::Display_type*)uClassType::New("Uno.Platform.AndroidDisplay", options);
    type->fp_build_ = AndroidDisplay_build;
    type->fp_ctor_ = (void*)AndroidDisplay__New1_fn;
    type->fp_DisableTicks = (void(*)(::g::Uno::Platform::Display*))AndroidDisplay__DisableTicks_fn;
    type->fp_EnableTicks = (void(*)(::g::Uno::Platform::Display*))AndroidDisplay__EnableTicks_fn;
    type->fp_GetDensity = (void(*)(::g::Uno::Platform::Display*, float*))AndroidDisplay__GetDensity_fn;
    return type;
}

// public generated AndroidDisplay() :12
void AndroidDisplay__ctor_1_fn(AndroidDisplay* __this)
{
    __this->ctor_1();
}

// private static float _getDensity() :17
void AndroidDisplay___getDensity_fn(float* __retval)
{
    *__retval = AndroidDisplay::_getDensity();
}

// protected override sealed void DisableTicks() :30
void AndroidDisplay__DisableTicks_fn(AndroidDisplay* __this)
{
    AndroidDisplay::_initialized_ = false;
}

// protected override sealed void EnableTicks() :35
void AndroidDisplay__EnableTicks_fn(AndroidDisplay* __this)
{
    __this->JavaEnableTicks();
}

// protected override sealed float GetDensity() :14
void AndroidDisplay__GetDensity_fn(AndroidDisplay* __this, float* __retval)
{
    return *__retval = AndroidDisplay::_getDensity(), void();
}

// private void JavaEnableTicks() :41
void AndroidDisplay__JavaEnableTicks_fn(AndroidDisplay* __this)
{
    __this->JavaEnableTicks();
}

// public generated AndroidDisplay New() :12
void AndroidDisplay__New1_fn(AndroidDisplay** __retval)
{
    *__retval = AndroidDisplay::New1();
}

// private void OnFrameCallback(double currentTime, double deltaTime) :79
void AndroidDisplay__OnFrameCallback_fn(AndroidDisplay* __this, double* currentTime, double* deltaTime)
{
    __this->OnFrameCallback(*currentTime, *deltaTime);
}

bool AndroidDisplay::_initialized_;

// public generated AndroidDisplay() [instance] :12
void AndroidDisplay::ctor_1()
{
    ctor_();
}

// private void JavaEnableTicks() [instance] :41
void AndroidDisplay::JavaEnableTicks()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "JavaEnableTicks53", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnFrameCallback(double currentTime, double deltaTime) [instance] :79
void AndroidDisplay::OnFrameCallback(double currentTime, double deltaTime)
{
    uStackFrame __("Uno.Platform.AndroidDisplay", "OnFrameCallback(double,double)");
    OnTick(::g::Uno::Platform::TimerEventArgs::New2(0.0, deltaTime, currentTime));
}

// private static float _getDensity() [static] :17
float AndroidDisplay::_getDensity()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "_getDensity52", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated AndroidDisplay New() [static] :12
AndroidDisplay* AndroidDisplay::New1()
{
    AndroidDisplay* obj1 = (AndroidDisplay*)uNew(AndroidDisplay_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum ApplicationState :13
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public delegate void ApplicationStateTransitionHandler(Uno.Platform.ApplicationState newState) :23
uDelegateType* ApplicationStateTransitionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Platform.ApplicationStateTransitionHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Platform::ApplicationState_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class ClosingEventArgs :326
// {
static void ClosingEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::ClosingEventArgs, _Cancel), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Cancel", NULL, (void*)ClosingEventArgs__get_Cancel_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Cancel", NULL, (void*)ClosingEventArgs__set_Cancel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ClosingEventArgs__New2_fn, 0, true, type, 0));
}

uType* ClosingEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ClosingEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.ClosingEventArgs", options);
    type->fp_build_ = ClosingEventArgs_build;
    type->fp_ctor_ = (void*)ClosingEventArgs__New2_fn;
    return type;
}

// public generated ClosingEventArgs() :326
void ClosingEventArgs__ctor_1_fn(ClosingEventArgs* __this)
{
    __this->ctor_1();
}

// public generated bool get_Cancel() :328
void ClosingEventArgs__get_Cancel_fn(ClosingEventArgs* __this, bool* __retval)
{
    *__retval = __this->Cancel();
}

// public generated void set_Cancel(bool value) :328
void ClosingEventArgs__set_Cancel_fn(ClosingEventArgs* __this, bool* value)
{
    __this->Cancel(*value);
}

// public generated ClosingEventArgs New() :326
void ClosingEventArgs__New2_fn(ClosingEventArgs** __retval)
{
    *__retval = ClosingEventArgs::New2();
}

// public generated ClosingEventArgs() [instance] :326
void ClosingEventArgs::ctor_1()
{
    ctor_();
}

// public generated bool get_Cancel() [instance] :328
bool ClosingEventArgs::Cancel()
{
    return _Cancel;
}

// public generated void set_Cancel(bool value) [instance] :328
void ClosingEventArgs::Cancel(bool value)
{
    _Cancel = value;
}

// public generated ClosingEventArgs New() [static] :326
ClosingEventArgs* ClosingEventArgs::New2()
{
    ClosingEventArgs* obj1 = (ClosingEventArgs*)uNew(ClosingEventArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class CoreApp :28
// {
// static CoreApp() :28
static void CoreApp__cctor__fn(uType* __type)
{
    CoreApp::_delayedURIS_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void CoreApp_build(uType* type)
{
    ::STRINGS[0] = uString::Const("EnterBackground() called on terminating application");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno");
    ::STRINGS[2] = uString::Const("EnterBackground() called on uninitialized application");
    ::STRINGS[3] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Foreground");
    ::STRINGS[4] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Background");
    ::STRINGS[5] = uString::Const("EnterForeground() called on terminating application");
    ::STRINGS[6] = uString::Const("EnterForeground() called on uninitialized application");
    ::STRINGS[7] = uString::Const("EnterInteractive() called on terminating application");
    ::STRINGS[8] = uString::Const("EnterInteractive() called on uninitialized application");
    ::STRINGS[9] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Interactive");
    ::STRINGS[10] = uString::Const("ExitInteractive() called on terminating application");
    ::STRINGS[11] = uString::Const("ExitInteractive() called on uninitialized application");
    ::STRINGS[12] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Uninitialized");
    ::STRINGS[13] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Terminating");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&::g::Uno::Platform::CoreApp::_delayedURIS_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Platform::CoreApp::_Current_, uFieldFlagsStatic,
        ::g::Uno::Platform::ApplicationState_typeof(), (uintptr_t)&::g::Uno::Platform::CoreApp::_State_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::CoreApp::_receivedURI1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.EventHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::ReceivedLowMemoryWarning1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::Started1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform::CoreApp::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(21,
        new uFunction("add__receivedURI", NULL, (void*)CoreApp__add__receivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove__receivedURI", NULL, (void*)CoreApp__remove__receivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("get_Current", NULL, (void*)CoreApp__get_Current_fn, 0, true, type, 0),
        new uFunction("add_EnteringBackground", NULL, (void*)CoreApp__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringBackground", NULL, (void*)CoreApp__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_EnteringForeground", NULL, (void*)CoreApp__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringForeground", NULL, (void*)CoreApp__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_EnteringInteractive", NULL, (void*)CoreApp__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_EnteringInteractive", NULL, (void*)CoreApp__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("add_ExitedInteractive", NULL, (void*)CoreApp__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_ExitedInteractive", NULL, (void*)CoreApp__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("Load", NULL, (void*)CoreApp__Load_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_ReceivedLowMemoryWarning", NULL, (void*)CoreApp__add_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_ReceivedLowMemoryWarning", NULL, (void*)CoreApp__remove_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("add_ReceivedURI", NULL, (void*)CoreApp__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)CoreApp__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("add_Started", NULL, (void*)CoreApp__add_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_Started", NULL, (void*)CoreApp__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("get_State", NULL, (void*)CoreApp__get_State_fn, 0, true, ::g::Uno::Platform::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)CoreApp__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]),
        new uFunction("remove_Terminating", NULL, (void*)CoreApp__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]));
}

uType* CoreApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(CoreApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.CoreApp", options);
    type->fp_build_ = CoreApp_build;
    type->fp_cctor_ = CoreApp__cctor__fn;
    return type;
}

// protected CoreApp() :36
void CoreApp__ctor__fn(CoreApp* __this)
{
    __this->ctor_();
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value) :271
void CoreApp__add__receivedURI_fn(uDelegate* value)
{
    CoreApp::add__receivedURI(value);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value) :271
void CoreApp__remove__receivedURI_fn(uDelegate* value)
{
    CoreApp::remove__receivedURI(value);
}

// public static generated Uno.Platform.CoreApp get_Current() :32
void CoreApp__get_Current_fn(CoreApp** __retval)
{
    *__retval = CoreApp::Current();
}

// internal static generated void set_Current(Uno.Platform.CoreApp value) :33
void CoreApp__set_Current_fn(CoreApp* value)
{
    CoreApp::Current(value);
}

// private static void DispatchDelayedUri() :300
void CoreApp__DispatchDelayedUri_fn()
{
    CoreApp::DispatchDelayedUri();
}

// internal static void EnterBackground() :193
void CoreApp__EnterBackground_fn()
{
    CoreApp::EnterBackground();
}

// internal static void EnterForeground() :89
void CoreApp__EnterForeground_fn()
{
    CoreApp::EnterForeground();
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) :58
void CoreApp__add_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) :58
void CoreApp__remove_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) :55
void CoreApp__add_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) :55
void CoreApp__remove_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :56
void CoreApp__add_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :56
void CoreApp__remove_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::remove_EnteringInteractive(value);
}

// internal static void EnterInteractive() :122
void CoreApp__EnterInteractive_fn()
{
    CoreApp::EnterInteractive();
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :57
void CoreApp__add_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :57
void CoreApp__remove_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::remove_ExitedInteractive(value);
}

// internal static void ExitInteractive() :159
void CoreApp__ExitInteractive_fn()
{
    CoreApp::ExitInteractive();
}

// public void Load() :45
void CoreApp__Load_fn(CoreApp* __this)
{
    __this->Load();
}

// internal static void OnReceivedLowMemoryWarning() :262
void CoreApp__OnReceivedLowMemoryWarning_fn()
{
    CoreApp::OnReceivedLowMemoryWarning();
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) :260
void CoreApp__add_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::add_ReceivedLowMemoryWarning(value);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) :260
void CoreApp__remove_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::remove_ReceivedLowMemoryWarning(value);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value) :274
void CoreApp__add_ReceivedURI_fn(uDelegate* value)
{
    CoreApp::add_ReceivedURI(value);
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value) :280
void CoreApp__remove_ReceivedURI_fn(uDelegate* value)
{
    CoreApp::remove_ReceivedURI(value);
}

// internal static void Start() :61
void CoreApp__Start_fn()
{
    CoreApp::Start();
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value) :54
void CoreApp__add_Started_fn(uDelegate* value)
{
    CoreApp::add_Started(value);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value) :54
void CoreApp__remove_Started_fn(uDelegate* value)
{
    CoreApp::remove_Started(value);
}

// public static generated Uno.Platform.ApplicationState get_State() :52
void CoreApp__get_State_fn(int* __retval)
{
    *__retval = CoreApp::State();
}

// private static generated void set_State(Uno.Platform.ApplicationState value) :52
void CoreApp__set_State_fn(int* value)
{
    CoreApp::State(*value);
}

// internal static void Terminate() :227
void CoreApp__Terminate_fn()
{
    CoreApp::Terminate();
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) :59
void CoreApp__add_Terminating_fn(uDelegate* value)
{
    CoreApp::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) :59
void CoreApp__remove_Terminating_fn(uDelegate* value)
{
    CoreApp::remove_Terminating(value);
}

uSStrong< ::g::Uno::Collections::List*> CoreApp::_delayedURIS_;
uSStrong<CoreApp*> CoreApp::_Current_;
int CoreApp::_State_;
uSStrong<uDelegate*> CoreApp::_receivedURI1_;
uSStrong<uDelegate*> CoreApp::EnteringBackground1_;
uSStrong<uDelegate*> CoreApp::EnteringForeground1_;
uSStrong<uDelegate*> CoreApp::EnteringInteractive1_;
uSStrong<uDelegate*> CoreApp::ExitedInteractive1_;
uSStrong<uDelegate*> CoreApp::ReceivedLowMemoryWarning1_;
uSStrong<uDelegate*> CoreApp::Started1_;
uSStrong<uDelegate*> CoreApp::Terminating1_;

// protected CoreApp() [instance] :36
void CoreApp::ctor_()
{
    ::g::Android::Bootstrapper::_RegisterTypes();

    if (CoreApp::Current() == NULL)
        CoreApp::Current(this);
}

// public void Load() [instance] :45
void CoreApp::Load()
{
}

// private static void DispatchDelayedUri() [static] :300
void CoreApp::DispatchDelayedUri()
{
    uStackFrame __("Uno.Platform.CoreApp", "DispatchDelayedUri()");
    CoreApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret14;
    uDelegate* handler = CoreApp::_receivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        if (uPtr(CoreApp::_delayedURIS())->Count() > 0)
        {
            for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum13 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(CoreApp::_delayedURIS()), &ret14), ret14); enum13.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]); )
            {
                uString* u = enum13.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                uPtr(handler)->Invoke(2, NULL, u);
            }

            uPtr(CoreApp::_delayedURIS())->Clear();
        }
    }
}

// internal static void EnterBackground() [static] :193
void CoreApp::EnterBackground()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterBackground()");
    CoreApp_typeof()->Init();
    int assert9;
    int assert10;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"EnterBackgr...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 198);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"EnterBackgr...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 202);
            return;
        }
        case 1:
            return;
        case 2:
            break;
        case 3:
        {
            CoreApp::ExitInteractive();
            break;
        }
    }

    assert9 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert9 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 216, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert9), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(1);
    uDelegate* handler = CoreApp::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert10 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert10 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 224, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert10), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void EnterForeground() [static] :89
void CoreApp::EnterForeground()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterForeground()");
    CoreApp_typeof()->Init();
    int assert3;
    int assert4;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"EnterForegr...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 94);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"EnterForegr...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 98);
            return;
        }
        case 1:
            break;
        case 2:
        case 3:
            return;
    }

    assert3 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert3 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 110, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert3), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert4 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 118, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert4), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void EnterInteractive() [static] :122
void CoreApp::EnterInteractive()
{
    uStackFrame __("Uno.Platform.CoreApp", "EnterInteractive()");
    CoreApp_typeof()->Init();
    int assert5;
    int assert6;
    GLHelper::SwapBackToBackgroundSurface();

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"EnterIntera...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 130);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[8/*"EnterIntera...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 134);
            return;
        }
        case 1:
        {
            CoreApp::EnterForeground();
            break;
        }
        case 2:
            break;
        case 3:
            return;
    }

    assert5 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 148, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert5), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(3);
    uDelegate* handler = CoreApp::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert6 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert6 == 3, ::STRINGS[9/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 156, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert6), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
}

// internal static void ExitInteractive() [static] :159
void CoreApp::ExitInteractive()
{
    uStackFrame __("Uno.Platform.CoreApp", "ExitInteractive()");
    CoreApp_typeof()->Init();
    int assert7;
    int assert8;
    GLHelper::SwapBackToBackgroundSurface();

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[10/*"ExitInterac...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 167);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[11/*"ExitInterac...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 171);
            return;
        }
        case 1:
        case 2:
            return;
        case 3:
            break;
    }

    assert7 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert7 == 3, ::STRINGS[9/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 182, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert7), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert8 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert8 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 190, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert8), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void OnReceivedLowMemoryWarning() [static] :262
void CoreApp::OnReceivedLowMemoryWarning()
{
    uStackFrame __("Uno.Platform.CoreApp", "OnReceivedLowMemoryWarning()");
    CoreApp_typeof()->Init();
    uDelegate* handler = CoreApp::ReceivedLowMemoryWarning1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal static void Start() [static] :61
void CoreApp::Start()
{
    uStackFrame __("Uno.Platform.CoreApp", "Start()");
    CoreApp_typeof()->Init();
    int assert1;
    int assert2;

    switch (CoreApp::State())
    {
        case 1:
        {
            CoreApp::Terminate();
            break;
        }
        case 0:
        case -1:
            break;
    }

    uInitRtti();
    assert1 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == 0, ::STRINGS[12/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 76, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert1), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 0)));
    uStartApp();
    CoreApp::State(1);
    uDelegate* handler = CoreApp::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert2 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert2 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 86, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert2), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void Terminate() [static] :227
void CoreApp::Terminate()
{
    uStackFrame __("Uno.Platform.CoreApp", "Terminate()");
    CoreApp_typeof()->Init();
    int assert11;
    int assert12;

    switch (CoreApp::State())
    {
        case -1:
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
        {
            CoreApp::EnterBackground();
            break;
        }
    }

    assert11 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert11 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 244, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert11), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(-1);
    uDelegate* handler = CoreApp::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert12 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert12 == -1, ::STRINGS[13/*"Uno.Platfor...*/], ::STRINGS[1/*"/Users/medb...*/], 252, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert12), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), -1)));
    CoreApp::State(0);
}

// public static generated Uno.Platform.CoreApp get_Current() [static] :32
CoreApp* CoreApp::Current()
{
    CoreApp_typeof()->Init();
    return CoreApp::_Current();
}

// internal static generated void set_Current(Uno.Platform.CoreApp value) [static] :33
void CoreApp::Current(CoreApp* value)
{
    CoreApp_typeof()->Init();
    CoreApp::_Current() = value;
}

// public static generated Uno.Platform.ApplicationState get_State() [static] :52
int CoreApp::State()
{
    CoreApp_typeof()->Init();
    return CoreApp::_State();
}

// private static generated void set_State(Uno.Platform.ApplicationState value) [static] :52
void CoreApp::State(int value)
{
    CoreApp_typeof()->Init();
    CoreApp::_State() = value;
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value) [static] :271
void CoreApp::add__receivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add__receivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::_receivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::_receivedURI1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value) [static] :271
void CoreApp::remove__receivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove__receivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::_receivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::_receivedURI1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :58
void CoreApp::add_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringBackground1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :58
void CoreApp::remove_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringBackground1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :55
void CoreApp::add_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringForeground1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :55
void CoreApp::remove_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringForeground1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :56
void CoreApp::add_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringInteractive1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :56
void CoreApp::remove_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringInteractive1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :57
void CoreApp::add_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ExitedInteractive1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :57
void CoreApp::remove_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ExitedInteractive1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :260
void CoreApp::add_ReceivedLowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ReceivedLowMemoryWarning(Uno.EventHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ReceivedLowMemoryWarning1(), value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :260
void CoreApp::remove_ReceivedLowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ReceivedLowMemoryWarning(Uno.EventHandler)");
    CoreApp_typeof()->Init();
    CoreApp::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ReceivedLowMemoryWarning1(), value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value) [static] :274
void CoreApp::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_ReceivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::add__receivedURI(value);
    CoreApp::DispatchDelayedUri();
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value) [static] :280
void CoreApp::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_ReceivedURI(Uno.EventHandler<string>)");
    CoreApp_typeof()->Init();
    CoreApp::remove__receivedURI(value);
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static] :54
void CoreApp::add_Started(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_Started(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Started1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static] :54
void CoreApp::remove_Started(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_Started(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Started1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static] :59
void CoreApp::add_Terminating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "add_Terminating(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Terminating1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static] :59
void CoreApp::remove_Terminating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.CoreApp", "remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler)");
    CoreApp_typeof()->Init();
    CoreApp::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Terminating1(), value), ::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class Display :1066
// {
static void Display_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Uno::Platform::Display, _ticksPerSecond), 0,
        ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], offsetof(::g::Uno::Platform::Display, _tick1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Density", NULL, (void*)Display__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("add_Tick", NULL, (void*)Display__add_Tick_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]),
        new uFunction("remove_Tick", NULL, (void*)Display__remove_Tick_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]),
        new uFunction("get_TicksPerSecond", NULL, (void*)Display__get_TicksPerSecond_fn, 0, false, ::g::Uno::UInt_typeof(), 0),
        new uFunction("set_TicksPerSecond", NULL, (void*)Display__set_TicksPerSecond_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()));
}

Display_type* Display_typeof()
{
    static uSStrong<Display_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(Display_type);
    type = (Display_type*)uClassType::New("Uno.Platform.Display", options);
    type->fp_build_ = Display_build;
    type->fp_DisableTicks = Display__DisableTicks_fn;
    type->fp_EnableTicks = Display__EnableTicks_fn;
    return type;
}

// protected generated Display() :1066
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :1095
void Display__add__tick_fn(Display* __this, uDelegate* value)
{
    __this->add__tick(value);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :1095
void Display__remove__tick_fn(Display* __this, uDelegate* value)
{
    __this->remove__tick(value);
}

// public float get_Density() :1070
void Display__get_Density_fn(Display* __this, float* __retval)
{
    *__retval = __this->Density();
}

// protected virtual void DisableTicks() :1125
void Display__DisableTicks_fn(Display* __this)
{
}

// protected virtual void EnableTicks() :1124
void Display__EnableTicks_fn(Display* __this)
{
}

// internal void OnTick(Uno.Platform.TimerEventArgs args) :1117
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(args);
}

// protected void SetTicksPerSecond(uint value) :1091
void Display__SetTicksPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->SetTicksPerSecond(*value);
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :1098
void Display__add_Tick_fn(Display* __this, uDelegate* value)
{
    __this->add_Tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :1105
void Display__remove_Tick_fn(Display* __this, uDelegate* value)
{
    __this->remove_Tick(value);
}

// public uint get_TicksPerSecond() :1079
void Display__get_TicksPerSecond_fn(Display* __this, uint32_t* __retval)
{
    *__retval = __this->TicksPerSecond();
}

// public void set_TicksPerSecond(uint value) :1080
void Display__set_TicksPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->TicksPerSecond(*value);
}

// protected generated Display() [instance] :1066
void Display::ctor_()
{
    _ticksPerSecond = 0U;
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :1095
void Display::add__tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :1095
void Display::remove__tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// public float get_Density() [instance] :1070
float Display::Density()
{
    uStackFrame __("Uno.Platform.Display", "get_Density()");
    return GetDensity();
}

// internal void OnTick(Uno.Platform.TimerEventArgs args) [instance] :1117
void Display::OnTick(::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Uno.Platform.Display", "OnTick(Uno.Platform.TimerEventArgs)");
    uDelegate* handler = _tick1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);
}

// protected void SetTicksPerSecond(uint value) [instance] :1091
void Display::SetTicksPerSecond(uint32_t value)
{
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :1098
void Display::add_Tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        EnableTicks();

    add__tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :1105
void Display::remove_Tick(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Display", "remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs>)");

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        return;

    remove__tick(value);

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        DisableTicks();
}

// public uint get_TicksPerSecond() [instance] :1079
uint32_t Display::TicksPerSecond()
{
    return _ticksPerSecond;
}

// public void set_TicksPerSecond(uint value) [instance] :1080
void Display::TicksPerSecond(uint32_t value)
{
    uStackFrame __("Uno.Platform.Display", "set_TicksPerSecond(uint)");

    if (_ticksPerSecond == value)
        return;

    _ticksPerSecond = value;

    if (::g::Uno::Delegate::op_Inequality(_tick1, NULL))
        SetTicksPerSecond(value);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public static class Displays :1022
// {
// static Displays() :1027
static void Displays__cctor__fn(uType* __type)
{
    Displays::All((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/]));
    Displays::PopulateDisplaysList();
}

static void Displays_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Display_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/], (uintptr_t)&::g::Uno::Platform::Displays::_All_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("get_All", NULL, (void*)Displays__get_All_fn, 0, true, ::TYPES[7/*Uno.Collections.List<Uno.Platform.Display>*/], 0),
        new uFunction("get_MainDisplay", NULL, (void*)Displays__get_MainDisplay_fn, 0, true, ::g::Uno::Platform::Display_typeof(), 0));
}

uClassType* Displays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.Displays", options);
    type->fp_build_ = Displays_build;
    type->fp_cctor_ = Displays__cctor__fn;
    return type;
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All() :1024
void Displays__get_All_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = Displays::All();
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value) :1024
void Displays__set_All_fn(::g::Uno::Collections::List* value)
{
    Displays::All(value);
}

// private static Uno.Platform.Display GetMainDisplay() :1052
void Displays__GetMainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::GetMainDisplay();
}

// public static Uno.Platform.Display get_MainDisplay() :1025
void Displays__get_MainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::MainDisplay();
}

// private static extern void PopulateDisplaysList() :1034
void Displays__PopulateDisplaysList_fn()
{
    Displays::PopulateDisplaysList();
}

uSStrong< ::g::Uno::Collections::List*> Displays::_All_;

// private static Uno.Platform.Display GetMainDisplay() [static] :1052
::g::Uno::Platform::Display* Displays::GetMainDisplay()
{
    uStackFrame __("Uno.Platform.Displays", "GetMainDisplay()");
    Displays_typeof()->Init();
    ::g::Uno::Platform::Display* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(Displays::All()), uCRef<int>(0), &ret2), ret2);
}

// private static extern void PopulateDisplaysList() [static] :1034
void Displays::PopulateDisplaysList()
{
    uStackFrame __("Uno.Platform.Displays", "PopulateDisplaysList()");
    Displays_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Displays::All()), ::g::Uno::Platform::AndroidDisplay::New1());
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All() [static] :1024
::g::Uno::Collections::List* Displays::All()
{
    Displays_typeof()->Init();
    return Displays::_All();
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value) [static] :1024
void Displays::All(::g::Uno::Collections::List* value)
{
    Displays_typeof()->Init();
    Displays::_All() = value;
}

// public static Uno.Platform.Display get_MainDisplay() [static] :1025
::g::Uno::Platform::Display* Displays::MainDisplay()
{
    uStackFrame __("Uno.Platform.Displays", "get_MainDisplay()");
    Displays_typeof()->Init();
    return Displays::GetMainDisplay();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum EventModifiers :482
uEnumType* EventModifiers_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.EventModifiers", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class FrameChangedEventArgs :501
// {
static void FrameChangedEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::FrameChangedEventArgs, _NewFrame), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)FrameChangedEventArgs__New2_fn, 0, true, type, 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_NewFrame", NULL, (void*)FrameChangedEventArgs__get_NewFrame_fn, 0, false, ::g::Uno::Rect_typeof(), 0));
}

uType* FrameChangedEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FrameChangedEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.FrameChangedEventArgs", options);
    type->fp_build_ = FrameChangedEventArgs_build;
    return type;
}

// public FrameChangedEventArgs(Uno.Rect newFrame) :503
void FrameChangedEventArgs__ctor_1_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* newFrame)
{
    __this->ctor_1(*newFrame);
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) :503
void FrameChangedEventArgs__New2_fn(::g::Uno::Rect* newFrame, FrameChangedEventArgs** __retval)
{
    *__retval = FrameChangedEventArgs::New2(*newFrame);
}

// public generated Uno.Rect get_NewFrame() :508
void FrameChangedEventArgs__get_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->NewFrame();
}

// private generated void set_NewFrame(Uno.Rect value) :508
void FrameChangedEventArgs__set_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->NewFrame(*value);
}

// public FrameChangedEventArgs(Uno.Rect newFrame) [instance] :503
void FrameChangedEventArgs::ctor_1(::g::Uno::Rect newFrame)
{
    ctor_();
    NewFrame(newFrame);
}

// public generated Uno.Rect get_NewFrame() [instance] :508
::g::Uno::Rect FrameChangedEventArgs::NewFrame()
{
    return _NewFrame;
}

// private generated void set_NewFrame(Uno.Rect value) [instance] :508
void FrameChangedEventArgs::NewFrame(::g::Uno::Rect value)
{
    _NewFrame = value;
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) [static] :503
FrameChangedEventArgs* FrameChangedEventArgs::New2(::g::Uno::Rect newFrame)
{
    FrameChangedEventArgs* obj1 = (FrameChangedEventArgs*)uNew(FrameChangedEventArgs_typeof());
    obj1->ctor_1(newFrame);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum Key :340
uEnumType* Key_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.Key", ::g::Uno::Int_typeof(), 82);
    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class KeyEventArgs :519
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Handled), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Key), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Modifiers), 0,
        ::g::Uno::Platform::OSFrame_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Origin), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Handled", NULL, (void*)KeyEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)KeyEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsAltKeyPressed", NULL, (void*)KeyEventArgs__get_IsAltKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsControlKeyPressed", NULL, (void*)KeyEventArgs__get_IsControlKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMetaKeyPressed", NULL, (void*)KeyEventArgs__get_IsMetaKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsShiftKeyPressed", NULL, (void*)KeyEventArgs__get_IsShiftKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)KeyEventArgs__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)KeyEventArgs__New2_fn, 0, true, type, 3, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Platform::EventModifiers_typeof(), ::g::Uno::Platform::OSFrame_typeof()),
        new uFunction("get_Origin", NULL, (void*)KeyEventArgs__get_Origin_fn, 0, false, ::g::Uno::Platform::OSFrame_typeof(), 0));
}

uType* KeyEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    return type;
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers, [Uno.Platform.OSFrame origin]) :521
void KeyEventArgs__ctor_1_fn(KeyEventArgs* __this, int* key, int* modifiers, ::g::Uno::Platform::OSFrame* origin)
{
    __this->ctor_1(*key, *modifiers, origin);
}

// public generated bool get_Handled() :535
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :535
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public bool get_IsAltKeyPressed() :565
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// public bool get_IsControlKeyPressed() :555
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// public bool get_IsMetaKeyPressed() :550
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// public bool get_IsShiftKeyPressed() :560
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// public generated Uno.Platform.Key get_Key() :540
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :540
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :545
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :545
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers, [Uno.Platform.OSFrame origin]) :521
void KeyEventArgs__New2_fn(int* key, int* modifiers, ::g::Uno::Platform::OSFrame* origin, KeyEventArgs** __retval)
{
    *__retval = KeyEventArgs::New2(*key, *modifiers, origin);
}

// public generated Uno.Platform.OSFrame get_Origin() :530
void KeyEventArgs__get_Origin_fn(KeyEventArgs* __this, ::g::Uno::Platform::OSFrame** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(Uno.Platform.OSFrame value) :530
void KeyEventArgs__set_Origin_fn(KeyEventArgs* __this, ::g::Uno::Platform::OSFrame* value)
{
    __this->Origin(value);
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers, [Uno.Platform.OSFrame origin]) [instance] :521
void KeyEventArgs::ctor_1(int key, int modifiers, ::g::Uno::Platform::OSFrame* origin)
{
    ctor_();
    Key(key);
    Origin(origin);
    Modifiers(modifiers);
}

// public generated bool get_Handled() [instance] :535
bool KeyEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :535
void KeyEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public bool get_IsAltKeyPressed() [instance] :565
bool KeyEventArgs::IsAltKeyPressed()
{
    return (Modifiers() & 8) == 8;
}

// public bool get_IsControlKeyPressed() [instance] :555
bool KeyEventArgs::IsControlKeyPressed()
{
    return (Modifiers() & 2) == 2;
}

// public bool get_IsMetaKeyPressed() [instance] :550
bool KeyEventArgs::IsMetaKeyPressed()
{
    return (Modifiers() & 1) == 1;
}

// public bool get_IsShiftKeyPressed() [instance] :560
bool KeyEventArgs::IsShiftKeyPressed()
{
    return (Modifiers() & 4) == 4;
}

// public generated Uno.Platform.Key get_Key() [instance] :540
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :540
void KeyEventArgs::Key(int value)
{
    _Key = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :545
int KeyEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :545
void KeyEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public generated Uno.Platform.OSFrame get_Origin() [instance] :530
::g::Uno::Platform::OSFrame* KeyEventArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(Uno.Platform.OSFrame value) [instance] :530
void KeyEventArgs::Origin(::g::Uno::Platform::OSFrame* value)
{
    _Origin = value;
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers, [Uno.Platform.OSFrame origin]) [static] :521
KeyEventArgs* KeyEventArgs::New2(int key, int modifiers, ::g::Uno::Platform::OSFrame* origin)
{
    KeyEventArgs* obj1 = (KeyEventArgs*)uNew(KeyEventArgs_typeof());
    obj1->ctor_1(key, modifiers, origin);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public class OSFrame :781
// {
static void OSFrame_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), offsetof(::g::Uno::Platform::OSFrame, _handle), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::OSFrame, Resized1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("add_Resized", NULL, (void*)OSFrame__add_Resized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_Resized", NULL, (void*)OSFrame__remove_Resized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]));
}

uType* OSFrame_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OSFrame);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.OSFrame", options);
    type->fp_build_ = OSFrame_build;
    type->fp_ctor_ = (void*)OSFrame__New1_fn;
    return type;
}

// internal OSFrame() :785
void OSFrame__ctor__fn(OSFrame* __this)
{
    __this->ctor_();
}

// internal OSFrame New() :785
void OSFrame__New1_fn(OSFrame** __retval)
{
    *__retval = OSFrame::New1();
}

// public generated void add_Resized(Uno.EventHandler value) :793
void OSFrame__add_Resized_fn(OSFrame* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.EventHandler value) :793
void OSFrame__remove_Resized_fn(OSFrame* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// internal OSFrame() [instance] :785
void OSFrame::ctor_()
{
    _handle = (void*)NULL;
}

// public generated void add_Resized(Uno.EventHandler value) [instance] :793
void OSFrame::add_Resized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.OSFrame", "add_Resized(Uno.EventHandler)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_Resized(Uno.EventHandler value) [instance] :793
void OSFrame::remove_Resized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.OSFrame", "remove_Resized(Uno.EventHandler)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// internal OSFrame New() [static] :785
OSFrame* OSFrame::New1()
{
    OSFrame* obj1 = (OSFrame*)uNew(OSFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum PointerCursor :442
uEnumType* PointerCursor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerCursor", ::g::Uno::Int_typeof(), 17);
    type->SetLiterals(
        "None", 0LL,
        "Default", 1LL,
        "Crosshair", 2LL,
        "Pointer", 3LL,
        "Help", 4LL,
        "Move", 5LL,
        "Wait", 6LL,
        "Progress", 7LL,
        "ResizeNorth", 8LL,
        "ResizeEast", 9LL,
        "ResizeSouth", 10LL,
        "ResizeWest", 11LL,
        "ResizeNorthEast", 12LL,
        "ResizeNorthWest", 13LL,
        "ResizeSouthEast", 14LL,
        "ResizeSouthWest", 15LL,
        "IBeam", 16LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum PointerType :464
uEnumType* PointerType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class TextInputEventArgs :691
// {
static void TextInputEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Handled), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Text), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Handled", NULL, (void*)TextInputEventArgs__get_Handled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Handled", NULL, (void*)TextInputEventArgs__set_Handled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Text", NULL, (void*)TextInputEventArgs__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* TextInputEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextInputEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TextInputEventArgs", options);
    type->fp_build_ = TextInputEventArgs_build;
    return type;
}

// public generated bool get_Handled() :714
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :714
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public generated string get_Text() :719
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value) :719
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value)
{
    __this->Text(value);
}

// public generated bool get_Handled() [instance] :714
bool TextInputEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :714
void TextInputEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public generated string get_Text() [instance] :719
uString* TextInputEventArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance] :719
void TextInputEventArgs::Text(uString* value)
{
    _Text = value;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class TimerEventArgs :757
// {
static void TimerEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _CurrentTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _LastTickTimestamp), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _TickDuration), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_CurrentTime", NULL, (void*)TimerEventArgs__get_CurrentTime_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_LastTickTimestamp", NULL, (void*)TimerEventArgs__get_LastTickTimestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TimerEventArgs__New2_fn, 0, true, type, 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_TickDuration", NULL, (void*)TimerEventArgs__get_TickDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* TimerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TimerEventArgs", options);
    type->fp_build_ = TimerEventArgs_build;
    return type;
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime) :759
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration, double* currentTime)
{
    __this->ctor_1(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_CurrentTime() :768
void TimerEventArgs__get_CurrentTime_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->CurrentTime();
}

// private generated void set_CurrentTime(double value) :768
void TimerEventArgs__set_CurrentTime_fn(TimerEventArgs* __this, double* value)
{
    __this->CurrentTime(*value);
}

// public generated double get_LastTickTimestamp() :766
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->LastTickTimestamp();
}

// private generated void set_LastTickTimestamp(double value) :766
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value)
{
    __this->LastTickTimestamp(*value);
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime) :759
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, double* currentTime, TimerEventArgs** __retval)
{
    *__retval = TimerEventArgs::New2(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_TickDuration() :767
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->TickDuration();
}

// private generated void set_TickDuration(double value) :767
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value)
{
    __this->TickDuration(*value);
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime) [instance] :759
void TimerEventArgs::ctor_1(double lastTickTimestamp, double tickDuration, double currentTime)
{
    ctor_();
    LastTickTimestamp(lastTickTimestamp);
    TickDuration(tickDuration);
    CurrentTime(currentTime);
}

// public generated double get_CurrentTime() [instance] :768
double TimerEventArgs::CurrentTime()
{
    return _CurrentTime;
}

// private generated void set_CurrentTime(double value) [instance] :768
void TimerEventArgs::CurrentTime(double value)
{
    _CurrentTime = value;
}

// public generated double get_LastTickTimestamp() [instance] :766
double TimerEventArgs::LastTickTimestamp()
{
    return _LastTickTimestamp;
}

// private generated void set_LastTickTimestamp(double value) [instance] :766
void TimerEventArgs::LastTickTimestamp(double value)
{
    _LastTickTimestamp = value;
}

// public generated double get_TickDuration() [instance] :767
double TimerEventArgs::TickDuration()
{
    return _TickDuration;
}

// private generated void set_TickDuration(double value) [instance] :767
void TimerEventArgs::TickDuration(double value)
{
    _TickDuration = value;
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime) [static] :759
TimerEventArgs* TimerEventArgs::New2(double lastTickTimestamp, double tickDuration, double currentTime)
{
    TimerEventArgs* obj1 = (TimerEventArgs*)uNew(TimerEventArgs_typeof());
    obj1->ctor_1(lastTickTimestamp, tickDuration, currentTime);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum WheelDeltaMode :578
uEnumType* WheelDeltaMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.WheelDeltaMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/platform/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed extern class Window :812
// {
static void Window_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Window ClientSize not available on mobile");
    ::STRINGS[15] = uString::Const("PointerCursor is invalid on mobile");
    ::STRINGS[16] = uString::Const("<INVALID>");
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[8] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof(), NULL);
    type->SetFields(2,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, GotFocus1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, KeyboardResized1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, LostFocus1), 0,
        ::TYPES[8/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], offsetof(::g::Uno::Platform::Window, TextInput1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, Updating1), 0);
    type->Reflection.SetFunctions(24,
        new uFunction("get_ClientSize", NULL, (void*)Window__get_ClientSize_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_ClientSize", NULL, (void*)Window__set_ClientSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("Close", NULL, (void*)Window__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Fullscreen", NULL, (void*)Window__get_Fullscreen_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Fullscreen", NULL, (void*)Window__set_Fullscreen_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_GotFocus", NULL, (void*)Window__add_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_GotFocus", NULL, (void*)Window__remove_GotFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("get_IsTextInputActive", NULL, (void*)Window__get_IsTextInputActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_KeyboardResized", NULL, (void*)Window__add_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_KeyboardResized", NULL, (void*)Window__remove_KeyboardResized_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("add_KeyPressed", NULL, (void*)Window__add_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("remove_KeyPressed", NULL, (void*)Window__remove_KeyPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("add_KeyReleased", NULL, (void*)Window__add_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("remove_KeyReleased", NULL, (void*)Window__remove_KeyReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL)),
        new uFunction("add_LostFocus", NULL, (void*)Window__add_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_LostFocus", NULL, (void*)Window__remove_LostFocus_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("get_PointerCursor", NULL, (void*)Window__get_PointerCursor_fn, 0, false, ::g::Uno::Platform::PointerCursor_typeof(), 0),
        new uFunction("set_PointerCursor", NULL, (void*)Window__set_PointerCursor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerCursor_typeof()),
        new uFunction("add_TextInput", NULL, (void*)Window__add_TextInput_fn, 0, false, uVoid_typeof(), 1, ::TYPES[8/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]),
        new uFunction("remove_TextInput", NULL, (void*)Window__remove_TextInput_fn, 0, false, uVoid_typeof(), 1, ::TYPES[8/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]),
        new uFunction("get_Title", NULL, (void*)Window__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)Window__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_Updating", NULL, (void*)Window__add_Updating_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]),
        new uFunction("remove_Updating", NULL, (void*)Window__remove_Updating_fn, 0, false, uVoid_typeof(), 1, ::TYPES[5/*Uno.EventHandler*/]));
}

uType* Window_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::OSFrame_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Window);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.Window", options);
    type->fp_build_ = Window_build;
    type->fp_ctor_ = (void*)Window__New2_fn;
    return type;
}

// internal Window() :814
void Window__ctor_1_fn(Window* __this)
{
    __this->ctor_1();
}

// public int2 get_ClientSize() :851
void Window__get_ClientSize_fn(Window* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->ClientSize();
}

// public void set_ClientSize(int2 value) :856
void Window__set_ClientSize_fn(Window* __this, ::g::Uno::Int2* value)
{
    __this->ClientSize(*value);
}

// public void Close() :822
void Window__Close_fn(Window* __this)
{
    __this->Close();
}

// public bool get_Fullscreen() :862
void Window__get_Fullscreen_fn(Window* __this, bool* __retval)
{
    *__retval = __this->Fullscreen();
}

// public void set_Fullscreen(bool value) :863
void Window__set_Fullscreen_fn(Window* __this, bool* value)
{
    __this->Fullscreen(*value);
}

// public generated void add_GotFocus(Uno.EventHandler value) :900
void Window__add_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_GotFocus(value);
}

// public generated void remove_GotFocus(Uno.EventHandler value) :900
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_GotFocus(value);
}

// public bool get_IsTextInputActive() :869
void Window__get_IsTextInputActive_fn(Window* __this, bool* __retval)
{
    *__retval = __this->IsTextInputActive();
}

// public generated void add_KeyboardResized(Uno.EventHandler value) :874
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyboardResized(value);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) :874
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyboardResized(value);
}

// public void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :879
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyPressed(value);
}

// public void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :880
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyPressed(value);
}

// public void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :886
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyReleased(value);
}

// public void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :887
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyReleased(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) :908
void Window__add_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_LostFocus(value);
}

// public generated void remove_LostFocus(Uno.EventHandler value) :908
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_LostFocus(value);
}

// internal Window New() :814
void Window__New2_fn(Window** __retval)
{
    *__retval = Window::New2();
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState) :901
void Window__OnGotFocus_fn(Window* __this, int* newState)
{
    __this->OnGotFocus(*newState);
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState) :909
void Window__OnLostFocus_fn(Window* __this, int* newState)
{
    __this->OnLostFocus(*newState);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :892
void Window__OnTick_fn(Window* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// public Uno.Platform.PointerCursor get_PointerCursor() :837
void Window__get_PointerCursor_fn(Window* __this, int* __retval)
{
    *__retval = __this->PointerCursor();
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value) :842
void Window__set_PointerCursor_fn(Window* __this, int* value)
{
    __this->PointerCursor(*value);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :872
void Window__add_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->add_TextInput(value);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :872
void Window__remove_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->remove_TextInput(value);
}

// public string get_Title() :830
void Window__get_Title_fn(Window* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :831
void Window__set_Title_fn(Window* __this, uString* value)
{
    __this->Title(value);
}

// public generated void add_Updating(Uno.EventHandler value) :891
void Window__add_Updating_fn(Window* __this, uDelegate* value)
{
    __this->add_Updating(value);
}

// public generated void remove_Updating(Uno.EventHandler value) :891
void Window__remove_Updating_fn(Window* __this, uDelegate* value)
{
    __this->remove_Updating(value);
}

// internal Window() [instance] :814
void Window::ctor_1()
{
    uStackFrame __("Uno.Platform.Window", ".ctor()");
    ctor_();
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->add_Tick(uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)Window__OnTick_fn, this));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnGotFocus_fn, this));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnLostFocus_fn, this));
}

// public int2 get_ClientSize() [instance] :851
::g::Uno::Int2 Window::ClientSize()
{
    uStackFrame __("Uno.Platform.Window", "get_ClientSize()");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"Window Clie...*/]));
    return ::g::Uno::Int2__New2(0, 0);
}

// public void set_ClientSize(int2 value) [instance] :856
void Window::ClientSize(::g::Uno::Int2 value)
{
}

// public void Close() [instance] :822
void Window::Close()
{
    ::g::Uno::Runtime::Implementation::Internal::Unsafe::Quit();
}

// public bool get_Fullscreen() [instance] :862
bool Window::Fullscreen()
{
    return true;
}

// public void set_Fullscreen(bool value) [instance] :863
void Window::Fullscreen(bool value)
{
}

// public generated void add_GotFocus(Uno.EventHandler value) [instance] :900
void Window::add_GotFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_GotFocus(Uno.EventHandler)");
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(GotFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_GotFocus(Uno.EventHandler value) [instance] :900
void Window::remove_GotFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_GotFocus(Uno.EventHandler)");
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(GotFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public bool get_IsTextInputActive() [instance] :869
bool Window::IsTextInputActive()
{
    return ::g::Uno::Platform::EventSources::TextSource::IsTextInputActive();
}

// public generated void add_KeyboardResized(Uno.EventHandler value) [instance] :874
void Window::add_KeyboardResized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyboardResized(Uno.EventHandler)");
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyboardResized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) [instance] :874
void Window::remove_KeyboardResized(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyboardResized(Uno.EventHandler)");
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyboardResized1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :879
void Window::add_KeyPressed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyDown(value);
}

// public void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :880
void Window::remove_KeyPressed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::remove_KeyDown(value);
}

// public void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :886
void Window::add_KeyReleased(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyUp(value);
}

// public void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :887
void Window::remove_KeyReleased(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    ::g::Uno::Platform::EventSources::HardwareKeys::remove_KeyUp(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) [instance] :908
void Window::add_LostFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_LostFocus(Uno.EventHandler)");
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LostFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_LostFocus(Uno.EventHandler value) [instance] :908
void Window::remove_LostFocus(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_LostFocus(Uno.EventHandler)");
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LostFocus1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState) [instance] :901
void Window::OnGotFocus(int newState)
{
    uStackFrame __("Uno.Platform.Window", "OnGotFocus(Uno.Platform.ApplicationState)");
    uDelegate* handler = GotFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState) [instance] :909
void Window::OnLostFocus(int newState)
{
    uStackFrame __("Uno.Platform.Window", "OnLostFocus(Uno.Platform.ApplicationState)");
    uDelegate* handler = LostFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :892
void Window::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Uno.Platform.Window", "OnTick(object,Uno.Platform.TimerEventArgs)");
    uDelegate* handler = Updating1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, sender, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public Uno.Platform.PointerCursor get_PointerCursor() [instance] :837
int Window::PointerCursor()
{
    uStackFrame __("Uno.Platform.Window", "get_PointerCursor()");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"PointerCurs...*/]));
    return 0;
}

// public void set_PointerCursor(Uno.Platform.PointerCursor value) [instance] :842
void Window::PointerCursor(int value)
{
    uStackFrame __("Uno.Platform.Window", "set_PointerCursor(Uno.Platform.PointerCursor)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"PointerCurs...*/]));
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :872
void Window::add_TextInput(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs>)");
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextInput1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :872
void Window::remove_TextInput(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs>)");
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextInput1, value), ::TYPES[8/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public string get_Title() [instance] :830
uString* Window::Title()
{
    return ::STRINGS[16/*"<INVALID>"*/];
}

// public void set_Title(string value) [instance] :831
void Window::Title(uString* value)
{
}

// public generated void add_Updating(Uno.EventHandler value) [instance] :891
void Window::add_Updating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "add_Updating(Uno.EventHandler)");
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updating1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_Updating(Uno.EventHandler value) [instance] :891
void Window::remove_Updating(uDelegate* value)
{
    uStackFrame __("Uno.Platform.Window", "remove_Updating(Uno.EventHandler)");
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updating1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// internal Window New() [static] :814
Window* Window::New2()
{
    Window* obj1 = (Window*)uNew(Window_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Platform
