// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Text{struct SubTexture;}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct SubTexture :2184
// {
uStructType* SubTexture_typeof();
void SubTexture__ctor__fn(SubTexture* __this, int* textureIndex, ::g::Uno::Recti* rect);
void SubTexture__New1_fn(int* textureIndex, ::g::Uno::Recti* rect, SubTexture* __retval);

struct SubTexture
{
    int TextureIndex;
    ::g::Uno::Recti Rect;

    void ctor_(int textureIndex, ::g::Uno::Recti rect);
};

SubTexture SubTexture__New1(int textureIndex, ::g::Uno::Recti rect);
// }

}}} // ::g::Fuse::Text
