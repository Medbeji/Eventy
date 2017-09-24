// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.IntPtr.h>
#include <Uno.Runtime.InteropSe-4769ead5.h>
#include <Uno.Runtime.InteropSe-e0f0cdcd.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/runtime/interopservices/$.uno
// ----------------------------------------------------------------------------------------------------------------------

// public struct GCHandle :9
// {
static void GCHandle_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::Runtime::InteropServices::GCHandle, _Target), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Alloc", NULL, (void*)GCHandle__Alloc_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("Alloc", NULL, (void*)GCHandle__Alloc1_fn, 0, true, type, 2, uObject_typeof(), ::g::Uno::Runtime::InteropServices::GCHandleType_typeof()),
        new uFunction("Free", NULL, (void*)GCHandle__Free_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("FromIntPtr", NULL, (void*)GCHandle__FromIntPtr_fn, 0, true, type, 1, ::g::Uno::IntPtr_typeof()),
        new uFunction("get_Target", NULL, (void*)GCHandle__get_Target_fn, 0, false, uObject_typeof(), 0),
        new uFunction("ToIntPtr", NULL, (void*)GCHandle__ToIntPtr_fn, 0, true, ::g::Uno::IntPtr_typeof(), 1, type));
}

uStructType* GCHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(GCHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.InteropServices.GCHandle", options);
    type->fp_build_ = GCHandle_build;
    return type;
}

// private extern GCHandle(object target) :13
void GCHandle__ctor__fn(GCHandle* __this, uObject* target)
{
    __this->ctor_(target);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target) :18
void GCHandle__Alloc_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc(target);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) :23
void GCHandle__Alloc1_fn(uObject* target, int* type, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc1(target, *type);
}

// public void Free() :37
void GCHandle__Free_fn(GCHandle* __this)
{
    __this->Free();
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr) :50
void GCHandle__FromIntPtr_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__FromIntPtr(*ptr);
}

// private extern GCHandle New(object target) :13
void GCHandle__New1_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__New1(target);
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr) :71
void GCHandle__op_Explicit_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__op_Explicit(*ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle) :72
void GCHandle__op_Explicit1_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__op_Explicit1(*handle);
}

// public generated object get_Target() :11
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(object value) :11
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value)
{
    __this->Target(value);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle) :61
void GCHandle__ToIntPtr_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__ToIntPtr(*handle);
}

// private extern GCHandle(object target) [instance] :13
void GCHandle::ctor_(uObject* target)
{
    Target(target);
}

// public void Free() [instance] :37
void GCHandle::Free()
{
    ::uRelease(Target());
}

// public generated object get_Target() [instance] :11
uObject* GCHandle::Target()
{
    return _Target;
}

// private generated void set_Target(object value) [instance] :11
void GCHandle::Target(uObject* value)
{
    _Target = value;
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target) [static] :18
GCHandle GCHandle__Alloc(uObject* target)
{
    return GCHandle__Alloc1(target, 2);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) [static] :23
GCHandle GCHandle__Alloc1(uObject* target, int type)
{
    ::uRetain(target);
    return GCHandle__New1(target);
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr) [static] :50
GCHandle GCHandle__FromIntPtr(void* ptr)
{
    uObject* obj = (uObject*)ptr;
    return GCHandle__New1(obj);
}

// private extern GCHandle New(object target) [static] :13
GCHandle GCHandle__New1(uObject* target)
{
    GCHandle obj1;
    obj1.ctor_(target);
    return obj1;
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr) [static] :71
GCHandle GCHandle__op_Explicit(void* ptr)
{
    return GCHandle__FromIntPtr(ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static] :72
void* GCHandle__op_Explicit1(GCHandle handle)
{
    return GCHandle__ToIntPtr(handle);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static] :61
void* GCHandle__ToIntPtr(GCHandle handle)
{
    return handle.Target();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/runtime/interopservices/$.uno
// ----------------------------------------------------------------------------------------------------------------------

// public enum GCHandleType :84
uEnumType* GCHandleType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.InteropServices.GCHandleType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 2LL,
        "Pinned", 3LL);
    return type;
}

}}}} // ::g::Uno::Runtime::InteropServices
