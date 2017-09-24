// This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/source/uno/platform/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.Support.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno.UInt.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>
#include <Window.h>
#include <Uno.Rect.h>
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Platform{

// public sealed extern class iOSDisplay :15
// {
// ~iOSDisplay() :41
static void iOSDisplay__Finalize_fn(iOSDisplay* __this)
{
    iOSDisplay::Destroy(__this->_handle, __this->_displayLink);
}

static void iOSDisplay_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetFields(2,
        ::g::ObjC::Object_typeof(), offsetof(::g::Uno::Platform::iOSDisplay, _displayLink), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Uno::Platform::iOSDisplay, _handle), 0,
        ::TYPES[0/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::iOSDisplay, FrameChanged1), 0);
}

::g::Uno::Platform::Display_type* iOSDisplay_typeof()
{
    static uSStrong< ::g::Uno::Platform::Display_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::Display_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(iOSDisplay);
    options.TypeSize = sizeof(::g::Uno::Platform::Display_type);
    type = (::g::Uno::Platform::Display_type*)uClassType::New("Uno.Platform.iOSDisplay", options);
    type->fp_build_ = iOSDisplay_build;
    type->fp_Finalize = (void(*)(uObject*))iOSDisplay__Finalize_fn;
    type->fp_DisableTicks = (void(*)(::g::Uno::Platform::Display*))iOSDisplay__DisableTicks_fn;
    type->fp_EnableTicks = (void(*)(::g::Uno::Platform::Display*))iOSDisplay__EnableTicks_fn;
    type->fp_GetDensity = (void(*)(::g::Uno::Platform::Display*, float*))iOSDisplay__GetDensity_fn;
    type->fp_SetTicksPerSecond = (void(*)(::g::Uno::Platform::Display*, uint32_t*))iOSDisplay__SetTicksPerSecond_fn;
    return type;
}

// private iOSDisplay(ObjC.Object handle) :34
void iOSDisplay__ctor_1_fn(iOSDisplay* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_1(handle);
}

// private static void Destroy(ObjC.Object handle, ObjC.Object displayLink) :61
void iOSDisplay__Destroy_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* displayLink)
{
    iOSDisplay::Destroy(handle, displayLink);
}

// protected override sealed void DisableTicks() :155
void iOSDisplay__DisableTicks_fn(iOSDisplay* __this)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            CADisplayLink* displayLink = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->_displayLink); }();
            displayLink.paused = YES;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: __this]);
        
    }
    
}

// protected override sealed void EnableTicks() :132
void iOSDisplay__EnableTicks_fn(iOSDisplay* __this)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            CADisplayLink* displayLink = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->_displayLink); }();
            UIWindow* window = (UIWindow*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->_handle); }();
            
            if (!displayLink)
            {
                uDisplayTickNotifier *notifier = [[uDisplayTickNotifier alloc] init];
            
                displayLink = [window.screen displayLinkWithTarget:notifier selector:@selector(uOnDisplayTick:) ];
            
                [displayLink addToRunLoop:[NSRunLoop mainRunLoop] forMode:NSDefaultRunLoopMode];
                [displayLink addToRunLoop:[NSRunLoop mainRunLoop] forMode:UITrackingRunLoopMode];
            
                uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->_displayLink = ::g::ObjC::Object::Create(displayLink);
            
                [&]() -> void { ::uForeignPool __foreignPool; uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->SetTicksPerSecond([&]() -> uint32_t { ::uForeignPool __foreignPool; return uCast<::g::Uno::Platform::Display*>((_this).unoObject, ::g::Uno::Platform::Display_typeof())->_ticksPerSecond; }()); }();
            }
            
            displayLink.paused = NO;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: __this]);
        
    }
    
}

// public Uno.Rect get_Frame() :22
void iOSDisplay__get_Frame_fn(iOSDisplay* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Frame();
}

// public generated void add_FrameChanged(Uno.EventHandler value) :25
void iOSDisplay__add_FrameChanged_fn(iOSDisplay* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) :25
void iOSDisplay__remove_FrameChanged_fn(iOSDisplay* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// protected override sealed float GetDensity() :54
void iOSDisplay__GetDensity_fn(iOSDisplay* __this, float* __retval)
{
    return *__retval = (float)iOSDisplay::GetDensityOfScreenFromWindow(__this->_handle), void();
}

// private static double GetDensityOfScreen(ObjC.Object screen) :85
void iOSDisplay__GetDensityOfScreen_fn(::g::ObjC::Object* screen, double* __retval)
{
    *__retval = iOSDisplay::GetDensityOfScreen(screen);
}

// private static double GetDensityOfScreenFromWindow(ObjC.Object window) :77
void iOSDisplay__GetDensityOfScreenFromWindow_fn(::g::ObjC::Object* window, double* __retval)
{
    *__retval = iOSDisplay::GetDensityOfScreenFromWindow(window);
}

// private Uno.Rect GetFrame() :46
void iOSDisplay__GetFrame_fn(iOSDisplay* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetFrame();
}

// private iOSDisplay New(ObjC.Object handle) :34
void iOSDisplay__New1_fn(::g::ObjC::Object* handle, iOSDisplay** __retval)
{
    *__retval = iOSDisplay::New1(handle);
}

// private void OnFrameChanged() :27
void iOSDisplay__OnFrameChanged_fn(iOSDisplay* __this)
{
    __this->OnFrameChanged();
}

// protected override sealed void SetTicksPerSecond(uint fps) :96
void iOSDisplay__SetTicksPerSecond_fn(iOSDisplay* __this, uint32_t* fps)
{
    uint32_t fps_ = *fps;
    @autoreleasepool
    {
        [] (id<UnoObject> _this, uint32_t fps) -> void
        {
            CADisplayLink* displayLink = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<iOSDisplay*>((_this).unoObject, iOSDisplay_typeof())->_displayLink); }();
            
            CFTimeInterval duration = displayLink.duration;
            if (duration == 0)
            {
                // Assume 60 fps
                duration = 1./60.;
            }
            
            unsigned actualFps;
            NSInteger frameInterval;
            
            if (fps == 0)
            {
                // Platform default
                actualFps = 0;
                frameInterval = 1;
            }
            else if (duration * fps > 0.5)
            {
                actualFps = 1. / duration;
                frameInterval = 1;
            }
            else
            {
                frameInterval = 1. / (duration * fps);
                actualFps = 1. / (duration * frameInterval);
            }
            
            displayLink.frameInterval = frameInterval;
            uCast<::g::Uno::Platform::Display*>((_this).unoObject, ::g::Uno::Platform::Display_typeof())->_ticksPerSecond = actualFps;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: __this], fps_);
        
    }
    
}

// internal static Uno.Platform.Display WrapMainDisplay() :67
void iOSDisplay__WrapMainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = iOSDisplay::WrapMainDisplay();
}

// private iOSDisplay(ObjC.Object handle) [instance] :34
void iOSDisplay::ctor_1(::g::ObjC::Object* handle)
{
    ctor_();
    _handle = handle;
    [((UIWindow*)uPtr(_handle)->Handle) uSetDisplay:this];
}

// public Uno.Rect get_Frame() [instance] :22
::g::Uno::Rect iOSDisplay::Frame()
{
    return GetFrame();
}

// public generated void add_FrameChanged(Uno.EventHandler value) [instance] :25
void iOSDisplay::add_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) [instance] :25
void iOSDisplay::remove_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// private Uno.Rect GetFrame() [instance] :46
::g::Uno::Rect iOSDisplay::GetFrame()
{
    return ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(((UIWindow*)uPtr(_handle)->Handle).frame, NULL), Density());
}

// private void OnFrameChanged() [instance] :27
void iOSDisplay::OnFrameChanged()
{
    uDelegate* handler = FrameChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static void Destroy(ObjC.Object handle, ObjC.Object displayLink) [static] :61
void iOSDisplay::Destroy(::g::ObjC::Object* handle, ::g::ObjC::Object* displayLink)
{
    @autoreleasepool
    {
        [] (::id handle, ::id displayLink) -> void
        {
            [displayLink invalidate];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(displayLink));
        
    }
    
}

// private static double GetDensityOfScreen(ObjC.Object screen) [static] :85
double iOSDisplay::GetDensityOfScreen(::g::ObjC::Object* screen)
{
    @autoreleasepool
    {
        return [] (::id screen) -> double
        {
            UIScreen *uiScreen = (UIScreen*)screen;
            return (double)[uiScreen respondsToSelector:@selector(nativeScale)] ?
                [uiScreen nativeScale] :
                [uiScreen scale];
        } (::g::ObjC::Object::GetHandle(screen));
        
    }
    
}

// private static double GetDensityOfScreenFromWindow(ObjC.Object window) [static] :77
double iOSDisplay::GetDensityOfScreenFromWindow(::g::ObjC::Object* window)
{
    @autoreleasepool
    {
        return [] (::id window) -> double
        {
            UIWindow* _window = (UIWindow*)window;
            UIScreen* screen = _window.screen;
            return [&]() -> double { ::uForeignPool __foreignPool; return iOSDisplay::GetDensityOfScreen(::g::ObjC::Object::Create(screen)); }();
        } (::g::ObjC::Object::GetHandle(window));
        
    }
    
}

// private iOSDisplay New(ObjC.Object handle) [static] :34
iOSDisplay* iOSDisplay::New1(::g::ObjC::Object* handle)
{
    iOSDisplay* obj1 = (iOSDisplay*)uNew(iOSDisplay_typeof());
    obj1->ctor_1(handle);
    return obj1;
}

// internal static Uno.Platform.Display WrapMainDisplay() [static] :67
::g::Uno::Platform::Display* iOSDisplay::WrapMainDisplay()
{
    @autoreleasepool
    {
        return uCast<::g::Uno::Platform::Display*>(([] () -> id<UnoObject>
        {
            CGRect screenBounds = [UIScreen mainScreen].bounds;
            uWindow *window = [[uWindow alloc] initWithFrame:screenBounds];
            window.rootViewController = (UIViewController*)[UIApplication sharedApplication].delegate;
            [window makeKeyAndVisible];
            return [&]() -> id<UnoObject> { ::uForeignPool __foreignPool; return [::StrongUnoObject strongUnoObjectWithUnoObject: iOSDisplay::New1(::g::ObjC::Object::Create(window))]; }();
        } ()).unoObject, ::g::Uno::Platform::Display_typeof());
        
    }
    
}
// }

}}} // ::g::Uno::Platform
