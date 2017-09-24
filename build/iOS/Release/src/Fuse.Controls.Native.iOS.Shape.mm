// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4x4.h>
static uString* STRINGS[3];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal abstract extern class Shape :2117
// {
static void Shape_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("C:\\Users\\nour\\AppData\\Local\\Fusetools\\Packages\\Fuse.Controls.Native\\0.46.1\\ios\\$.uno");
    ::STRINGS[2] = uString::Const("SetBrush");
    ::TYPES[0] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[4] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(8/*ToArray<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*OrderBy<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Float_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::iOS::Shape, _fills), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::iOS::Shape, _strokes), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape, _visual), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape, _ShapePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape, _ShapeSize), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.iOS.Shape", options);
    type->fp_build_ = Shape_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))Shape__Dispose_fn;
    type->fp_set_Size = (void(*)(::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))Shape__set_Size_fn;
    type->fp_set_Transform = (void(*)(::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float4x4*))Shape__set_Transform_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))Shape__set_Transform_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))Shape__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Shape__Dispose_fn;
    return type;
}

// protected Shape(Fuse.Visual visual) :2122
void Shape__ctor_1_fn(Shape* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_1(visual);
}

// private static ObjC.Object Create() :2362
void Shape__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = Shape::Create();
}

// public override sealed void Dispose() :2128
void Shape__Dispose_fn(Shape* __this)
{
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :2158
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    __this->_fills = fills;
    __this->_strokes = strokes;
}

// private static void MakeLayers(ObjC.Object handle, int layerCount) :2346
void Shape__MakeLayers_fn(::g::ObjC::Object* handle, int* layerCount)
{
    Shape::MakeLayers(handle, *layerCount);
}

// protected void OnShapeChanged() :2164
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :2216
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = Shape::SelectOffset(a, b);
}

// private void SetBrush(Fuse.Drawing.Brush brush, int layer, ObjC.Object path, bool isLine, float strokeWidth) :2192
void Shape__SetBrush_fn(Shape* __this, ::g::Fuse::Drawing::Brush* brush, int* layer, ::g::ObjC::Object* path, bool* isLine, float* strokeWidth)
{
    __this->SetBrush(brush, *layer, path, *isLine, *strokeWidth);
}

// private static void SetBrush(ObjC.Object handle, float r, float g, float b, float a, int layerIndex, ObjC.Object pathHandle, bool isLine, float strokeWidth, float opacity) :2324
void Shape__SetBrush1_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, int* layerIndex, ::g::ObjC::Object* pathHandle, bool* isLine, float* strokeWidth, float* opacity)
{
    Shape::SetBrush1(handle, *r, *g, *b, *a, *layerIndex, pathHandle, *isLine, *strokeWidth, *opacity);
}

// private void SetLinearGradient(Fuse.Drawing.LinearGradient gradient, int layer, ObjC.Object path, bool isLine, float strokeWidth) :2221
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Fuse::Drawing::LinearGradient* gradient, int* layer, ::g::ObjC::Object* path, bool* isLine, float* strokeWidth)
{
    __this->SetLinearGradient(gradient, *layer, path, *isLine, *strokeWidth);
}

// private static void SetLinearGradient(ObjC.Object handle, int layerIndex, ObjC.Object pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, float[] colors, float[] offsets, float width, float height) :2253
void Shape__SetLinearGradient1_fn(::g::ObjC::Object* handle, int* layerIndex, ::g::ObjC::Object* pathHandle, bool* isLine, float* strokeWidth, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* offsets, float* width, float* height)
{
    Shape::SetLinearGradient1(handle, *layerIndex, pathHandle, *isLine, *strokeWidth, *startX, *startY, *endX, *endY, colors, offsets, *width, *height);
}

// protected generated float2 get_ShapePosition() :2134
void Shape__get_ShapePosition_fn(Shape* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ShapePosition();
}

// private generated void set_ShapePosition(float2 value) :2134
void Shape__set_ShapePosition_fn(Shape* __this, ::g::Uno::Float2* value)
{
    __this->ShapePosition(*value);
}

// protected generated float2 get_ShapeSize() :2145
void Shape__get_ShapeSize_fn(Shape* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ShapeSize();
}

// private generated void set_ShapeSize(float2 value) :2145
void Shape__set_ShapeSize_fn(Shape* __this, ::g::Uno::Float2* value)
{
    __this->ShapeSize(*value);
}

// public override sealed void set_Size(float2 value) :2148
void Shape__set_Size_fn(Shape* __this, ::g::Uno::Float2* value)
{
    ::g::Uno::Float2 value_ = *value;
    __this->ShapeSize(value_);
    ::g::Fuse::Controls::Native::iOS::View__set_Size_fn(__this, uCRef(value_));
    __this->OnShapeChanged();
}

// public override sealed void set_Transform(float4x4 value) :2137
void Shape__set_Transform_fn(Shape* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->ShapePosition(::g::Uno::Float2__New2(value_.M41, value_.M42));
    ::g::Fuse::Controls::Native::iOS::View__set_Transform_fn(__this, uCRef(value_));
    __this->OnShapeChanged();
}

// protected Shape(Fuse.Visual visual) [instance] :2122
void Shape::ctor_1(::g::Fuse::Visual* visual)
{
    ctor_(Shape::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
}

// protected void OnShapeChanged() [instance] :2164
void Shape::OnShapeChanged()
{
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    Shape::MakeLayers(Handle(), layerCount);
    ::g::ObjC::Object* path = CreatePath();
    int layer = 0;

    if (_fills != NULL)

        for (int i = 0; i < uPtr(_fills)->Length(); i++)
            SetBrush(uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i), layer++, path, false, 0.0f);

    if (_strokes != NULL)

        for (int i1 = 0; i1 < uPtr(_strokes)->Length(); i1++)
        {
            if (uPtr(uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i1))->Brush() != NULL)
                SetBrush(uPtr(uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i1))->Brush(), layer, path, true, uPtr(uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i1))->Width());

            layer++;
        }
}

// private void SetBrush(Fuse.Drawing.Brush brush, int layer, ObjC.Object path, bool isLine, float strokeWidth) [instance] :2192
void Shape::SetBrush(::g::Fuse::Drawing::Brush* brush, int layer, ::g::ObjC::Object* path, bool isLine, float strokeWidth)
{
    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.LinearGradient*/]))
        SetLinearGradient(uCast< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[0/*Fuse.Drawing.LinearGradient*/]), layer, path, isLine, strokeWidth);
    else
    {
        ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[1/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*""*/], brush, ::STRINGS[1/*"C:\\Users\\...*/], 2209, ::STRINGS[2/*"SetBrush"*/]);

        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[3/*Fuse.Drawing.DynamicBrush*/]);
        Shape::SetBrush1(Handle(), c.X, c.Y, c.Z, c.W, layer, path, isLine, strokeWidth, (db != NULL) ? uPtr(db)->Opacity() : 1.0f);
    }
}

// private void SetLinearGradient(Fuse.Drawing.LinearGradient gradient, int layer, ObjC.Object path, bool isLine, float strokeWidth) [instance] :2221
void Shape::SetLinearGradient(::g::Fuse::Drawing::LinearGradient* gradient, int layer, ::g::ObjC::Object* path, bool isLine, float strokeWidth)
{
    uArray* stops = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[4/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[5/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], uPtr(gradient)->Stops(), uDelegate::New(::TYPES[6/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)Shape__SelectOffset_fn)));
    uArray* colors = uArray::New(::TYPES[7/*float[]*/], uPtr(stops)->Length() * 4);
    uArray* offsets = uArray::New(::TYPES[7/*float[]*/], stops->Length());

    for (int i = 0; i < stops->Length(); i++)
    {
        uPtr(colors)->Item<float>(i * 4) = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color().X;
        colors->Item<float>((i * 4) + 1) = uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color().Y;
        colors->Item<float>((i * 4) + 2) = uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color().Z;
        colors->Item<float>((i * 4) + 3) = uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color().W;
        uPtr(offsets)->Item<float>(i) = uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    Shape::SetLinearGradient1(Handle(), layer, path, isLine, strokeWidth, gradient->StartPoint().X, gradient->StartPoint().Y, gradient->EndPoint().X, gradient->EndPoint().Y, colors, offsets, ShapeSize().X, ShapeSize().Y);
}

// protected generated float2 get_ShapePosition() [instance] :2134
::g::Uno::Float2 Shape::ShapePosition()
{
    return _ShapePosition;
}

// private generated void set_ShapePosition(float2 value) [instance] :2134
void Shape::ShapePosition(::g::Uno::Float2 value)
{
    _ShapePosition = value;
}

// protected generated float2 get_ShapeSize() [instance] :2145
::g::Uno::Float2 Shape::ShapeSize()
{
    return _ShapeSize;
}

// private generated void set_ShapeSize(float2 value) [instance] :2145
void Shape::ShapeSize(::g::Uno::Float2 value)
{
    _ShapeSize = value;
}

// private static ObjC.Object Create() [static] :2362
::g::ObjC::Object* Shape::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            [uicontrol setMultipleTouchEnabled:true];
            [uicontrol setOpaque:false];
            return uicontrol;
        } ());
        
    }
    
}

// private static void MakeLayers(ObjC.Object handle, int layerCount) [static] :2346
void Shape::MakeLayers(::g::ObjC::Object* handle, int layerCount)
{
    @autoreleasepool
    {
        [] (::id handle, int layerCount) -> void
        {
            UIControl* uicontrol = (UIControl*)handle;
            CALayer* layer = [uicontrol layer];
            for (unsigned long i = [[layer sublayers] count]; i--> 0;)
            {
            	[[layer sublayers][i] removeFromSuperlayer];
            }
            
            for (int i = 0; i < layerCount; i++)
            {
            	[layer addSublayer: [[CAShapeLayer alloc] init]];
            }
        } (::g::ObjC::Object::GetHandle(handle), layerCount);
        
    }
    
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :2216
int Shape::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}

// private static void SetBrush(ObjC.Object handle, float r, float g, float b, float a, int layerIndex, ObjC.Object pathHandle, bool isLine, float strokeWidth, float opacity) [static] :2324
void Shape::SetBrush1(::g::ObjC::Object* handle, float r, float g, float b, float a, int layerIndex, ::g::ObjC::Object* pathHandle, bool isLine, float strokeWidth, float opacity)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a, int layerIndex, ::id pathHandle, bool isLine, float strokeWidth, float opacity) -> void
        {
            UIControl* uicontrol = (UIControl*)handle; 
            UIBezierPath* path = (UIBezierPath*)pathHandle;
            CAShapeLayer* layer = (CAShapeLayer*)([[handle layer] sublayers][layerIndex]);
            
            if (isLine)
            {
            	[layer setFillColor:nil];
            	[layer setStrokeColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a].CGColor];
            	[layer setLineWidth: strokeWidth];
            }
            else
            {
            	[layer setFillColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a].CGColor];
            	[layer setStrokeColor:nil];
            }
            [layer setOpacity: opacity];
            [layer setPath: path.CGPath];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a, layerIndex, ::g::ObjC::Object::GetHandle(pathHandle), isLine, strokeWidth, opacity);
        
    }
    
}

// private static void SetLinearGradient(ObjC.Object handle, int layerIndex, ObjC.Object pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, float[] colors, float[] offsets, float width, float height) [static] :2253
void Shape::SetLinearGradient1(::g::ObjC::Object* handle, int layerIndex, ::g::ObjC::Object* pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, uArray* colors, uArray* offsets, float width, float height)
{
    @autoreleasepool
    {
        [] (::id handle, int layerIndex, ::id pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, id<UnoArray> colors, id<UnoArray> offsets, float width, float height) -> void
        {
            UIControl* uicontrol = (UIControl*)handle; 
            UIBezierPath* path = (UIBezierPath*)pathHandle;
            CAShapeLayer* layer = (CAShapeLayer*)([[handle layer] sublayers][layerIndex]);
            
            
            CAGradientLayer* gradientLayer = [[CAGradientLayer alloc] init];
            
            CAShapeLayer* mask = [CAShapeLayer layer];
            [mask setFillColor: [UIColor whiteColor].CGColor];
            [mask setFrame:CGRectMake(0.0f, 0.0f, width, height)];
            
            if (isLine)
            {
            	[mask setFillColor:[UIColor clearColor].CGColor];
            	[mask setStrokeColor:[UIColor whiteColor].CGColor];
            	[mask setLineWidth:strokeWidth];
            }
            else
            {
            	[mask setFillColor:[UIColor whiteColor].CGColor];
            	[mask setStrokeColor:nil];
            }
            
            [mask setPath: path.CGPath];
            [gradientLayer setMask: mask];
            
            [layer addSublayer:gradientLayer];
            
            auto gradientStops = [&]() -> int { ::uForeignPool __foreignPool; return uCast<uArray*>((offsets).unoArray, ::g::Uno::Float_typeof()->Array())->Length(); }();
            
            NSMutableArray* locations = [[NSMutableArray alloc] initWithCapacity:gradientStops];	
            
            for (int i = 0; i < gradientStops; i++)
            {
            	[locations insertObject:[[NSNumber alloc]initWithFloat: [&]() -> float { ::uForeignPool __foreignPool; return uCast<uArray*>((offsets).unoArray, ::g::Uno::Float_typeof()->Array())->Item<float>(i); }()] atIndex:i];
            }
            [gradientLayer setLocations: locations];
            NSMutableArray* cgColors = [[NSMutableArray alloc] initWithCapacity:gradientStops];
            for (int i = 0; i < gradientStops; i++)
            {
            	float r = [&]() -> float { ::uForeignPool __foreignPool; return uCast<uArray*>((colors).unoArray, ::g::Uno::Float_typeof()->Array())->Item<float>((i * 4) + 0); }();
            	float g = [&]() -> float { ::uForeignPool __foreignPool; return uCast<uArray*>((colors).unoArray, ::g::Uno::Float_typeof()->Array())->Item<float>((i * 4) + 1); }();
            	float b = [&]() -> float { ::uForeignPool __foreignPool; return uCast<uArray*>((colors).unoArray, ::g::Uno::Float_typeof()->Array())->Item<float>((i * 4) + 2); }();
            	float a = [&]() -> float { ::uForeignPool __foreignPool; return uCast<uArray*>((colors).unoArray, ::g::Uno::Float_typeof()->Array())->Item<float>((i * 4) + 3); }();
            	[cgColors insertObject: (id)[[UIColor colorWithRed:r green:g blue:b alpha:a] CGColor] atIndex:i];
            }
            [gradientLayer setColors:cgColors];
            [gradientLayer setStartPoint:CGPointMake(startX, startY)];
            [gradientLayer setEndPoint:CGPointMake(endX, endY)];
            [gradientLayer setFrame:CGRectMake(0.0f, 0.0f, width, height)];
            [gradientLayer setType:kCAGradientLayerAxial];
        } (::g::ObjC::Object::GetHandle(handle), layerIndex, ::g::ObjC::Object::GetHandle(pathHandle), isLine, strokeWidth, startX, startY, endX, endY, [::StrongUnoArray strongUnoArrayWithUnoArray: colors getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<float>(arr->Item<float>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<float>(i) = ::uObjC::Unbox<float>(obj); }], [::StrongUnoArray strongUnoArrayWithUnoArray: offsets getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<float>(arr->Item<float>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<float>(i) = ::uObjC::Unbox<float>(obj); }], width, height);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
