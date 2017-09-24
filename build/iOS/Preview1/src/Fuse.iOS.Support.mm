// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Foundation/Foundation.h>
#include <Fuse.iOS.Support.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IntPtr.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.iOS.uCGPoint.h>
#include <Uno.Platform.iOS.uCGRect.h>
#include <Uno.Platform.iOS.uCGSize.h>
#include <Uno.Platform.iOS.UIImage.h>
#include <Uno.Float2.h>
#include <Uno.Int2.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>

namespace g{
namespace Fuse{
namespace iOS{

// public static extern class Support :585
// {
static void Support_build(uType* type)
{
    type->Reflection.SetFunctions(10,
        new uFunction("CGPointFromUnoFloat2", NULL, (void*)Support__CGPointFromUnoFloat2_fn, 0, true, ::g::Uno::Platform::iOS::uCGPoint1_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGPointFromUnoInt2", NULL, (void*)Support__CGPointFromUnoInt2_fn, 0, true, ::g::Uno::Platform::iOS::uCGPoint1_typeof(), 2, ::g::Uno::Int2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGPointToUnoInt2", NULL, (void*)Support__CGPointToUnoInt2_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Platform::iOS::uCGPoint1_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGRectFromUnoRect", NULL, (void*)Support__CGRectFromUnoRect_fn, 0, true, ::g::Uno::Platform::iOS::uCGRect1_typeof(), 2, ::g::Uno::Rect_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGRectFromUnoRecti", NULL, (void*)Support__CGRectFromUnoRecti_fn, 0, true, ::g::Uno::Platform::iOS::uCGRect1_typeof(), 2, ::g::Uno::Recti_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGRectToUnoRecti", NULL, (void*)Support__CGRectToUnoRecti_fn, 0, true, ::g::Uno::Recti_typeof(), 2, ::g::Uno::Platform::iOS::uCGRect1_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGSizeFromUnoFloat2", NULL, (void*)Support__CGSizeFromUnoFloat2_fn, 0, true, ::g::Uno::Platform::iOS::uCGSize1_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGSizeFromUnoInt2", NULL, (void*)Support__CGSizeFromUnoInt2_fn, 0, true, ::g::Uno::Platform::iOS::uCGSize1_typeof(), 2, ::g::Uno::Int2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CGSizeToUnoInt2", NULL, (void*)Support__CGSizeToUnoInt2_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Platform::iOS::uCGSize1_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CreateTextureFromImage", NULL, (void*)Support__CreateTextureFromImage_fn, 0, true, ::g::Uno::Graphics::Texture2D_typeof(), 1, ::g::Uno::Platform::iOS::UIImage_typeof()));
}

uClassType* Support_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Support", options);
    type->fp_build_ = Support_build;
    return type;
}

// public static extern Uno.Platform.iOS.uCGPoint CGPointFromUnoFloat2(float2 unoPoint, float scale) :704
void Support__CGPointFromUnoFloat2_fn(::g::Uno::Float2* unoPoint, float* scale, CGPoint* __retval)
{
    *__retval = Support::CGPointFromUnoFloat2(*unoPoint, *scale);
}

// public static extern Uno.Platform.iOS.uCGPoint CGPointFromUnoInt2(int2 unoPoint, float scale) :696
void Support__CGPointFromUnoInt2_fn(::g::Uno::Int2* unoPoint, float* scale, CGPoint* __retval)
{
    *__retval = Support::CGPointFromUnoInt2(*unoPoint, *scale);
}

// public static extern int2 CGPointToUnoInt2(Uno.Platform.iOS.uCGPoint point, float scale) :688
void Support__CGPointToUnoInt2_fn(CGPoint* point, float* scale, ::g::Uno::Int2* __retval)
{
    *__retval = Support::CGPointToUnoInt2(*point, *scale);
}

// public static extern Uno.Platform.iOS.uCGRect CGRectFromUnoRect(Uno.Rect unoRect, float scale) :712
void Support__CGRectFromUnoRect_fn(::g::Uno::Rect* unoRect, float* scale, CGRect* __retval)
{
    *__retval = Support::CGRectFromUnoRect(*unoRect, *scale);
}

// public static extern Uno.Platform.iOS.uCGRect CGRectFromUnoRecti(Uno.Recti unoRect, float scale) :722
void Support__CGRectFromUnoRecti_fn(::g::Uno::Recti* unoRect, float* scale, CGRect* __retval)
{
    *__retval = Support::CGRectFromUnoRecti(*unoRect, *scale);
}

// public static extern Uno.Recti CGRectToUnoRecti(Uno.Platform.iOS.uCGRect rect, float scale) :733
void Support__CGRectToUnoRecti_fn(CGRect* rect, float* scale, ::g::Uno::Recti* __retval)
{
    *__retval = Support::CGRectToUnoRecti(*rect, *scale);
}

// public static extern Uno.Platform.iOS.uCGSize CGSizeFromUnoFloat2(float2 unoSize, float scale) :757
void Support__CGSizeFromUnoFloat2_fn(::g::Uno::Float2* unoSize, float* scale, CGSize* __retval)
{
    *__retval = Support::CGSizeFromUnoFloat2(*unoSize, *scale);
}

// public static extern Uno.Platform.iOS.uCGSize CGSizeFromUnoInt2(int2 unoSize, float scale) :749
void Support__CGSizeFromUnoInt2_fn(::g::Uno::Int2* unoSize, float* scale, CGSize* __retval)
{
    *__retval = Support::CGSizeFromUnoInt2(*unoSize, *scale);
}

// public static extern int2 CGSizeToUnoInt2(Uno.Platform.iOS.uCGSize size, float scale) :740
void Support__CGSizeToUnoInt2_fn(CGSize* size, float* scale, ::g::Uno::Int2* __retval)
{
    *__retval = Support::CGSizeToUnoInt2(*size, *scale);
}

// public static texture2D CreateTextureFromImage(Uno.Platform.iOS.UIImage image) :587
void Support__CreateTextureFromImage_fn(::UIImage ** image, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = Support::CreateTextureFromImage(*image);
}

// private static int2 UIImageGetSize(Uno.Platform.iOS.UIImage image) :598
void Support__UIImageGetSize_fn(::UIImage ** image, ::g::Uno::Int2* __retval)
{
    *__retval = Support::UIImageGetSize(*image);
}

// private static byte[] UIImageToRGBA8888(Uno.Platform.iOS.UIImage _image) :608
void Support__UIImageToRGBA8888_fn(::UIImage ** _image, uArray** __retval)
{
    *__retval = Support::UIImageToRGBA8888(*_image);
}

// public static extern Uno.Platform.iOS.uCGPoint CGPointFromUnoFloat2(float2 unoPoint, float scale) [static] :704
CGPoint Support::CGPointFromUnoFloat2(::g::Uno::Float2 unoPoint, float scale)
{
    CGPoint point;
    point.x = unoPoint.X / scale;
    point.y = unoPoint.Y / scale;
    return point;
}

// public static extern Uno.Platform.iOS.uCGPoint CGPointFromUnoInt2(int2 unoPoint, float scale) [static] :696
CGPoint Support::CGPointFromUnoInt2(::g::Uno::Int2 unoPoint, float scale)
{
    CGPoint point;
    point.x = unoPoint.X / scale;
    point.y = unoPoint.Y / scale;
    return point;
}

// public static extern int2 CGPointToUnoInt2(Uno.Platform.iOS.uCGPoint point, float scale) [static] :688
::g::Uno::Int2 Support::CGPointToUnoInt2(CGPoint point, float scale)
{
    ::g::Uno::Int2 unoPoint;
    unoPoint.X = point.x * scale;
    unoPoint.Y = point.y * scale;
    return unoPoint;
}

// public static extern Uno.Platform.iOS.uCGRect CGRectFromUnoRect(Uno.Rect unoRect, float scale) [static] :712
CGRect Support::CGRectFromUnoRect(::g::Uno::Rect unoRect, float scale)
{
    CGRect rect;
    rect.origin.x = unoRect.Left / scale;
    rect.origin.y = unoRect.Top / scale;
    rect.size.width = (unoRect.Right - unoRect.Left) / scale;
    rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
    return rect;
}

// public static extern Uno.Platform.iOS.uCGRect CGRectFromUnoRecti(Uno.Recti unoRect, float scale) [static] :722
CGRect Support::CGRectFromUnoRecti(::g::Uno::Recti unoRect, float scale)
{
    CGRect rect;
    rect.origin.x = unoRect.Left / scale;
    rect.origin.y = unoRect.Top / scale;
    rect.size.width = (unoRect.Right - unoRect.Left) / scale;
    rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
    return rect;
}

// public static extern Uno.Recti CGRectToUnoRecti(Uno.Platform.iOS.uCGRect rect, float scale) [static] :733
::g::Uno::Recti Support::CGRectToUnoRecti(CGRect rect, float scale)
{
    ::g::Uno::Int2 origin = Support::CGPointToUnoInt2(rect.origin, scale);
    ::g::Uno::Int2 size = Support::CGSizeToUnoInt2(rect.size, scale);
    return ::g::Uno::Recti__New2(origin, size);
}

// public static extern Uno.Platform.iOS.uCGSize CGSizeFromUnoFloat2(float2 unoSize, float scale) [static] :757
CGSize Support::CGSizeFromUnoFloat2(::g::Uno::Float2 unoSize, float scale)
{
    CGSize size;
    size.width = unoSize.X / scale;
    size.height = unoSize.Y / scale;
    return size;
}

// public static extern Uno.Platform.iOS.uCGSize CGSizeFromUnoInt2(int2 unoSize, float scale) [static] :749
CGSize Support::CGSizeFromUnoInt2(::g::Uno::Int2 unoSize, float scale)
{
    CGSize size;
    size.width = unoSize.X / scale;
    size.height = unoSize.Y / scale;
    return size;
}

// public static extern int2 CGSizeToUnoInt2(Uno.Platform.iOS.uCGSize size, float scale) [static] :740
::g::Uno::Int2 Support::CGSizeToUnoInt2(CGSize size, float scale)
{
    ::g::Uno::Int2 unoSize;
    unoSize.X = size.width * scale;
    unoSize.Y = size.height * scale;
    return unoSize;
}

// public static texture2D CreateTextureFromImage(Uno.Platform.iOS.UIImage image) [static] :587
::g::Uno::Graphics::Texture2D* Support::CreateTextureFromImage(::UIImage * image)
{
    uStackFrame __("Fuse.iOS.Support", "CreateTextureFromImage(Uno.Platform.iOS.UIImage)");
    ::g::Uno::Int2 bitmapSize = Support::UIImageGetSize(image);
    uArray* bitmap = Support::UIImageToRGBA8888(image);
    ::g::Uno::Graphics::Texture2D* texture = ::g::Uno::Graphics::Texture2D::New1(bitmapSize, 3, false);
    texture->Update2(bitmap->Ptr());
    return texture;
}

// private static int2 UIImageGetSize(Uno.Platform.iOS.UIImage image) [static] :598
::g::Uno::Int2 Support::UIImageGetSize(::UIImage * image)
{
    CGSize imageSize = image.size;
    
    int width = (int) imageSize.width;
    int height = (int) imageSize.height;
    
    return ::g::Uno::Int2__New2(width, height);
}

// private static byte[] UIImageToRGBA8888(Uno.Platform.iOS.UIImage _image) [static] :608
uArray* Support::UIImageToRGBA8888(::UIImage * _image)
{
    CGImageRef image = [((UIImage*)_image) CGImage];
    if (image == NULL)
    	return NULL;
    
    UIImageOrientation orientation = _image.imageOrientation;
    
    CGRect imageRect = CGRectMake(0, 0, CGImageGetWidth(image), CGImageGetHeight(image));
    
    int bitmapWidth = imageRect.size.width;
    int bitmapHeight = imageRect.size.height;
    
    if (int(orientation) & 0x2)
    {
    	// Transpose for Left* and Right* orientations
    	bitmapWidth = imageRect.size.height;
    	bitmapHeight = imageRect.size.width;
    }
    
    uArray *bitmap = uArray::New(::g::Uno::Byte_typeof()->Array(), bitmapWidth * bitmapHeight * 4);
    
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGContextRef context = CGBitmapContextCreate(bitmap->Ptr(),
    	bitmapWidth, bitmapHeight, 8, 4 * bitmapWidth, colorSpace,
    	kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
    
    switch (orientation)
    {
    	// Right side up
    	case UIImageOrientationUp:
    		break;
    	case UIImageOrientationUpMirrored:
    		CGContextTranslateCTM(context, imageRect.size.width, 0);
    		CGContextScaleCTM(context, -1., 1.);
    		break;
    
    	// Upside down
    	case UIImageOrientationDown:
    		CGContextRotateCTM(context, M_PI);
    		CGContextTranslateCTM(
    			context, -imageRect.size.width, -imageRect.size.height);
    		break;
    	case UIImageOrientationDownMirrored:
    		CGContextRotateCTM(context, M_PI);
    		CGContextTranslateCTM(context, 0, -imageRect.size.height);
    		CGContextScaleCTM(context, -1., 1.);
    		break;
    
    	// Left
    	case UIImageOrientationLeft:
    		CGContextRotateCTM(context, M_PI_2);
    		CGContextTranslateCTM(context, 0, -imageRect.size.height);
    		break;
    	case UIImageOrientationLeftMirrored:
    		CGContextRotateCTM(context, M_PI_2);
    		CGContextTranslateCTM(
    			context, imageRect.size.width, -imageRect.size.height);
    		CGContextScaleCTM(context, -1., 1.);
    		break;
    
    	// Right
    	case UIImageOrientationRight:
    		CGContextRotateCTM(context, -M_PI_2);
    		CGContextTranslateCTM(context, -imageRect.size.width, 0);
    		break;
    	case UIImageOrientationRightMirrored:
    		CGContextRotateCTM(context, -M_PI_2);
    		CGContextScaleCTM(context, -1., 1.);
    		break;
    }
    
    CGContextDrawImage(context, imageRect, image);
    
    CGContextRelease(context);
    CGColorSpaceRelease(colorSpace);
    
    return bitmap;
}
// }

}}} // ::g::Fuse::iOS
