// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/runtime/interopservices/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace InteropServices{struct GCHandle;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// public struct GCHandle :9
// {
uStructType* GCHandle_typeof();
void GCHandle__ctor__fn(GCHandle* __this, uObject* target);
void GCHandle__Alloc_fn(uObject* target, GCHandle* __retval);
void GCHandle__Alloc1_fn(uObject* target, int* type, GCHandle* __retval);
void GCHandle__Free_fn(GCHandle* __this);
void GCHandle__FromIntPtr_fn(void** ptr, GCHandle* __retval);
void GCHandle__New1_fn(uObject* target, GCHandle* __retval);
void GCHandle__op_Explicit_fn(void** ptr, GCHandle* __retval);
void GCHandle__op_Explicit1_fn(GCHandle* handle, void** __retval);
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval);
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value);
void GCHandle__ToIntPtr_fn(GCHandle* handle, void** __retval);

struct GCHandle
{
    uStrong<uObject*> _Target;

    void ctor_(uObject* target);
    void Free();
    uObject* Target();
    void Target(uObject* value);
};

GCHandle GCHandle__Alloc(uObject* target);
GCHandle GCHandle__Alloc1(uObject* target, int type);
GCHandle GCHandle__FromIntPtr(void* ptr);
GCHandle GCHandle__New1(uObject* target);
GCHandle GCHandle__op_Explicit(void* ptr);
void* GCHandle__op_Explicit1(GCHandle handle);
void* GCHandle__ToIntPtr(GCHandle handle);
// }

}}}} // ::g::Uno::Runtime::InteropServices
