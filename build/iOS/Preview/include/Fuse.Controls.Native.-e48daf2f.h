// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.-b1307a12.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Switch;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Switch :2320
// {
struct Switch_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IToggleView interface3;
};

Switch_type* Switch_typeof();
void Switch__ctor_5_fn(Switch* __this, uObject* host);
void Switch__Create_fn(::g::ObjC::Object** __retval);
void Switch__Dispose_fn(Switch* __this);
void Switch__GetValue_fn(::g::ObjC::Object* handle, bool* __retval);
void Switch__New3_fn(uObject* host, Switch** __retval);
void Switch__OnValueChanged_fn(Switch* __this, ::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
void Switch__SetValue_fn(::g::ObjC::Object* handle, bool* value);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _host;
    uStrong<uObject*> _valueChangedEvent;

    void ctor_5(uObject* host);
    void OnValueChanged(::g::ObjC::Object* sender, ::g::ObjC::Object* uiEvent);
    void Value(bool value);
    static ::g::ObjC::Object* Create();
    static bool GetValue(::g::ObjC::Object* handle);
    static Switch* New3(uObject* host);
    static void SetValue(::g::ObjC::Object* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
