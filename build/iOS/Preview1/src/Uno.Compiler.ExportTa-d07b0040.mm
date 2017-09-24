// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/compiler/exporttargetinterop/foreign/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Foundation/Foundation.h>
#include <ObjC.ID.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-d07b0040.h>
#include <Uno.IntPtr.h>
#include <Uno.SByte.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// public sealed extern class ForeignDataView :109
// {
static void ForeignDataView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data");
    ::STRINGS[1] = uString::Const("buffer");
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("Create", NULL, (void*)ForeignDataView__Create1_fn, 0, true, type, 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Create", NULL, (void*)ForeignDataView__Create2_fn, 0, true, type, 1, ::g::Uno::SByte_typeof()->Array()),
        new uFunction("Create", NULL, (void*)ForeignDataView__Create3_fn, 0, true, type, 1, ::g::Uno::Buffer_typeof()));
}

uType* ForeignDataView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::ObjC::Object_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ForeignDataView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.ForeignDataView", options);
    type->fp_build_ = ForeignDataView_build;
    type->fp_ctor_ = (void*)ForeignDataView__New3_fn;
    return type;
}

// private ForeignDataView() :111
void ForeignDataView__ctor_2_fn(ForeignDataView* __this)
{
    __this->ctor_2();
}

// private ForeignDataView(byte[] data) :113
void ForeignDataView__ctor_3_fn(ForeignDataView* __this, uArray* data)
{
    __this->ctor_3(data);
}

// private ForeignDataView(sbyte[] data) :120
void ForeignDataView__ctor_4_fn(ForeignDataView* __this, uArray* data)
{
    __this->ctor_4(data);
}

// private ForeignDataView(Uno.Buffer buffer) :127
void ForeignDataView__ctor_5_fn(ForeignDataView* __this, ::g::Uno::Buffer* buffer)
{
    __this->ctor_5(buffer);
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(byte[] unoArray) :134
void ForeignDataView__Create1_fn(uArray* unoArray, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::Create1(unoArray);
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(sbyte[] unoArray) :139
void ForeignDataView__Create2_fn(uArray* unoArray, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::Create2(unoArray);
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(Uno.Buffer unoBuffer) :144
void ForeignDataView__Create3_fn(::g::Uno::Buffer* unoBuffer, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::Create3(unoBuffer);
}

// private static ObjC.Object CreateNSDataFromByteArray(Uno.IntPtr rawUnoArray) :150
void ForeignDataView__CreateNSDataFromByteArray_fn(void** rawUnoArray, ::g::ObjC::Object** __retval)
{
    *__retval = ForeignDataView::CreateNSDataFromByteArray(*rawUnoArray);
}

// private ForeignDataView New() :111
void ForeignDataView__New3_fn(ForeignDataView** __retval)
{
    *__retval = ForeignDataView::New3();
}

// private ForeignDataView New(byte[] data) :113
void ForeignDataView__New4_fn(uArray* data, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::New4(data);
}

// private ForeignDataView New(sbyte[] data) :120
void ForeignDataView__New5_fn(uArray* data, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::New5(data);
}

// private ForeignDataView New(Uno.Buffer buffer) :127
void ForeignDataView__New6_fn(::g::Uno::Buffer* buffer, ForeignDataView** __retval)
{
    *__retval = ForeignDataView::New6(buffer);
}

// private ForeignDataView() [instance] :111
void ForeignDataView::ctor_2()
{
    ctor_();
}

// private ForeignDataView(byte[] data) [instance] :113
void ForeignDataView::ctor_3(uArray* data)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.ForeignDataView", ".ctor(byte[])");
    ctor_();

    if (data == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"data"*/]));

    Handle = uPtr(ForeignDataView::CreateNSDataFromByteArray(data))->Handle;
}

// private ForeignDataView(sbyte[] data) [instance] :120
void ForeignDataView::ctor_4(uArray* data)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.ForeignDataView", ".ctor(sbyte[])");
    ctor_();

    if (data == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"data"*/]));

    Handle = uPtr(ForeignDataView::CreateNSDataFromByteArray(data))->Handle;
}

// private ForeignDataView(Uno.Buffer buffer) [instance] :127
void ForeignDataView::ctor_5(::g::Uno::Buffer* buffer)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.ForeignDataView", ".ctor(Uno.Buffer)");
    ctor_();

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"buffer"*/]));

    Handle = uPtr(ForeignDataView::CreateNSDataFromByteArray(uPtr(buffer)->GetHandle()))->Handle;
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(byte[] unoArray) [static] :134
ForeignDataView* ForeignDataView::Create1(uArray* unoArray)
{
    return ForeignDataView::New4(unoArray);
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(sbyte[] unoArray) [static] :139
ForeignDataView* ForeignDataView::Create2(uArray* unoArray)
{
    return ForeignDataView::New5(unoArray);
}

// public static Uno.Compiler.ExportTargetInterop.ForeignDataView Create(Uno.Buffer unoBuffer) [static] :144
ForeignDataView* ForeignDataView::Create3(::g::Uno::Buffer* unoBuffer)
{
    return ForeignDataView::New6(unoBuffer);
}

// private static ObjC.Object CreateNSDataFromByteArray(Uno.IntPtr rawUnoArray) [static] :150
::g::ObjC::Object* ForeignDataView::CreateNSDataFromByteArray(void* rawUnoArray)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (void* rawUnoArray) -> ::id
        {
            auto unoArray = (uArray*)rawUnoArray;
            ::uRetain(unoArray);
            return [[::NSData alloc]
                initWithBytesNoCopy:unoArray->Ptr()
                length:(NSUInteger)unoArray->Length()
                deallocator:^(void* bytes, NSUInteger length)
                {
                    ::uRelease(unoArray);
                }];
        } (rawUnoArray));
        
    }
    
}

// private ForeignDataView New() [static] :111
ForeignDataView* ForeignDataView::New3()
{
    ForeignDataView* obj1 = (ForeignDataView*)uNew(ForeignDataView_typeof());
    obj1->ctor_2();
    return obj1;
}

// private ForeignDataView New(byte[] data) [static] :113
ForeignDataView* ForeignDataView::New4(uArray* data)
{
    ForeignDataView* obj2 = (ForeignDataView*)uNew(ForeignDataView_typeof());
    obj2->ctor_3(data);
    return obj2;
}

// private ForeignDataView New(sbyte[] data) [static] :120
ForeignDataView* ForeignDataView::New5(uArray* data)
{
    ForeignDataView* obj3 = (ForeignDataView*)uNew(ForeignDataView_typeof());
    obj3->ctor_4(data);
    return obj3;
}

// private ForeignDataView New(Uno.Buffer buffer) [static] :127
ForeignDataView* ForeignDataView::New6(::g::Uno::Buffer* buffer)
{
    ForeignDataView* obj4 = (ForeignDataView*)uNew(ForeignDataView_typeof());
    obj4->ctor_5(buffer);
    return obj4;
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
