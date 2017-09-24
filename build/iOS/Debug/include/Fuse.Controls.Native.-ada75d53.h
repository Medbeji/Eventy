// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98c3244c.h>
#include <Fuse.Controls.Native.-be81896e.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Button;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button :14
// {
struct Button_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::ILabelView interface2;
};

Button_type* Button_typeof();
void Button__ctor_5_fn(Button* __this);
void Button__Create_fn(::g::ObjC::Object** __retval);
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value);
void Button__New3_fn(Button** __retval);
void Button__SetText_fn(::g::ObjC::Object* handle, uString* text);

struct Button : ::g::Fuse::Controls::Native::iOS::LeafView
{
    void ctor_5();
    static ::g::ObjC::Object* Create();
    static Button* New3();
    static void SetText(::g::ObjC::Object* handle, uString* text);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
