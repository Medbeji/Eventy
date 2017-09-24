// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct FreeTypeFontFace;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class FreeTypeFontFace :624
// {
::g::Fuse::Text::FontFace_type* FreeTypeFontFace_typeof();
void FreeTypeFontFace__ctor_1_fn(FreeTypeFontFace* __this, uArray* buffer, int* index, uDelegate* stylePredicate);
void FreeTypeFontFace__ctor_2_fn(FreeTypeFontFace* __this, uString* fileName, int* index, uDelegate* stylePredicate);
void FreeTypeFontFace__Dispose_fn(FreeTypeFontFace* __this);
void FreeTypeFontFace__get_FamilyName_fn(FreeTypeFontFace* __this, uString** __retval);
void FreeTypeFontFace__GetOfPixelSizeInternal_fn(FreeTypeFontFace* __this, int* pixelSize, ::g::Fuse::Text::Font** __retval);
void FreeTypeFontFace__New1_fn(uArray* buffer, int* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval);
void FreeTypeFontFace__New2_fn(uString* fileName, int* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval);
void FreeTypeFontFace__get_StyleName_fn(FreeTypeFontFace* __this, uString** __retval);

struct FreeTypeFontFace : ::g::Fuse::Text::FontFace
{
    uStrong<uArray*> _faceBuffer;
    uStrong<uObject*> _faceMutex;
    static uSStrong<uObject*> _freeTypeMutex_;
    static uSStrong<uObject*>& _freeTypeMutex() { return FreeTypeFontFace_typeof()->Init(), _freeTypeMutex_; }
    void* _ftFace;

    void ctor_1(uArray* buffer, int index, uDelegate* stylePredicate);
    void ctor_2(uString* fileName, int index, uDelegate* stylePredicate);
    uString* FamilyName();
    uString* StyleName();
    static FreeTypeFontFace* New1(uArray* buffer, int index, uDelegate* stylePredicate);
    static FreeTypeFontFace* New2(uString* fileName, int index, uDelegate* stylePredicate);
};
// }

}}}} // ::g::Fuse::Text::Implementation
