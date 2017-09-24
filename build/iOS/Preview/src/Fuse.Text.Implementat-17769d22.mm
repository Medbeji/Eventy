// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreText/CoreText.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.Implementat-12f45315.h>
#include <Fuse.Text.Implementat-17769d22.h>
#include <Fuse.Text.Implementat-348650f4.h>
#include <ObjC.Object.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFontFace :58
// {
static void CoreTextFontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Text::Implementation::CoreTextFontFace, _descriptor), 0);
}

::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CoreTextFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.Implementation.CoreTextFontFace", options);
    type->fp_build_ = CoreTextFontFace_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))CoreTextFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int*, ::g::Fuse::Text::Font**))CoreTextFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CoreTextFontFace__Dispose_fn;
    return type;
}

// public CoreTextFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) :62
void CoreTextFontFace__ctor_1_fn(CoreTextFontFace* __this, uString* fileName, int* index, uDelegate* stylePredicate)
{
    __this->ctor_1(fileName, *index, stylePredicate);
}

// private static Uno.IntPtr CreateCGFont(ObjC.Object uiFont) :89
void CoreTextFontFace__CreateCGFont_fn(::g::ObjC::Object* uiFont, void** __retval)
{
    *__retval = CoreTextFontFace::CreateCGFont(uiFont);
}

// private static ObjC.Object CreateFont(ObjC.Object descriptor, int pixelSize) :82
void CoreTextFontFace__CreateFont_fn(::g::ObjC::Object* descriptor, int* pixelSize, ::g::ObjC::Object** __retval)
{
    *__retval = CoreTextFontFace::CreateFont(descriptor, *pixelSize);
}

// public override sealed void Dispose() :67
void CoreTextFontFace__Dispose_fn(CoreTextFontFace* __this)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFontFace", "Dispose()");
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);
    __this->_descriptor = NULL;
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int pixelSize) :73
void CoreTextFontFace__GetOfPixelSizeInternal_fn(CoreTextFontFace* __this, int* pixelSize, ::g::Fuse::Text::Font** __retval)
{
    int pixelSize_ = *pixelSize;
    ::g::ObjC::Object* uiFont = CoreTextFontFace::CreateFont(__this->_descriptor, pixelSize_);
    void* cgFont = CoreTextFontFace::CreateCGFont(uiFont);
    void* hbFace = ::g::Fuse::Text::Implementation::Harfbuzz::ct_face_create(cgFont);
    return *__retval = ::g::Fuse::Text::Implementation::CoreTextFont::New1(hbFace, cgFont, uiFont, pixelSize_), void();
}

// public CoreTextFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) :62
void CoreTextFontFace__New1_fn(uString* fileName, int* index, uDelegate* stylePredicate, CoreTextFontFace** __retval)
{
    *__retval = CoreTextFontFace::New1(fileName, *index, stylePredicate);
}

// public CoreTextFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) [instance] :62
void CoreTextFontFace::ctor_1(uString* fileName, int index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.CoreTextFontFace", ".ctor(string,int,Uno.Predicate<string>)");
    ctor_();
    _descriptor = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(fileName, index, stylePredicate);
}

// private static Uno.IntPtr CreateCGFont(ObjC.Object uiFont) [static] :89
void* CoreTextFontFace::CreateCGFont(::g::ObjC::Object* uiFont)
{
    @autoreleasepool
    {
        return [] (::id uiFont) -> void*
        {
            return CTFontCopyGraphicsFont((__bridge CTFontRef)(UIFont*)uiFont, NULL);
        } (::g::ObjC::Object::GetHandle(uiFont));
        
    }
    
}

// private static ObjC.Object CreateFont(ObjC.Object descriptor, int pixelSize) [static] :82
::g::ObjC::Object* CoreTextFontFace::CreateFont(::g::ObjC::Object* descriptor, int pixelSize)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id descriptor, int pixelSize) -> ::id
        {
            // float pointSize = (float)pixelSize * 0.75f;
            return [UIFont fontWithDescriptor:(UIFontDescriptor*)descriptor size:pixelSize];
        } (::g::ObjC::Object::GetHandle(descriptor), pixelSize));
        
    }
    
}

// public CoreTextFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) [static] :62
CoreTextFontFace* CoreTextFontFace::New1(uString* fileName, int index, uDelegate* stylePredicate)
{
    CoreTextFontFace* obj1 = (CoreTextFontFace*)uNew(CoreTextFontFace_typeof());
    obj1->ctor_1(fileName, index, stylePredicate);
    return obj1;
}
// }

}}}} // ::g::Fuse::Text::Implementation
