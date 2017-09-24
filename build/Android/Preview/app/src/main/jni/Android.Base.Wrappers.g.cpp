// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitiv-2924c081.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Android.Base.Wrappers-90b493fe.h>
#include <Android.Base.Wrappers-dff080bb.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
//~
        bool __JWrapper_Callbacks_Registered = false;
        void __JWrapper_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
        {
        uWeakObject* weak = (uWeakObject*)ptr;
        uAutoReleasePool pool;
        ::g::Android::Base::Wrappers::JWrapper* wrapper = (::g::Android::Base::Wrappers::JWrapper*)uLoadWeak(weak);
        uStoreWeak(&weak, 0);
        }
        void __Register_Finalizer()
        {
            JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
            JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JWrapper_Finalizer};
            jclass cls = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper")));
            jint attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(cls, &nativeFunc, 1);
            if (attached < 0) {
                U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not register the instantiation callback function",54)));
            }
        }
//~
        bool __JWrapper_WeakCallback(uWeakStateIntercept::Event e, uObject* obj)
        {
            ::g::Android::Base::JNI::CheckException();
            ::g::Android::Base::Wrappers::JWrapper* wrapper = (::g::Android::Base::Wrappers::JWrapper*)obj;
            jobject jobj = wrapper->_javaObject;
            if (!jobj) return true;

            bool subclassed = wrapper->_subclassed;

            if (e == uWeakStateIntercept::OnLoad) {
                // retain went from 0 to 1
                if (subclassed) {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    wrapper->_javaObject = jni->NewGlobalRef(jobj);
                    jni->DeleteWeakGlobalRef(jobj);
                    return true;
                } else {
                    return true;
                }
            } else {
                // retain went from 1 to 0
                if (subclassed) {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    wrapper->_javaObject = jni->NewWeakGlobalRef(jobj);
                    jni->DeleteGlobalRef(jobj);
                    return false;
                } else {
                    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
                    jni->DeleteGlobalRef(jobj);
                    return true;
                }
            }
            return false;
        }
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public sealed extern class BindingSubclassAttribute :1116
// {
static void BindingSubclassAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BindingSubclassAttribute__New1_fn, 0, true, type, 0));
}

uType* BindingSubclassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(BindingSubclassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Android.Base.Wrappers.BindingSubclassAttribute", options);
    type->fp_build_ = BindingSubclassAttribute_build;
    type->fp_ctor_ = (void*)BindingSubclassAttribute__New1_fn;
    return type;
}

// public BindingSubclassAttribute() :1118
void BindingSubclassAttribute__ctor_1_fn(BindingSubclassAttribute* __this)
{
    __this->ctor_1();
}

// public BindingSubclassAttribute New() :1118
void BindingSubclassAttribute__New1_fn(BindingSubclassAttribute** __retval)
{
    *__retval = BindingSubclassAttribute::New1();
}

// public BindingSubclassAttribute() [instance] :1118
void BindingSubclassAttribute::ctor_1()
{
    ctor_();
}

// public BindingSubclassAttribute New() [static] :1118
BindingSubclassAttribute* BindingSubclassAttribute::New1()
{
    BindingSubclassAttribute* obj1 = (BindingSubclassAttribute*)uNew(BindingSubclassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public abstract extern interface IJWrapper :1122
// {
uInterfaceType* IJWrapper_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.Base.Wrappers.IJWrapper", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("_GetJavaObject", NULL, NULL, offsetof(IJWrapper, fp__GetJavaObject), false, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("_IsSubclassed", NULL, NULL, offsetof(IJWrapper, fp__IsSubclassed), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public static extern class JavaObjectHelper :1241
// {
static void JavaObjectHelper_build(uType* type)
{
    ::STRINGS[0] = uString::Const("JObjectToJWrapper: Unknown unoRef detected: >");
    ::STRINGS[1] = uString::Const("<");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("JObjectToJWrapper", NULL, (void*)JavaObjectHelper__JObjectToJWrapper_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* JavaObjectHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Wrappers.JavaObjectHelper", options);
    type->fp_build_ = JavaObjectHelper_build;
    return type;
}

// public static Android.Base.Wrappers.IJWrapper JObjectToJWrapper(Android.Base.Primitives.ujobject tmpRes, bool stackArg) :1244
void JavaObjectHelper__JObjectToJWrapper_fn(jobject* tmpRes, bool* stackArg, uObject** __retval)
{
    *__retval = JavaObjectHelper::JObjectToJWrapper(*tmpRes, *stackArg);
}

// public static Android.Base.Wrappers.IJWrapper JObjectToJWrapper(Android.Base.Primitives.ujobject tmpRes, bool stackArg) [static] :1244
uObject* JavaObjectHelper::JObjectToJWrapper(jobject tmpRes, bool stackArg)
{
    uStackFrame __("Android.Base.Wrappers.JavaObjectHelper", "JObjectToJWrapper(Android.Base.Primitives.ujobject,bool)");
    ::g::Android::Base::JNI::CheckException();
    int64_t unoRef = ::g::Android::Base::JNI::GetUnoRef(tmpRes);

    if (unoRef == 0LL)
        return NULL;
    else if (unoRef == -1LL)
        return (uObject*)::g::Android::Base::Wrappers::JWrapper::New2(tmpRes, ::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, stackArg);
    else if (unoRef > 0LL)
    {
        ::g::Android::Base::Wrappers::JWrapper* res = (::g::Android::Base::Wrappers::JWrapper*)uLoadWeak((uWeakObject*)unoRef);
        JNIEnv* __cb_jni1 = ::g::Android::Base::JNI::GetEnvPtr();

        if (__cb_jni1->GetObjectRefType(tmpRes)==JNILocalRefType && !stackArg)
            ::g::Android::Base::JNI::DeleteLocalRef1(tmpRes);

        return (uObject*)res;
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"JObjectToJW...*/], uBox<int64_t>(::g::Uno::Long_typeof(), unoRef)), ::STRINGS[1/*"<"*/])));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern class JWrapper :1129
// {
// ~JWrapper() :1169
static void JWrapper__Finalize_fn(JWrapper* __this)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Finalize()");
    __this->Dispose(false);
}

static void JWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(JWrapper_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JWrapper_type, interface1));
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujobject_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _javaObject), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _subclassed), 0,
        ::g::Android::Base::Primitives::uweakptr_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, _weakptr), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Base::Wrappers::JWrapper, disposed), 0);
    type->Reflection.SetFields(2,
        new uField("_javaObject", 0),
        new uField("_subclassed", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("_GetJavaObject", NULL, (void*)JWrapper___GetJavaObject_fn, 0, false, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("_IsSubclassed", NULL, (void*)JWrapper___IsSubclassed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)JWrapper__New1_fn, 0, true, type, 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)JWrapper__New2_fn, 0, true, type, 5, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Wrap", NULL, (void*)JWrapper__Wrap_fn, 0, true, type, 3, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
}

JWrapper_type* JWrapper_typeof()
{
    static uSStrong<JWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Java::Object_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(JWrapper);
    options.TypeSize = sizeof(JWrapper_type);
    type = (JWrapper_type*)uClassType::New("Android.Base.Wrappers.JWrapper", options);
    type->fp_build_ = JWrapper_build;
    type->fp_Finalize = (void(*)(uObject*))JWrapper__Finalize_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))JWrapper___IsSubclassed_fn;
    return type;
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :1159
void JWrapper__ctor_1_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType)
{
    __this->ctor_1(*obj, typePtr, *typeHasFallbackClass, *resolveType);
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) :1162
void JWrapper__ctor_2_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg)
{
    __this->ctor_2(*obj, typePtr, *typeHasFallbackClass, *resolveType, *stackArg);
}

// protected extern void _DisposeJavaObject() :1217
void JWrapper___DisposeJavaObject_fn(JWrapper* __this)
{
    __this->_DisposeJavaObject();
}

// public Android.Base.Primitives.ujobject _GetJavaObject() :1189
void JWrapper___GetJavaObject_fn(JWrapper* __this, jobject* __retval)
{
    *__retval = __this->_GetJavaObject();
}

// public bool _IsSubclassed() :1194
void JWrapper___IsSubclassed_fn(JWrapper* __this, bool* __retval)
{
    *__retval = __this->_IsSubclassed();
}

// protected void Dispose(bool disposing) :1204
void JWrapper__Dispose_fn(JWrapper* __this, bool* disposing)
{
    __this->Dispose(*disposing);
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :1159
void JWrapper__New1_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, JWrapper** __retval)
{
    *__retval = JWrapper::New1(*obj, typePtr, *typeHasFallbackClass, *resolveType);
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) :1162
void JWrapper__New2_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg, JWrapper** __retval)
{
    *__retval = JWrapper::New2(*obj, typePtr, *typeHasFallbackClass, *resolveType, *stackArg);
}

// private void SetInternalObj(Android.Base.Primitives.ujobject obj, bool stackArg) :1142
void JWrapper__SetInternalObj_fn(JWrapper* __this, jobject* obj, bool* stackArg)
{
    __this->SetInternalObj(*obj, *stackArg);
}

// private void Uno.IDisposable.Dispose() :1199
void JWrapper__UnoIDisposableDispose_fn(JWrapper* __this)
{
    uStackFrame __("Android.Base.Wrappers.JWrapper", "Uno.IDisposable.Dispose()");
    __this->Dispose(true);
}

// public static Android.Base.Wrappers.JWrapper Wrap(Android.Base.Primitives.ujobject obj, [bool resolveType], [bool typeHasFallbackClass]) :1174
void JWrapper__Wrap_fn(jobject* obj, bool* resolveType, bool* typeHasFallbackClass, JWrapper** __retval)
{
    *__retval = JWrapper::Wrap(*obj, *resolveType, *typeHasFallbackClass);
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [instance] :1159
void JWrapper::ctor_1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    ctor_2(obj, typePtr, typeHasFallbackClass, resolveType, false);
}

// public JWrapper(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) [instance] :1162
void JWrapper::ctor_2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    ctor_();
    this->_weakptr = 0;
    ::g::Android::Base::Types::Bridge::SetWrapperType(this, obj, typePtr, typeHasFallbackClass, resolveType);
    SetInternalObj(obj, stackArg);
}

// protected extern void _DisposeJavaObject() [instance] :1217
void JWrapper::_DisposeJavaObject()
{
    if (!this->_javaObject) return;
    ::g::Android::Base::JNI::DeleteGlobalRef(this->_javaObject);
    this->_javaObject = 0;
}

// public Android.Base.Primitives.ujobject _GetJavaObject() [instance] :1189
jobject JWrapper::_GetJavaObject()
{
    return _javaObject;
}

// public bool _IsSubclassed() [instance] :1194
bool JWrapper::_IsSubclassed()
{
    return _subclassed;
}

// protected void Dispose(bool disposing) [instance] :1204
void JWrapper::Dispose(bool disposing)
{
    bool disposing_ = disposing;

    if (!disposed)
    {
        if (disposing_)
            _DisposeJavaObject();

        disposed = true;
    }
}

// private void SetInternalObj(Android.Base.Primitives.ujobject obj, bool stackArg) [instance] :1142
void JWrapper::SetInternalObj(jobject obj, bool stackArg)
{
    if (!__JWrapper_Callbacks_Registered)
    {
        __JWrapper_Callbacks_Registered = true;
        __Register_Finalizer();
    }

    if (!_weakptr)
    {
        uStoreWeak(&_weakptr, this);
        uWeakStateIntercept::SetCallback(_weakptr, (uWeakStateIntercept::Callback)__JWrapper_WeakCallback);
    }

    if (obj)
    {
        _javaObject = ::g::Android::Base::JNI::NewGlobalRef1(obj);

        if (!stackArg && (::g::Android::Base::JNI::GetRefType1(obj) == 1))
            ::g::Android::Base::JNI::DeleteLocalRef1(obj);
    }
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [static] :1159
JWrapper* JWrapper::New1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    JWrapper* obj1 = (JWrapper*)uNew(JWrapper_typeof());
    obj1->ctor_1(obj, typePtr, typeHasFallbackClass, resolveType);
    return obj1;
}

// public JWrapper New(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg) [static] :1162
JWrapper* JWrapper::New2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    JWrapper* obj2 = (JWrapper*)uNew(JWrapper_typeof());
    obj2->ctor_2(obj, typePtr, typeHasFallbackClass, resolveType, stackArg);
    return obj2;
}

// public static Android.Base.Wrappers.JWrapper Wrap(Android.Base.Primitives.ujobject obj, [bool resolveType], [bool typeHasFallbackClass]) [static] :1174
JWrapper* JWrapper::Wrap(jobject obj, bool resolveType, bool typeHasFallbackClass)
{
    return JWrapper::New1(obj, NULL, typeHasFallbackClass, resolveType);
}
// }

}}}} // ::g::Android::Base::Wrappers
