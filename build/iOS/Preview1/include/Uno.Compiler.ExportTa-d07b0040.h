// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/compiler/exporttargetinterop/foreign/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <ObjC.Object.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{struct ForeignDataView;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// public sealed extern class ForeignDataView :109
// {
uType* ForeignDataView_typeof();
void ForeignDataView__ctor_2_fn(ForeignDataView* __this);
void ForeignDataView__ctor_3_fn(ForeignDataView* __this, uArray* data);
void ForeignDataView__ctor_4_fn(ForeignDataView* __this, uArray* data);
void ForeignDataView__ctor_5_fn(ForeignDataView* __this, ::g::Uno::Buffer* buffer);
void ForeignDataView__Create1_fn(uArray* unoArray, ForeignDataView** __retval);
void ForeignDataView__Create2_fn(uArray* unoArray, ForeignDataView** __retval);
void ForeignDataView__Create3_fn(::g::Uno::Buffer* unoBuffer, ForeignDataView** __retval);
void ForeignDataView__CreateNSDataFromByteArray_fn(void** rawUnoArray, ::g::ObjC::Object** __retval);
void ForeignDataView__New3_fn(ForeignDataView** __retval);
void ForeignDataView__New4_fn(uArray* data, ForeignDataView** __retval);
void ForeignDataView__New5_fn(uArray* data, ForeignDataView** __retval);
void ForeignDataView__New6_fn(::g::Uno::Buffer* buffer, ForeignDataView** __retval);

struct ForeignDataView : ::g::ObjC::Object
{
    void ctor_2();
    void ctor_3(uArray* data);
    void ctor_4(uArray* data);
    void ctor_5(::g::Uno::Buffer* buffer);
    static ForeignDataView* Create1(uArray* unoArray);
    static ForeignDataView* Create2(uArray* unoArray);
    static ForeignDataView* Create3(::g::Uno::Buffer* unoBuffer);
    static ::g::ObjC::Object* CreateNSDataFromByteArray(void* rawUnoArray);
    static ForeignDataView* New3();
    static ForeignDataView* New4(uArray* data);
    static ForeignDataView* New5(uArray* data);
    static ForeignDataView* New6(::g::Uno::Buffer* buffer);
};
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
