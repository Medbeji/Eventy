// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.ArrayHandle.h>
#include <Fuse.Scripting.V8.Aut-dcd881e8.h>
#include <Fuse.Scripting.V8.Con-de81fe14.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Deb-65a3f8ed.h>
#include <Fuse.Scripting.V8.Deb-7a245152.h>
#include <Fuse.Scripting.V8.Deb-84bda6f7.h>
#include <Fuse.Scripting.V8.Deb-9f731e20.h>
#include <Fuse.Scripting.V8.Debugger.h>
#include <Fuse.Scripting.V8.Error.h>
#include <Fuse.Scripting.V8.Function.h>
#include <Fuse.Scripting.V8.Handle.h>
#include <Fuse.Scripting.V8.Mar-7db1c341.h>
#include <Fuse.Scripting.V8.Marshaller.h>
#include <Fuse.Scripting.V8.Object.h>
#include <Fuse.Scripting.V8.Sim-16bddfa6.h>
#include <Fuse.Scripting.V8.Sim-2c5af4ca.h>
#include <Fuse.Scripting.V8.Sim-2cabf98b.h>
#include <Fuse.Scripting.V8.Sim-74518142.h>
#include <Fuse.Scripting.V8.Sim-7fe2f38b.h>
#include <Fuse.Scripting.V8.Sim-8e6db8ec.h>
#include <Fuse.Scripting.V8.Sim-957688e3.h>
#include <Fuse.Scripting.V8.Sim-9a8dd579.h>
#include <Fuse.Scripting.V8.Sim-a28c05c4.h>
#include <Fuse.Scripting.V8.Sim-bff391a1.h>
#include <Fuse.Scripting.V8.Sim-d54ebc8a.h>
#include <Fuse.Scripting.V8.Sim-e23d0cc2.h>
#include <Fuse.Scripting.V8.Sim-f359fae.h>
#include <Fuse.Scripting.V8.Simple.Debug.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.V8S-275253a8.h>
#include <Fuse.Scripting.V8.V8S-919be618.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.Runtime.InteropSe-e0f0cdcd.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispat-6494c48e.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Type.h>
#include <Uno.UX.Selector.h>
#undef GetMessage
static uString* STRINGS[29];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Array :9
// {
// ~Array() :28
static void Array__Finalize_fn(Array* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "Finalize()");
    ::JSContext* cxt = (__this->_context == NULL) ? uDefault< ::JSContext*>() : uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(__this->_array), cxt);
}

static void Array_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _array), 0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _context), uFieldFlagsWeak);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.V8.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Array__get_Item_fn;
    return type;
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) :21
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSArray** array)
{
    __this->ctor_1(context, *array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :68
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "Equals(Fuse.Scripting.Array)");
    ::JSArray* ind1;
    Array* that = uAs<Array*>(a, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), (ind1 = __this->_array, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSArray_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), uPtr(that)->_array)), void();
}

// public override sealed int GetHashCode() :74
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "GetHashCode()");
    ::JSArray* ind2;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::V8::Simple::JSArray_typeof(), (ind2 = __this->_array, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSArray_typeof()->ObjectSize))), void();
}

// internal Fuse.Scripting.V8.Simple.JSArray GetJSArray(Fuse.Scripting.V8.AutoReleasePool pool) :15
void Array__GetJSArray_fn(Array* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSArray** __retval)
{
    *__retval = __this->GetJSArray(*pool);
}

// public override sealed object get_Item(int index) :36
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Item(int)");
    int index_ = *index;
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty(__this->_array, cxt, index_, pool, uPtr(__this->_context)->_errorHandler));
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed void set_Item(int index, object value) :46
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "set_Item(int,object)");
    int index_ = *index;
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetProperty(__this->_array, cxt, index_, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value, pool), uPtr(__this->_context)->_errorHandler);
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
}

// public override sealed int get_Length() :58
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Length()");
    int result = 0;
    ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        result = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Length(__this->_array, uPtr(__this->_context)->_context);
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) :21
void Array__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSArray** array, Array** __retval)
{
    *__retval = Array::New1(context, *array);
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) [instance] :21
void Array::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array)
{
    uStackFrame __("Fuse.Scripting.V8.Array", ".ctor(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.JSArray)");
    ctor_();
    _context = context;
    _array = array;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(_array), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSArray GetJSArray(Fuse.Scripting.V8.AutoReleasePool pool) [instance] :15
::JSArray* Array::GetJSArray(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "GetJSArray(Fuse.Scripting.V8.AutoReleasePool)");
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(_array), uPtr(_context)->_context);
    return pool.AutoRelease(_array);
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSArray array) [static] :21
Array* Array::New1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array)
{
    Array* obj3 = (Array*)uNew(Array_typeof());
    obj3->ctor_1(context, array);
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class ArrayHandle :835
// {
static void ArrayHandle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Fuse::Scripting::V8::ArrayHandle, Array), 0);
}

uType* ArrayHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ArrayHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.ArrayHandle", options);
    type->fp_build_ = ArrayHandle_build;
    return type;
}

// public ArrayHandle(byte[] array) :840
void ArrayHandle__ctor__fn(ArrayHandle* __this, uArray* array)
{
    __this->ctor_(array);
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length) :867
void ArrayHandle__CopyToArray_fn(void** ptr, int* length, uArray** __retval)
{
    *__retval = ArrayHandle::CopyToArray(*ptr, *length);
}

// public Uno.IntPtr GetIntPtr() :855
void ArrayHandle__GetIntPtr_fn(ArrayHandle* __this, void** __retval)
{
    *__retval = __this->GetIntPtr();
}

// public ArrayHandle New(byte[] array) :840
void ArrayHandle__New1_fn(uArray* array, ArrayHandle** __retval)
{
    *__retval = ArrayHandle::New1(array);
}

// public ArrayHandle(byte[] array) [instance] :840
void ArrayHandle::ctor_(uArray* array)
{
    Array = array;
}

// public Uno.IntPtr GetIntPtr() [instance] :855
void* ArrayHandle::GetIntPtr()
{
    return Array->Ptr();
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length) [static] :867
uArray* ArrayHandle::CopyToArray(void* ptr, int length)
{
    return uArray::New(::g::Uno::Byte_typeof()->Array(), length, ptr);
}

// public ArrayHandle New(byte[] array) [static] :840
ArrayHandle* ArrayHandle::New1(uArray* array)
{
    ArrayHandle* obj1 = (ArrayHandle*)uNew(ArrayHandle_typeof());
    obj1->ctor_(array);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct AutoReleasePool :1565
// {
// public void Dispose() [adapter] :1611
static void AutoReleasePool__Dispose_ex(uObject* __this)
{
    AutoReleasePool__Dispose_fn((AutoReleasePool*)((uint8_t*)__this + sizeof(uObject)));
}

static void AutoReleasePool_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AutoReleasePool_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), offsetof(::g::Fuse::Scripting::V8::AutoReleasePool, _context), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>*/], offsetof(::g::Fuse::Scripting::V8::AutoReleasePool, _pool), 0);
}

AutoReleasePool_type* AutoReleasePool_typeof()
{
    static uSStrong<AutoReleasePool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(AutoReleasePool);
    options.TypeSize = sizeof(AutoReleasePool_type);
    type = (AutoReleasePool_type*)uStructType::New("Fuse.Scripting.V8.AutoReleasePool", options);
    type->fp_build_ = AutoReleasePool_build;
    type->interface0.fp_Dispose = AutoReleasePool__Dispose_ex;
    return type;
}

// public AutoReleasePool(Fuse.Scripting.V8.Simple.JSContext context) :1569
void AutoReleasePool__ctor__fn(AutoReleasePool* __this, ::JSContext** context)
{
    __this->ctor_(*context);
}

// public Fuse.Scripting.V8.Simple.JSArray AutoRelease(Fuse.Scripting.V8.Simple.JSArray value) :1593
void AutoReleasePool__AutoRelease_fn(AutoReleasePool* __this, ::JSArray** value, ::JSArray** __retval)
{
    *__retval = __this->AutoRelease(*value);
}

// public Fuse.Scripting.V8.Simple.JSExternal AutoRelease(Fuse.Scripting.V8.Simple.JSExternal value) :1605
void AutoReleasePool__AutoRelease1_fn(AutoReleasePool* __this, ::JSExternal** value, ::JSExternal** __retval)
{
    *__retval = __this->AutoRelease1(*value);
}

// public Fuse.Scripting.V8.Simple.JSFunction AutoRelease(Fuse.Scripting.V8.Simple.JSFunction value) :1599
void AutoReleasePool__AutoRelease2_fn(AutoReleasePool* __this, ::JSFunction** value, ::JSFunction** __retval)
{
    *__retval = __this->AutoRelease2(*value);
}

// public Fuse.Scripting.V8.Simple.JSObject AutoRelease(Fuse.Scripting.V8.Simple.JSObject value) :1581
void AutoReleasePool__AutoRelease3_fn(AutoReleasePool* __this, ::JSObject** value, ::JSObject** __retval)
{
    *__retval = __this->AutoRelease3(*value);
}

// public Fuse.Scripting.V8.Simple.JSString AutoRelease(Fuse.Scripting.V8.Simple.JSString value) :1587
void AutoReleasePool__AutoRelease4_fn(AutoReleasePool* __this, ::JSString** value, ::JSString** __retval)
{
    *__retval = __this->AutoRelease4(*value);
}

// public Fuse.Scripting.V8.Simple.JSValue AutoRelease(Fuse.Scripting.V8.Simple.JSValue value) :1575
void AutoReleasePool__AutoRelease5_fn(AutoReleasePool* __this, ::JSValue** value, ::JSValue** __retval)
{
    *__retval = __this->AutoRelease5(*value);
}

// public void Dispose() :1611
void AutoReleasePool__Dispose_fn(AutoReleasePool* __this)
{
    __this->Dispose();
}

// public AutoReleasePool New(Fuse.Scripting.V8.Simple.JSContext context) :1569
void AutoReleasePool__New1_fn(::JSContext** context, AutoReleasePool* __retval)
{
    *__retval = AutoReleasePool__New1(*context);
}

// public AutoReleasePool(Fuse.Scripting.V8.Simple.JSContext context) [instance] :1569
void AutoReleasePool::ctor_(::JSContext* context)
{
    _context = context;
    _pool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>*/]));
}

// public Fuse.Scripting.V8.Simple.JSArray AutoRelease(Fuse.Scripting.V8.Simple.JSArray value) [instance] :1593
::JSArray* AutoReleasePool::AutoRelease(::JSArray* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSArray)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSExternal AutoRelease(Fuse.Scripting.V8.Simple.JSExternal value) [instance] :1605
::JSExternal* AutoReleasePool::AutoRelease1(::JSExternal* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSExternal)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue1(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSFunction AutoRelease(Fuse.Scripting.V8.Simple.JSFunction value) [instance] :1599
::JSFunction* AutoReleasePool::AutoRelease2(::JSFunction* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSFunction)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSObject AutoRelease(Fuse.Scripting.V8.Simple.JSObject value) [instance] :1581
::JSObject* AutoReleasePool::AutoRelease3(::JSObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSObject)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSString AutoRelease(Fuse.Scripting.V8.Simple.JSString value) [instance] :1587
::JSString* AutoReleasePool::AutoRelease4(::JSString* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSString)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(value)));
    return value;
}

// public Fuse.Scripting.V8.Simple.JSValue AutoRelease(Fuse.Scripting.V8.Simple.JSValue value) [instance] :1575
::JSValue* AutoReleasePool::AutoRelease5(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "AutoRelease(Fuse.Scripting.V8.Simple.JSValue)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_pool), uCRef(value));
    return value;
}

// public void Dispose() [instance] :1611
void AutoReleasePool::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.AutoReleasePool", "Dispose()");
    ::g::Uno::Collections::List__Enumerator< ::JSValue*> ret3;

    for (::g::Uno::Collections::List__Enumerator< ::JSValue*> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pool), &ret3), ret3); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]); )
    {
        ::JSValue* value = enum1.Current(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.JSValue>.Enumerator*/]);
        ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(value, _context);
    }

    uPtr(_pool)->Clear();
}

// public AutoReleasePool New(Fuse.Scripting.V8.Simple.JSContext context) [static] :1569
AutoReleasePool AutoReleasePool__New1(::JSContext* context)
{
    AutoReleasePool obj2;
    obj2.ctor_(context);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Marshaller.CallbackWrapper :308
// {
static void Marshaller__CallbackWrapper_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Error_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper, _callback), 0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper, _context), 0);
}

uType* Marshaller__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Marshaller__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller.CallbackWrapper", options);
    type->fp_build_ = Marshaller__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) :313
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error) :319
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, uArray* args, ::JSValue** error, ::JSValue** __retval)
{
    *__retval = __this->Call(args, error);
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) :313
void Marshaller__CallbackWrapper__New1_fn(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback, Marshaller__CallbackWrapper** __retval)
{
    *__retval = Marshaller__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [instance] :313
void Marshaller__CallbackWrapper::ctor_(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error) [instance] :319
::JSValue* Marshaller__CallbackWrapper::Call(uArray* args, ::JSValue** error)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller.CallbackWrapper", "Call(Fuse.Scripting.V8.Simple.JSValue[],Fuse.Scripting.V8.Simple.JSValue&)");
    ::JSContext* cxt = uPtr(_context)->_context;
    *error = uDefault< ::JSValue*>();
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        try
        {
            return ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(_callback)->Invoke(1, (uArray*)::g::Fuse::Scripting::V8::Marshaller::WrapArray(_context, args)), pool), cxt);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::Scripting::Error* se = uAs< ::g::Fuse::Scripting::Error*>(e, ::TYPES[4/*Fuse.Scripting.Error*/]);

            if (se != NULL)
            {
                ::JSValue* jsException = ::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(se)->Message(), pool);
                *error = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(jsException, cxt);
            }
            else
            {
                if (uPtr(_context)->_cachedException == NULL)
                    uPtr(_context)->_cachedException = e;
            }

            return uDefault< ::JSValue*>();
        }
    }

    return uDefault< ::JSValue*>();
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [static] :313
Marshaller__CallbackWrapper* Marshaller__CallbackWrapper::New1(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    Marshaller__CallbackWrapper* obj1 = (Marshaller__CallbackWrapper*)uNew(Marshaller__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.Connected :626
// {
static void Debugger__Connected_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DEBUG_V8: Connection to a debugger agent established.");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno");
    ::STRINGS[2] = uString::Const("Debugger could not read enough");
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Fuse.Scripting.V8.Simple.JSContext>*/, ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connected_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _parent), 0,
        ::g::Uno::IO::TextReader_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reader), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reconnect), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _socket), 0);
}

Debugger__Connected_type* Debugger__Connected_typeof()
{
    static uSStrong<Debugger__Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connected);
    options.TypeSize = sizeof(Debugger__Connected_type);
    type = (Debugger__Connected_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connected", options);
    type->fp_build_ = Debugger__Connected_build;
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connected__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connected__Dispose_fn;
    return type;
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :633
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    __this->ctor_(parent, socket, reader);
}

// public void Dispose() :717
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this)
{
    __this->Dispose();
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :633
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval)
{
    *__retval = Debugger__Connected::New1(parent, socket, reader);
}

// private bool ReadExactly(char[] buffer, int start, int count) :641
void Debugger__Connected__ReadExactly_fn(Debugger__Connected* __this, uArray* buffer, int* start, int* count, bool* __retval)
{
    *__retval = __this->ReadExactly(buffer, *start, *count);
}

// public void Reconnect() :712
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this)
{
    __this->Reconnect();
}

// public Fuse.Scripting.V8.Debugger.State Run() :660
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [instance] :633
void Debugger__Connected::ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", ".ctor(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket,Uno.IO.TextReader)");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"DEBUG_V8: C...*/], 1, ::STRINGS[1/*"/Users/medb...*/], 635);
    _parent = parent;
    _socket = socket;
    _reader = reader;
}

// public void Dispose() [instance] :717
void Debugger__Connected::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Dispose()");
    uPtr(_reader)->Dispose();

    try
    {
        uPtr(_socket)->Shutdown(2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    uPtr(_socket)->Close();
}

// private bool ReadExactly(char[] buffer, int start, int count) [instance] :641
bool Debugger__Connected::ReadExactly(uArray* buffer, int start, int count)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "ReadExactly(char[],int,int)");

    if (count == 0)
        return true;

    int read = 0;

    do
    {
        read = uPtr(_reader)->Read1(buffer, start, count);
        start = start + read;
        count = count - read;
    }
    while ((read > 0) && (count > 0));

    return count == 0;
}

// public void Reconnect() [instance] :712
void Debugger__Connected::Reconnect()
{
    _reconnect = true;
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :660
uObject* Debugger__Connected::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Run()");

    if (_reconnect)
    {
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return ::g::Fuse::Scripting::V8::Debugger::Connect(_parent);
    }

    try
    {
        if (!uPtr(_socket)->Poll(100, 0))
            return (uObject*)this;

        uString* line = uPtr(_reader)->ReadLine();
        int i = ::g::Uno::String::op_Equality(line, NULL) ? -1 : ::g::Uno::String::IndexOf1(uPtr(line), ::g::Fuse::Scripting::V8::Debugger::_contentLengthString(), 0);

        if (i >= 0)
        {
            int contentLength = ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(line), i + uPtr(::g::Fuse::Scripting::V8::Debugger::_contentLengthString())->Length()));

            if (contentLength > 0)
            {
                uPtr(_reader)->ReadLine();
                uArray* buffer = uArray::New(::TYPES[5/*char[]*/], contentLength);

                if (!ReadExactly(buffer, 0, contentLength))
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Debugger co...*/]));

                uString* message = uString::CharArray(buffer);
                ::JSContext* cxt = uPtr(uPtr(_parent)->_context)->_context;
                ::g::Fuse::Scripting::V8::Simple::Debug::SendCommand(cxt, message, message->Length());
                ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[6/*Uno.Threading.IDispatcherExtensions.Invoke1<Fuse.Scripting.V8.Simple.JSContext>*/], uPtr(uPtr(_parent)->_context)->Dispatcher(), uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Scripting.V8.Simple.JSContext>*/], (void*)::g::Fuse::Scripting::V8::Simple::Debug__ProcessMessages_fn), uCRef(cxt));
            }
        }
        else
        {
            if (::g::Uno::String::IsNullOrEmpty(line))
                Reconnect();
            else
                ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reconnect();
    }

    return (uObject*)this;
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [static] :633
Debugger__Connected* Debugger__Connected::New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    Debugger__Connected* obj1 = (Debugger__Connected*)uNew(Debugger__Connected_typeof());
    obj1->ctor_(parent, socket, reader);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.ConnectedMessageHandler :600
// {
static void Debugger__ConnectedMessageHandler_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger__Connected_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _state), 0,
        ::g::Uno::IO::TextWriter_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _writer), 0);
}

uType* Debugger__ConnectedMessageHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Debugger__ConnectedMessageHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", options);
    type->fp_build_ = Debugger__ConnectedMessageHandler_build;
    return type;
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :605
void Debugger__ConnectedMessageHandler__ctor__fn(Debugger__ConnectedMessageHandler* __this, ::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    __this->ctor_(state, writer);
}

// public void MessageHandler(string message) :611
void Debugger__ConnectedMessageHandler__MessageHandler_fn(Debugger__ConnectedMessageHandler* __this, uString* message)
{
    __this->MessageHandler(message);
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :605
void Debugger__ConnectedMessageHandler__New1_fn(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer, Debugger__ConnectedMessageHandler** __retval)
{
    *__retval = Debugger__ConnectedMessageHandler::New1(state, writer);
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [instance] :605
void Debugger__ConnectedMessageHandler::ctor_(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    _state = state;
    _writer = writer;
}

// public void MessageHandler(string message) [instance] :611
void Debugger__ConnectedMessageHandler::MessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", "MessageHandler(string)");

    try
    {
        uPtr(_writer)->Write9(::g::Fuse::Scripting::V8::Debugger::AddHeader(message));
        uPtr(_writer)->Flush();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_state)->Reconnect();
    }
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [static] :605
Debugger__ConnectedMessageHandler* Debugger__ConnectedMessageHandler::New1(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    Debugger__ConnectedMessageHandler* obj1 = (Debugger__ConnectedMessageHandler*)uNew(Debugger__ConnectedMessageHandler_typeof());
    obj1->ctor_(state, writer);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.Connecting :521
// {
static void Debugger__Connecting_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connecting_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _listenSocket), 0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _parent), 0);
}

Debugger__Connecting_type* Debugger__Connecting_typeof()
{
    static uSStrong<Debugger__Connecting_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connecting);
    options.TypeSize = sizeof(Debugger__Connecting_type);
    type = (Debugger__Connecting_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connecting", options);
    type->fp_build_ = Debugger__Connecting_build;
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connecting__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connecting__Dispose_fn;
    return type;
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) :526
void Debugger__Connecting__ctor__fn(Debugger__Connecting* __this, ::g::Fuse::Scripting::V8::Debugger* parent)
{
    __this->ctor_(parent);
}

// public void Dispose() :558
void Debugger__Connecting__Dispose_fn(Debugger__Connecting* __this)
{
    __this->Dispose();
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) :526
void Debugger__Connecting__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Connecting** __retval)
{
    *__retval = Debugger__Connecting::New1(parent);
}

// public Fuse.Scripting.V8.Debugger.State Run() :531
void Debugger__Connecting__Run_fn(Debugger__Connecting* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) [instance] :526
void Debugger__Connecting::ctor_(::g::Fuse::Scripting::V8::Debugger* parent)
{
    _parent = parent;
}

// public void Dispose() [instance] :558
void Debugger__Connecting::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Dispose()");

    if (_listenSocket != NULL)
    {
        try
        {
            uPtr(_listenSocket)->Shutdown(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
        }

        uPtr(_listenSocket)->Close();
        _listenSocket = NULL;
    }
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :531
uObject* Debugger__Connecting::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Run()");

    try
    {
        if (_listenSocket == NULL)
        {
            _listenSocket = ::g::Uno::Net::Sockets::Socket::New1(2, 1, 6);
            ::g::Uno::Net::IPEndPoint* endPoint = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Any(), uPtr(_parent)->_port);
            uPtr(_listenSocket)->Bind(endPoint);
            uPtr(_listenSocket)->Listen(1);
        }

        if (!uPtr(_listenSocket)->Poll(100, 0))
            return (uObject*)this;

        ::g::Uno::Net::Sockets::Socket* communicationSocket = uPtr(_listenSocket)->Accept();
        Dispose();
        return ::g::Fuse::Scripting::V8::Debugger::ToConnected(_parent, communicationSocket);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return (uObject*)this;
    }
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) [static] :526
Debugger__Connecting* Debugger__Connecting::New1(::g::Fuse::Scripting::V8::Debugger* parent)
{
    Debugger__Connecting* obj1 = (Debugger__Connecting*)uNew(Debugger__Connecting_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public sealed extern class Context :95
// {
static void Context_build(uType* type)
{
    ::STRINGS[3] = uString::Const("(instanceof)");
    ::STRINGS[4] = uString::Const("(function(x, y) { return x instanceof y; })");
    ::STRINGS[5] = uString::Const("fileName");
    ::STRINGS[6] = uString::Const("code");
    ::STRINGS[7] = uString::Const("toString");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSScriptException_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(7,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _cachedException), 0,
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _context), 0,
        ::TYPES[8/*Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>*/], offsetof(::g::Fuse::Scripting::V8::Context, _errorHandler), 0,
        ::TYPES[9/*Fuse.Scripting.V8.Function*/], offsetof(::g::Fuse::Scripting::V8::Context, _instanceOf), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _vmDepth), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, type, 1, ::g::Fuse::Scripting::IThreadWorker_typeof()));
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Context_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.V8.Context", options);
    type->fp_build_ = Context_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Fuse.Scripting.IThreadWorker worker) :113
void Context__ctor_1_fn(Context* __this, uObject* worker)
{
    __this->ctor_1(worker);
}

// public override sealed void Dispose() :218
void Context__Dispose_fn(Context* __this)
{
    __this->_errorHandler = NULL;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release(__this->_context);
    __this->_context = uDefault< ::JSContext*>();
}

// public override sealed object Evaluate(string fileName, string code) :195
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "Evaluate(string,string)");

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"fileName"*/]));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"code"*/]));

    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(__this->_context);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        Context__EnterVM vm = Context__EnterVM__New1(__this);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Evaluate(__this->_context, fileName, code, pool, __this->_errorHandler));
        }
    }

    __this->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :211
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "get_GlobalObject()");
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(__this->_context);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = ::g::Fuse::Scripting::V8::Object::New1(__this, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetGlobalObject(__this->_context, pool)), void();
    }
}

// public Context New(Fuse.Scripting.IThreadWorker worker) :113
void Context__New1_fn(uObject* worker, Context** __retval)
{
    *__retval = Context::New1(worker);
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.JSScriptException e) :169
void Context__OnScriptException_fn(Context* __this, ::JSScriptException** e)
{
    __this->OnScriptException(*e);
}

// internal void ThrowPendingExceptions() :156
void Context__ThrowPendingExceptions_fn(Context* __this)
{
    __this->ThrowPendingExceptions();
}

// public Context(Fuse.Scripting.IThreadWorker worker) [instance] :113
void Context::ctor_1(uObject* worker)
{
    uStackFrame __("Fuse.Scripting.V8.Context", ".ctor(Fuse.Scripting.IThreadWorker)");
    ctor_(worker);
    _errorHandler = uDelegate::New(::TYPES[8/*Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>*/], (void*)Context__OnScriptException_fn, this);
    _context = ::g::Fuse::Scripting::V8::Simple::Context::Create();
    _instanceOf = uAs< ::g::Fuse::Scripting::V8::Function*>(Evaluate(::STRINGS[3/*"(instanceof)"*/], ::STRINGS[4/*"(function(x...*/]), ::TYPES[9/*Fuse.Scripting.V8.Function*/]);
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.JSScriptException e) [instance] :169
void Context::OnScriptException(::JSScriptException* e)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "OnScriptException(Fuse.Scripting.V8.Simple.JSScriptException)");
    ::JSValue* jsException = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetException(e);
    uString* exceptionName = NULL;
    ::g::Fuse::Scripting::V8::Object* jsExceptionObj = uAs< ::g::Fuse::Scripting::V8::Object*>(::g::Fuse::Scripting::V8::Marshaller::Wrap(this, jsException), ::TYPES[10/*Fuse.Scripting.V8.Object*/]);

    if (jsExceptionObj != NULL)
        exceptionName = uAs<uString*>(uPtr(jsExceptionObj)->CallMethod(::STRINGS[7/*"toString"*/], uArray::New(::TYPES[12/*object[]*/], 0)), ::TYPES[11/*string*/]);

    ::g::Fuse::Scripting::ScriptException* se = ::g::Fuse::Scripting::ScriptException::New4(::g::Uno::String::op_Equality(exceptionName, NULL) ? ::STRINGS[8/*""*/] : exceptionName, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetMessage(e, _context), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetFileName(e, _context), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetLineNumber(e), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetSourceLine(e, _context), ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetStackTrace(e, _context));

    if (_vmDepth == 0)
        U_THROW(se);
    else if (_cachedException == NULL)
        _cachedException = se;
}

// internal void ThrowPendingExceptions() [instance] :156
void Context::ThrowPendingExceptions()
{
    uStackFrame __("Fuse.Scripting.V8.Context", "ThrowPendingExceptions()");

    if (_vmDepth == 0)
    {
        if (_cachedException != NULL)
        {
            ::g::Uno::Exception* e = _cachedException;
            _cachedException = NULL;
            U_THROW(e);
        }
    }
}

// public Context New(Fuse.Scripting.IThreadWorker worker) [static] :113
Context* Context::New1(uObject* worker)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_1(worker);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Debugger :403
// {
// static Debugger() :403
static void Debugger__cctor__fn(uType* __type)
{
    Debugger::_contentLengthString_ = ::STRINGS[9/*"Content-Len...*/];
}

static void Debugger_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Content-Length: ");
    ::STRINGS[10] = uString::Const("\r\n"
        "\r\n"
        "");
    ::STRINGS[11] = uString::Const("\"threads\":[{\"current\":true,\"id\":");
    ::STRINGS[12] = uString::Const("}]");
    ::STRINGS[13] = uString::Const("\"threads\":[{\"current\":true,\"id\":1}]");
    ::STRINGS[14] = uString::Const("DEBUG_V8: Waiting for a debugger agent to connect on port ");
    ::STRINGS[15] = uString::Const("...");
    ::STRINGS[1] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno");
    ::STRINGS[16] = uString::Const("Type: connect\r\n"
        "V8-Version: ");
    ::STRINGS[17] = uString::Const("\r\n"
        "Protocol-Version: 1\r\n"
        "Embedding-Host: ");
    ::STRINGS[18] = uString::Const("Fuse.Scripting.V8");
    ::STRINGS[19] = uString::Const(" ");
    ::STRINGS[20] = uString::Const("0.47.7");
    ::STRINGS[21] = uString::Const("\r\n"
        "Content-Length: 0\r\n"
        "\r\n"
        "");
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::JSString_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[17] = Debugger__State_typeof();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Debugger_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _context), uFieldFlagsWeak,
        ::TYPES[17/*Fuse.Scripting.V8.Debugger.State*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _currentState), 0,
        ::TYPES[14/*Uno.Action<string>*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _messageHandler), 0,
        ::TYPES[13/*Uno.Collections.List<string>*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _offlineMessages), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _port), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _shutdown), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _shutdownMutex), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _stateMachine), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Debugger::_contentLengthString_, uFieldFlagsStatic);
}

Debugger_type* Debugger_typeof()
{
    static uSStrong<Debugger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger);
    options.TypeSize = sizeof(Debugger_type);
    type = (Debugger_type*)uClassType::New("Fuse.Scripting.V8.Debugger", options);
    type->fp_build_ = Debugger_build;
    type->fp_cctor_ = Debugger__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Dispose_fn;
    return type;
}

// public Debugger(Fuse.Scripting.V8.Context context, int port) :417
void Debugger__ctor__fn(Debugger* __this, ::g::Fuse::Scripting::V8::Context* context, int* port)
{
    __this->ctor_(context, *port);
}

// private static string AddHeader(string body) :485
void Debugger__AddHeader_fn(uString* body, uString** __retval)
{
    *__retval = Debugger::AddHeader(body);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) :473
void Debugger__Connect_fn(Debugger* parent, uObject** __retval)
{
    *__retval = Debugger::Connect(parent);
}

// private void DisconnectedMessageHandler(string message) :480
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, uString* message)
{
    __this->DisconnectedMessageHandler(message);
}

// public void Dispose() :456
void Debugger__Dispose_fn(Debugger* __this)
{
    __this->Dispose();
}

// private void HandleMessage(Fuse.Scripting.V8.Simple.JSString message) :448
void Debugger__HandleMessage_fn(Debugger* __this, ::JSString** message)
{
    __this->HandleMessage(*message);
}

// public Debugger New(Fuse.Scripting.V8.Context context, int port) :417
void Debugger__New1_fn(::g::Fuse::Scripting::V8::Context* context, int* port, Debugger** __retval)
{
    *__retval = Debugger::New1(context, *port);
}

// private void StateMachine() :433
void Debugger__StateMachine_fn(Debugger* __this)
{
    __this->StateMachine();
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) :573
void Debugger__ToConnected_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval)
{
    *__retval = Debugger::ToConnected(parent, communicationSocket);
}

uSStrong<uString*> Debugger::_contentLengthString_;

// public Debugger(Fuse.Scripting.V8.Context context, int port) [instance] :417
void Debugger::ctor_(::g::Fuse::Scripting::V8::Context* context, int port)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", ".ctor(Fuse.Scripting.V8.Context,int)");
    _shutdownMutex = ::g::Uno::Object::New();
    _context = context;
    _port = port;
    _offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<string>*/]));
    _messageHandler = uDelegate::New(::TYPES[14/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, this);
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetDebugMessageHandler(uPtr(_context)->_context, uDelegate::New(::TYPES[15/*Uno.Action<Fuse.Scripting.V8.Simple.JSString>*/], (void*)Debugger__HandleMessage_fn, this));
    _stateMachine = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[16/*Uno.Threading.ThreadStart*/], (void*)Debugger__StateMachine_fn, this));
    _currentState = Debugger::Connect(this);
    uPtr(_stateMachine)->Start();
}

// private void DisconnectedMessageHandler(string message) [instance] :480
void Debugger::DisconnectedMessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "DisconnectedMessageHandler(string)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_offlineMessages), Debugger::AddHeader(message));
}

// public void Dispose() [instance] :456
void Debugger::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Dispose()");
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetDebugMessageHandler(uPtr(_context)->_context, NULL);
    _messageHandler = NULL;
    ::g::Uno::Threading::Monitor::Enter(_shutdownMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_shutdownMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _shutdown = true;
    }

    uPtr(_stateMachine)->Join();
}

// private void HandleMessage(Fuse.Scripting.V8.Simple.JSString message) [instance] :448
void Debugger::HandleMessage(::JSString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "HandleMessage(Fuse.Scripting.V8.Simple.JSString)");

    if (::g::Uno::Delegate::op_Inequality(_messageHandler, NULL))
        uPtr(_messageHandler)->InvokeVoid(::g::Fuse::Scripting::V8::V8SimpleExtensions::ToStr(message, uPtr(_context)->_context));
}

// private void StateMachine() [instance] :433
void Debugger::StateMachine()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "StateMachine()");

    while (true)
    {
        ::g::Uno::Threading::Monitor::Enter(_shutdownMutex);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Threading::Monitor::Exit(_shutdownMutex);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_shutdown)
                break;
        }

        _currentState = Debugger__State::Run(uInterface(uPtr(_currentState), ::TYPES[17/*Fuse.Scripting.V8.Debugger.State*/]));
    }

    Debugger__State::Dispose(uInterface(uPtr(_currentState), ::TYPES[17/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private static string AddHeader(string body) [static] :485
uString* Debugger::AddHeader(uString* body)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "AddHeader(string)");
    Debugger_typeof()->Init();
    uString* header = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(Debugger::_contentLengthString(), uBox<int>(::TYPES[19/*int*/], uPtr(::g::Uno::Text::Utf8::GetBytes(body))->Length())), ::STRINGS[10/*"\r\n\r\n"*/]);
    uString* replacedBody = body;

    for (int i = 2; i <= 8; ++i)
        replacedBody = ::g::Uno::String::Replace1(uPtr(replacedBody), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*"\"threads\"...*/], uBox<int>(::TYPES[19/*int*/], i)), ::STRINGS[12/*"}]"*/]), ::STRINGS[13/*"\"threads\"...*/]);

    return ::g::Uno::String::op_Addition2(header, replacedBody);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) [static] :473
uObject* Debugger::Connect(Debugger* parent)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Connect(Fuse.Scripting.V8.Debugger)");
    Debugger_typeof()->Init();
    uPtr(parent)->_messageHandler = uDelegate::New(::TYPES[14/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, uPtr(parent));
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[14/*"DEBUG_V8: W...*/], uBox<int>(::TYPES[19/*int*/], parent->_port)), ::STRINGS[15/*"..."*/]), 1, ::STRINGS[1/*"/Users/medb...*/], 476);
    return (uObject*)Debugger__Connecting::New1(parent);
}

// public Debugger New(Fuse.Scripting.V8.Context context, int port) [static] :417
Debugger* Debugger::New1(::g::Fuse::Scripting::V8::Context* context, int port)
{
    Debugger* obj2 = (Debugger*)uNew(Debugger_typeof());
    obj2->ctor_(context, port);
    return obj2;
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) [static] :573
uObject* Debugger::ToConnected(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "ToConnected(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket)");
    Debugger_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(communicationSocket);
    ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);
    ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);
    Debugger__Connected* state = Debugger__Connected::New1(parent, communicationSocket, reader);
    uPtr(parent)->_messageHandler = uDelegate::New(::TYPES[14/*Uno.Action<string>*/], (void*)Debugger__ConnectedMessageHandler__MessageHandler_fn, Debugger__ConnectedMessageHandler::New1(state, writer));
    writer->Write9(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*"Type: conne...*/], ::g::Fuse::Scripting::V8::Simple::Context::GetV8Version()), ::STRINGS[17/*"\r\nProtoco...*/]), ::STRINGS[18/*"Fuse.Script...*/]), ::STRINGS[19/*" "*/]), ::STRINGS[20/*"0.47.7"*/]), ::STRINGS[21/*"\r\nContent...*/]));

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(parent->_offlineMessages), &ret3), ret3); enum1.MoveNext(::TYPES[18/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* message = enum1.Current(::TYPES[18/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(writer)->Write9(message);
    }

    parent->_offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<string>*/]));
    writer->Flush();
    return (uObject*)state;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal struct Context.EnterVM :140
// {
// public void Dispose() [adapter] :149
static void Context__EnterVM__Dispose_ex(uObject* __this)
{
    Context__EnterVM__Dispose_fn((Context__EnterVM*)((uint8_t*)__this + sizeof(uObject)));
}

static void Context__EnterVM_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context__EnterVM_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Context__EnterVM, _context), 0);
}

Context__EnterVM_type* Context__EnterVM_typeof()
{
    static uSStrong<Context__EnterVM_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(Context__EnterVM);
    options.TypeSize = sizeof(Context__EnterVM_type);
    type = (Context__EnterVM_type*)uStructType::New("Fuse.Scripting.V8.Context.EnterVM", options);
    type->fp_build_ = Context__EnterVM_build;
    type->interface0.fp_Dispose = Context__EnterVM__Dispose_ex;
    return type;
}

// public EnterVM(Fuse.Scripting.V8.Context context) :143
void Context__EnterVM__ctor__fn(Context__EnterVM* __this, ::g::Fuse::Scripting::V8::Context* context)
{
    __this->ctor_(context);
}

// public void Dispose() :149
void Context__EnterVM__Dispose_fn(Context__EnterVM* __this)
{
    __this->Dispose();
}

// public EnterVM New(Fuse.Scripting.V8.Context context) :143
void Context__EnterVM__New1_fn(::g::Fuse::Scripting::V8::Context* context, Context__EnterVM* __retval)
{
    *__retval = Context__EnterVM__New1(context);
}

// public EnterVM(Fuse.Scripting.V8.Context context) [instance] :143
void Context__EnterVM::ctor_(::g::Fuse::Scripting::V8::Context* context)
{
    uStackFrame __("Fuse.Scripting.V8.Context.EnterVM", ".ctor(Fuse.Scripting.V8.Context)");
    _context = context;
    ++uPtr(_context)->_vmDepth;
}

// public void Dispose() [instance] :149
void Context__EnterVM::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Context.EnterVM", "Dispose()");
    --uPtr(_context)->_vmDepth;
    _context = NULL;
}

// public EnterVM New(Fuse.Scripting.V8.Context context) [static] :143
Context__EnterVM Context__EnterVM__New1(::g::Fuse::Scripting::V8::Context* context)
{
    Context__EnterVM obj1;
    obj1.ctor_(context);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class Error :1620
// {
static void Error_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Int_typeof();
}

uClassType* Error_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public static void Check(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException err, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> handler) :1628
void Error__Check_fn(::JSContext** context, ::JSScriptException** err, uDelegate* handler)
{
    Error::Check(*context, *err, handler);
}

// public static void Check(Fuse.Scripting.V8.Simple.JSRuntimeError err) :1622
void Error__Check1_fn(int* err)
{
    Error::Check1(*err);
}

// public static void Check(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException err, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> handler) [static] :1628
void Error::Check(::JSContext* context, ::JSScriptException* err, uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.V8.Error", "Check(Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.Simple.JSScriptException,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");

    if (::g::Fuse::Scripting::V8::Simple::JSScriptException::op_Inequality(err, uDefault< ::JSScriptException*>()))
    {
        {
            const auto __finally_fun = [&]()
            {
                ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release1(err, context);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uPtr(handler)->InvokeVoid(uCRef(err));
        }
    }
}

// public static void Check(Fuse.Scripting.V8.Simple.JSRuntimeError err) [static] :1622
void Error::Check1(int err)
{
    uStackFrame __("Fuse.Scripting.V8.Error", "Check(Fuse.Scripting.V8.Simple.JSRuntimeError)");

    if (err != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Int::ToString(err, ::TYPES[19/*int*/])));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Function :740
// {
// ~Function() :759
static void Function__Finalize_fn(Function* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Finalize()");
    ::JSContext* cxt = (__this->_context == NULL) ? uDefault< ::JSContext*>() : uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(__this->_function), cxt);
}

static void Function_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _function), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Function_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.V8.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) :752
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function)
{
    __this->ctor_1(context, *function);
}

// public override sealed object Call(object[] args) :765
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Call(object[])");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
            ::JSObject* thisObject = ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsObject(::g::Fuse::Scripting::V8::V8SimpleExtensions::Null());
            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Call(__this->_function, cxt, thisObject, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :787
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Construct(object[])");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::Object* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
            result = ::g::Fuse::Scripting::V8::Object::New1(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Construct(__this->_function, cxt, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :806
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Equals(Fuse.Scripting.Function)");
    ::JSFunction* ind1;
    Function* that = uAs<Function*>(f, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), (ind1 = __this->_function, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), uPtr(that)->_function)), void();
}

// public override sealed int GetHashCode() :812
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "GetHashCode()");
    ::JSFunction* ind2;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof(), (ind2 = __this->_function, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSFunction_typeof()->ObjectSize))), void();
}

// internal Fuse.Scripting.V8.Simple.JSFunction GetJSFunction(Fuse.Scripting.V8.AutoReleasePool pool) :746
void Function__GetJSFunction_fn(Function* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSFunction** __retval)
{
    *__retval = __this->GetJSFunction(*pool);
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) :752
void Function__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function, Function** __retval)
{
    *__retval = Function::New1(context, *function);
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) [instance] :752
void Function::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function)
{
    uStackFrame __("Fuse.Scripting.V8.Function", ".ctor(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.JSFunction)");
    ctor_();
    _context = context;
    _function = function;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(_function), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSFunction GetJSFunction(Fuse.Scripting.V8.AutoReleasePool pool) [instance] :746
::JSFunction* Function::GetJSFunction(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "GetJSFunction(Fuse.Scripting.V8.AutoReleasePool)");
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(_function), uPtr(_context)->_context);
    return pool.AutoRelease2(_function);
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSFunction function) [static] :752
Function* Function::New1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function)
{
    Function* obj3 = (Function*)uNew(Function_typeof());
    obj3->ctor_1(context, function);
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class Handle :828
// {
static void Handle_build(uType* type)
{
}

uClassType* Handle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Handle", options);
    type->fp_build_ = Handle_build;
    return type;
}

// public static Uno.IntPtr Create(object o) :830
void Handle__Create_fn(uObject* o, void** __retval)
{
    *__retval = Handle::Create(o);
}

// public static void Free(Uno.IntPtr handle) :831
void Handle__Free_fn(void** handle)
{
    Handle::Free(*handle);
}

// public static object Target(Uno.IntPtr handle) :832
void Handle__Target_fn(void** handle, uObject** __retval)
{
    *__retval = Handle::Target(*handle);
}

// public static Uno.IntPtr Create(object o) [static] :830
void* Handle::Create(uObject* o)
{
    return ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit1(::g::Uno::Runtime::InteropServices::GCHandle__Alloc(o));
}

// public static void Free(Uno.IntPtr handle) [static] :831
void Handle::Free(void* handle)
{
    ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit(handle).Free();
}

// public static object Target(Uno.IntPtr handle) [static] :832
uObject* Handle::Target(void* handle)
{
    return ::g::Uno::Runtime::InteropServices::GCHandle__op_Explicit(handle).Target();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class Marshaller :231
// {
static void Marshaller_build(uType* type)
{
    ::STRINGS[22] = uString::Const("__unoHandle");
    ::STRINGS[23] = uString::Const("byteLength");
    ::STRINGS[24] = uString::Const("V8: Unable to get data from ArrayBuffer");
    ::STRINGS[25] = uString::Const("Unhandled type in V8 marshaller: ");
    ::STRINGS[26] = uString::Const(":");
    ::STRINGS[27] = uString::Const("V8 marshaller: The impossible happened.");
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::V8::ArrayHandle_typeof();
    ::TYPES[23] = ::g::Uno::Float_typeof();
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[24] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[25] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::V8::Array_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::V8::V8SimpleExtensions__WrappedCallback_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array();
    ::TYPES[12] = uObject_typeof()->Array();
}

uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    type->fp_build_ = Marshaller_build;
    return type;
}

// private static Fuse.Scripting.V8.Simple.JSValue NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data, Fuse.Scripting.V8.AutoReleasePool pool) :353
void Marshaller__NewArrayBuffer_fn(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = Marshaller::NewArrayBuffer(context, data, *pool);
}

// private static int ToInt(object o) :301
void Marshaller__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshaller::ToInt(o);
}

// internal static byte[] TryGetArrayBufferData(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Object o) :276
void Marshaller__TryGetArrayBufferData_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o, uArray** __retval)
{
    *__retval = Marshaller::TryGetArrayBufferData(context, o);
}

// internal static Fuse.Scripting.V8.Simple.JSValue Unwrap(Fuse.Scripting.V8.Context context, object obj, Fuse.Scripting.V8.AutoReleasePool pool) :257
void Marshaller__Unwrap_fn(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = Marshaller::Unwrap(context, obj, *pool);
}

// internal static Fuse.Scripting.V8.Simple.JSValue[] UnwrapArray(Fuse.Scripting.V8.Context context, object[] values, Fuse.Scripting.V8.AutoReleasePool pool) :367
void Marshaller__UnwrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uArray** __retval)
{
    *__retval = Marshaller::UnwrapArray(context, values, *pool);
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue val) :235
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Context* context, ::JSValue** val, uObject** __retval)
{
    *__retval = Marshaller::Wrap(context, *val);
}

// private static object[] WrapArray(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue[] values) :376
void Marshaller__WrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, uArray** __retval)
{
    *__retval = Marshaller::WrapArray(context, values);
}

// private static Fuse.Scripting.V8.Simple.JSValue NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data, Fuse.Scripting.V8.AutoReleasePool pool) [static] :353
::JSValue* Marshaller::NewArrayBuffer(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "NewArrayBuffer(Fuse.Scripting.V8.Context,byte[],Fuse.Scripting.V8.AutoReleasePool)");
    ::g::Fuse::Scripting::V8::ArrayHandle* handle = ::g::Fuse::Scripting::V8::ArrayHandle::New1(data);
    ::g::Fuse::Scripting::V8::Object* obj = ::g::Fuse::Scripting::V8::Object::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewExternalArrayBuffer(uPtr(context)->_context, handle->GetIntPtr(), uPtr(data)->Length(), pool));
    obj->Item(::STRINGS[22/*"__unoHandle"*/], ::g::Fuse::Scripting::External::New1(handle));
    return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(obj->GetJSObject(pool));
}

// private static int ToInt(object o) [static] :301
int Marshaller::ToInt(uObject* o)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "ToInt(object)");

    if (uIs(o, ::TYPES[19/*int*/]))
        return uUnbox<int>(::TYPES[19/*int*/], o);

    if (uIs(o, ::TYPES[20/*double*/]))
        return (int)uUnbox<double>(::TYPES[20/*double*/], o);

    return 0;
}

// internal static byte[] TryGetArrayBufferData(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Object o) [static] :276
uArray* Marshaller::TryGetArrayBufferData(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "TryGetArrayBufferData(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Object)");
    ::JSContext* cxt = uPtr(context)->_context;
    void* ptr = ::g::Fuse::Scripting::V8::V8SimpleExtensions::TryGetArrayBufferData(uPtr(o)->_object, context->_context);

    if (::g::Uno::IntPtr::op_Equality(ptr, ::g::Uno::IntPtr::Zero_))
        return NULL;

    if (o->ContainsKey(::STRINGS[22/*"__unoHandle"*/]))
    {
        ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(o)->Item(::STRINGS[22/*"__unoHandle"*/]), ::TYPES[21/*Fuse.Scripting.External*/]);
        ::g::Fuse::Scripting::V8::ArrayHandle* handle = (ext == NULL) ? uCast< ::g::Fuse::Scripting::V8::ArrayHandle*>(NULL, ::TYPES[22/*Fuse.Scripting.V8.ArrayHandle*/]) : uAs< ::g::Fuse::Scripting::V8::ArrayHandle*>(uPtr(ext)->Object, ::TYPES[22/*Fuse.Scripting.V8.ArrayHandle*/]);

        if (handle != NULL)
            return uPtr(handle)->Array;
    }

    if (o->ContainsKey(::STRINGS[23/*"byteLength"*/]))
    {
        int len = Marshaller::ToInt(uPtr(o)->Item(::STRINGS[23/*"byteLength"*/]));
        return ::g::Fuse::Scripting::V8::ArrayHandle::CopyToArray(ptr, len);
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[24/*"V8: Unable ...*/]));
}

// internal static Fuse.Scripting.V8.Simple.JSValue Unwrap(Fuse.Scripting.V8.Context context, object obj, Fuse.Scripting.V8.AutoReleasePool pool) [static] :257
::JSValue* Marshaller::Unwrap(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Unwrap(Fuse.Scripting.V8.Context,object,Fuse.Scripting.V8.AutoReleasePool)");
    ::JSContext* cxt = uPtr(context)->_context;

    if (obj == NULL)
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::Null();

    if (uIs(obj, ::TYPES[19/*int*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewInt(uUnbox<int>(::TYPES[19/*int*/], obj), pool);

    if (uIs(obj, ::TYPES[20/*double*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewDouble(uUnbox<double>(::TYPES[20/*double*/], obj), pool);

    if (uIs(obj, ::TYPES[23/*float*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewDouble((double)uUnbox<float>(::TYPES[23/*float*/], obj), pool);

    if (uIs(obj, ::TYPES[11/*string*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewString(cxt, uCast<uString*>(obj, ::TYPES[11/*string*/]), pool));

    if (uIs(obj, ::TYPES[24/*Uno.UX.Selector*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue4(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewString(cxt, ::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::TYPES[24/*Uno.UX.Selector*/], obj)), pool));

    if (uIs(obj, ::TYPES[25/*bool*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::NewBool(uUnbox<bool>(::TYPES[25/*bool*/], obj), pool);

    if (uIs(obj, ::TYPES[26/*byte[]*/]))
        return Marshaller::NewArrayBuffer(context, uCast<uArray*>(obj, ::TYPES[26/*byte[]*/]), pool);

    if (uIs(obj, ::TYPES[10/*Fuse.Scripting.V8.Object*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::TYPES[10/*Fuse.Scripting.V8.Object*/]))->GetJSObject(pool));

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.V8.Array*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue(uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::TYPES[27/*Fuse.Scripting.V8.Array*/]))->GetJSArray(pool));

    if (uIs(obj, ::TYPES[9/*Fuse.Scripting.V8.Function*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[9/*Fuse.Scripting.V8.Function*/]))->GetJSFunction(pool));

    if (uIs(obj, ::TYPES[28/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue2(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewCallback(cxt, uDelegate::New(::TYPES[29/*Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback*/], (void*)Marshaller__CallbackWrapper__Call_fn, Marshaller__CallbackWrapper::New1(context, uCast<uDelegate*>(obj, ::TYPES[28/*Fuse.Scripting.Callback*/]))), pool, uPtr(context)->_errorHandler));

    if (uIs(obj, ::TYPES[21/*Fuse.Scripting.External*/]))
        return ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue1(::g::Fuse::Scripting::V8::V8SimpleExtensions::NewExternal(cxt, ::g::Fuse::Scripting::V8::Handle::Create(uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[21/*Fuse.Scripting.External*/]))->Object), pool));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[25/*"Unhandled t...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[26/*":"*/]), obj)));
}

// internal static Fuse.Scripting.V8.Simple.JSValue[] UnwrapArray(Fuse.Scripting.V8.Context context, object[] values, Fuse.Scripting.V8.AutoReleasePool pool) [static] :367
uArray* Marshaller::UnwrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "UnwrapArray(Fuse.Scripting.V8.Context,object[],Fuse.Scripting.V8.AutoReleasePool)");
    int len = uPtr(values)->Length();
    uArray* unwrappedValues = uArray::New(::TYPES[30/*Fuse.Scripting.V8.Simple.JSValue[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(unwrappedValues)->Item< ::JSValue*>(i) = Marshaller::Unwrap(context, uPtr(values)->Strong<uObject*>(i), pool);

    return unwrappedValues;
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue val) [static] :235
uObject* Marshaller::Wrap(::g::Fuse::Scripting::V8::Context* context, ::JSValue* val)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Wrap(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.JSValue)");
    ::JSContext* cxt = uPtr(context)->_context;

    switch (::g::Fuse::Scripting::V8::V8SimpleExtensions::GetJSType(val))
    {
        case 0:
            return NULL;
        case 1:
            return uBox<int>(::TYPES[19/*int*/], ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsInt(val));
        case 2:
            return uBox(::TYPES[20/*double*/], ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsDouble(val));
        case 3:
            return ::g::Fuse::Scripting::V8::V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsString(val), cxt);
        case 4:
            return uBox(::TYPES[25/*bool*/], ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsBool(val));
        case 5:
        {
            ::g::Fuse::Scripting::V8::Object* res = ::g::Fuse::Scripting::V8::Object::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsObject(val));
            uArray* buf = Marshaller::TryGetArrayBufferData(context, res);

            if (buf != NULL)
                return buf;

            return res;
        }
        case 6:
            return ::g::Fuse::Scripting::V8::Array::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsArray(val));
        case 7:
            return ::g::Fuse::Scripting::V8::Function::New1(context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::AsFunction(val));
        case 8:
            return ::g::Fuse::Scripting::External::New1(::g::Fuse::Scripting::V8::Handle::Target(::g::Fuse::Scripting::V8::V8SimpleExtensions::GetValue(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsExternal(val), cxt)));
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"V8 marshall...*/]));
    }
}

// private static object[] WrapArray(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSValue[] values) [static] :376
uArray* Marshaller::WrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "WrapArray(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.JSValue[])");
    int len = (values == NULL) ? 0 : uPtr(values)->Length();
    uArray* wrappedValues = uArray::New(::TYPES[12/*object[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(wrappedValues)->Strong<uObject*>(i) = Marshaller::Wrap(context, uPtr(values)->Item< ::JSValue*>(i));

    return wrappedValues;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Object :905
// {
// ~Object() :924
static void Object__Finalize_fn(Object* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "Finalize()");
    ::JSContext* cxt = (__this->_context == NULL) ? uDefault< ::JSContext*>() : uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Release2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(__this->_object), cxt);
}

static void Object_build(uType* type)
{
    ::STRINGS[28] = uString::Const("No such method: ");
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[31] = ::g::Uno::String_typeof()->Array();
    ::TYPES[11] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _object), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Object_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.V8.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))Object__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))Object__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))Object__get_Keys_fn;
    return type;
}

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) :917
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj)
{
    __this->ctor_1(context, *obj);
}

// public override sealed object CallMethod(string name, object[] args) :985
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "CallMethod(string,object[])");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::Fuse::Scripting::V8::Function* fun = uAs< ::g::Fuse::Scripting::V8::Function*>(::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty1(__this->_object, cxt, name, pool, uPtr(__this->_context)->_errorHandler)), ::TYPES[9/*Fuse.Scripting.V8.Function*/]);

            if (fun == NULL)
                U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition1(::STRINGS[28/*"No such met...*/], fun)));

            uArray* unwrappedArgs = ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args, pool);
            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::Call(uPtr(fun)->GetJSFunction(pool), cxt, __this->_object, unwrappedArgs, pool, uPtr(__this->_context)->_errorHandler));
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool ContainsKey(string key) :1003
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "ContainsKey(string)");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    bool result = false;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            result = ::g::Fuse::Scripting::V8::V8SimpleExtensions::HasProperty(__this->_object, cxt, key, pool, uPtr(__this->_context)->_errorHandler);
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :1014
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "Equals(Fuse.Scripting.Object)");
    ::JSObject* ind1;
    Object* that = uAs<Object*>(o, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), (ind1 = __this->_object, ind1), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSObject_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), uPtr(that)->_object)), void();
}

// public override sealed int GetHashCode() :1020
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "GetHashCode()");
    ::JSObject* ind2;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::V8::Simple::JSObject_typeof(), (ind2 = __this->_object, ind2), U_ALLOCA(::g::Fuse::Scripting::V8::Simple::JSObject_typeof()->ObjectSize))), void();
}

// internal Fuse.Scripting.V8.Simple.JSObject GetJSObject(Fuse.Scripting.V8.AutoReleasePool pool) :911
void Object__GetJSObject_fn(Object* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = __this->GetJSObject(*pool);
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :979
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "InstanceOf(Fuse.Scripting.Function)");
    ::g::Fuse::Scripting::V8::Function* f = uAs< ::g::Fuse::Scripting::V8::Function*>(type, ::TYPES[9/*Fuse.Scripting.V8.Function*/]);
    return *__retval = uUnbox<bool>(::TYPES[25/*bool*/], uPtr(uPtr(__this->_context)->_instanceOf)->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 2, __this, type))), void();
}

// public override sealed object get_Item(string key) :932
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Item(string)");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uObject* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            result = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty1(__this->_object, cxt, key, pool, uPtr(__this->_context)->_errorHandler));
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public override sealed void set_Item(string key, object value) :942
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "set_Item(string,object)");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::Fuse::Scripting::V8::V8SimpleExtensions::SetProperty1(__this->_object, cxt, key, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value, pool), pool, uPtr(__this->_context)->_errorHandler);
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
}

// public override sealed string[] get_Keys() :954
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Keys()");
    ::JSContext* cxt = uPtr(__this->_context)->_context;
    uArray* result = NULL;
    ::g::Fuse::Scripting::V8::AutoReleasePool pool = ::g::Fuse::Scripting::V8::AutoReleasePool__New1(cxt);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::AutoReleasePool_typeof(), pool), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::V8::Context__EnterVM vm = ::g::Fuse::Scripting::V8::Context__EnterVM__New1(__this->_context);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::V8::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::JSArray* keys = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetOwnPropertyNames(__this->_object, cxt, pool, uPtr(__this->_context)->_errorHandler);
            int len = ::g::Fuse::Scripting::V8::V8SimpleExtensions::Length(keys, cxt);
            result = uArray::New(::TYPES[31/*string[]*/], len);

            for (int i = 0; i < len; ++i)
            {
                ::JSValue* prop = ::g::Fuse::Scripting::V8::V8SimpleExtensions::GetProperty(keys, cxt, i, pool, uPtr(__this->_context)->_errorHandler);
                uObject* wrappedProp = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, prop);
                uString* strProp = uAs<uString*>(wrappedProp, ::TYPES[11/*string*/]);

                if (::g::Uno::String::op_Equality(strProp, NULL))
                    strProp = ::g::Uno::Object::ToString(uPtr(wrappedProp));

                uPtr(result)->Strong<uString*>(i) = strProp;
            }
        }
    }

    uPtr(__this->_context)->ThrowPendingExceptions();
    return *__retval = result, void();
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) :917
void Object__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj, Object** __retval)
{
    *__retval = Object::New1(context, *obj);
}

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) [instance] :917
void Object::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj)
{
    uStackFrame __("Fuse.Scripting.V8.Object", ".ctor(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.JSObject)");
    ctor_();
    _context = context;
    _object = obj;
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(_object), uPtr(_context)->_context);
}

// internal Fuse.Scripting.V8.Simple.JSObject GetJSObject(Fuse.Scripting.V8.AutoReleasePool pool) [instance] :911
::JSObject* Object::GetJSObject(::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "GetJSObject(Fuse.Scripting.V8.AutoReleasePool)");
    ::g::Fuse::Scripting::V8::V8SimpleExtensions::Retain2(::g::Fuse::Scripting::V8::V8SimpleExtensions::AsValue3(_object), uPtr(_context)->_context);
    return pool.AutoRelease3(_object);
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.JSObject obj) [static] :917
Object* Object::New1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj)
{
    Object* obj3 = (Object*)uNew(Object_typeof());
    obj3->ctor_1(context, obj);
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// private abstract interface Debugger.State :467
// {
uInterfaceType* Debugger__State_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.V8.Debugger.State", 0, 0);
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class V8SimpleExtensions :1297
// {
// static V8SimpleExtensions() :1297
static void V8SimpleExtensions__cctor__fn(uType* __type)
{
    V8SimpleExtensions::CilCallback_ = uDelegate::New(::TYPES[32/*Fuse.Scripting.V8.Simple.JSCallback*/], (void*)V8SimpleExtensions__CilCallbackImpl_fn);
}

static void V8SimpleExtensions_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::Scripting::V8::Simple::JSCallback_typeof();
    ::TYPES[29] = V8SimpleExtensions__WrappedCallback_typeof();
    type->SetFields(0,
        ::TYPES[32/*Fuse.Scripting.V8.Simple.JSCallback*/], (uintptr_t)&::g::Fuse::Scripting::V8::V8SimpleExtensions::CilCallback_, uFieldFlagsStatic);
}

uClassType* V8SimpleExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.V8SimpleExtensions", options);
    type->fp_build_ = V8SimpleExtensions_build;
    type->fp_cctor_ = V8SimpleExtensions__cctor__fn;
    return type;
}

// public static Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value) :1370
void V8SimpleExtensions__AsArray_fn(::JSValue** value, ::JSArray** __retval)
{
    *__retval = V8SimpleExtensions::AsArray(*value);
}

// public static bool AsBool(Fuse.Scripting.V8.Simple.JSValue value) :1356
void V8SimpleExtensions__AsBool_fn(::JSValue** value, bool* __retval)
{
    *__retval = V8SimpleExtensions::AsBool(*value);
}

// public static double AsDouble(Fuse.Scripting.V8.Simple.JSValue value) :1342
void V8SimpleExtensions__AsDouble_fn(::JSValue** value, double* __retval)
{
    *__retval = V8SimpleExtensions::AsDouble(*value);
}

// public static Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value) :1384
void V8SimpleExtensions__AsExternal_fn(::JSValue** value, ::JSExternal** __retval)
{
    *__retval = V8SimpleExtensions::AsExternal(*value);
}

// public static Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value) :1377
void V8SimpleExtensions__AsFunction_fn(::JSValue** value, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::AsFunction(*value);
}

// public static int AsInt(Fuse.Scripting.V8.Simple.JSValue value) :1335
void V8SimpleExtensions__AsInt_fn(::JSValue** value, int* __retval)
{
    *__retval = V8SimpleExtensions::AsInt(*value);
}

// public static Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value) :1363
void V8SimpleExtensions__AsObject_fn(::JSValue** value, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::AsObject(*value);
}

// public static Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value) :1349
void V8SimpleExtensions__AsString_fn(::JSValue** value, ::JSString** __retval)
{
    *__retval = V8SimpleExtensions::AsString(*value);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) :1466
void V8SimpleExtensions__AsValue_fn(::JSArray** arr, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue(*arr);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal ext) :1528
void V8SimpleExtensions__AsValue1_fn(::JSExternal** ext, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue1(*ext);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) :1491
void V8SimpleExtensions__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue2(*fun);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) :1449
void V8SimpleExtensions__AsValue3_fn(::JSObject** obj, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue3(*obj);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) :1406
void V8SimpleExtensions__AsValue4_fn(::JSString** str, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::AsValue4(*str);
}

// public static Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1469
void V8SimpleExtensions__Call_fn(::JSFunction** fun, ::JSContext** context, ::JSObject** thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Call(*fun, *context, *thisObject, args, *pool, errorHandler);
}

// private static Fuse.Scripting.V8.Simple.JSValue CilCallbackImpl(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error) :1496
void V8SimpleExtensions__CilCallbackImpl_fn(::JSContext** context, void** data, uArray* args, int* numArgs, ::JSValue** error, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::CilCallbackImpl(*context, *data, args, *numArgs, error);
}

// public static Fuse.Scripting.V8.Simple.JSObject Construct(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1476
void V8SimpleExtensions__Construct_fn(::JSFunction** fun, ::JSContext** context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::Construct(*fun, *context, args, *pool, errorHandler);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create() :1302
void V8SimpleExtensions__Create_fn(::JSContext** __retval)
{
    *__retval = V8SimpleExtensions::Create();
}

// private static extern Fuse.Scripting.V8.Simple.JSFunction CreateCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.Simple.JSScriptException& error) :1505
void V8SimpleExtensions__CreateCallback_fn(::JSContext** context, uDelegate* callback, ::JSScriptException** error, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::CreateCallback(*context, callback, error);
}

// public static Fuse.Scripting.V8.Simple.JSValue Evaluate(Fuse.Scripting.V8.Simple.JSContext context, string fileName, string code, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1310
void V8SimpleExtensions__Evaluate_fn(::JSContext** context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Evaluate(*context, fileName, code, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException jse) :1533
void V8SimpleExtensions__GetException_fn(::JSScriptException** jse, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetException(*jse);
}

// public static string GetFileName(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1535
void V8SimpleExtensions__GetFileName_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetFileName(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSObject GetGlobalObject(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool) :1321
void V8SimpleExtensions__GetGlobalObject_fn(::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::GetGlobalObject(*context, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSType GetJSType(Fuse.Scripting.V8.Simple.JSValue value) :1328
void V8SimpleExtensions__GetJSType_fn(::JSValue** value, int* __retval)
{
    *__retval = V8SimpleExtensions::GetJSType(*value);
}

// public static int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException jse) :1536
void V8SimpleExtensions__GetLineNumber_fn(::JSScriptException** jse, int* __retval)
{
    *__retval = V8SimpleExtensions::GetLineNumber(*jse);
}

// public static string GetMessage(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1534
void V8SimpleExtensions__GetMessage_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetMessage(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSArray GetOwnPropertyNames(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1422
void V8SimpleExtensions__GetOwnPropertyNames_fn(::JSObject** obj, ::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSArray** __retval)
{
    *__retval = V8SimpleExtensions::GetOwnPropertyNames(*obj, *context, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1452
void V8SimpleExtensions__GetProperty_fn(::JSArray** arr, ::JSContext** context, int* index, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetProperty(*arr, *context, *index, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1409
void V8SimpleExtensions__GetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::GetProperty1(*obj, *context, key, *pool, errorHandler);
}

// public static string GetSourceLine(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1538
void V8SimpleExtensions__GetSourceLine_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetSourceLine(*jse, *context);
}

// public static string GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1537
void V8SimpleExtensions__GetStackTrace_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::GetStackTrace(*jse, *context);
}

// public static Uno.IntPtr GetValue(Fuse.Scripting.V8.Simple.JSExternal ext, Fuse.Scripting.V8.Simple.JSContext context) :1527
void V8SimpleExtensions__GetValue_fn(::JSExternal** ext, ::JSContext** context, void** __retval)
{
    *__retval = V8SimpleExtensions::GetValue(*ext, *context);
}

// public static bool HasProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1429
void V8SimpleExtensions__HasProperty_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, bool* __retval)
{
    *__retval = V8SimpleExtensions::HasProperty(*obj, *context, key, *pool, errorHandler);
}

// public static int Length(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context) :1465
void V8SimpleExtensions__Length_fn(::JSArray** arr, ::JSContext** context, int* __retval)
{
    *__retval = V8SimpleExtensions::Length(*arr, *context);
}

// public static int Length(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context) :1404
void V8SimpleExtensions__Length1_fn(::JSString** str, ::JSContext** context, int* __retval)
{
    *__retval = V8SimpleExtensions::Length1(*str, *context);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewBool(bool value, Fuse.Scripting.V8.AutoReleasePool pool) :1334
void V8SimpleExtensions__NewBool_fn(bool* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewBool(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSFunction NewCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1484
void V8SimpleExtensions__NewCallback_fn(::JSContext** context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSFunction** __retval)
{
    *__retval = V8SimpleExtensions::NewCallback(*context, callback, *pool, errorHandler);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewDouble(double value, Fuse.Scripting.V8.AutoReleasePool pool) :1333
void V8SimpleExtensions__NewDouble_fn(double* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewDouble(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSExternal NewExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value, Fuse.Scripting.V8.AutoReleasePool pool) :1523
void V8SimpleExtensions__NewExternal_fn(::JSContext** context, void** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSExternal** __retval)
{
    *__retval = V8SimpleExtensions::NewExternal(*context, *value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSObject NewExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength, Fuse.Scripting.V8.AutoReleasePool pool) :1436
void V8SimpleExtensions__NewExternalArrayBuffer_fn(::JSContext** context, void** data, int* byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval)
{
    *__retval = V8SimpleExtensions::NewExternalArrayBuffer(*context, *data, *byteLength, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewInt(int value, Fuse.Scripting.V8.AutoReleasePool pool) :1332
void V8SimpleExtensions__NewInt_fn(int* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::NewInt(*value, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSString NewString(Fuse.Scripting.V8.Simple.JSContext context, string str, Fuse.Scripting.V8.AutoReleasePool pool) :1397
void V8SimpleExtensions__NewString_fn(::JSContext** context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSString** __retval)
{
    *__retval = V8SimpleExtensions::NewString(*context, str, *pool);
}

// public static Fuse.Scripting.V8.Simple.JSValue Null() :1331
void V8SimpleExtensions__Null_fn(::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Null();
}

// public static void Release(Fuse.Scripting.V8.Simple.JSContext context) :1301
void V8SimpleExtensions__Release_fn(::JSContext** context)
{
    V8SimpleExtensions::Release(*context);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1532
void V8SimpleExtensions__Release1_fn(::JSScriptException** jse, ::JSContext** context)
{
    V8SimpleExtensions::Release1(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSValue Release(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) :1330
void V8SimpleExtensions__Release2_fn(::JSValue** value, ::JSContext** context, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Release2(*value, *context);
}

// public static void Retain(Fuse.Scripting.V8.Simple.JSContext context) :1300
void V8SimpleExtensions__Retain_fn(::JSContext** context)
{
    V8SimpleExtensions::Retain(*context);
}

// public static void Retain(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) :1531
void V8SimpleExtensions__Retain1_fn(::JSScriptException** jse, ::JSContext** context)
{
    V8SimpleExtensions::Retain1(*jse, *context);
}

// public static Fuse.Scripting.V8.Simple.JSValue Retain(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) :1329
void V8SimpleExtensions__Retain2_fn(::JSValue** value, ::JSContext** context, ::JSValue** __retval)
{
    *__retval = V8SimpleExtensions::Retain2(*value, *context);
}

// public static extern void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.JSContext context, Uno.Action<Fuse.Scripting.V8.Simple.JSString> messageHandler) :1551
void V8SimpleExtensions__SetDebugMessageHandler_fn(::JSContext** context, uDelegate* messageHandler)
{
    V8SimpleExtensions::SetDebugMessageHandler(*context, messageHandler);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.Simple.JSValue value, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1459
void V8SimpleExtensions__SetProperty_fn(::JSArray** arr, ::JSContext** context, int* index, ::JSValue** value, uDelegate* errorHandler)
{
    V8SimpleExtensions::SetProperty(*arr, *context, *index, *value, errorHandler);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) :1416
void V8SimpleExtensions__SetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::JSValue** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler)
{
    V8SimpleExtensions::SetProperty1(*obj, *context, key, *value, *pool, errorHandler);
}

// public static bool StrictEquals(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue that) :1391
void V8SimpleExtensions__StrictEquals_fn(::JSValue** value, ::JSContext** context, ::JSValue** that, bool* __retval)
{
    *__retval = V8SimpleExtensions::StrictEquals(*value, *context, *that);
}

// public static string ToStr(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context) :1405
void V8SimpleExtensions__ToStr_fn(::JSString** str, ::JSContext** context, uString** __retval)
{
    *__retval = V8SimpleExtensions::ToStr(*str, *context);
}

// public static Uno.IntPtr TryGetArrayBufferData(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context) :1440
void V8SimpleExtensions__TryGetArrayBufferData_fn(::JSObject** obj, ::JSContext** context, void** __retval)
{
    *__retval = V8SimpleExtensions::TryGetArrayBufferData(*obj, *context);
}

uSStrong<uDelegate*> V8SimpleExtensions::CilCallback_;

// public static Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value) [static] :1370
::JSArray* V8SimpleExtensions::AsArray(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsArray(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSArray* result = ::g::Fuse::Scripting::V8::Simple::Value::AsArray(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static bool AsBool(Fuse.Scripting.V8.Simple.JSValue value) [static] :1356
bool V8SimpleExtensions::AsBool(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsBool(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    bool result = ::g::Fuse::Scripting::V8::Simple::Value::AsBool(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static double AsDouble(Fuse.Scripting.V8.Simple.JSValue value) [static] :1342
double V8SimpleExtensions::AsDouble(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsDouble(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    double result = ::g::Fuse::Scripting::V8::Simple::Value::AsDouble(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value) [static] :1384
::JSExternal* V8SimpleExtensions::AsExternal(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsExternal(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSExternal* result = ::g::Fuse::Scripting::V8::Simple::Value::AsExternal(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value) [static] :1377
::JSFunction* V8SimpleExtensions::AsFunction(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsFunction(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSFunction* result = ::g::Fuse::Scripting::V8::Simple::Value::AsFunction(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static int AsInt(Fuse.Scripting.V8.Simple.JSValue value) [static] :1335
int V8SimpleExtensions::AsInt(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsInt(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    int result = ::g::Fuse::Scripting::V8::Simple::Value::AsInt(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value) [static] :1363
::JSObject* V8SimpleExtensions::AsObject(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsObject(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Value::AsObject(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value) [static] :1349
::JSString* V8SimpleExtensions::AsString(::JSValue* value)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "AsString(Fuse.Scripting.V8.Simple.JSValue)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSString* result = ::g::Fuse::Scripting::V8::Simple::Value::AsString(value, &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) [static] :1466
::JSValue* V8SimpleExtensions::AsValue(::JSArray* arr)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue(arr);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal ext) [static] :1528
::JSValue* V8SimpleExtensions::AsValue1(::JSExternal* ext)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue1(ext);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) [static] :1491
::JSValue* V8SimpleExtensions::AsValue2(::JSFunction* fun)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue2(fun);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) [static] :1449
::JSValue* V8SimpleExtensions::AsValue3(::JSObject* obj)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue3(obj);
}

// public static Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) [static] :1406
::JSValue* V8SimpleExtensions::AsValue4(::JSString* str)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::AsValue4(str);
}

// public static Fuse.Scripting.V8.Simple.JSValue Call(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1469
::JSValue* V8SimpleExtensions::Call(::JSFunction* fun, ::JSContext* context, ::JSObject* thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "Call(Fuse.Scripting.V8.Simple.JSFunction,Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSValue[],Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CallCreate(context, fun, thisObject, args, uPtr(args)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// private static Fuse.Scripting.V8.Simple.JSValue CilCallbackImpl(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error) [static] :1496
::JSValue* V8SimpleExtensions::CilCallbackImpl(::JSContext* context, void* data, uArray* args, int numArgs, ::JSValue** error)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "CilCallbackImpl(Fuse.Scripting.V8.Simple.JSContext,Uno.IntPtr,Fuse.Scripting.V8.Simple.JSValue[],int,Fuse.Scripting.V8.Simple.JSValue&)");
    V8SimpleExtensions_typeof()->Init();
    ::JSValue* ret1;
    uDelegate* wrappedCallback = uAs<uDelegate*>(::g::Fuse::Scripting::V8::Handle::Target(data), ::TYPES[29/*Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback*/]);
    return (uPtr(wrappedCallback)->Invoke(&ret1, 2, args, error), ret1);
}

// public static Fuse.Scripting.V8.Simple.JSObject Construct(Fuse.Scripting.V8.Simple.JSFunction fun, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1476
::JSObject* V8SimpleExtensions::Construct(::JSFunction* fun, ::JSContext* context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "Construct(Fuse.Scripting.V8.Simple.JSFunction,Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.Simple.JSValue[],Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Value::ConstructCreate(context, fun, args, uPtr(args)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease3(result);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create() [static] :1302
::JSContext* V8SimpleExtensions::Create()
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Context::Create();
}

// private static extern Fuse.Scripting.V8.Simple.JSFunction CreateCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.Simple.JSScriptException& error) [static] :1505
::JSFunction* V8SimpleExtensions::CreateCallback(::JSContext* context, uDelegate* callback, ::JSScriptException** error)
{
    V8SimpleExtensions_typeof()->Init();
    return ::CreateJSCallback(
    	context,
    	::g::Fuse::Scripting::V8::Handle::Create(callback),
    	([] (::JSContext* context, void* data, ::JSValue* const* args, int numArgs, ::JSValue** outError) -> ::JSValue*
    	{
    		uDelegate* callback = (uDelegate*)data;
    
    		uArray* unoArgs = ::uArray::New(::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(), numArgs, args);
    		return uUnbox< ::JSValue*>(callback->Invoke(2, unoArgs, outError));
    	}),
    	error
    	);
}

// public static Fuse.Scripting.V8.Simple.JSValue Evaluate(Fuse.Scripting.V8.Simple.JSContext context, string fileName, string code, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1310
::JSValue* V8SimpleExtensions::Evaluate(::JSContext* context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "Evaluate(Fuse.Scripting.V8.Simple.JSContext,string,string,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Context::EvaluateCreate(context, V8SimpleExtensions::NewString(context, fileName, pool), V8SimpleExtensions::NewString(context, code, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException jse) [static] :1533
::JSValue* V8SimpleExtensions::GetException(::JSScriptException* jse)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::ScriptException::GetException(jse);
}

// public static string GetFileName(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1535
uString* V8SimpleExtensions::GetFileName(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetFileName(jse), context);
}

// public static Fuse.Scripting.V8.Simple.JSObject GetGlobalObject(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1321
::JSObject* V8SimpleExtensions::GetGlobalObject(::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "GetGlobalObject(Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    ::JSObject* result = ::g::Fuse::Scripting::V8::Simple::Context::CopyGlobalObject(context);
    return pool.AutoRelease3(result);
}

// public static Fuse.Scripting.V8.Simple.JSType GetJSType(Fuse.Scripting.V8.Simple.JSValue value) [static] :1328
int V8SimpleExtensions::GetJSType(::JSValue* value)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::GetType(value);
}

// public static int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException jse) [static] :1536
int V8SimpleExtensions::GetLineNumber(::JSScriptException* jse)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::ScriptException::GetLineNumber(jse);
}

// public static string GetMessage(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1534
uString* V8SimpleExtensions::GetMessage(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetMessage(jse), context);
}

// public static Fuse.Scripting.V8.Simple.JSArray GetOwnPropertyNames(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1422
::JSArray* V8SimpleExtensions::GetOwnPropertyNames(::JSObject* obj, ::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "GetOwnPropertyNames(Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSArray* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyOwnPropertyNames(context, obj, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1452
::JSValue* V8SimpleExtensions::GetProperty(::JSArray* arr, ::JSContext* context, int index, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "GetProperty(Fuse.Scripting.V8.Simple.JSArray,Fuse.Scripting.V8.Simple.JSContext,int,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyProperty(context, arr, index, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue GetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1409
::JSValue* V8SimpleExtensions::GetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "GetProperty(Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSContext,string,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSValue* result = ::g::Fuse::Scripting::V8::Simple::Value::CopyProperty1(context, obj, V8SimpleExtensions::NewString(context, key, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease5(result);
}

// public static string GetSourceLine(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1538
uString* V8SimpleExtensions::GetSourceLine(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetSourceLine(jse), context);
}

// public static string GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1537
uString* V8SimpleExtensions::GetStackTrace(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return V8SimpleExtensions::ToStr(::g::Fuse::Scripting::V8::Simple::ScriptException::GetStackTrace(jse), context);
}

// public static Uno.IntPtr GetValue(Fuse.Scripting.V8.Simple.JSExternal ext, Fuse.Scripting.V8.Simple.JSContext context) [static] :1527
void* V8SimpleExtensions::GetValue(::JSExternal* ext, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::GetExternalValue(context, ext);
}

// public static bool HasProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1429
bool V8SimpleExtensions::HasProperty(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "HasProperty(Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSContext,string,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    bool result = ::g::Fuse::Scripting::V8::Simple::Value::HasProperty(context, obj, V8SimpleExtensions::NewString(context, key, pool), &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return result;
}

// public static int Length(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context) [static] :1465
int V8SimpleExtensions::Length(::JSArray* arr, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::Length(context, arr);
}

// public static int Length(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context) [static] :1404
int V8SimpleExtensions::Length1(::JSString* str, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::Length1(context, str);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewBool(bool value, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1334
::JSValue* V8SimpleExtensions::NewBool(bool value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewBool(bool,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateBool(value));
}

// public static Fuse.Scripting.V8.Simple.JSFunction NewCallback(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback callback, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1484
::JSFunction* V8SimpleExtensions::NewCallback(::JSContext* context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewCallback(Fuse.Scripting.V8.Simple.JSContext,Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::JSFunction* result = V8SimpleExtensions::CreateCallback(context, callback, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
    return pool.AutoRelease2(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue NewDouble(double value, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1333
::JSValue* V8SimpleExtensions::NewDouble(double value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewDouble(double,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateDouble(value));
}

// public static Fuse.Scripting.V8.Simple.JSExternal NewExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1523
::JSExternal* V8SimpleExtensions::NewExternal(::JSContext* context, void* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewExternal(Fuse.Scripting.V8.Simple.JSContext,Uno.IntPtr,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease1(::g::Fuse::Scripting::V8::Simple::Value::CreateExternal(context, value));
}

// public static Fuse.Scripting.V8.Simple.JSObject NewExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1436
::JSObject* V8SimpleExtensions::NewExternalArrayBuffer(::JSContext* context, void* data, int byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext,Uno.IntPtr,int,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease3(::g::Fuse::Scripting::V8::Simple::Value::CreateExternalArrayBuffer(context, data, byteLength));
}

// public static Fuse.Scripting.V8.Simple.JSValue NewInt(int value, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1332
::JSValue* V8SimpleExtensions::NewInt(int value, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewInt(int,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    return pool.AutoRelease5(::g::Fuse::Scripting::V8::Simple::Value::CreateInt(value));
}

// public static Fuse.Scripting.V8.Simple.JSString NewString(Fuse.Scripting.V8.Simple.JSContext context, string str, Fuse.Scripting.V8.AutoReleasePool pool) [static] :1397
::JSString* V8SimpleExtensions::NewString(::JSContext* context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool pool)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "NewString(Fuse.Scripting.V8.Simple.JSContext,string,Fuse.Scripting.V8.AutoReleasePool)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    ::JSString* result = ::g::Fuse::Scripting::V8::Simple::Value::CreateString(context, str, uPtr(str)->Length(), &error);
    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return pool.AutoRelease4(result);
}

// public static Fuse.Scripting.V8.Simple.JSValue Null() [static] :1331
::JSValue* V8SimpleExtensions::Null()
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::JSNull();
}

// public static void Release(Fuse.Scripting.V8.Simple.JSContext context) [static] :1301
void V8SimpleExtensions::Release(::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Context::Release(context);
}

// public static void Release(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1532
void V8SimpleExtensions::Release1(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::ScriptException::Release(context, jse);
}

// public static Fuse.Scripting.V8.Simple.JSValue Release(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) [static] :1330
::JSValue* V8SimpleExtensions::Release2(::JSValue* value, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Value::Release(context, value);
    return value;
}

// public static void Retain(Fuse.Scripting.V8.Simple.JSContext context) [static] :1300
void V8SimpleExtensions::Retain(::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Context::Retain(context);
}

// public static void Retain(Fuse.Scripting.V8.Simple.JSScriptException jse, Fuse.Scripting.V8.Simple.JSContext context) [static] :1531
void V8SimpleExtensions::Retain1(::JSScriptException* jse, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::ScriptException::Retain(context, jse);
}

// public static Fuse.Scripting.V8.Simple.JSValue Retain(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context) [static] :1329
::JSValue* V8SimpleExtensions::Retain2(::JSValue* value, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    ::g::Fuse::Scripting::V8::Simple::Value::Retain(context, value);
    return value;
}

// public static extern void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.JSContext context, Uno.Action<Fuse.Scripting.V8.Simple.JSString> messageHandler) [static] :1551
void V8SimpleExtensions::SetDebugMessageHandler(::JSContext* context, uDelegate* messageHandler)
{
    V8SimpleExtensions_typeof()->Init();
    ::SetJSDebugMessageHandler(
    	context,
    	::g::Fuse::Scripting::V8::Handle::Create(messageHandler),
    	([] (void* data, ::JSString* message) -> void
    	{
    		uDelegate* handler = (uDelegate*)data;
    		handler->InvokeVoid(uCRef(message));
    	}));
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSArray arr, Fuse.Scripting.V8.Simple.JSContext context, int index, Fuse.Scripting.V8.Simple.JSValue value, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1459
void V8SimpleExtensions::SetProperty(::JSArray* arr, ::JSContext* context, int index, ::JSValue* value, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "SetProperty(Fuse.Scripting.V8.Simple.JSArray,Fuse.Scripting.V8.Simple.JSContext,int,Fuse.Scripting.V8.Simple.JSValue,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::g::Fuse::Scripting::V8::Simple::Value::SetProperty(context, arr, index, value, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
}

// public static void SetProperty(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context, string key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.AutoReleasePool pool, Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException> errorHandler) [static] :1416
void V8SimpleExtensions::SetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::JSValue* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "SetProperty(Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSContext,string,Fuse.Scripting.V8.Simple.JSValue,Fuse.Scripting.V8.AutoReleasePool,Uno.Action<Fuse.Scripting.V8.Simple.JSScriptException>)");
    V8SimpleExtensions_typeof()->Init();
    ::JSScriptException* error;
    ::g::Fuse::Scripting::V8::Simple::Value::SetProperty1(context, obj, V8SimpleExtensions::NewString(context, key, pool), value, &error);
    ::g::Fuse::Scripting::V8::Error::Check(context, error, errorHandler);
}

// public static bool StrictEquals(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue that) [static] :1391
bool V8SimpleExtensions::StrictEquals(::JSValue* value, ::JSContext* context, ::JSValue* that)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::StrictEquals(context, value, that);
}

// public static string ToStr(Fuse.Scripting.V8.Simple.JSString str, Fuse.Scripting.V8.Simple.JSContext context) [static] :1405
uString* V8SimpleExtensions::ToStr(::JSString* str, ::JSContext* context)
{
    V8SimpleExtensions_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Simple::Value::ToString(context, str);
}

// public static Uno.IntPtr TryGetArrayBufferData(Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSContext context) [static] :1440
void* V8SimpleExtensions::TryGetArrayBufferData(::JSObject* obj, ::JSContext* context)
{
    uStackFrame __("Fuse.Scripting.V8.V8SimpleExtensions", "TryGetArrayBufferData(Fuse.Scripting.V8.Simple.JSObject,Fuse.Scripting.V8.Simple.JSContext)");
    V8SimpleExtensions_typeof()->Init();
    int error;
    void* result = ::g::Fuse::Scripting::V8::Simple::Value::GetArrayBufferData(context, obj, &error);

    if (error == 3)
        return ::g::Uno::IntPtr::Zero_;

    ::g::Fuse::Scripting::V8::Error::Check1(error);
    return result;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/$.uno
// --------------------------------------------------------------------------------------------

// public delegate Fuse.Scripting.V8.Simple.JSValue V8SimpleExtensions.WrappedCallback(Fuse.Scripting.V8.Simple.JSValue[] args, Fuse.Scripting.V8.Simple.JSValue& error) :1483
uDelegateType* V8SimpleExtensions__WrappedCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.V8SimpleExtensions.WrappedCallback", 2, 0);
    type->SetSignature(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->ByRef());
    return type;
}

}}}} // ::g::Fuse::Scripting::V8
