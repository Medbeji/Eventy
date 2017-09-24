// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct PointerCaptureAdapter;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UITouch;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class PointerCaptureAdapter :1684
// {
struct PointerCaptureAdapter_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PointerCaptureAdapter_type* PointerCaptureAdapter_typeof();
void PointerCaptureAdapter__ctor__fn(PointerCaptureAdapter* __this, ::g::Fuse::Visual* visual, ::g::ObjC::Object* control);
void PointerCaptureAdapter__Dispose_fn(PointerCaptureAdapter* __this);
void PointerCaptureAdapter__LostCallback_fn(PointerCaptureAdapter* __this);
void PointerCaptureAdapter__New1_fn(::g::Fuse::Visual* visual, ::g::ObjC::Object* control, PointerCaptureAdapter** __retval);
void PointerCaptureAdapter__OnTouchEvent_fn(PointerCaptureAdapter* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);

struct PointerCaptureAdapter : uObject
{
    uStrong< ::g::Uno::Collections::List*> _activeTouches;
    uStrong< ::g::ObjC::Object*> _control;
    uStrong<uObject*> _touchEvents;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_(::g::Fuse::Visual* visual, ::g::ObjC::Object* control);
    void Dispose();
    void LostCallback();
    void OnTouchEvent(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
    static PointerCaptureAdapter* New1(::g::Fuse::Visual* visual, ::g::ObjC::Object* control);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
