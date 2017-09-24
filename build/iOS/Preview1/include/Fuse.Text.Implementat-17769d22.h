// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CoreTextFontFace;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFontFace :58
// {
::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof();
void CoreTextFontFace__ctor_1_fn(CoreTextFontFace* __this, uString* fileName, int* index, uDelegate* stylePredicate);
void CoreTextFontFace__CreateCGFont_fn(::g::ObjC::Object* uiFont, void** __retval);
void CoreTextFontFace__CreateFont_fn(::g::ObjC::Object* descriptor, int* pixelSize, ::g::ObjC::Object** __retval);
void CoreTextFontFace__Dispose_fn(CoreTextFontFace* __this);
void CoreTextFontFace__GetOfPixelSizeInternal_fn(CoreTextFontFace* __this, int* pixelSize, ::g::Fuse::Text::Font** __retval);
void CoreTextFontFace__New1_fn(uString* fileName, int* index, uDelegate* stylePredicate, CoreTextFontFace** __retval);

struct CoreTextFontFace : ::g::Fuse::Text::FontFace
{
    uStrong< ::g::ObjC::Object*> _descriptor;

    void ctor_1(uString* fileName, int index, uDelegate* stylePredicate);
    static void* CreateCGFont(::g::ObjC::Object* uiFont);
    static ::g::ObjC::Object* CreateFont(::g::ObjC::Object* descriptor, int pixelSize);
    static CoreTextFontFace* New1(uString* fileName, int index, uDelegate* stylePredicate);
};
// }

}}}} // ::g::Fuse::Text::Implementation
