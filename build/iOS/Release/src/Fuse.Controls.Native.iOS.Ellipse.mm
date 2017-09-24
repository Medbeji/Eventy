// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.Ellipse.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Ellipse :319
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface2));
    type->SetFields(10);
}

::g::Fuse::Controls::Native::iOS::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::Shape_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::Shape_type);
    type = (::g::Fuse::Controls::Native::iOS::Shape_type*)uClassType::New("Fuse.Controls.Native.iOS.Ellipse", options);
    type->fp_build_ = Ellipse_build;
    type->fp_CreatePath = (void(*)(::g::Fuse::Controls::Native::iOS::Shape*, ::g::ObjC::Object**))Ellipse__CreatePath_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::iOS::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::Shape__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::Shape__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::Shape__Dispose_fn;
    return type;
}

// protected override sealed ObjC.Object CreatePath() :326
void Ellipse__CreatePath_fn(Ellipse* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = Ellipse::CreateUIBezierPath(__this->ShapePosition().X, __this->ShapePosition().Y, __this->ShapeSize().X, __this->ShapeSize().Y), void();
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float width, float height) :332
void Ellipse__CreateUIBezierPath_fn(float* x, float* y, float* width, float* height, ::g::ObjC::Object** __retval)
{
    *__retval = Ellipse::CreateUIBezierPath(*x, *y, *width, *height);
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float width, float height) [static] :332
::g::ObjC::Object* Ellipse::CreateUIBezierPath(float x, float y, float width, float height)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float x, float y, float width, float height) -> ::id
        {
            return [UIBezierPath bezierPathWithOvalInRect:CGRectMake(x, y, width, height)];
        } (x, y, width, height));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
