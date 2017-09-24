// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UITouch.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UITouch :1140
// {
static void UITouch_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UITouch, _handle), 0);
}

uType* UITouch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UITouch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UITouch", options);
    type->fp_build_ = UITouch_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))UITouch__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))UITouch__GetHashCode_fn;
    return type;
}

// public UITouch(ObjC.Object handle) :1153
void UITouch__ctor__fn(UITouch* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_(handle);
}

// private static bool Compare(ObjC.Object handle1, ObjC.Object handle2) :1236
void UITouch__Compare_fn(::g::ObjC::Object* handle1, ::g::ObjC::Object* handle2, bool* __retval)
{
    *__retval = UITouch::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :1178
void UITouch__Equals_fn(UITouch* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, __this->__type) ? UITouch::Compare(__this->_handle, uPtr(uCast<UITouch*>(obj, __this->__type))->_handle) : false, void();
}

// public override sealed int GetHashCode() :1185
void UITouch__GetHashCode_fn(UITouch* __this, int* __retval)
{
    return *__retval = uPtr(__this->_handle)->GetHashCode(), void();
}

// private static double GetTimestamp(ObjC.Object handle) :1228
void UITouch__GetTimestamp_fn(::g::ObjC::Object* handle, double* __retval)
{
    *__retval = UITouch::GetTimestamp(handle);
}

// private static Fuse.Controls.Native.iOS.UITouch.TouchPhase GetTouchPhase(ObjC.Object handle) :1192
void UITouch__GetTouchPhase_fn(::g::ObjC::Object* handle, int* __retval)
{
    *__retval = UITouch::GetTouchPhase(handle);
}

// public float2 LocationInView(ObjC.Object view) :1158
void UITouch__LocationInView_fn(UITouch* __this, ::g::ObjC::Object* view, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocationInView(view);
}

// private static void LocationInView(ObjC.Object handle, ObjC.Object viewHandle, Uno.IntPtr x, Uno.IntPtr y) :1217
void UITouch__LocationInView1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, void** x, void** y)
{
    UITouch::LocationInView1(handle, viewHandle, *x, *y);
}

// public UITouch New(ObjC.Object handle) :1153
void UITouch__New1_fn(::g::ObjC::Object* handle, UITouch** __retval)
{
    *__retval = UITouch::New1(handle);
}

// public Fuse.Controls.Native.iOS.UITouch.TouchPhase get_Phase() :1175
void UITouch__get_Phase_fn(UITouch* __this, int* __retval)
{
    *__retval = __this->Phase();
}

// public double get_Timestamp() :1170
void UITouch__get_Timestamp_fn(UITouch* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public UITouch(ObjC.Object handle) [instance] :1153
void UITouch::ctor_(::g::ObjC::Object* handle)
{
    _handle = handle;
}

// public float2 LocationInView(ObjC.Object view) [instance] :1158
::g::Uno::Float2 UITouch::LocationInView(::g::ObjC::Object* view)
{
    float x = 0.0f;
    float y = 0.0f;
    UITouch::LocationInView1(_handle, view, &x, &y);
    return ::g::Uno::Float2__New2(x, y);
}

// public Fuse.Controls.Native.iOS.UITouch.TouchPhase get_Phase() [instance] :1175
int UITouch::Phase()
{
    return UITouch::GetTouchPhase(_handle);
}

// public double get_Timestamp() [instance] :1170
double UITouch::Timestamp()
{
    return UITouch::GetTimestamp(_handle);
}

// private static bool Compare(ObjC.Object handle1, ObjC.Object handle2) [static] :1236
bool UITouch::Compare(::g::ObjC::Object* handle1, ::g::ObjC::Object* handle2)
{
    @autoreleasepool
    {
        return [] (::id handle1, ::id handle2) -> bool
        {
            ::UITouch* touch1 = (::UITouch*)handle1;
            ::UITouch* touch2 = (::UITouch*)handle2;
            return touch1 == touch2;
        } (::g::ObjC::Object::GetHandle(handle1), ::g::ObjC::Object::GetHandle(handle2));
        
    }
    
}

// private static double GetTimestamp(ObjC.Object handle) [static] :1228
double UITouch::GetTimestamp(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            ::UITouch* touch = (::UITouch*)handle;
            return [touch timestamp];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static Fuse.Controls.Native.iOS.UITouch.TouchPhase GetTouchPhase(ObjC.Object handle) [static] :1192
int UITouch::GetTouchPhase(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> int
        {
            ::UITouch* touch = (::UITouch*)handle;
            UITouchPhase phase = [touch phase];
            
            switch (phase)
            {
            	case UITouchPhaseBegan:
            		return 0;
            	case UITouchPhaseMoved:
            		return 1;
            	case UITouchPhaseStationary:
            		return 2;
            	case UITouchPhaseEnded:
            		return 3;
            	case UITouchPhaseCancelled:
            		return 4;
            	default:
            		[NSException raise:@"Unknown touchphase" format:@"Touch phase of %ld is invalid", (long)phase];
            		break;
            }
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void LocationInView(ObjC.Object handle, ObjC.Object viewHandle, Uno.IntPtr x, Uno.IntPtr y) [static] :1217
void UITouch::LocationInView1(::g::ObjC::Object* handle, ::g::ObjC::Object* viewHandle, void* x, void* y)
{
    @autoreleasepool
    {
        [] (::id handle, ::id viewHandle, void* x, void* y) -> void
        {
            ::UITouch* touch = (::UITouch*)handle;
            ::UIView* view = (::UIView*)viewHandle;
            CGPoint loc = [touch locationInView:view];
            *((float*)x) = (float)loc.x;
            *((float*)y) = (float)loc.y;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(viewHandle), x, y);
        
    }
    
}

// public UITouch New(ObjC.Object handle) [static] :1153
UITouch* UITouch::New1(::g::ObjC::Object* handle)
{
    UITouch* obj1 = (UITouch*)uNew(UITouch_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
