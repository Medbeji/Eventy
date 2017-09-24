// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.-77f1a6e0.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
static uString* STRINGS[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public extern class ViewHandle :1212
// {
static void ViewHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Fuse.Controls.Native.ViewHandle(");
    ::STRINGS[1] = uString::Const(")");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ViewHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, _size), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, IsLeafView), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, NativeHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, _HitTestEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ViewHandle, _IsEnabled), 0);
    type->Reflection.SetFields(1,
        new uField("NativeHandle", 3));
    type->Reflection.SetFunctions(22,
        new uFunction("BringToFront", NULL, (void*)ViewHandle__BringToFront_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(ViewHandle_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Format", NULL, (void*)ViewHandle__Format_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_HitTestHandle", NULL, (void*)ViewHandle__get_HitTestHandle_fn, 0, false, ::g::ObjC::Object_typeof(), 0),
        new uFunction("InsertChild", NULL, (void*)ViewHandle__InsertChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("InsertChild", NULL, (void*)ViewHandle__InsertChild1_fn, 0, false, uVoid_typeof(), 2, type, ::g::Uno::Int_typeof()),
        new uFunction("IsUIControl", NULL, (void*)ViewHandle__IsUIControl_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Measure", NULL, (void*)ViewHandle__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewHandle__New1_fn, 0, true, type, 1, ::g::ObjC::Object_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewHandle__New2_fn, 0, true, type, 2, ::g::ObjC::Object_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RemoveChild", NULL, (void*)ViewHandle__RemoveChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("SendToBack", NULL, (void*)ViewHandle__SendToBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SetAccessibilityIdentifier", NULL, (void*)ViewHandle__SetAccessibilityIdentifier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetBackgroundColor", NULL, (void*)ViewHandle__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetClipToBounds", NULL, (void*)ViewHandle__SetClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetEnabled", NULL, (void*)ViewHandle__SetEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetHitTestEnabled", NULL, (void*)ViewHandle__SetHitTestEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetIsVisible", NULL, (void*)ViewHandle__SetIsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetOpacity", NULL, (void*)ViewHandle__SetOpacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetSize", NULL, (void*)ViewHandle__SetSize1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("SetTransform", NULL, (void*)ViewHandle__SetTransform1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("UpdateViewRect", NULL, (void*)ViewHandle__UpdateViewRect_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

ViewHandle_type* ViewHandle_typeof()
{
    static uSStrong<ViewHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ViewHandle);
    options.TypeSize = sizeof(ViewHandle_type);
    type = (ViewHandle_type*)uClassType::New("Fuse.Controls.Native.ViewHandle", options);
    type->fp_build_ = ViewHandle_build;
    type->fp_Dispose = ViewHandle__Dispose_fn;
    type->fp_OnPositionChanged = ViewHandle__OnPositionChanged_fn;
    type->fp_OnSizeChanged = ViewHandle__OnSizeChanged_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ViewHandle__ToString_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ViewHandle__Dispose_fn;
    return type;
}

// public ViewHandle(ObjC.Object nativeHandle) :1218
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle)
{
    __this->ctor_(nativeHandle);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView) :1220
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, bool* isLeafView)
{
    __this->ctor_1(nativeHandle, *isLeafView);
}

// public void BringToFront() :1372
void ViewHandle__BringToFront_fn(ViewHandle* __this)
{
    __this->BringToFront();
}

// public virtual void Dispose() :1234
void ViewHandle__Dispose_fn(ViewHandle* __this)
{
}

// public string Format() :1335
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// private ObjC.Object GetHitTesthandle() :1263
void ViewHandle__GetHitTesthandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetHitTesthandle();
}

// internal generated bool get_HitTestEnabled() :1275
void ViewHandle__get_HitTestEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->HitTestEnabled();
}

// internal generated void set_HitTestEnabled(bool value) :1275
void ViewHandle__set_HitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->HitTestEnabled(*value);
}

// public ObjC.Object get_HitTestHandle() :1259
void ViewHandle__get_HitTestHandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->HitTestHandle();
}

// private void InitAnchorPoint() :1288
void ViewHandle__InitAnchorPoint_fn(ViewHandle* __this)
{
    __this->InitAnchorPoint();
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle) :1349
void ViewHandle__InsertChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->InsertChild(childHandle);
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) :1357
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int* index)
{
    __this->InsertChild1(childHandle, *index);
}

// internal generated bool get_IsEnabled() :1274
void ViewHandle__get_IsEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// internal generated void set_IsEnabled(bool value) :1274
void ViewHandle__set_IsEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public bool IsUIControl() :1342
void ViewHandle__IsUIControl_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsUIControl();
}

// public float2 Measure(Fuse.LayoutParams lp, float density) :1457
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(*lp, *density);
}

// public ViewHandle New(ObjC.Object nativeHandle) :1218
void ViewHandle__New1_fn(::g::ObjC::Object* nativeHandle, ViewHandle** __retval)
{
    *__retval = ViewHandle::New1(nativeHandle);
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView) :1220
void ViewHandle__New2_fn(::g::ObjC::Object* nativeHandle, bool* isLeafView, ViewHandle** __retval)
{
    *__retval = ViewHandle::New2(nativeHandle, *isLeafView);
}

// protected internal virtual void OnPositionChanged() :1277
void ViewHandle__OnPositionChanged_fn(ViewHandle* __this)
{
}

// protected internal virtual void OnSizeChanged() :1278
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this)
{
}

// protected internal float2 get_Position() :1240
void ViewHandle__get_Position_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// private void set_Position(float2 value) :1241
void ViewHandle__set_Position_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) :1365
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->RemoveChild(childHandle);
}

// public void SendToBack() :1381
void ViewHandle__SendToBack_fn(ViewHandle* __this)
{
    __this->SendToBack();
}

// public void SetAccessibilityIdentifier(string name) :1281
void ViewHandle__SetAccessibilityIdentifier_fn(ViewHandle* __this, uString* name)
{
    __this->SetAccessibilityIdentifier(name);
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) :1395
void ViewHandle__SetBackground_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    ViewHandle::SetBackground(handle, *r, *g, *b, *a);
}

// public void SetBackgroundColor(float4 c) :1389
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, ::g::Uno::Float4* c)
{
    __this->SetBackgroundColor(*c);
}

// public void SetClipToBounds(bool clipToBounds) :1295
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds)
{
    __this->SetClipToBounds(*clipToBounds);
}

// public void SetEnabled(bool value) :1314
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabled(*value);
}

// private void SetEnabledImpl(bool value) :1321
void ViewHandle__SetEnabledImpl_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabledImpl(*value);
}

// public void SetHitTestEnabled(bool value) :1308
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetHitTestEnabled(*value);
}

// public void SetIsVisible(bool isVisible) :1328
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible)
{
    __this->SetIsVisible(*isVisible);
}

// public void SetOpacity(float value) :1302
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value)
{
    __this->SetOpacity(*value);
}

// private void SetSize(float w, float h) :1414
void ViewHandle__SetSize_fn(ViewHandle* __this, float* w, float* h)
{
    __this->SetSize(*w, *h);
}

// public void SetSize(float2 size) :1407
void ViewHandle__SetSize1_fn(ViewHandle* __this, ::g::Uno::Float2* size)
{
    __this->SetSize1(*size);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :1441
void ViewHandle__SetTransform_fn(ViewHandle* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->SetTransform(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public void SetTransform(float4x4 t) :1430
void ViewHandle__SetTransform1_fn(ViewHandle* __this, ::g::Uno::Float4x4* t)
{
    __this->SetTransform1(*t);
}

// protected internal float2 get_Size() :1249
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void set_Size(float2 value) :1250
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// private void SizeThatFits(float w, float h, float& resW, float& resH) :1476
void ViewHandle__SizeThatFits_fn(ViewHandle* __this, float* w, float* h, float* resW, float* resH)
{
    __this->SizeThatFits(*w, *h, resW, resH);
}

// public override sealed string ToString() :1229
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Fuse.Contro...*/], __this->Format()), ::STRINGS[1/*")"*/]), void();
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density) :1401
void ViewHandle__UpdateViewRect_fn(ViewHandle* __this, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* size, float* density)
{
    __this->UpdateViewRect(*transform, *size, *density);
}

// public ViewHandle(ObjC.Object nativeHandle) [instance] :1218
void ViewHandle::ctor_(::g::ObjC::Object* nativeHandle)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    ctor_1(nativeHandle, false);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView) [instance] :1220
void ViewHandle::ctor_1(::g::ObjC::Object* nativeHandle, bool isLeafView)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    NativeHandle = nativeHandle;
    IsLeafView = isLeafView;
    InitAnchorPoint();
    IsEnabled(true);
    HitTestEnabled(true);
}

// public void BringToFront() [instance] :1372
void ViewHandle::BringToFront()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto parent = [view superview];
            if (parent != NULL)
            	[parent bringSubviewToFront:view];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public string Format() [instance] :1335
uString* ViewHandle::Format()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoObject> _this) -> ::NSString*
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            return [view description];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// private ObjC.Object GetHitTesthandle() [instance] :1263
::g::ObjC::Object* ViewHandle::GetHitTesthandle()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (id<UnoObject> _this) -> ::id
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            if ([view isKindOfClass:[ShapeView class]])
            {
            	auto sv = (ShapeView*)view;
            	return [sv childrenView];
            }
            else return view;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// internal generated bool get_HitTestEnabled() [instance] :1275
bool ViewHandle::HitTestEnabled()
{
    return _HitTestEnabled;
}

// internal generated void set_HitTestEnabled(bool value) [instance] :1275
void ViewHandle::HitTestEnabled(bool value)
{
    _HitTestEnabled = value;
}

// public ObjC.Object get_HitTestHandle() [instance] :1259
::g::ObjC::Object* ViewHandle::HitTestHandle()
{
    return GetHitTesthandle();
}

// private void InitAnchorPoint() [instance] :1288
void ViewHandle::InitAnchorPoint()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle) [instance] :1349
void ViewHandle::InsertChild(ViewHandle* childHandle)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoObject> childHandle) -> void
        {
            UIView* parent = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [parent addSubview:child];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoObject strongUnoObjectWithUnoObject: childHandle]);
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) [instance] :1357
void ViewHandle::InsertChild1(ViewHandle* childHandle, int index)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoObject> childHandle, int index) -> void
        {
            UIView* parent = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [parent insertSubview:child atIndex:index];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoObject strongUnoObjectWithUnoObject: childHandle], index);
        
    }
    
}

// internal generated bool get_IsEnabled() [instance] :1274
bool ViewHandle::IsEnabled()
{
    return _IsEnabled;
}

// internal generated void set_IsEnabled(bool value) [instance] :1274
void ViewHandle::IsEnabled(bool value)
{
    _IsEnabled = value;
}

// public bool IsUIControl() [instance] :1342
bool ViewHandle::IsUIControl()
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this) -> bool
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            return [view isKindOfClass:[UIControl class]];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public float2 Measure(Fuse.LayoutParams lp, float density) [instance] :1457
::g::Uno::Float2 ViewHandle::Measure(::g::Fuse::LayoutParams lp, float density)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "Measure(Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::Uno::Float2 maxSize = ::g::Fuse::Controls::Native::iOS::iOSDevice::CompensateForOrientation(fillSize);
    float resW;
    float resH;
    SizeThatFits(maxSize.X, maxSize.Y, &resW, &resH);
    ::g::Uno::Float2 result = ::g::Uno::Float2__New2(resW, resH);
    return ::g::Fuse::Controls::Native::iOS::iOSDevice::CompensateForOrientation(result);
}

// protected internal float2 get_Position() [instance] :1240
::g::Uno::Float2 ViewHandle::Position()
{
    return _position;
}

// private void set_Position(float2 value) [instance] :1241
void ViewHandle::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "set_Position(float2)");
    _position = value;
    OnPositionChanged();
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) [instance] :1365
void ViewHandle::RemoveChild(ViewHandle* childHandle)
{
    @autoreleasepool
    {
        [] (id<UnoObject> childHandle) -> void
        {
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [child removeFromSuperview];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: childHandle]);
        
    }
    
}

// public void SendToBack() [instance] :1381
void ViewHandle::SendToBack()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto parent = [view superview];
            if (parent != NULL)
            	[parent sendSubviewToBack:view];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void SetAccessibilityIdentifier(string name) [instance] :1281
void ViewHandle::SetAccessibilityIdentifier(uString* name)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* name) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAccessibilityIdentifier:name];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(name));
        
    }
    
}

// public void SetBackgroundColor(float4 c) [instance] :1389
void ViewHandle::SetBackgroundColor(::g::Uno::Float4 c)
{
    ViewHandle::SetBackground(NativeHandle, c.X, c.Y, c.Z, c.W);
}

// public void SetClipToBounds(bool clipToBounds) [instance] :1295
void ViewHandle::SetClipToBounds(bool clipToBounds)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool clipToBounds) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setClipsToBounds:clipToBounds];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], clipToBounds);
        
    }
    
}

// public void SetEnabled(bool value) [instance] :1314
void ViewHandle::SetEnabled(bool value)
{
    IsEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// private void SetEnabledImpl(bool value) [instance] :1321
void ViewHandle::SetEnabledImpl(bool value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setUserInteractionEnabled:value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// public void SetHitTestEnabled(bool value) [instance] :1308
void ViewHandle::SetHitTestEnabled(bool value)
{
    HitTestEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// public void SetIsVisible(bool isVisible) [instance] :1328
void ViewHandle::SetIsVisible(bool isVisible)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool isVisible) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setHidden: !isVisible];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], isVisible);
        
    }
    
}

// public void SetOpacity(float value) [instance] :1302
void ViewHandle::SetOpacity(float value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAlpha: (CGFloat)value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// private void SetSize(float w, float h) [instance] :1414
void ViewHandle::SetSize(float w, float h)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto t = [[view layer] transform];
            [[view layer] setTransform:CATransform3DIdentity];
            [view setFrame: { { 0.0f, 0.0f }, { w, h } } ];
            
            if ([[view superview] isKindOfClass:[UIScrollView class]])
            {
            	auto sv = (UIScrollView*)[view superview];
            	[sv setContentSize: CGSizeMake(w, h)];
            }
            
            [[view layer] setTransform:t];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h);
        
    }
    
}

// public void SetSize(float2 size) [instance] :1407
void ViewHandle::SetSize1(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "SetSize(float2)");
    SetSize(size.X, size.Y);
    Size(size);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :1441
void ViewHandle::SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setTransform:transform];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// public void SetTransform(float4x4 t) [instance] :1430
void ViewHandle::SetTransform1(::g::Uno::Float4x4 t)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "SetTransform(float4x4)");
    SetTransform(t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
    Position(::g::Uno::Float2__New2(t.M41, t.M42));
}

// protected internal float2 get_Size() [instance] :1249
::g::Uno::Float2 ViewHandle::Size()
{
    return _size;
}

// private void set_Size(float2 value) [instance] :1250
void ViewHandle::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "set_Size(float2)");
    _size = value;
    OnSizeChanged();
}

// private void SizeThatFits(float w, float h, float& resW, float& resH) [instance] :1476
void ViewHandle::SizeThatFits(float w, float h, float* resW, float* resH)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h, float* resW, float* resH) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            CGSize size = { w, h };
            CGSize result = [view sizeThatFits:size];
            *resW = (float)result.width;
            *resH = (float)result.height;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h, resW, resH);
        
    }
    
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density) [instance] :1401
void ViewHandle::UpdateViewRect(::g::Uno::Float4x4 transform, ::g::Uno::Float2 size, float density)
{
    uStackFrame __("Fuse.Controls.Native.ViewHandle", "UpdateViewRect(float4x4,float2,float)");
    SetTransform1(transform);
    SetSize1(size);
}

// public ViewHandle New(ObjC.Object nativeHandle) [static] :1218
ViewHandle* ViewHandle::New1(::g::ObjC::Object* nativeHandle)
{
    ViewHandle* obj1 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj1->ctor_(nativeHandle);
    return obj1;
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView) [static] :1220
ViewHandle* ViewHandle::New2(::g::ObjC::Object* nativeHandle, bool isLeafView)
{
    ViewHandle* obj2 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj2->ctor_1(nativeHandle, isLeafView);
    return obj2;
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) [static] :1395
void ViewHandle::SetBackground(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            UIView* view = (UIView*)handle;
            [view setBackgroundColor:[UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}
// }

}}}} // ::g::Fuse::Controls::Native
