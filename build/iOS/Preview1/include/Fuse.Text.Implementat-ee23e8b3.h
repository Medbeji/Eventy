// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Implementat-43418381.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct FreeTypeFont;}}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class FreeTypeFont :742
// {
::g::Fuse::Text::Implementation::HarfbuzzFont_type* FreeTypeFont_typeof();
void FreeTypeFont__ctor_2_fn(FreeTypeFont* __this, void** ftFace, void** ftSize, int* pixelSize, float* scale);
void FreeTypeFont__get_Ascender_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__get_Descender_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__Dispose_fn(FreeTypeFont* __this);
void FreeTypeFont__get_LineHeight_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__New1_fn(void** ftFace, void** ftSize, int* pixelSize, float* scale, FreeTypeFont** __retval);
void FreeTypeFont__get_NumGlyphs_fn(FreeTypeFont* __this, int* __retval);
void FreeTypeFont__get_PixelSize_fn(FreeTypeFont* __this, int* __retval);
void FreeTypeFont__Render_fn(FreeTypeFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void FreeTypeFont__get_Scale_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__Shape_fn(FreeTypeFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval);

struct FreeTypeFont : ::g::Fuse::Text::Implementation::HarfbuzzFont
{
    uStrong<uObject*> _faceMutex;
    void* _ftFace;
    void* _ftSize;
    int _pixelSize;
    float _scale;

    void ctor_2(void* ftFace, void* ftSize, int pixelSize, float scale);
    static FreeTypeFont* New1(void* ftFace, void* ftSize, int pixelSize, float scale);
};
// }

}}}} // ::g::Fuse::Text::Implementation
