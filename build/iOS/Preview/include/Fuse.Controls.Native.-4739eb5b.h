// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-11768b55.h>
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Ellipse;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Ellipse :123
// {
::g::Fuse::Controls::Native::iOS::Shape_type* Ellipse_typeof();
void Ellipse__ctor_5_fn(Ellipse* __this);
void Ellipse__CreatePath_fn(Ellipse* __this, ::g::ObjC::Object** __retval);
void Ellipse__CreateUIBezierPath_fn(float* x, float* y, float* width, float* height, ::g::ObjC::Object** __retval);
void Ellipse__New3_fn(Ellipse** __retval);

struct Ellipse : ::g::Fuse::Controls::Native::iOS::Shape
{
    void ctor_5();
    static ::g::ObjC::Object* CreateUIBezierPath(float x, float y, float width, float height);
    static Ellipse* New3();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
