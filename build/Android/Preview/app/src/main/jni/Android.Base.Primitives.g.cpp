// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-2924c081.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-30a77109.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-65373fdf.h>
#include <Android.Base.Primitiv-712df2f8.h>
#include <Android.Base.Primitiv-75a2ab27.h>
#include <Android.Base.Primitiv-7eef1e73.h>
#include <Android.Base.Primitiv-a6e942de.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-c95fb41d.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Primitiv-e52e9f29.h>
#include <Android.Base.Primitives.jweak.h>
#include <Android.Base.Primitives.ujbyte.h>
#include <Android.Base.Primitives.ujchar.h>
#include <Android.Base.Primitives.ujint.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitiv-f2634ec4.h>
#include <Uno.Bool.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ConstCharPtr :519
// {
static void ConstCharPtr_build(uType* type)
{
}

uStructType* ConstCharPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(const char*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ConstCharPtr", options);
    type->fp_build_ = ConstCharPtr_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct JavaVMPtr :522
// {
static void JavaVMPtr_build(uType* type)
{
}

uStructType* JavaVMPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JavaVM*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JavaVMPtr", options);
    type->fp_build_ = JavaVMPtr_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct jfieldID :654
// {
static void jfieldID_build(uType* type)
{
}

uStructType* jfieldID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfieldID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jfieldID", options);
    type->fp_build_ = jfieldID_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct jmethodID :649
// {
static void jmethodID_build(uType* type)
{
}

uStructType* jmethodID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jmethodID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jmethodID", options);
    type->fp_build_ = jmethodID_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct JNIEnvPtr :525
// {
static void JNIEnvPtr_build(uType* type)
{
}

uStructType* JNIEnvPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNIEnv*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNIEnvPtr", options);
    type->fp_build_ = JNIEnvPtr_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct JNINativeMethod :646
// {
static void JNINativeMethod_build(uType* type)
{
}

uStructType* JNINativeMethod_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNINativeMethod);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNINativeMethod", options);
    type->fp_build_ = JNINativeMethod_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct jweak :528
// {
static void jweak_build(uType* type)
{
}

uStructType* jweak_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jweak);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jweak", options);
    type->fp_build_ = jweak_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujboolean :534
// {
static void ujboolean_build(uType* type)
{
}

uStructType* ujboolean_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jboolean);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujboolean", options);
    type->fp_build_ = ujboolean_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujbyte :548
// {
static void ujbyte_build(uType* type)
{
}

uStructType* ujbyte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jbyte);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujbyte", options);
    type->fp_build_ = ujbyte_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujchar :562
// {
static void ujchar_build(uType* type)
{
}

uStructType* ujchar_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jchar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujchar", options);
    type->fp_build_ = ujchar_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujclass :657
// {
static void ujclass_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("get_Null", NULL, (void*)ujclass__get_Null_fn, 0, true, type, 0));
}

uStructType* ujclass_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jclass);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujclass", options);
    type->fp_build_ = ujclass_build;
    return type;
}

// public static Android.Base.Primitives.ujclass get_Null() :661
void ujclass__get_Null_fn(jclass* __retval)
{
    *__retval = ujclass::Null();
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) :664
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval)
{
    *__retval = ujclass::op_Equality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) [static] :664
bool ujclass::op_Equality(jclass lhs, jclass rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(::g::Android::Base::Primitives::ujobject::op_Implicit(lhs), ::g::Android::Base::Primitives::ujobject::op_Implicit(rhs));
}

// public static Android.Base.Primitives.ujclass get_Null() [static] :661
jclass ujclass::Null()
{
    return NULL;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujdouble :632
// {
static void ujdouble_build(uType* type)
{
}

uStructType* ujdouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jdouble);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujdouble", options);
    type->fp_build_ = ujdouble_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujfloat :618
// {
static void ujfloat_build(uType* type)
{
}

uStructType* ujfloat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfloat);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujfloat", options);
    type->fp_build_ = ujfloat_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujint :590
// {
static void ujint_build(uType* type)
{
}

uStructType* ujint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujint", options);
    type->fp_build_ = ujint_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujlong :604
// {
static void ujlong_build(uType* type)
{
}

uStructType* ujlong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jlong);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujlong", options);
    type->fp_build_ = ujlong_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujobject :685
// {
static void ujobject_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("get_Null", NULL, (void*)ujobject__get_Null_fn, 0, true, type, 0));
}

uStructType* ujobject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jobject);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujobject", options);
    type->fp_build_ = ujobject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject get_Null() :689
void ujobject__get_Null_fn(jobject* __retval)
{
    *__retval = ujobject::Null();
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :712
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Equality(*lhs, *rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) :692
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval)
{
    *__retval = ujobject::op_Implicit(*v);
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v) :697
void ujobject__op_Implicit1_fn(jobject* v, jclass* __retval)
{
    *__retval = ujobject::op_Implicit1(*v);
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :717
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Inequality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :712
bool ujobject::op_Equality(jobject lhs, jobject rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(lhs, rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) [static] :692
jobject ujobject::op_Implicit(jclass v)
{
    return (jobject)v;
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v) [static] :697
jclass ujobject::op_Implicit1(jobject v)
{
    return (jclass)v;
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :717
bool ujobject::op_Inequality(jobject lhs, jobject rhs)
{
    return !ujobject::op_Equality(lhs, rhs);
}

// public static Android.Base.Primitives.ujobject get_Null() [static] :689
jobject ujobject::Null()
{
    return NULL;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujshort :576
// {
static void ujshort_build(uType* type)
{
}

uStructType* ujshort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jshort);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujshort", options);
    type->fp_build_ = ujshort_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujstring :676
// {
static void ujstring_build(uType* type)
{
}

uStructType* ujstring_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jstring);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujstring", options);
    type->fp_build_ = ujstring_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct ujvalue :725
// {
static void ujvalue_build(uType* type)
{
}

uStructType* ujvalue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jvalue);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujvalue", options);
    type->fp_build_ = ujvalue_build;
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/uno/base/$.uno
// ------------------------------------------------------------------------------------------------------------

// public extern struct uweakptr :531
// {
static void uweakptr_build(uType* type)
{
}

uStructType* uweakptr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uWeakObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.uweakptr", options);
    type->fp_build_ = uweakptr_build;
    return type;
}
// }

}}}} // ::g::Android::Base::Primitives
