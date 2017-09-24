// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.iOS/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <CoreGraphics/CoreGraphics.h>
#include <Uno.h>
#include <Uno-iOS/Uno-iOS.h>
namespace g{namespace Fuse{namespace iOS{struct Support;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace iOS{

// public static extern class Support :585
// {
uClassType* Support_typeof();
void Support__CGPointFromUnoFloat2_fn(::g::Uno::Float2* unoPoint, float* scale, CGPoint* __retval);
void Support__CGPointFromUnoInt2_fn(::g::Uno::Int2* unoPoint, float* scale, CGPoint* __retval);
void Support__CGPointToUnoInt2_fn(CGPoint* point, float* scale, ::g::Uno::Int2* __retval);
void Support__CGRectFromUnoRect_fn(::g::Uno::Rect* unoRect, float* scale, CGRect* __retval);
void Support__CGRectFromUnoRecti_fn(::g::Uno::Recti* unoRect, float* scale, CGRect* __retval);
void Support__CGRectToUnoRecti_fn(CGRect* rect, float* scale, ::g::Uno::Recti* __retval);
void Support__CGSizeFromUnoFloat2_fn(::g::Uno::Float2* unoSize, float* scale, CGSize* __retval);
void Support__CGSizeFromUnoInt2_fn(::g::Uno::Int2* unoSize, float* scale, CGSize* __retval);
void Support__CGSizeToUnoInt2_fn(CGSize* size, float* scale, ::g::Uno::Int2* __retval);
void Support__CreateTextureFromImage_fn(::UIImage ** image, ::g::Uno::Graphics::Texture2D** __retval);
void Support__UIImageGetSize_fn(::UIImage ** image, ::g::Uno::Int2* __retval);
void Support__UIImageToRGBA8888_fn(::UIImage ** _image, uArray** __retval);

struct Support : uObject
{
    static CGPoint CGPointFromUnoFloat2(::g::Uno::Float2 unoPoint, float scale);
    static CGPoint CGPointFromUnoInt2(::g::Uno::Int2 unoPoint, float scale);
    static ::g::Uno::Int2 CGPointToUnoInt2(CGPoint point, float scale);
    static CGRect CGRectFromUnoRect(::g::Uno::Rect unoRect, float scale);
    static CGRect CGRectFromUnoRecti(::g::Uno::Recti unoRect, float scale);
    static ::g::Uno::Recti CGRectToUnoRecti(CGRect rect, float scale);
    static CGSize CGSizeFromUnoFloat2(::g::Uno::Float2 unoSize, float scale);
    static CGSize CGSizeFromUnoInt2(::g::Uno::Int2 unoSize, float scale);
    static ::g::Uno::Int2 CGSizeToUnoInt2(CGSize size, float scale);
    static ::g::Uno::Graphics::Texture2D* CreateTextureFromImage(::UIImage * image);
    static ::g::Uno::Int2 UIImageGetSize(::UIImage * image);
    static uArray* UIImageToRGBA8888(::UIImage * _image);
};
// }

}}} // ::g::Fuse::iOS
