// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidB-e9b6d531.h>
#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-75a2ab27.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Android.Base.Wrappers-90b493fe.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[7];
static uType* TYPES[3];

namespace g{
namespace Android{
namespace Base{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public static extern class AndroidBindingMacros :33
// {
static void AndroidBindingMacros_build(uType* type)
{
}

uClassType* AndroidBindingMacros_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.AndroidBindingMacros", options);
    type->fp_build_ = AndroidBindingMacros_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public static extern class JNI :36
// {
static void JNI_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Java method id for ");
    ::STRINGS[1] = uString::Const(" is null");
    ::STRINGS[2] = uString::Const("Android.Base.JNI._inited");
    ::STRINGS[3] = uString::Const("/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno");
    ::STRINGS[4] = uString::Const("Could not cache class for UnoHelper");
    ::STRINGS[5] = uString::Const("Could not cache getUnoRefMid");
    ::STRINGS[6] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::_getUnoRefMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::JNI::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::Activity_getClassLoader_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::ClassLoader_loadClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::exceptionClass_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(49,
        new uFunction("CheckException", NULL, (void*)JNI__CheckException_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("CheckException", NULL, (void*)JNI__CheckException1_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::JNIEnvPtr_typeof()),
        new uFunction("CheckException", NULL, (void*)JNI__CheckException2_fn, 0, true, uVoid_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()),
        new uFunction("DeleteGlobalRef", NULL, (void*)JNI__DeleteGlobalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("DeleteLocalRef", NULL, (void*)JNI__DeleteLocalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujclass_typeof()),
        new uFunction("DeleteLocalRef", NULL, (void*)JNI__DeleteLocalRef1_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("DeleteWeakGlobalRef", NULL, (void*)JNI__DeleteWeakGlobalRef_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetActivityClass", NULL, (void*)JNI__GetActivityClass_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 0),
        new uFunction("GetActivityObject", NULL, (void*)JNI__GetActivityObject_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("GetArrayLength", NULL, (void*)JNI__GetArrayLength_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetDefaultObject", NULL, (void*)JNI__GetDefaultObject_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 0),
        new uFunction("GetDefaultType", NULL, (void*)JNI__GetDefaultType_fn, 0, true, ::g::Uno::Type_typeof(), 0),
        new uFunction("GetEnvPtr", NULL, (void*)JNI__GetEnvPtr_fn, 0, true, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), 0),
        new uFunction("GetMethodID", NULL, (void*)JNI__GetMethodID_fn, 0, true, ::g::Android::Base::Primitives::jmethodID_typeof(), 3, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetRefType", NULL, (void*)JNI__GetRefType_fn, 0, true, JNI__RefType_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetRefType", NULL, (void*)JNI__GetRefType1_fn, 0, true, JNI__RefType_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetStaticMethodID", NULL, (void*)JNI__GetStaticMethodID_fn, 0, true, ::g::Android::Base::Primitives::jmethodID_typeof(), 3, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetUnoRef", NULL, (void*)JNI__GetUnoRef_fn, 0, true, ::g::Uno::Long_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("GetVM", NULL, (void*)JNI__GetVM_fn, 0, true, ::g::Android::Base::Primitives::JavaVMPtr_typeof(), 0),
        new uFunction("GetWrappedActivityObject", NULL, (void*)JNI__GetWrappedActivityObject_fn, 0, true, ::TYPES[2/*Android.Base.Wrappers.JWrapper*/], 0),
        new uFunction("Init", NULL, (void*)JNI__Init_fn, 0, true, uVoid_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("IsSameObject", NULL, (void*)JNI__IsSameObject_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ConstCharPtr_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass1_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 3, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Android::Base::Primitives::ConstCharPtr_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass2_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 3, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("LoadClass", NULL, (void*)JNI__LoadClass3_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("NewBooleanArray", NULL, (void*)JNI__NewBooleanArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewByteArray", NULL, (void*)JNI__NewByteArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewCharArray", NULL, (void*)JNI__NewCharArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewDoubleArray", NULL, (void*)JNI__NewDoubleArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewFloatArray", NULL, (void*)JNI__NewFloatArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewGlobalRef", NULL, (void*)JNI__NewGlobalRef_fn, 0, true, ::g::Android::Base::Primitives::ujclass_typeof(), 1, ::g::Android::Base::Primitives::ujclass_typeof()),
        new uFunction("NewGlobalRef", NULL, (void*)JNI__NewGlobalRef1_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("NewIntArray", NULL, (void*)JNI__NewIntArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewLongArray", NULL, (void*)JNI__NewLongArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewObjectArray", NULL, (void*)JNI__NewObjectArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 2, ::g::Android::Base::Primitives::ujclass_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("NewShortArray", NULL, (void*)JNI__NewShortArray_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NewWeakGlobalRef", NULL, (void*)JNI__NewWeakGlobalRef_fn, 0, true, ::g::Android::Base::Primitives::ujobject_typeof(), 1, ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("SetBooleanArrayRegion", NULL, (void*)JNI__SetBooleanArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetByteArrayRegion", NULL, (void*)JNI__SetByteArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetByteArrayRegion", NULL, (void*)JNI__SetByteArrayRegion1_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::SByte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetCharArrayRegion", NULL, (void*)JNI__SetCharArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Char_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetDoubleArrayRegion", NULL, (void*)JNI__SetDoubleArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Double_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetFloatArrayRegion", NULL, (void*)JNI__SetFloatArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Float_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetIntArrayRegion", NULL, (void*)JNI__SetIntArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetLongArrayRegion", NULL, (void*)JNI__SetLongArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetShortArrayRegion", NULL, (void*)JNI__SetShortArrayRegion_fn, 0, true, uVoid_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Short_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ThrowNewException", NULL, (void*)JNI__ThrowNewException_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("TryGetException", NULL, (void*)JNI__TryGetException_fn, 0, true, ::g::Uno::Exception_typeof(), 2, ::g::Android::Base::Primitives::JNIEnvPtr_typeof(), ::g::Uno::String_typeof()));
}

uClassType* JNI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.JNI", options);
    type->fp_build_ = JNI_build;
    return type;
}

// public static extern void CheckException() :237
void JNI__CheckException_fn()
{
    JNI::CheckException();
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) :225
void JNI__CheckException1_fn(JNIEnv** jni)
{
    JNI::CheckException1(*jni);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :230
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage)
{
    JNI::CheckException2(*jni, appendMessage);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) :200
void JNI__DeleteGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteGlobalRef(*obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) :296
void JNI__DeleteLocalRef_fn(jclass* obj)
{
    JNI::DeleteLocalRef(*obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) :290
void JNI__DeleteLocalRef1_fn(jobject* obj)
{
    JNI::DeleteLocalRef1(*obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) :203
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteWeakGlobalRef(*obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() :96
void JNI__GetActivityClass_fn(jclass* __retval)
{
    *__retval = JNI::GetActivityClass();
}

// private static Java.Object GetActivityClassInner() :91
void JNI__GetActivityClassInner_fn(::g::Java::Object** __retval)
{
    *__retval = JNI::GetActivityClassInner();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() :101
void JNI__GetActivityObject_fn(jobject* __retval)
{
    *__retval = JNI::GetActivityObject();
}

// private static Java.Object GetActivityObjectInner() :85
void JNI__GetActivityObjectInner_fn(::g::Java::Object** __retval)
{
    *__retval = JNI::GetActivityObjectInner();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) :327
void JNI__GetArrayLength_fn(jobject* array_, int* __retval)
{
    *__retval = JNI::GetArrayLength(*array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() :310
void JNI__GetDefaultObject_fn(jobject* __retval)
{
    *__retval = JNI::GetDefaultObject();
}

// public static extern Uno.Type GetDefaultType() :313
void JNI__GetDefaultType_fn(uType** __retval)
{
    *__retval = JNI::GetDefaultType();
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() :79
void JNI__GetEnvPtr_fn(JNIEnv** __retval)
{
    *__retval = JNI::GetEnvPtr();
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :245
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetMethodID(*cls, methodName, methodSig);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) :119
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType(*jni, *obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) :124
void JNI__GetRefType1_fn(jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType1(*obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :269
void JNI__GetStaticMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetStaticMethodID(*cls, methodName, methodSig);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) :316
void JNI__GetUnoRef_fn(jobject* obj, int64_t* __retval)
{
    *__retval = JNI::GetUnoRef(*obj);
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() :82
void JNI__GetVM_fn(JavaVM** __retval)
{
    *__retval = JNI::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() :106
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval)
{
    *__retval = JNI::GetWrappedActivityObject();
}

// public static void Init(Android.Base.Primitives.ujobject activityObject) :46
void JNI__Init_fn(jobject* activityObject)
{
    JNI::Init(*activityObject);
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) :206
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval)
{
    *__retval = JNI::IsSameObject(*objA_, *objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) :112
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval)
{
    *__retval = JNI::LoadClass(*jni, *name);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) :129
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass1(*jni, *name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) :148
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass2(*jni, name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) :156
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass3(name, *systemClass);
}

// public static extern Android.Base.Primitives.ujobject NewBooleanArray(int len) :329
void JNI__NewBooleanArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewBooleanArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewByteArray(int len) :331
void JNI__NewByteArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewByteArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewCharArray(int len) :333
void JNI__NewCharArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewCharArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewDoubleArray(int len) :343
void JNI__NewDoubleArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewDoubleArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) :341
void JNI__NewFloatArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewFloatArray(*len_);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) :167
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::NewGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) :161
void JNI__NewGlobalRef1_fn(jobject* obj, jobject* __retval)
{
    *__retval = JNI::NewGlobalRef1(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) :337
void JNI__NewIntArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewIntArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewLongArray(int len) :339
void JNI__NewLongArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewLongArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewObjectArray(Android.Base.Primitives.ujclass cls, int len) :345
void JNI__NewObjectArray_fn(jclass* cls_, int* len_, jobject* __retval)
{
    *__retval = JNI::NewObjectArray(*cls_, *len_);
}

// public static extern Android.Base.Primitives.ujobject NewShortArray(int len) :335
void JNI__NewShortArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewShortArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) :197
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewWeakGlobalRef(*obj_);
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len]) :385
void JNI__SetBooleanArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetBooleanArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len]) :401
void JNI__SetByteArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetByteArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len]) :393
void JNI__SetByteArrayRegion1_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetByteArrayRegion1(*javaArr, unoArr, *start, *len);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len]) :409
void JNI__SetCharArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetCharArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len]) :449
void JNI__SetDoubleArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetDoubleArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len]) :441
void JNI__SetFloatArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetFloatArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len]) :425
void JNI__SetIntArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetIntArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len]) :433
void JNI__SetLongArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetLongArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len]) :417
void JNI__SetShortArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetShortArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static extern void ThrowNewException(string message) :243
void JNI__ThrowNewException_fn(uString* message_)
{
    JNI::ThrowNewException(message_);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :208
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval)
{
    *__retval = JNI::TryGetException(*jni, appendMessage);
}

jmethodID JNI::_getUnoRefMid_;
jclass JNI::_helperCls_;
bool JNI::_inited_;
jmethodID JNI::Activity_getClassLoader_;
jmethodID JNI::ClassLoader_loadClass_;
jclass JNI::exceptionClass_;

// public static extern void CheckException() [static] :237
void JNI::CheckException()
{
    JNI::CheckException1(JNI::GetEnvPtr());
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) [static] :225
void JNI::CheckException1(JNIEnv* jni)
{
    uStackFrame __("Android.Base.JNI", "CheckException(Android.Base.Primitives.JNIEnvPtr)");
    JNI::CheckException2(jni, NULL);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :230
void JNI::CheckException2(JNIEnv* jni, uString* appendMessage)
{
    uStackFrame __("Android.Base.JNI", "CheckException(Android.Base.Primitives.JNIEnvPtr,[string])");
    ::g::Uno::Exception* excep = JNI::TryGetException(jni, appendMessage);

    if (excep != NULL)
        U_THROW(excep);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) [static] :200
void JNI::DeleteGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteGlobalRef(obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) [static] :296
void JNI::DeleteLocalRef(jclass obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) [static] :290
void JNI::DeleteLocalRef1(jobject obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :203
void JNI::DeleteWeakGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteWeakGlobalRef(obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() [static] :96
jclass JNI::GetActivityClass()
{
    uStackFrame __("Android.Base.JNI", "GetActivityClass()");
    return ::g::Android::Base::Primitives::ujobject::op_Implicit1(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr((uObject*)JNI::GetActivityClassInner()), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/])));
}

// private static Java.Object GetActivityClassInner() [static] :91
::g::Java::Object* JNI::GetActivityClassInner()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActivityClassInner59", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        JNI::CheckException();
        return __result;
    }
    
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() [static] :101
jobject JNI::GetActivityObject()
{
    uStackFrame __("Android.Base.JNI", "GetActivityObject()");
    return ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr((uObject*)JNI::GetActivityObjectInner()), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]));
}

// private static Java.Object GetActivityObjectInner() [static] :85
::g::Java::Object* JNI::GetActivityObjectInner()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActivityObjectInner60", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        JNI::CheckException();
        return __result;
    }
    
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) [static] :327
int JNI::GetArrayLength(jobject array_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    return (int)jni->GetArrayLength((jarray)array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() [static] :310
jobject JNI::GetDefaultObject()
{
    return (jobject)0;
}

// public static extern Uno.Type GetDefaultType() [static] :313
uType* JNI::GetDefaultType()
{
    return (uType*)0;
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() [static] :79
JNIEnv* JNI::GetEnvPtr()
{
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :245
jmethodID JNI::GetMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    uStackFrame __("Android.Base.JNI", "GetMethodID(Android.Base.Primitives.ujclass,string,string)");
    const char* cMethodName = uAllocCStr(methodName);
    const char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    JNI::CheckException();

    if ((mid==0))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Java method...*/], methodName), ::STRINGS[1/*" is null"*/])));

    return mid;
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) [static] :119
int JNI::GetRefType(JNIEnv* jni, jobject obj)
{
    return (int)jni->GetObjectRefType(obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) [static] :124
int JNI::GetRefType1(jobject obj)
{
    return JNI::GetRefType(JNI::GetEnvPtr(), obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :269
jmethodID JNI::GetStaticMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    const char* cMethodName = uAllocCStr(methodName);
    const char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetStaticMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) [static] :316
int64_t JNI::GetUnoRef(jobject obj)
{
    uStackFrame __("Android.Base.JNI", "GetUnoRef(Android.Base.Primitives.ujobject)");
    ::g::Uno::Diagnostics::Debug::Assert(JNI::_inited_, ::STRINGS[2/*"Android.Bas...*/], ::STRINGS[3/*"/Users/medb...*/], 318, uArray::New(::TYPES[1/*object[]*/], 0));

    if (::g::Android::Base::Primitives::ujobject::op_Inequality(obj, ::g::Android::Base::Primitives::ujobject::Null()))
        return (int64_t)JNI::GetEnvPtr()->CallStaticLongMethod(JNI::_helperCls_, JNI::_getUnoRefMid_, obj);
    else
        return 0LL;
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() [static] :82
JavaVM* JNI::GetVM()
{
    return JniHelper::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() [static] :106
::g::Android::Base::Wrappers::JWrapper* JNI::GetWrappedActivityObject()
{
    uStackFrame __("Android.Base.JNI", "GetWrappedActivityObject()");
    return uCast< ::g::Android::Base::Wrappers::JWrapper*>(JNI::GetActivityObjectInner(), ::TYPES[2/*Android.Base.Wrappers.JWrapper*/]);
}

// public static void Init(Android.Base.Primitives.ujobject activityObject) [static] :46
void JNI::Init(jobject activityObject)
{
    uStackFrame __("Android.Base.JNI", "Init(Android.Base.Primitives.ujobject)");

    if (!JNI::_inited_)
    {
        JNI::_inited_ = true;
        JNIEnv* jni = JNI::GetEnvPtr();
        JNI::Activity_getClassLoader_ = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        JNI::ClassLoader_loadClass_ = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        JNI::CheckException1(jni);
        jstring jname = jni->NewStringUTF("com.Bindings.UnoHelper");
        jclass classLoader = (jclass)jni->CallObjectMethod(activityObject, JNI::Activity_getClassLoader_);
        jclass hcls = (jclass)jni->CallObjectMethod(classLoader, JNI::ClassLoader_loadClass_, jname);
        jni->DeleteLocalRef(classLoader);
        jni->DeleteLocalRef(jname);
        JNI::CheckException1(jni);

        if (::g::Android::Base::Primitives::ujclass::op_Equality(hcls, ::g::Android::Base::Primitives::ujclass::Null()))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Could not c...*/]));

        JNI::_helperCls_ = JNI::NewGlobalRef(hcls);
        JNI::exceptionClass_ = NewGlobalRef(jni->FindClass("java/lang/RuntimeException"));
        JNI::_getUnoRefMid_ = JNI::GetEnvPtr()->GetStaticMethodID(JNI::_helperCls_,"GetUnoObjectRef","(Ljava/lang/Object;)J");

        if (!JNI::_getUnoRefMid_)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Could not c...*/]));
    }
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) [static] :206
bool JNI::IsSameObject(jobject objA_, jobject objB_)
{
    return (bool)JNI::GetEnvPtr()->IsSameObject(objA_,objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) [static] :112
jclass JNI::LoadClass(JNIEnv* jni, const char* name)
{
    return JNI::LoadClass1(jni, name, false);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) [static] :129
jclass JNI::LoadClass1(JNIEnv* jni, const char* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(Android.Base.Primitives.JNIEnvPtr,Android.Base.Primitives.ConstCharPtr,bool)");
    ::g::Uno::Diagnostics::Debug::Assert(JNI::_inited_, ::STRINGS[2/*"Android.Bas...*/], ::STRINGS[3/*"/Users/medb...*/], 131, uArray::New(::TYPES[1/*object[]*/], 0));
    jclass result;
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
        result = jni->FindClass(name);
    else
    {
        jclass classLoader = (jclass)jni->CallObjectMethod(JNI::GetActivityObject(), JNI::Activity_getClassLoader_);
        result = (jclass)jni->CallObjectMethod(classLoader, JNI::ClassLoader_loadClass_, jname);
        jni->DeleteLocalRef(classLoader);
    }

    jni->DeleteLocalRef(jname);
    JNI::CheckException1(jni);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) [static] :148
jclass JNI::LoadClass2(JNIEnv* jni, uString* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(Android.Base.Primitives.JNIEnvPtr,string,[bool])");
    const char* cname = (const char*)uAllocCStr(name);
    jclass result = JNI::LoadClass1(JNI::GetEnvPtr(), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) [static] :156
jclass JNI::LoadClass3(uString* name, bool systemClass)
{
    uStackFrame __("Android.Base.JNI", "LoadClass(string,[bool])");
    return JNI::LoadClass2(JNI::GetEnvPtr(), name, systemClass);
}

// public static extern Android.Base.Primitives.ujobject NewBooleanArray(int len) [static] :329
jobject JNI::NewBooleanArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewBooleanArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewByteArray(int len) [static] :331
jobject JNI::NewByteArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewByteArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewCharArray(int len) [static] :333
jobject JNI::NewCharArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewCharArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewDoubleArray(int len) [static] :343
jobject JNI::NewDoubleArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewDoubleArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) [static] :341
jobject JNI::NewFloatArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) [static] :167
jclass JNI::NewGlobalRef(jclass obj)
{
    return reinterpret_cast<jclass>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) [static] :161
jobject JNI::NewGlobalRef1(jobject obj)
{
    return reinterpret_cast<jobject>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) [static] :337
jobject JNI::NewIntArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewIntArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewLongArray(int len) [static] :339
jobject JNI::NewLongArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewLongArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewObjectArray(Android.Base.Primitives.ujclass cls, int len) [static] :345
jobject JNI::NewObjectArray(jclass cls_, int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewObjectArray((jsize)len_, cls_, NULL);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewShortArray(int len) [static] :335
jobject JNI::NewShortArray(int len_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewShortArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :197
jobject JNI::NewWeakGlobalRef(jobject obj_)
{
    return (jobject)reinterpret_cast<jweak>(JNI::GetEnvPtr()->NewWeakGlobalRef(obj_));
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len]) [static] :385
void JNI::SetBooleanArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetBooleanArrayRegion(Android.Base.Primitives.ujobject,bool[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetBooleanArrayRegion((jbooleanArray)javaArr,start,len,(jboolean*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len]) [static] :401
void JNI::SetByteArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetByteArrayRegion(Android.Base.Primitives.ujobject,byte[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len]) [static] :393
void JNI::SetByteArrayRegion1(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetByteArrayRegion(Android.Base.Primitives.ujobject,sbyte[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len]) [static] :409
void JNI::SetCharArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetCharArrayRegion(Android.Base.Primitives.ujobject,char[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetCharArrayRegion((jcharArray)javaArr,start,len,(jchar*)unoArr->_ptr);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len]) [static] :449
void JNI::SetDoubleArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetDoubleArrayRegion(Android.Base.Primitives.ujobject,double[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetDoubleArrayRegion((jdoubleArray)javaArr,start,len,(jdouble*)unoArr->_ptr);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len]) [static] :441
void JNI::SetFloatArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetFloatArrayRegion(Android.Base.Primitives.ujobject,float[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetFloatArrayRegion((jfloatArray)javaArr,start,len,(jfloat*)unoArr->_ptr);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len]) [static] :425
void JNI::SetIntArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetIntArrayRegion(Android.Base.Primitives.ujobject,int[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetIntArrayRegion((jintArray)javaArr,start,len,(jint*)unoArr->_ptr);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len]) [static] :433
void JNI::SetLongArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetLongArrayRegion(Android.Base.Primitives.ujobject,long[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetLongArrayRegion((jlongArray)javaArr,start,len,(jlong*)unoArr->_ptr);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len]) [static] :417
void JNI::SetShortArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    uStackFrame __("Android.Base.JNI", "SetShortArrayRegion(Android.Base.Primitives.ujobject,short[],[int],[int])");

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetShortArrayRegion((jshortArray)javaArr,start,len,(jshort*)unoArr->_ptr);
}

// public static extern void ThrowNewException(string message) [static] :243
void JNI::ThrowNewException(uString* message_)
{
    const char* message = uAllocCStr(message_);
    LOGD("%s", message);
    JNI::GetEnvPtr()->ThrowNew(JNI::exceptionClass_, message);
    uFreeCStr(message);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :208
::g::Uno::Exception* JNI::TryGetException(JNIEnv* jni, uString* appendMessage)
{
    uStackFrame __("Android.Base.JNI", "TryGetException(Android.Base.Primitives.JNIEnvPtr,[string])");
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);

        if (::g::Uno::String::op_Inequality(appendMessage, NULL))
            x = ::g::Uno::String::op_Addition2(x, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(x, ::STRINGS[6/*"\n"*/]), appendMessage));

        return ::g::Uno::Exception::New2(x);
    }

    return NULL;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public enum JNI.RefType :117
uEnumType* JNI__RefType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Android.Base.JNI.RefType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);
    return type;
}

}}} // ::g::Android::Base
