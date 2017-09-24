// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.-fbe3e9f9.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct PointerCaptureAdapter;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Slider;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2232
// {
struct Slider_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IRangeView interface3;
};

Slider_type* Slider_typeof();
void Slider__ctor_5_fn(Slider* __this, uObject* host, ::g::Fuse::Visual* visual);
void Slider__Create_fn(::g::ObjC::Object** __retval);
void Slider__Dispose_fn(Slider* __this);
void Slider__GetValue_fn(::g::ObjC::Object* handle, float* __retval);
void Slider__New3_fn(uObject* host, ::g::Fuse::Visual* visual, Slider** __retval);
void Slider__OnValueChanged_fn(Slider* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
void Slider__set_Progress_fn(Slider* __this, double* value);
void Slider__SetValue_fn(::g::ObjC::Object* handle, float* value);
void Slider__get_Value_fn(Slider* __this, float* __retval);
void Slider__set_Value_fn(Slider* __this, float* value);

struct Slider : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::Native::iOS::PointerCaptureAdapter*> _captureAdapter;
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_5(uObject* host, ::g::Fuse::Visual* visual);
    void OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
    void Progress(double value);
    float Value();
    void Value(float value);
    static ::g::ObjC::Object* Create();
    static float GetValue(::g::ObjC::Object* handle);
    static Slider* New3(uObject* host, ::g::Fuse::Visual* visual);
    static void SetValue(::g::ObjC::Object* handle, float value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
