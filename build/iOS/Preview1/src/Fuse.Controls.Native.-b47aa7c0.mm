// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-3d955b51.h>
#include <Fuse.Controls.Native.-4016d338.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.Native.-b47aa7c0.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2232
// {
static void Slider_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(Slider_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(7,
        ::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Slider, _captureAdapter), 0,
        ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _valueChangedEvent), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Slider, _visual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New3_fn, 0, true, type, 2, ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/], ::g::Fuse::Visual_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :2247
void Slider__ctor_5_fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual)
{
    __this->ctor_5(host, visual);
}

// private static ObjC.Object Create() :2266
void Slider__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :2255
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    uPtr(__this->_captureAdapter)->Dispose();
    __this->_valueChangedEvent = NULL;
    __this->_captureAdapter = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetValue(ObjC.Object handle) :2286
void Slider__GetValue_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = Slider::GetValue(handle);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) :2247
void Slider__New3_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval)
{
    *__retval = Slider::New3(host, visual);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) :2274
void Slider__OnValueChanged_fn(Slider* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// public void set_Progress(double value) :2237
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetValue(ObjC.Object handle, float value) :2293
void Slider__SetValue_fn(::g::ObjC::Object* handle, float* value)
{
    Slider::SetValue(handle, *value);
}

// private float get_Value() :2281
void Slider__get_Value_fn(Slider* __this, float* __retval)
{
    *__retval = __this->Value();
}

// private void set_Value(float value) :2282
void Slider__set_Value_fn(Slider* __this, float* value)
{
    __this->Value(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [instance] :2247
void Slider::ctor_5(uObject* host, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost,Fuse.Visual)");
    ctor_4(Slider::Create());
    _host = host;
    _visual = visual;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Slider__OnValueChanged_fn, this));
    _captureAdapter = ::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter::New1(_visual, Handle());
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance] :2274
void Slider::OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/]), (double)(Value() / 100.0f));
}

// public void set_Progress(double value) [instance] :2237
void Slider::Progress(double value)
{
    Value((float)value * 100.0f);
}

// private float get_Value() [instance] :2281
float Slider::Value()
{
    return Slider::GetValue(Handle());
}

// private void set_Value(float value) [instance] :2282
void Slider::Value(float value)
{
    Slider::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static] :2266
::g::ObjC::Object* Slider::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UISlider* slider = [[::UISlider alloc] init];
            [slider setMinimumValue:   0.0f];
            [slider setMaximumValue: 100.0f];
            return slider;
        } ());
        
    }
    
}

// private static float GetValue(ObjC.Object handle) [static] :2286
float Slider::GetValue(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            ::UISlider* slider = (::UISlider*)handle;
            return [slider value];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host, Fuse.Visual visual) [static] :2247
Slider* Slider::New3(uObject* host, ::g::Fuse::Visual* visual)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_5(host, visual);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, float value) [static] :2293
void Slider::SetValue(::g::ObjC::Object* handle, float value)
{
    @autoreleasepool
    {
        [] (::id handle, float value) -> void
        {
            ::UISlider* slider = (::UISlider*)handle;
            [slider setValue:value animated:false];
        } (::g::ObjC::Object::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
