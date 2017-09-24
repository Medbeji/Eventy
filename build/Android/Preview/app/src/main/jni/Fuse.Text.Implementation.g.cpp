// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <climits>
#include <ft2build.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.Glyph.h>
#include <Fuse.Text.Implementat-165dcd99.h>
#include <Fuse.Text.Implementat-348650f4.h>
#include <Fuse.Text.Implementat-43418381.h>
#include <Fuse.Text.Implementat-85443989.h>
#include <Fuse.Text.Implementat-b446b980.h>
#include <Fuse.Text.Implementat-b71ef622.h>
#include <Fuse.Text.Implementat-bfee6ae0.h>
#include <Fuse.Text.Implementat-c65e6aa0.h>
#include <Fuse.Text.Implementat-cd33f78a.h>
#include <Fuse.Text.Implementat-ee23e8b3.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Fuse.Text.RenderedGlyph.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.TextDirection.h>
#include <harfbuzz/hb.h>
#include <harfbuzz/hb-ft.h>
#include <hb-ft-cached.h>
#include <Java.Object.h>
#include <jni.h>
#include <string.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implement-ed55561e.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.UInt.h>
#include <Uno/JNIHelper.h>
#include FT_ADVANCES_H
#include FT_FREETYPE_H
#include FT_SIZES_H
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class BitArray :5
// {
static void BitArray_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Implementation::BitArray, Count), 0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Fuse::Text::Implementation::BitArray, Data), 0);
}

uType* BitArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BitArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.Implementation.BitArray", options);
    type->fp_build_ = BitArray_build;
    return type;
}

// public BitArray(int length) :12
void BitArray__ctor__fn(BitArray* __this, int* length)
{
    __this->ctor_(*length);
}

// private int Index(int i) :35
void BitArray__Index_fn(BitArray* __this, int* i, int* __retval)
{
    *__retval = __this->Index(*i);
}

// public bool get_Item(int i) :20
void BitArray__get_Item_fn(BitArray* __this, int* i, bool* __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, bool value) :24
void BitArray__set_Item_fn(BitArray* __this, int* i, bool* value)
{
    __this->Item(*i, *value);
}

// private byte Mask(int i) :40
void BitArray__Mask_fn(BitArray* __this, int* i, uint8_t* __retval)
{
    *__retval = __this->Mask(*i);
}

// public BitArray New(int length) :12
void BitArray__New1_fn(int* length, BitArray** __retval)
{
    *__retval = BitArray::New1(*length);
}

// public BitArray(int length) [instance] :12
void BitArray::ctor_(int length)
{
    Count = length;
    Data = uArray::New(::TYPES[0/*byte[]*/], ((length + 8) - 1) / 8);
}

// private int Index(int i) [instance] :35
int BitArray::Index(int i)
{
    return i / 8;
}

// public bool get_Item(int i) [instance] :20
bool BitArray::Item(int i)
{
    uStackFrame __("Fuse.Text.Implementation.BitArray", "get_Item(int)");
    return (uPtr(Data)->Item<uint8_t>(Index(i)) & Mask(i)) != 0;
}

// public void set_Item(int i, bool value) [instance] :24
void BitArray::Item(int i, bool value)
{
    uStackFrame __("Fuse.Text.Implementation.BitArray", "set_Item(int,bool)");
    int index = Index(i);
    uint8_t mask = Mask(i);
    uint8_t data = uPtr(Data)->Item<uint8_t>(index);
    uPtr(Data)->Item<uint8_t>(index) = value ? data | mask : data & ~mask;
}

// private byte Mask(int i) [instance] :40
uint8_t BitArray::Mask(int i)
{
    return (uint8_t)(1 << (i % 8));
}

// public BitArray New(int length) [static] :12
BitArray* BitArray::New1(int length)
{
    BitArray* obj1 = (BitArray*)uNew(BitArray_typeof());
    obj1->ctor_(length);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class CString :1500
// {
static void CString_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* CString_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.CString", options);
    type->fp_build_ = CString_build;
    return type;
}

// private static int strlen(Uno.IntPtr cstr) :1511
void CString__strlen_fn(void** cstr, int* __retval)
{
    *__retval = CString::strlen(*cstr);
}

// public static string ToString(Uno.IntPtr cstr) :1502
void CString__ToString_fn(void** cstr, uString** __retval)
{
    *__retval = CString::ToString(*cstr);
}

// private static int strlen(Uno.IntPtr cstr) [static] :1511
int CString::strlen(void* cstr)
{
    return (int)::strlen((const char*)cstr);
}

// public static string ToString(Uno.IntPtr cstr) [static] :1502
uString* CString::ToString(void* cstr)
{
    int len = ::g::Uno::IntPtr::op_Equality(cstr, ::g::Uno::IntPtr::Zero_) ? 0 : CString::strlen(cstr);
    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], len);
    ::g::Fuse::Text::Implementation::Memory::Copy(buffer, cstr, len);
    return ::g::Uno::Text::Utf8::GetString(buffer);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class FreeType :303
// {
static void FreeType_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Text::Implementation::FreeType::_initialized_, uFieldFlagsStatic,
        ::g::Uno::IntPtr_typeof(), (uintptr_t)&::g::Fuse::Text::Implementation::FreeType::_library_, uFieldFlagsStatic);
}

uClassType* FreeType_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.FreeType", options);
    type->fp_build_ = FreeType_build;
    return type;
}

// public static void Activate_Size(Uno.IntPtr size) :407
void FreeType__Activate_Size_fn(void** size)
{
    FreeType::Activate_Size(*size);
}

// private static int Activate_Size_Raw(Uno.IntPtr size) :413
void FreeType__Activate_Size_Raw_fn(void** size, int* __retval)
{
    *__retval = FreeType::Activate_Size_Raw(*size);
}

// public static int Ascender(Uno.IntPtr face) :558
void FreeType__Ascender_fn(void** face, int* __retval)
{
    *__retval = FreeType::Ascender(*face);
}

// public static void BGRAToRGBA(byte[] buffer) :546
void FreeType__BGRAToRGBA_fn(uArray* buffer)
{
    FreeType::BGRAToRGBA(buffer);
}

// public static Uno.Content.Images.Bitmap Current_Glyph_Bitmap(Uno.IntPtr face) :526
void FreeType__Current_Glyph_Bitmap_fn(void** face, ::g::Uno::Content::Images::Bitmap** __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap(*face);
}

// private static Uno.IntPtr Current_Glyph_Bitmap_Buffer(Uno.IntPtr face) :515
void FreeType__Current_Glyph_Bitmap_Buffer_fn(void** face, void** __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Buffer(*face);
}

// private static bool Current_Glyph_Bitmap_Buffer_Is_BGRA(Uno.IntPtr face) :521
void FreeType__Current_Glyph_Bitmap_Buffer_Is_BGRA_fn(void** face, bool* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(*face);
}

// public static int2 Current_Glyph_Bitmap_Offset(Uno.IntPtr face) :499
void FreeType__Current_Glyph_Bitmap_Offset_fn(void** face, ::g::Uno::Int2* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Offset(*face);
}

// private static void Current_Glyph_Bitmap_Offset_Raw(Uno.IntPtr face, int& x, int& y) :507
void FreeType__Current_Glyph_Bitmap_Offset_Raw_fn(void** face, int* x, int* y)
{
    FreeType::Current_Glyph_Bitmap_Offset_Raw(*face, x, y);
}

// public static int2 Current_Glyph_Bitmap_Size(Uno.IntPtr face) :485
void FreeType__Current_Glyph_Bitmap_Size_fn(void** face, ::g::Uno::Int2* __retval)
{
    *__retval = FreeType::Current_Glyph_Bitmap_Size(*face);
}

// private static void Current_Glyph_Bitmap_Size_Raw(Uno.IntPtr face, int& width, int& rows) :493
void FreeType__Current_Glyph_Bitmap_Size_Raw_fn(void** face, int* width, int* rows)
{
    FreeType::Current_Glyph_Bitmap_Size_Raw(*face, width, rows);
}

// public static int Descender(Uno.IntPtr face) :564
void FreeType__Descender_fn(void** face, int* __retval)
{
    *__retval = FreeType::Descender(*face);
}

// public static void Done_Face(Uno.IntPtr face) :374
void FreeType__Done_Face_fn(void** face)
{
    FreeType::Done_Face(*face);
}

// private static int Done_Face_Raw(Uno.IntPtr face) :380
void FreeType__Done_Face_Raw_fn(void** face, int* __retval)
{
    *__retval = FreeType::Done_Face_Raw(*face);
}

// public static void Done_Size(Uno.IntPtr size) :396
void FreeType__Done_Size_fn(void** size)
{
    FreeType::Done_Size(*size);
}

// private static int Done_Size_Raw(Uno.IntPtr size) :402
void FreeType__Done_Size_Raw_fn(void** size, int* __retval)
{
    *__retval = FreeType::Done_Size_Raw(*size);
}

// public static string Family_Name(Uno.IntPtr face) :575
void FreeType__Family_Name_fn(void** face, uString** __retval)
{
    *__retval = FreeType::Family_Name(*face);
}

// private static Uno.IntPtr Family_Name_Raw(Uno.IntPtr face) :581
void FreeType__Family_Name_Raw_fn(void** face, void** __retval)
{
    *__retval = FreeType::Family_Name_Raw(*face);
}

// public static int Height(Uno.IntPtr face) :570
void FreeType__Height_fn(void** face, int* __retval)
{
    *__retval = FreeType::Height(*face);
}

// private static void Init() :316
void FreeType__Init_fn()
{
    FreeType::Init();
}

// private static int Init_FreeType(Uno.IntPtr& library) :333
void FreeType__Init_FreeType_fn(void** library, int* __retval)
{
    *__retval = FreeType::Init_FreeType(library);
}

// private static Uno.IntPtr get_Library() :309
void FreeType__get_Library_fn(void** __retval)
{
    *__retval = FreeType::Library();
}

// public static void Load_Glyph(Uno.IntPtr face, uint glyph, int flags) :474
void FreeType__Load_Glyph_fn(void** face, uint32_t* glyph, int* flags)
{
    FreeType::Load_Glyph(*face, *glyph, *flags);
}

// private static int Load_Glyph_Raw(Uno.IntPtr face, uint glyph, int flags) :480
void FreeType__Load_Glyph_Raw_fn(void** face, uint32_t* glyph, int* flags, int* __retval)
{
    *__retval = FreeType::Load_Glyph_Raw(*face, *glyph, *flags);
}

// public static void Load_Render_Glyph(Uno.IntPtr face, uint glyph) :463
void FreeType__Load_Render_Glyph_fn(void** face, uint32_t* glyph)
{
    FreeType::Load_Render_Glyph(*face, *glyph);
}

// private static int Load_Render_Glyph_Raw(Uno.IntPtr face, uint glyph) :469
void FreeType__Load_Render_Glyph_Raw_fn(void** face, uint32_t* glyph, int* __retval)
{
    *__retval = FreeType::Load_Render_Glyph_Raw(*face, *glyph);
}

// public static void New_Face(string fileName, int index, Uno.IntPtr& face) :355
void FreeType__New_Face_fn(uString* fileName, int* index, void** face)
{
    FreeType::New_Face(fileName, *index, face);
}

// private static int New_Face_Raw(Uno.IntPtr library, byte[] fileName, int index, Uno.IntPtr& face) :369
void FreeType__New_Face_Raw_fn(void** library, uArray* fileName, int* index, void** face, int* __retval)
{
    *__retval = FreeType::New_Face_Raw(*library, fileName, *index, face);
}

// public static void New_Memory_Face(byte[] buffer, int index, Uno.IntPtr& face) :344
void FreeType__New_Memory_Face_fn(uArray* buffer, int* index, void** face)
{
    FreeType::New_Memory_Face(buffer, *index, face);
}

// private static int New_Memory_Face_Raw(Uno.IntPtr library, byte[] buffer, int length, int index, Uno.IntPtr& face) :350
void FreeType__New_Memory_Face_Raw_fn(void** library, uArray* buffer, int* length, int* index, void** face, int* __retval)
{
    *__retval = FreeType::New_Memory_Face_Raw(*library, buffer, *length, *index, face);
}

// public static void New_Size(Uno.IntPtr face, Uno.IntPtr& size) :385
void FreeType__New_Size_fn(void** face, void** size)
{
    FreeType::New_Size(*face, size);
}

// private static int New_Size_Raw(Uno.IntPtr face, Uno.IntPtr& size) :391
void FreeType__New_Size_Raw_fn(void** face, void** size, int* __retval)
{
    *__retval = FreeType::New_Size_Raw(*face, size);
}

// public static int Num_Faces(Uno.IntPtr face) :598
void FreeType__Num_Faces_fn(void** face, int* __retval)
{
    *__retval = FreeType::Num_Faces(*face);
}

// public static int Num_Glyphs(Uno.IntPtr face) :604
void FreeType__Num_Glyphs_fn(void** face, int* __retval)
{
    *__retval = FreeType::Num_Glyphs(*face);
}

// public static void Set_Pixel_Sizes(Uno.IntPtr face, int w, int h, float& scale) :418
void FreeType__Set_Pixel_Sizes_fn(void** face, int* w, int* h, float* scale)
{
    FreeType::Set_Pixel_Sizes(*face, *w, *h, scale);
}

// private static int Set_Pixel_Sizes_Raw(Uno.IntPtr rawFace, int w, int h, float& scale) :425
void FreeType__Set_Pixel_Sizes_Raw_fn(void** rawFace, int* w, int* h, float* scale, int* __retval)
{
    *__retval = FreeType::Set_Pixel_Sizes_Raw(*rawFace, *w, *h, scale);
}

// public static string Style_Name(Uno.IntPtr face) :586
void FreeType__Style_Name_fn(void** face, uString** __retval)
{
    *__retval = FreeType::Style_Name(*face);
}

// private static Uno.IntPtr Style_Name_Raw(Uno.IntPtr face) :592
void FreeType__Style_Name_Raw_fn(void** face, void** __retval)
{
    *__retval = FreeType::Style_Name_Raw(*face);
}

bool FreeType::_initialized_;
void* FreeType::_library_;

// public static void Activate_Size(Uno.IntPtr size) [static] :407
void FreeType::Activate_Size(void* size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Activate_Size(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Activate_Size_Raw(size));
}

// private static int Activate_Size_Raw(Uno.IntPtr size) [static] :413
int FreeType::Activate_Size_Raw(void* size)
{
    return FT_Activate_Size((FT_Size)size);
}

// public static int Ascender(Uno.IntPtr face) [static] :558
int FreeType::Ascender(void* face)
{
    return (int)((FT_Face)face)->size->metrics.ascender;
}

// public static void BGRAToRGBA(byte[] buffer) [static] :546
void FreeType::BGRAToRGBA(uArray* buffer)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "BGRAToRGBA(byte[])");

    for (int i = 0; i < uPtr(buffer)->Length(); i = i + 4)
    {
        uint8_t b = uPtr(buffer)->Item<uint8_t>(i);
        uint8_t r = buffer->Item<uint8_t>(i + 2);
        buffer->Item<uint8_t>(i) = r;
        buffer->Item<uint8_t>(i + 2) = b;
    }
}

// public static Uno.Content.Images.Bitmap Current_Glyph_Bitmap(Uno.IntPtr face) [static] :526
::g::Uno::Content::Images::Bitmap* FreeType::Current_Glyph_Bitmap(void* face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Current_Glyph_Bitmap(Uno.IntPtr)");
    ::g::Uno::Int2 size = FreeType::Current_Glyph_Bitmap_Size(face);

    if (FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(face))
    {
        int numBytes = (size.X * size.Y) * 4;
        uArray* data = uArray::New(::TYPES[0/*byte[]*/], numBytes);
        ::g::Fuse::Text::Implementation::Memory::Copy(data, FreeType::Current_Glyph_Bitmap_Buffer(face), numBytes);
        FreeType::BGRAToRGBA(data);
        return ::g::Uno::Content::Images::Bitmap::New1(size, 3, ::g::Uno::Buffer::New1(data));
    }
    else
    {
        int numBytes1 = size.X * size.Y;
        uArray* data1 = uArray::New(::TYPES[0/*byte[]*/], numBytes1);
        ::g::Fuse::Text::Implementation::Memory::Copy(data1, FreeType::Current_Glyph_Bitmap_Buffer(face), numBytes1);
        return ::g::Uno::Content::Images::Bitmap::New1(size, 1, ::g::Uno::Buffer::New1(data1));
    }
}

// private static Uno.IntPtr Current_Glyph_Bitmap_Buffer(Uno.IntPtr face) [static] :515
void* FreeType::Current_Glyph_Bitmap_Buffer(void* face)
{
    return (void*)((FT_Face)face)->glyph->bitmap.buffer;
}

// private static bool Current_Glyph_Bitmap_Buffer_Is_BGRA(Uno.IntPtr face) [static] :521
bool FreeType::Current_Glyph_Bitmap_Buffer_Is_BGRA(void* face)
{
    return ((FT_Face)face)->glyph->bitmap.pixel_mode == FT_PIXEL_MODE_BGRA;
}

// public static int2 Current_Glyph_Bitmap_Offset(Uno.IntPtr face) [static] :499
::g::Uno::Int2 FreeType::Current_Glyph_Bitmap_Offset(void* face)
{
    ::g::Uno::Int2 result = ::g::Uno::Int2__New1(0);
    FreeType::Current_Glyph_Bitmap_Offset_Raw(face, &result.X, &result.Y);
    return result;
}

// private static void Current_Glyph_Bitmap_Offset_Raw(Uno.IntPtr face, int& x, int& y) [static] :507
void FreeType::Current_Glyph_Bitmap_Offset_Raw(void* face, int* x, int* y)
{
    FT_Face f = (FT_Face)face;
    *x = f->glyph->bitmap_left;
    *y = f->glyph->bitmap_top;
}

// public static int2 Current_Glyph_Bitmap_Size(Uno.IntPtr face) [static] :485
::g::Uno::Int2 FreeType::Current_Glyph_Bitmap_Size(void* face)
{
    ::g::Uno::Int2 result = ::g::Uno::Int2__New1(0);
    FreeType::Current_Glyph_Bitmap_Size_Raw(face, &result.X, &result.Y);
    return result;
}

// private static void Current_Glyph_Bitmap_Size_Raw(Uno.IntPtr face, int& width, int& rows) [static] :493
void FreeType::Current_Glyph_Bitmap_Size_Raw(void* face, int* width, int* rows)
{
    *width = ((FT_Face)face)->glyph->bitmap.width;
    *rows = ((FT_Face)face)->glyph->bitmap.rows;
}

// public static int Descender(Uno.IntPtr face) [static] :564
int FreeType::Descender(void* face)
{
    return (int)((FT_Face)face)->size->metrics.descender;
}

// public static void Done_Face(Uno.IntPtr face) [static] :374
void FreeType::Done_Face(void* face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Done_Face(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Done_Face_Raw(face));
}

// private static int Done_Face_Raw(Uno.IntPtr face) [static] :380
int FreeType::Done_Face_Raw(void* face)
{
    return FT_Done_Face((FT_Face)face);
}

// public static void Done_Size(Uno.IntPtr size) [static] :396
void FreeType::Done_Size(void* size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Done_Size(Uno.IntPtr)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Done_Size_Raw(size));
}

// private static int Done_Size_Raw(Uno.IntPtr size) [static] :402
int FreeType::Done_Size_Raw(void* size)
{
    return FT_Done_Size((FT_Size)size);
}

// public static string Family_Name(Uno.IntPtr face) [static] :575
uString* FreeType::Family_Name(void* face)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FreeType::Family_Name_Raw(face));
}

// private static Uno.IntPtr Family_Name_Raw(Uno.IntPtr face) [static] :581
void* FreeType::Family_Name_Raw(void* face)
{
    return ((FT_Face)face)->family_name;
}

// public static int Height(Uno.IntPtr face) [static] :570
int FreeType::Height(void* face)
{
    return (int)((FT_Face)face)->size->metrics.height;
}

// private static void Init() [static] :316
void FreeType::Init()
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Init()");

    if (FreeType::_initialized_)
        return;

    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Init_FreeType(&FreeType::_library_));
    FreeType::_initialized_ = true;
}

// private static int Init_FreeType(Uno.IntPtr& library) [static] :333
int FreeType::Init_FreeType(void** library)
{
    return FT_Init_FreeType((FT_Library*)library);
}

// public static void Load_Glyph(Uno.IntPtr face, uint glyph, int flags) [static] :474
void FreeType::Load_Glyph(void* face, uint32_t glyph, int flags)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Load_Glyph(Uno.IntPtr,uint,int)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Load_Glyph_Raw(face, glyph, flags));
}

// private static int Load_Glyph_Raw(Uno.IntPtr face, uint glyph, int flags) [static] :480
int FreeType::Load_Glyph_Raw(void* face, uint32_t glyph, int flags)
{
    return FT_Load_Glyph((FT_Face)face, glyph, flags);
}

// public static void Load_Render_Glyph(Uno.IntPtr face, uint glyph) [static] :463
void FreeType::Load_Render_Glyph(void* face, uint32_t glyph)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Load_Render_Glyph(Uno.IntPtr,uint)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Load_Render_Glyph_Raw(face, glyph));
}

// private static int Load_Render_Glyph_Raw(Uno.IntPtr face, uint glyph) [static] :469
int FreeType::Load_Render_Glyph_Raw(void* face, uint32_t glyph)
{
    return FT_Load_Glyph((FT_Face)face, glyph, FT_LOAD_DEFAULT | FT_LOAD_RENDER | FT_LOAD_COLOR);
}

// public static void New_Face(string fileName, int index, Uno.IntPtr& face) [static] :355
void FreeType::New_Face(uString* fileName, int index, void** face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Face(string,int,Uno.IntPtr&)");
    uArray* cStr = ::g::Uno::Text::Utf8::GetBytes(fileName);
    int len = uPtr(cStr)->Length();
    uArray* ntCStr = uArray::New(::TYPES[0/*byte[]*/], len + 1);

    for (int i = 0; i < len; ++i)
        uPtr(ntCStr)->Item<uint8_t>(i) = uPtr(cStr)->Item<uint8_t>(i);

    ntCStr->Item<uint8_t>(len) = 0;
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Face_Raw(FreeType::Library(), ntCStr, index, face));
}

// private static int New_Face_Raw(Uno.IntPtr library, byte[] fileName, int index, Uno.IntPtr& face) [static] :369
int FreeType::New_Face_Raw(void* library, uArray* fileName, int index, void** face)
{
    return [] (void* library, uint8_t* fileName, int index, void** face) -> int
    {
        return FT_New_Face((FT_Library)library, (const char*)fileName, (FT_Long)index, (FT_Face*)face);
    } (library, (uint8_t*)(fileName == nullptr ? nullptr : fileName->Ptr()), index, face);
}

// public static void New_Memory_Face(byte[] buffer, int index, Uno.IntPtr& face) [static] :344
void FreeType::New_Memory_Face(uArray* buffer, int index, void** face)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Memory_Face(byte[],int,Uno.IntPtr&)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Memory_Face_Raw(FreeType::Library(), buffer, uPtr(buffer)->Length(), index, face));
}

// private static int New_Memory_Face_Raw(Uno.IntPtr library, byte[] buffer, int length, int index, Uno.IntPtr& face) [static] :350
int FreeType::New_Memory_Face_Raw(void* library, uArray* buffer, int length, int index, void** face)
{
    return [] (void* library, uint8_t* buffer, int length, int index, void** face) -> int
    {
        return FT_New_Memory_Face((FT_Library)library, (FT_Byte*)buffer, (FT_Long)length, (FT_Long)index, (FT_Face*)face);
    } (library, (uint8_t*)(buffer == nullptr ? nullptr : buffer->Ptr()), length, index, face);
}

// public static void New_Size(Uno.IntPtr face, Uno.IntPtr& size) [static] :385
void FreeType::New_Size(void* face, void** size)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "New_Size(Uno.IntPtr,Uno.IntPtr&)");
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::New_Size_Raw(face, size));
}

// private static int New_Size_Raw(Uno.IntPtr face, Uno.IntPtr& size) [static] :391
int FreeType::New_Size_Raw(void* face, void** size)
{
    return FT_New_Size((FT_Face)face, (FT_Size*)size);
}

// public static int Num_Faces(Uno.IntPtr face) [static] :598
int FreeType::Num_Faces(void* face)
{
    return (int)((FT_Face)face)->num_faces;
}

// public static int Num_Glyphs(Uno.IntPtr face) [static] :604
int FreeType::Num_Glyphs(void* face)
{
    return (int)((FT_Face)face)->num_glyphs;
}

// public static void Set_Pixel_Sizes(Uno.IntPtr face, int w, int h, float& scale) [static] :418
void FreeType::Set_Pixel_Sizes(void* face, int w, int h, float* scale)
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "Set_Pixel_Sizes(Uno.IntPtr,int,int,float&)");
    *scale = 1.0f;
    ::g::Fuse::Text::Implementation::FT_Error::Check(FreeType::Set_Pixel_Sizes_Raw(face, w, h, scale));
}

// private static int Set_Pixel_Sizes_Raw(Uno.IntPtr rawFace, int w, int h, float& scale) [static] :425
int FreeType::Set_Pixel_Sizes_Raw(void* rawFace, int w, int h, float* scale)
{
    *scale = 1.0f;
    FT_Face face = (FT_Face)rawFace;
    if (FT_IS_SCALABLE(face))
    {
    	return FT_Set_Pixel_Sizes(face, (FT_UInt)w, (FT_UInt)h);
    }
    else if (FT_HAS_FIXED_SIZES(face))
    {
    	w *= 64; // 26.6 fractional pixels
    	h *= 64;
    	int bestIndex = -1;
    	int bestDiff = INT_MAX;
    	for (int i = 0; i < face->num_fixed_sizes; ++i)
    	{
    		int w2 = (int)face->available_sizes[i].x_ppem;
    		int h2 = (int)face->available_sizes[i].y_ppem;
    		int xdiff = w - w2;
    		int ydiff = h - h2;
    		int diff = xdiff * xdiff + ydiff * ydiff;
    		if (diff < bestDiff)
    		{
    			*scale = h == 0
    				? (w == 0 ? 1.0f : (float)w / (float)w2)
    				: (float)h / (float)h2;
    			bestIndex = i;
    			bestDiff = diff;
    		}
    	}
    	if (bestIndex != -1)
    	{
    		return FT_Select_Size(face, bestIndex);
    	}
    }
    return 0x17; // Invalid pixel size
}

// public static string Style_Name(Uno.IntPtr face) [static] :586
uString* FreeType::Style_Name(void* face)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FreeType::Style_Name_Raw(face));
}

// private static Uno.IntPtr Style_Name_Raw(Uno.IntPtr face) [static] :592
void* FreeType::Style_Name_Raw(void* face)
{
    return ((FT_Face)face)->style_name;
}

// private static Uno.IntPtr get_Library() [static] :309
void* FreeType::Library()
{
    uStackFrame __("Fuse.Text.Implementation.FreeType", "get_Library()");
    FreeType::Init();
    return FreeType::_library_;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed extern class FreeTypeFont :742
// {
static void FreeTypeFont_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::Implementation::HarfbuzzFont_type, interface0));
    type->SetFields(5,
        uObject_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFont, _faceMutex), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFont, _ftFace), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFont, _ftSize), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFont, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFont, _scale), 0);
}

::g::Fuse::Text::Implementation::HarfbuzzFont_type* FreeTypeFont_typeof()
{
    static uSStrong< ::g::Fuse::Text::Implementation::HarfbuzzFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Implementation::HarfbuzzFont_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FreeTypeFont);
    options.TypeSize = sizeof(::g::Fuse::Text::Implementation::HarfbuzzFont_type);
    type = (::g::Fuse::Text::Implementation::HarfbuzzFont_type*)uClassType::New("Fuse.Text.Implementation.FreeTypeFont", options);
    type->fp_build_ = FreeTypeFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))FreeTypeFont__Dispose_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))FreeTypeFont__get_LineHeight_fn;
    type->fp_get_NumGlyphs = (void(*)(::g::Fuse::Text::Font*, int*))FreeTypeFont__get_NumGlyphs_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Text::Font*, int*))FreeTypeFont__get_PixelSize_fn;
    type->fp_Render = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*))FreeTypeFont__Render_fn;
    type->fp_get_Scale = (void(*)(::g::Fuse::Text::Implementation::HarfbuzzFont*, float*))FreeTypeFont__get_Scale_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int*, int*, uArray**))FreeTypeFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FreeTypeFont__Dispose_fn;
    return type;
}

// internal FreeTypeFont(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) :753
void FreeTypeFont__ctor_2_fn(FreeTypeFont* __this, void** ftFace, void** ftSize, int* pixelSize, float* scale)
{
    __this->ctor_2(*ftFace, *ftSize, *pixelSize, *scale);
}

// public override sealed float get_Ascender() :779
void FreeTypeFont__get_Ascender_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_Ascender()");
    float ret6;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
        return *__retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Ascender_fn(__this, &ret6), ret6), void();
    }
}

// public override sealed float get_Descender() :791
void FreeTypeFont__get_Descender_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_Descender()");
    float ret7;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
        return *__retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Descender_fn(__this, &ret7), ret7), void();
    }
}

// public override sealed void Dispose() :764
void FreeTypeFont__Dispose_fn(FreeTypeFont* __this)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Dispose()");
    ::g::Fuse::Text::Implementation::HarfbuzzFont__Dispose_fn(__this);
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (::g::Uno::IntPtr::op_Inequality(__this->_ftSize, ::g::Uno::IntPtr::Zero_))
        {
            ::g::Fuse::Text::Implementation::FreeType::Done_Size(__this->_ftSize);
            __this->_ftSize = ::g::Uno::IntPtr::Zero_;
        }
    }
}

// public override sealed float get_LineHeight() :803
void FreeTypeFont__get_LineHeight_fn(FreeTypeFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "get_LineHeight()");
    float ret8;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
        return *__retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__get_LineHeight_fn(__this, &ret8), ret8), void();
    }
}

// internal FreeTypeFont New(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) :753
void FreeTypeFont__New1_fn(void** ftFace, void** ftSize, int* pixelSize, float* scale, FreeTypeFont** __retval)
{
    *__retval = FreeTypeFont::New1(*ftFace, *ftSize, *pixelSize, *scale);
}

// public override sealed int get_NumGlyphs() :815
void FreeTypeFont__get_NumGlyphs_fn(FreeTypeFont* __this, int* __retval)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = ::g::Fuse::Text::Implementation::FreeType::Num_Glyphs(__this->_ftFace), void();
    }
}

// public override sealed int get_PixelSize() :745
void FreeTypeFont__get_PixelSize_fn(FreeTypeFont* __this, int* __retval)
{
    return *__retval = __this->_pixelSize, void();
}

// public override sealed Fuse.Text.RenderedGlyph Render(Fuse.Text.Glyph glyph) :826
void FreeTypeFont__Render_fn(FreeTypeFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Render(Fuse.Text.Glyph)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    float ret2;
    float ret3;
    float ret4;
    ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
    ::g::Fuse::Text::Implementation::FreeType::Load_Render_Glyph(__this->_ftFace, glyph_.Index);
    ::g::Uno::Content::Images::Bitmap* bitmap = ::g::Fuse::Text::Implementation::FreeType::Current_Glyph_Bitmap(__this->_ftFace);
    ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(::g::Fuse::Text::Implementation::FreeType::Current_Glyph_Bitmap_Offset(__this->_ftFace)), __this->Scale());
    return *__retval = ::g::Fuse::Text::RenderedGlyph__New1(bitmap, ::g::Uno::Float2__New2(offset.X, (((::g::Fuse::Text::Implementation::HarfbuzzFont__get_LineHeight_fn(__this, &ret2), ret2) - (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Ascender_fn(__this, &ret3), ret3)) - (::g::Fuse::Text::Implementation::HarfbuzzFont__get_Descender_fn(__this, &ret4), ret4)) - offset.Y), __this->Scale()), void();
}

// protected override sealed float get_Scale() :750
void FreeTypeFont__get_Scale_fn(FreeTypeFont* __this, float* __retval)
{
    return *__retval = __this->_scale, void();
}

// public override sealed Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :839
void FreeTypeFont__Shape_fn(FreeTypeFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    uArray* ret5;
    int fontIndex_ = *fontIndex;
    int dir_ = *dir;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Text::Implementation::FreeType::Activate_Size(__this->_ftSize);
        return *__retval = (::g::Fuse::Text::Implementation::HarfbuzzFont__Shape_fn(__this, text, uCRef<int>(fontIndex_), uCRef<int>(dir_), &ret5), ret5), void();
    }
}

// internal FreeTypeFont(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) [instance] :753
void FreeTypeFont::ctor_2(void* ftFace, void* ftSize, int pixelSize, float scale)
{
    _faceMutex = ::g::Uno::Object::New();
    ctor_1(::g::Fuse::Text::Implementation::Harfbuzz::ft_font_create(ftFace));
    ::g::Fuse::Text::Implementation::Harfbuzz::ft_font_set_default_load_flags(_hbFont);
    ::g::Fuse::Text::Implementation::Harfbuzz::ft_font_cached_set_funcs(_hbFont);
    _ftFace = ftFace;
    _ftSize = ftSize;
    _pixelSize = pixelSize;
    _scale = scale;
}

// internal FreeTypeFont New(Uno.IntPtr ftFace, Uno.IntPtr ftSize, int pixelSize, float scale) [static] :753
FreeTypeFont* FreeTypeFont::New1(void* ftFace, void* ftSize, int pixelSize, float scale)
{
    FreeTypeFont* obj1 = (FreeTypeFont*)uNew(FreeTypeFont_typeof());
    obj1->ctor_2(ftFace, ftSize, pixelSize, scale);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed extern class FreeTypeFontFace :624
// {
// static FreeTypeFontFace() :624
static void FreeTypeFontFace__cctor__fn(uType* __type)
{
    FreeTypeFontFace::_freeTypeMutex_ = ::g::Uno::Object::New();
}

static void FreeTypeFontFace_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FreeType: No matching face in font file");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFontFace, _faceBuffer), 0,
        uObject_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFontFace, _faceMutex), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Text::Implementation::FreeTypeFontFace, _ftFace), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Text::Implementation::FreeTypeFontFace::_freeTypeMutex_, uFieldFlagsStatic);
}

::g::Fuse::Text::FontFace_type* FreeTypeFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FreeTypeFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.Implementation.FreeTypeFontFace", options);
    type->fp_build_ = FreeTypeFontFace_build;
    type->fp_cctor_ = FreeTypeFontFace__cctor__fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))FreeTypeFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int*, ::g::Fuse::Text::Font**))FreeTypeFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FreeTypeFontFace__Dispose_fn;
    return type;
}

// public FreeTypeFontFace(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) :632
void FreeTypeFontFace__ctor_1_fn(FreeTypeFontFace* __this, uArray* buffer, int* index, uDelegate* stylePredicate)
{
    __this->ctor_1(buffer, *index, stylePredicate);
}

// public FreeTypeFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) :665
void FreeTypeFontFace__ctor_2_fn(FreeTypeFontFace* __this, uString* fileName, int* index, uDelegate* stylePredicate)
{
    __this->ctor_2(fileName, *index, stylePredicate);
}

// public override sealed void Dispose() :692
void FreeTypeFontFace__Dispose_fn(FreeTypeFontFace* __this)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", "Dispose()");
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (::g::Uno::IntPtr::op_Inequality(__this->_ftFace, ::g::Uno::IntPtr::Zero_))
        {
            ::g::Fuse::Text::Implementation::FreeType::Done_Face(__this->_ftFace);
            __this->_ftFace = ::g::Uno::IntPtr::Zero_;
        }
    }
}

// public string get_FamilyName() :712
void FreeTypeFontFace__get_FamilyName_fn(FreeTypeFontFace* __this, uString** __retval)
{
    *__retval = __this->FamilyName();
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int pixelSize) :728
void FreeTypeFontFace__GetOfPixelSizeInternal_fn(FreeTypeFontFace* __this, int* pixelSize, ::g::Fuse::Text::Font** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", "GetOfPixelSizeInternal(int)");
    int pixelSize_ = *pixelSize;
    ::g::Uno::Threading::Monitor::Enter(__this->_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        void* ftSize = ::g::Uno::IntPtr::Zero_;
        ::g::Fuse::Text::Implementation::FreeType::New_Size(__this->_ftFace, &ftSize);
        ::g::Fuse::Text::Implementation::FreeType::Activate_Size(ftSize);
        float scale;
        ::g::Fuse::Text::Implementation::FreeType::Set_Pixel_Sizes(__this->_ftFace, 0, pixelSize_, &scale);
        return *__retval = ::g::Fuse::Text::Implementation::FreeTypeFont::New1(__this->_ftFace, ftSize, pixelSize_, scale), void();
    }
}

// public FreeTypeFontFace New(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) :632
void FreeTypeFontFace__New1_fn(uArray* buffer, int* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval)
{
    *__retval = FreeTypeFontFace::New1(buffer, *index, stylePredicate);
}

// public FreeTypeFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) :665
void FreeTypeFontFace__New2_fn(uString* fileName, int* index, uDelegate* stylePredicate, FreeTypeFontFace** __retval)
{
    *__retval = FreeTypeFontFace::New2(fileName, *index, stylePredicate);
}

// public string get_StyleName() :721
void FreeTypeFontFace__get_StyleName_fn(FreeTypeFontFace* __this, uString** __retval)
{
    *__retval = __this->StyleName();
}

uSStrong<uObject*> FreeTypeFontFace::_freeTypeMutex_;

// public FreeTypeFontFace(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) [instance] :632
void FreeTypeFontFace::ctor_1(uArray* buffer, int index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", ".ctor(byte[],int,Uno.Predicate<string>)");
    bool ret3;
    bool ret4;
    _faceMutex = ::g::Uno::Object::New();
    ctor_();
    _faceBuffer = buffer;
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (index >= 0)
        {
            ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, index, &_ftFace);
            return;
        }

        ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, 0, &_ftFace);

        if (::g::Uno::Delegate::op_Inequality(stylePredicate, NULL) && !(uPtr(stylePredicate)->Invoke(&ret3, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret3))
        {
            int numFaces = ::g::Fuse::Text::Implementation::FreeType::Num_Faces(_ftFace);

            for (int i = 1; i < numFaces; ++i)
            {
                ::g::Fuse::Text::Implementation::FreeType::Done_Face(_ftFace);
                ::g::Fuse::Text::Implementation::FreeType::New_Memory_Face(buffer, i, &_ftFace);

                if ((uPtr(stylePredicate)->Invoke(&ret4, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret4))
                    return;
            }

            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"FreeType: N...*/]));
        }
    }
}

// public FreeTypeFontFace(string fileName, int index, Uno.Predicate<string> stylePredicate) [instance] :665
void FreeTypeFontFace::ctor_2(uString* fileName, int index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.Implementation.FreeTypeFontFace", ".ctor(string,int,Uno.Predicate<string>)");
    bool ret5;
    bool ret6;
    _faceMutex = ::g::Uno::Object::New();
    ctor_();
    ::g::Uno::Threading::Monitor::Enter(FreeTypeFontFace::_freeTypeMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(FreeTypeFontFace::_freeTypeMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (index >= 0)
        {
            ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, index, &_ftFace);
            return;
        }

        ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, 0, &_ftFace);

        if (::g::Uno::Delegate::op_Inequality(stylePredicate, NULL) && !(uPtr(stylePredicate)->Invoke(&ret5, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret5))
        {
            int numFaces = ::g::Fuse::Text::Implementation::FreeType::Num_Faces(_ftFace);

            for (int i = 1; i < numFaces; ++i)
            {
                ::g::Fuse::Text::Implementation::FreeType::Done_Face(_ftFace);
                ::g::Fuse::Text::Implementation::FreeType::New_Face(fileName, i, &_ftFace);

                if ((uPtr(stylePredicate)->Invoke(&ret6, 1, (uString*)::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace)), ret6))
                    return;
            }

            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"FreeType: N...*/]));
        }
    }
}

// public string get_FamilyName() [instance] :712
uString* FreeTypeFontFace::FamilyName()
{
    ::g::Uno::Threading::Monitor::Enter(_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return ::g::Fuse::Text::Implementation::FreeType::Family_Name(_ftFace);
    }
}

// public string get_StyleName() [instance] :721
uString* FreeTypeFontFace::StyleName()
{
    ::g::Uno::Threading::Monitor::Enter(_faceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_faceMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return ::g::Fuse::Text::Implementation::FreeType::Style_Name(_ftFace);
    }
}

// public FreeTypeFontFace New(byte[] buffer, int index, Uno.Predicate<string> stylePredicate) [static] :632
FreeTypeFontFace* FreeTypeFontFace::New1(uArray* buffer, int index, uDelegate* stylePredicate)
{
    FreeTypeFontFace* obj1 = (FreeTypeFontFace*)uNew(FreeTypeFontFace_typeof());
    obj1->ctor_1(buffer, index, stylePredicate);
    return obj1;
}

// public FreeTypeFontFace New(string fileName, int index, Uno.Predicate<string> stylePredicate) [static] :665
FreeTypeFontFace* FreeTypeFontFace::New2(uString* fileName, int index, uDelegate* stylePredicate)
{
    FreeTypeFontFace* obj2 = (FreeTypeFontFace*)uNew(FreeTypeFontFace_typeof());
    obj2->ctor_2(fileName, index, stylePredicate);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class FT_Error :269
// {
static void FT_Error_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FreeType error: ");
}

uClassType* FT_Error_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.FT_Error", options);
    type->fp_build_ = FT_Error_build;
    return type;
}

// public static void Check(int err) :271
void FT_Error__Check_fn(int* err)
{
    FT_Error::Check(*err);
}

// private static Uno.IntPtr ErrorCString(int err) :285
void FT_Error__ErrorCString_fn(int* err, void** __retval)
{
    *__retval = FT_Error::ErrorCString(*err);
}

// private static string ErrorString(int err) :279
void FT_Error__ErrorString_fn(int* err, uString** __retval)
{
    *__retval = FT_Error::ErrorString(*err);
}

// public static void Check(int err) [static] :271
void FT_Error::Check(int err)
{
    uStackFrame __("Fuse.Text.Implementation.FT_Error", "Check(int)");

    if (err != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[1/*"FreeType er...*/], FT_Error::ErrorString(err))));
}

// private static Uno.IntPtr ErrorCString(int err) [static] :285
void* FT_Error::ErrorCString(int err)
{
    #undef __FTERRORS_H__
    #define FT_ERRORDEF(e, v, s) case e: return (void*)s;
    #define FT_ERROR_START_LIST switch (err) {
    #define FT_ERROR_END_LIST default: return nullptr; }
    #include FT_ERRORS_H
}

// private static string ErrorString(int err) [static] :279
uString* FT_Error::ErrorString(int err)
{
    return ::g::Fuse::Text::Implementation::CString::ToString(FT_Error::ErrorCString(err));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class Harfbuzz :874
// {
static void Harfbuzz_build(uType* type)
{
}

uClassType* Harfbuzz_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.Harfbuzz", options);
    type->fp_build_ = Harfbuzz_build;
    return type;
}

// public static Uno.IntPtr buffer_create(Uno.IntPtr font, Fuse.Text.Substring text, bool ltr) :925
void Harfbuzz__buffer_create_fn(void** font, ::g::Fuse::Text::Substring* text, bool* ltr, void** __retval)
{
    *__retval = Harfbuzz::buffer_create(*font, text, *ltr);
}

// private static Uno.IntPtr buffer_create_Raw(Uno.IntPtr font, string text, int offset, int length, bool ltr) :931
void Harfbuzz__buffer_create_Raw_fn(void** font, uString* text, int* offset, int* length, bool* ltr, void** __retval)
{
    *__retval = Harfbuzz::buffer_create_Raw(*font, text, *offset, *length, *ltr);
}

// public static void buffer_destroy(Uno.IntPtr buffer) :951
void Harfbuzz__buffer_destroy_fn(void** buffer)
{
    Harfbuzz::buffer_destroy(*buffer);
}

// public static uint buffer_get_length(Uno.IntPtr buffer) :945
void Harfbuzz__buffer_get_length_fn(void** buffer, uint32_t* __retval)
{
    *__retval = Harfbuzz::buffer_get_length(*buffer);
}

// public static void face_destroy(Uno.IntPtr face) :920
void Harfbuzz__face_destroy_fn(void** face)
{
    Harfbuzz::face_destroy(*face);
}

// public static Uno.IntPtr font_create(Uno.IntPtr hbFace) :902
void Harfbuzz__font_create_fn(void** hbFace, void** __retval)
{
    *__retval = Harfbuzz::font_create(*hbFace);
}

// public static void font_destroy(Uno.IntPtr font) :908
void Harfbuzz__font_destroy_fn(void** font)
{
    Harfbuzz::font_destroy(*font);
}

// public static void font_get_h_extents(Uno.IntPtr font, float& ascender, float& descender, float& lineGap) :988
void Harfbuzz__font_get_h_extents_fn(void** font, float* ascender, float* descender, float* lineGap)
{
    Harfbuzz::font_get_h_extents(*font, ascender, descender, lineGap);
}

// public static void font_set_scale(Uno.IntPtr hbFont, int x_scale, int y_scale) :914
void Harfbuzz__font_set_scale_fn(void** hbFont, int* x_scale, int* y_scale)
{
    Harfbuzz::font_set_scale(*hbFont, *x_scale, *y_scale);
}

// public static void ft_font_cached_set_funcs(Uno.IntPtr hbFont) :890
void Harfbuzz__ft_font_cached_set_funcs_fn(void** hbFont)
{
    Harfbuzz::ft_font_cached_set_funcs(*hbFont);
}

// public static Uno.IntPtr ft_font_create(Uno.IntPtr face) :877
void Harfbuzz__ft_font_create_fn(void** face, void** __retval)
{
    *__retval = Harfbuzz::ft_font_create(*face);
}

// public static void ft_font_set_default_load_flags(Uno.IntPtr hbFont) :884
void Harfbuzz__ft_font_set_default_load_flags_fn(void** hbFont)
{
    Harfbuzz::ft_font_set_default_load_flags(*hbFont);
}

// public static void get_shape_data(Uno.IntPtr font, Uno.IntPtr buffer, byte[] output) :957
void Harfbuzz__get_shape_data_fn(void** font, void** buffer, uArray* output)
{
    Harfbuzz::get_shape_data(*font, *buffer, output);
}

// public static Uno.IntPtr buffer_create(Uno.IntPtr font, Fuse.Text.Substring text, bool ltr) [static] :925
void* Harfbuzz::buffer_create(void* font, ::g::Fuse::Text::Substring* text, bool ltr)
{
    uStackFrame __("Fuse.Text.Implementation.Harfbuzz", "buffer_create(Uno.IntPtr,Fuse.Text.Substring,bool)");
    return Harfbuzz::buffer_create_Raw(font, uPtr(text)->_parent, uPtr(text)->_start, uPtr(text)->Length, ltr);
}

// private static Uno.IntPtr buffer_create_Raw(Uno.IntPtr font, string text, int offset, int length, bool ltr) [static] :931
void* Harfbuzz::buffer_create_Raw(void* font, uString* text, int offset, int length, bool ltr)
{
    return [] (void* font, const char16_t* text, int offset, int length, bool ltr) -> void*
    {
        hb_buffer_t* buffer = hb_buffer_create();
        hb_buffer_pre_allocate(buffer, (unsigned int)length);
        
        hb_buffer_add_utf16(buffer, (uint16_t*)(text + offset), length, 0, -1);
        hb_buffer_set_direction(buffer, ltr ? HB_DIRECTION_LTR : HB_DIRECTION_RTL);
        hb_buffer_guess_segment_properties(buffer);
        hb_shape((hb_font_t*)font, buffer, NULL, 0);
        
        return (void*)buffer;
    } (font, (char16_t*)(text == nullptr ? nullptr : text->Ptr()), offset, length, ltr);
}

// public static void buffer_destroy(Uno.IntPtr buffer) [static] :951
void Harfbuzz::buffer_destroy(void* buffer)
{
    hb_buffer_destroy((hb_buffer_t*)buffer);
}

// public static uint buffer_get_length(Uno.IntPtr buffer) [static] :945
uint32_t Harfbuzz::buffer_get_length(void* buffer)
{
    return hb_buffer_get_length((hb_buffer_t*)buffer);
}

// public static void face_destroy(Uno.IntPtr face) [static] :920
void Harfbuzz::face_destroy(void* face)
{
    hb_face_destroy((hb_face_t*)face);
}

// public static Uno.IntPtr font_create(Uno.IntPtr hbFace) [static] :902
void* Harfbuzz::font_create(void* hbFace)
{
    return hb_font_create((hb_face_t*)hbFace);
}

// public static void font_destroy(Uno.IntPtr font) [static] :908
void Harfbuzz::font_destroy(void* font)
{
    hb_font_destroy((hb_font_t*)font);
}

// public static void font_get_h_extents(Uno.IntPtr font, float& ascender, float& descender, float& lineGap) [static] :988
void Harfbuzz::font_get_h_extents(void* font, float* ascender, float* descender, float* lineGap)
{
    hb_font_extents_t extents;
    hb_font_get_h_extents((hb_font_t*)font, &extents);
    *ascender = extents.ascender / 64.f;
    *descender = - extents.descender / 64.f;
    *lineGap = extents.line_gap / 64.f;
}

// public static void font_set_scale(Uno.IntPtr hbFont, int x_scale, int y_scale) [static] :914
void Harfbuzz::font_set_scale(void* hbFont, int x_scale, int y_scale)
{
    hb_font_set_scale((hb_font_t*)hbFont, x_scale, y_scale);
}

// public static void ft_font_cached_set_funcs(Uno.IntPtr hbFont) [static] :890
void Harfbuzz::ft_font_cached_set_funcs(void* hbFont)
{
    hb_ft_font_cached_set_funcs((hb_font_t*)hbFont);
}

// public static Uno.IntPtr ft_font_create(Uno.IntPtr face) [static] :877
void* Harfbuzz::ft_font_create(void* face)
{
    hb_font_t* result = hb_ft_font_create((FT_Face)face, NULL);
    return result;
}

// public static void ft_font_set_default_load_flags(Uno.IntPtr hbFont) [static] :884
void Harfbuzz::ft_font_set_default_load_flags(void* hbFont)
{
    hb_ft_font_set_load_flags((hb_font_t*)hbFont, FT_LOAD_DEFAULT);
}

// public static void get_shape_data(Uno.IntPtr font, Uno.IntPtr buffer, byte[] output) [static] :957
void Harfbuzz::get_shape_data(void* font, void* buffer, uArray* output)
{
    [] (void* font, void* buffer, uint8_t* output) -> void
    {
        unsigned int glyphCount = hb_buffer_get_length((hb_buffer_t*)buffer);
        hb_glyph_info_t* glyphInfo = hb_buffer_get_glyph_infos((hb_buffer_t*)buffer, nullptr);
        hb_glyph_position_t* glyphPos = hb_buffer_get_glyph_positions((hb_buffer_t*)buffer, nullptr);
        
        struct
        {
        	uint32_t codepoint;
        	uint32_t cluster;
        	float x_advance; float y_advance;
        	float x_offset; float y_offset;
        } current;
        
        for (int i = 0; i < glyphCount; ++i)
        {
        	hb_glyph_info_t info = glyphInfo[i];
        	hb_glyph_position_t pos = glyphPos[i];
        
        	current.codepoint = info.codepoint;
        	current.cluster = info.cluster;
        	current.x_advance = pos.x_advance / 64.f;
        	current.y_advance = pos.y_advance / 64.f;
        	current.x_offset = pos.x_offset / 64.f;
        	current.y_offset = pos.y_offset / 64.f;
        
        	memcpy(output + sizeof(current) * i, &current, sizeof(current));
        }
    } (font, buffer, (uint8_t*)(output == nullptr ? nullptr : output->Ptr()));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal abstract extern class HarfbuzzFont :1007
// {
static void HarfbuzzFont_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Text::PositionedGlyph_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HarfbuzzFont_type, interface0));
    type->SetFields(4,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Text::Implementation::HarfbuzzFont, _hbFont), 0);
}

HarfbuzzFont_type* HarfbuzzFont_typeof()
{
    static uSStrong<HarfbuzzFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Font_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HarfbuzzFont);
    options.TypeSize = sizeof(HarfbuzzFont_type);
    type = (HarfbuzzFont_type*)uClassType::New("Fuse.Text.Implementation.HarfbuzzFont", options);
    type->fp_build_ = HarfbuzzFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))HarfbuzzFont__Dispose_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))HarfbuzzFont__get_LineHeight_fn;
    type->fp_get_Scale = HarfbuzzFont__get_Scale_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int*, int*, uArray**))HarfbuzzFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HarfbuzzFont__Dispose_fn;
    return type;
}

// internal HarfbuzzFont(Uno.IntPtr hbFont) :1012
void HarfbuzzFont__ctor_1_fn(HarfbuzzFont* __this, void** hbFont)
{
    __this->ctor_1(*hbFont);
}

// public override float get_Ascender() :1029
void HarfbuzzFont__get_Ascender_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = ascender * __this->Scale(), void();
}

// public override float get_Descender() :1039
void HarfbuzzFont__get_Descender_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = descender * __this->Scale(), void();
}

// public override void Dispose() :1017
void HarfbuzzFont__Dispose_fn(HarfbuzzFont* __this)
{
    ::g::Fuse::Text::Font__Dispose_fn(__this);

    if (::g::Uno::IntPtr::op_Inequality(__this->_hbFont, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Text::Implementation::Harfbuzz::font_destroy(__this->_hbFont);
        __this->_hbFont = ::g::Uno::IntPtr::Zero_;
    }
}

// public override float get_LineHeight() :1050
void HarfbuzzFont__get_LineHeight_fn(HarfbuzzFont* __this, float* __retval)
{
    float ascender = 0.0f;
    float descender = 0.0f;
    float lineGap = 0.0f;
    ::g::Fuse::Text::Implementation::Harfbuzz::font_get_h_extents(__this->_hbFont, &ascender, &descender, &lineGap);
    return *__retval = ((ascender + descender) + lineGap) * __this->Scale(), void();
}

// protected virtual float get_Scale() :1046
void HarfbuzzFont__get_Scale_fn(HarfbuzzFont* __this, float* __retval)
{
    return *__retval = 1.0f, void();
}

// public override Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :1058
void HarfbuzzFont__Shape_fn(HarfbuzzFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.Implementation.HarfbuzzFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    int dir_ = *dir;
    int fontIndex_ = *fontIndex;
    void* buffer = ::g::Fuse::Text::Implementation::Harfbuzz::buffer_create(__this->_hbFont, text, dir_ == 0);
    int len = (int)::g::Fuse::Text::Implementation::Harfbuzz::buffer_get_length(buffer);
    int stride = 24;
    uArray* shapeData = uArray::New(::TYPES[0/*byte[]*/], len * stride);
    ::g::Fuse::Text::Implementation::Harfbuzz::get_shape_data(__this->_hbFont, buffer, shapeData);
    uArray* result = uArray::New(::TYPES[1/*Fuse.Text.PositionedGlyph[]*/], len);
    bool littleEndian = true;

    for (int i = 0; i < len; ++i)
    {
        int pos = i * stride;
        uint32_t codepoint = ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(shapeData, pos, littleEndian);
        pos = pos + 4;
        uint32_t cluster = ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(shapeData, pos, littleEndian);
        pos = pos + 4;
        float a1 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float a2 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float o1 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        float o2 = ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(shapeData, pos, littleEndian);
        pos = pos + 4;
        ::g::Uno::Float2 advance = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(__this->Scale(), ::g::Uno::Float2__New2(1.0f, -1.0f)), ::g::Uno::Float2__New2(a1, a2));
        ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply(__this->Scale(), ::g::Uno::Float2__New2(1.0f, -1.0f)), ::g::Uno::Float2__New2(o1, o2));
        uPtr(result)->Item< ::g::Fuse::Text::PositionedGlyph>(i) = ::g::Fuse::Text::PositionedGlyph__New1(::g::Fuse::Text::Glyph__New1(fontIndex_, codepoint), advance, offset, (int)cluster);
    }

    ::g::Fuse::Text::Implementation::Harfbuzz::buffer_destroy(buffer);
    return *__retval = result, void();
}

// internal HarfbuzzFont(Uno.IntPtr hbFont) [instance] :1012
void HarfbuzzFont::ctor_1(void* hbFont)
{
    ctor_();
    _hbFont = hbFont;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class JavaLineBreaks :1231
// {
static void JavaLineBreaks_build(uType* type)
{
}

uClassType* JavaLineBreaks_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.JavaLineBreaks", options);
    type->fp_build_ = JavaLineBreaks_build;
    return type;
}

// private static void CopyLineBreaks(string text, Java.Object outByteBufferHandle) :1241
void JavaLineBreaks__CopyLineBreaks_fn(uString* text, ::g::Java::Object* outByteBufferHandle)
{
    JavaLineBreaks::CopyLineBreaks(text, outByteBufferHandle);
}

// private static Java.Object DirectBufferFromUnoByteBuffer(byte[] byteArray) :1259
void JavaLineBreaks__DirectBufferFromUnoByteBuffer_fn(uArray* byteArray, ::g::Java::Object** __retval)
{
    *__retval = JavaLineBreaks::DirectBufferFromUnoByteBuffer(byteArray);
}

// public static Fuse.Text.Implementation.BitArray GetSoftLineBreaks(Fuse.Text.Substring text) :1233
void JavaLineBreaks__GetSoftLineBreaks_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval)
{
    *__retval = JavaLineBreaks::GetSoftLineBreaks(text);
}

// private static void CopyLineBreaks(string text, Java.Object outByteBufferHandle) [static] :1241
void JavaLineBreaks::CopyLineBreaks(uString* text, ::g::Java::Object* outByteBufferHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CopyLineBreaks278", "(Ljava/lang/String;Ljava/lang/Object;)V");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        ::g::Java::Object* _uoutByteBufferHandle=outByteBufferHandle;
        jobject _outByteBufferHandle = (_uoutByteBufferHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uoutByteBufferHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_text,_outByteBufferHandle);
        
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        if (_outByteBufferHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_outByteBufferHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object DirectBufferFromUnoByteBuffer(byte[] byteArray) [static] :1259
::g::Java::Object* JavaLineBreaks::DirectBufferFromUnoByteBuffer(uArray* byteArray)
{
    return ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::ByteBuffer::NewDirectByteBuffer(byteArray), false, false);
}

// public static Fuse.Text.Implementation.BitArray GetSoftLineBreaks(Fuse.Text.Substring text) [static] :1233
::g::Fuse::Text::Implementation::BitArray* JavaLineBreaks::GetSoftLineBreaks(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Implementation.JavaLineBreaks", "GetSoftLineBreaks(Fuse.Text.Substring)");
    ::g::Fuse::Text::Implementation::BitArray* result = ::g::Fuse::Text::Implementation::BitArray::New1(uPtr(text)->Length + 1);
    JavaLineBreaks::CopyLineBreaks(text->ToString(), JavaLineBreaks::DirectBufferFromUnoByteBuffer(result->Data));
    return result;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class Memory :1490
// {
static void Memory_build(uType* type)
{
}

uClassType* Memory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Implementation.Memory", options);
    type->fp_build_ = Memory_build;
    return type;
}

// public static void Copy(byte[] dst, Uno.IntPtr src, int len) :1493
void Memory__Copy_fn(uArray* dst, void** src, int* len)
{
    Memory::Copy(dst, *src, *len);
}

// public static void Copy(byte[] dst, Uno.IntPtr src, int len) [static] :1493
void Memory::Copy(uArray* dst, void* src, int len)
{
    [] (uint8_t* dst, void* src, int len) -> void
    {
        ::memcpy(dst, src, len);
    } ((uint8_t*)(dst == nullptr ? nullptr : dst->Ptr()), src, len);
}
// }

}}}} // ::g::Fuse::Text::Implementation
