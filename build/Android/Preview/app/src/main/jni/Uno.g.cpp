// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <cmath>
#include <uBase/String.h>
#include <uBase/Traits.h>
#include <uBase/Unicode.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-10.h>
#include <Uno.Action-11.h>
#include <Uno.Action-12.h>
#include <Uno.Action-13.h>
#include <Uno.Action-14.h>
#include <Uno.Action-15.h>
#include <Uno.Action-16.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Action-4.h>
#include <Uno.Action-5.h>
#include <Uno.Action-6.h>
#include <Uno.Action-7.h>
#include <Uno.Action-8.h>
#include <Uno.Action-9.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-6803b39e.h>
#include <Uno.Array.h>
#include <Uno.Attribute.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.ReadO-235c1e0d.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.FakeTime.h>
#include <Uno.FlagsAttribute.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.FormatException.h>
#include <Uno.Func-1.h>
#include <Uno.Func-10.h>
#include <Uno.Func-11.h>
#include <Uno.Func-12.h>
#include <Uno.Func-13.h>
#include <Uno.Func-14.h>
#include <Uno.Func-15.h>
#include <Uno.Func-16.h>
#include <Uno.Func-17.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Func-4.h>
#include <Uno.Func-5.h>
#include <Uno.Func-6.h>
#include <Uno.Func-7.h>
#include <Uno.Func-8.h>
#include <Uno.Func-9.h>
#include <Uno.GC.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.InvalidCastException.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.NullReferenceException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.ObsoleteAttribute.h>
#include <Uno.OverflowException.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implement-1faed10e.h>
#include <Uno.Runtime.Implement-330a72c2.h>
#include <Uno.Runtime.Implement-444123a4.h>
#include <Uno.Runtime.Implement-496b321b.h>
#include <Uno.Runtime.Implement-4bb10a0a.h>
#include <Uno.Runtime.Implement-78c05898.h>
#include <Uno.Runtime.Implement-ed55561e.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
#include <Uno.Vector.h>
#include <Uno.WeakReference-1.h>
#include <Uno.WeakReferenceAttribute.h>
#include <Uno/Support.h>
static uString* STRINGS[38];
static uType* TYPES[24];

namespace g{
namespace Uno{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action() :8
uDelegateType* Action_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T>(T arg) :11
uDelegateType* Action1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`1", 1, 1);
    type->SetSignature(uVoid_typeof(),
        type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2>(T1 arg1, T2 arg2) :14
uDelegateType* Action2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`2", 2, 2);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3) :17
uDelegateType* Action3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`3", 3, 3);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :20
uDelegateType* Action4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`4", 4, 4);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :23
uDelegateType* Action5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`5", 5, 5);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :26
uDelegateType* Action6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`6", 6, 6);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :29
uDelegateType* Action7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`7", 7, 7);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :32
uDelegateType* Action8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`8", 8, 8);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :35
uDelegateType* Action9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`9", 9, 9);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :38
uDelegateType* Action10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`10", 10, 10);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :41
uDelegateType* Action11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`11", 11, 11);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :44
uDelegateType* Action12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`12", 12, 12);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :47
uDelegateType* Action13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`13", 13, 13);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :50
uDelegateType* Action14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`14", 14, 14);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :53
uDelegateType* Action15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`15", 15, 15);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :56
uDelegateType* Action16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`16", 16, 16);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class AggregateException :10
// {
static void AggregateException_build(uType* type)
{
    ::STRINGS[0] = uString::Const("One or more errors occurred.");
    ::STRINGS[1] = uString::Const("---> (Inner Exception #{0}) ");
    ::STRINGS[2] = uString::Const("<---\n"
        "");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(3,
        ::g::Uno::Exception_typeof()->Array(), offsetof(::g::Uno::AggregateException, _innerExceptions), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_InnerExceptions", NULL, (void*)AggregateException__get_InnerExceptions_fn, 0, false, ::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New6_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New7_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()->Array()));
}

::g::Uno::Exception_type* AggregateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(AggregateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.AggregateException", options);
    type->fp_build_ = AggregateException_build;
    type->fp_ctor_ = (void*)AggregateException__New4_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))AggregateException__ToString_fn;
    return type;
}

// public AggregateException() :22
void AggregateException__ctor_3_fn(AggregateException* __this)
{
    __this->ctor_3();
}

// public AggregateException(string message) :32
void AggregateException__ctor_4_fn(AggregateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) :37
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions)
{
    __this->ctor_5(message, innerExceptions);
}

// public AggregateException(Uno.Exception[] innerExceptions) :27
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions)
{
    __this->ctor_6(innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() :15
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval)
{
    *__retval = __this->InnerExceptions();
}

// public AggregateException New() :22
void AggregateException__New4_fn(AggregateException** __retval)
{
    *__retval = AggregateException::New4();
}

// public AggregateException New(string message) :32
void AggregateException__New5_fn(uString* message, AggregateException** __retval)
{
    *__retval = AggregateException::New5(message);
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) :37
void AggregateException__New6_fn(uString* message, uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New6(message, innerExceptions);
}

// public AggregateException New(Uno.Exception[] innerExceptions) :27
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New7(innerExceptions);
}

// public override sealed string ToString() :43
void AggregateException__ToString_fn(AggregateException* __this, uString** __retval)
{
    uStackFrame __("Uno.AggregateException", "ToString()");
    uString* ret5;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(__this->_innerExceptions)->Length(); ++i)
    {
        uPtr(sb)->Append2(::g::Uno::String::Format(::STRINGS[1/*"---> (Inner...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int>(::TYPES[14/*int*/], i))));
        sb->Append2(uPtr(uPtr(__this->_innerExceptions)->Strong< ::g::Uno::Exception*>(i))->ToString());
        sb->Append2(::STRINGS[2/*"<---\n"*/]);

        if (i != (uPtr(__this->_innerExceptions)->Length() - 1))
            uPtr(sb)->Append2(::STRINGS[3/*"\n"*/]);
    }

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Exception__ToString_fn(__this, &ret5), ret5), ::STRINGS[3/*"\n"*/]), sb->ToString()), void();
}

// public AggregateException() [instance] :22
void AggregateException::ctor_3()
{
    ctor_4(::STRINGS[0/*"One or more...*/]);
}

// public AggregateException(string message) [instance] :32
void AggregateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) [instance] :37
void AggregateException::ctor_5(uString* message, uArray* innerExceptions)
{
    ctor_1(message);
    _innerExceptions = innerExceptions;
}

// public AggregateException(Uno.Exception[] innerExceptions) [instance] :27
void AggregateException::ctor_6(uArray* innerExceptions)
{
    ctor_5(::STRINGS[0/*"One or more...*/], innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() [instance] :15
::g::Uno::Collections::ReadOnlyCollection* AggregateException::InnerExceptions()
{
    uStackFrame __("Uno.AggregateException", "get_InnerExceptions()");
    ::g::Uno::Runtime::Implementation::Internal::ArrayList* wrapper = (::g::Uno::Runtime::Implementation::Internal::ArrayList*)::g::Uno::Runtime::Implementation::Internal::ArrayList::New1(::TYPES[1/*Uno.Runtime.Implementation.Internal.ArrayList<Uno.Exception>*/], _innerExceptions);
    return (::g::Uno::Collections::ReadOnlyCollection*)::g::Uno::Collections::ReadOnlyCollection::New1(::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], (uObject*)wrapper);
}

// public AggregateException New() [static] :22
AggregateException* AggregateException::New4()
{
    AggregateException* obj1 = (AggregateException*)uNew(AggregateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public AggregateException New(string message) [static] :32
AggregateException* AggregateException::New5(uString* message)
{
    AggregateException* obj3 = (AggregateException*)uNew(AggregateException_typeof());
    obj3->ctor_4(message);
    return obj3;
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) [static] :37
AggregateException* AggregateException::New6(uString* message, uArray* innerExceptions)
{
    AggregateException* obj4 = (AggregateException*)uNew(AggregateException_typeof());
    obj4->ctor_5(message, innerExceptions);
    return obj4;
}

// public AggregateException New(Uno.Exception[] innerExceptions) [static] :27
AggregateException* AggregateException::New7(uArray* innerExceptions)
{
    AggregateException* obj2 = (AggregateException*)uNew(AggregateException_typeof());
    obj2->ctor_6(innerExceptions);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract extern class Application :72
// {
static void Application_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Platform::Window_typeof(), offsetof(::g::Uno::Application, _Window), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Current", NULL, (void*)Application__get_Current1_fn, 0, true, type, 0),
        new uFunction("Draw", NULL, (void*)Application__Draw_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_NeedsRedraw", NULL, (void*)Application__get_NeedsRedraw_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Update", NULL, (void*)Application__Update_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Window", NULL, (void*)Application__get_Window_fn, 0, false, ::g::Uno::Platform::Window_typeof(), 0));
}

uType* Application_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::CoreApp_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// protected Application() :93
void Application__ctor_1_fn(Application* __this)
{
    __this->ctor_1();
}

// public static new Uno.Application get_Current() :77
void Application__get_Current1_fn(Application** __retval)
{
    *__retval = Application::Current1();
}

// public void Draw() :104
void Application__Draw_fn(Application* __this)
{
    __this->Draw();
}

// public bool get_NeedsRedraw() :90
void Application__get_NeedsRedraw_fn(Application* __this, bool* __retval)
{
    *__retval = __this->NeedsRedraw();
}

// public void Update() :99
void Application__Update_fn(Application* __this)
{
    __this->Update();
}

// public generated Uno.Platform.Window get_Window() :83
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval)
{
    *__retval = __this->Window();
}

// private generated void set_Window(Uno.Platform.Window value) :84
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value)
{
    __this->Window(value);
}

// protected Application() [instance] :93
void Application::ctor_1()
{
    uStackFrame __("Uno.Application", ".ctor()");
    ctor_();
    Window(::g::Uno::Platform::Window::New2());
}

// public void Draw() [instance] :104
void Application::Draw()
{
}

// public bool get_NeedsRedraw() [instance] :90
bool Application::NeedsRedraw()
{
    return true;
}

// public void Update() [instance] :99
void Application::Update()
{
}

// public generated Uno.Platform.Window get_Window() [instance] :83
::g::Uno::Platform::Window* Application::Window()
{
    return _Window;
}

// private generated void set_Window(Uno.Platform.Window value) [instance] :84
void Application::Window(::g::Uno::Platform::Window* value)
{
    _Window = value;
}

// public static new Uno.Application get_Current() [static] :77
Application* Application::Current1()
{
    return uAs<Application*>(::g::Uno::Platform::CoreApp::Current(), Application_typeof());
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public class ArgumentException :69
// {
static void ArgumentException_build(uType* type)
{
    ::STRINGS[4] = uString::Const(": ");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentException__New5_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentException", options);
    type->fp_build_ = ArgumentException_build;
    return type;
}

// public ArgumentException(string message) :71
void ArgumentException__ctor_3_fn(ArgumentException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ArgumentException(string message, string paramName) :76
void ArgumentException__ctor_4_fn(ArgumentException* __this, uString* message, uString* paramName)
{
    __this->ctor_4(message, paramName);
}

// public ArgumentException New(string message) :71
void ArgumentException__New4_fn(uString* message, ArgumentException** __retval)
{
    *__retval = ArgumentException::New4(message);
}

// public ArgumentException New(string message, string paramName) :76
void ArgumentException__New5_fn(uString* message, uString* paramName, ArgumentException** __retval)
{
    *__retval = ArgumentException::New5(message, paramName);
}

// public ArgumentException(string message) [instance] :71
void ArgumentException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ArgumentException(string message, string paramName) [instance] :76
void ArgumentException::ctor_4(uString* message, uString* paramName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(paramName, ::STRINGS[4/*": "*/]), message));
}

// public ArgumentException New(string message) [static] :71
ArgumentException* ArgumentException::New4(uString* message)
{
    ArgumentException* obj1 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj1->ctor_3(message);
    return obj1;
}

// public ArgumentException New(string message, string paramName) [static] :76
ArgumentException* ArgumentException::New5(uString* message, uString* paramName)
{
    ArgumentException* obj2 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj2->ctor_4(message, paramName);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class ArgumentNullException :91
// {
static void ArgumentNullException_build(uType* type)
{
    ::STRINGS[5] = uString::Const("value was null");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ArgumentNullException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentNullException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentNullException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentNullException", options);
    type->fp_build_ = ArgumentNullException_build;
    return type;
}

// public ArgumentNullException(string paramName) :93
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentNullException New(string paramName) :93
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval)
{
    *__retval = ArgumentNullException::New6(paramName);
}

// public ArgumentNullException(string paramName) [instance] :93
void ArgumentNullException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[5/*"value was n...*/], paramName);
}

// public ArgumentNullException New(string paramName) [static] :93
ArgumentNullException* ArgumentNullException::New6(uString* paramName)
{
    ArgumentNullException* obj1 = (ArgumentNullException*)uNew(ArgumentNullException_typeof());
    obj1->ctor_5(paramName);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class ArgumentOutOfRangeException :108
// {
static void ArgumentOutOfRangeException_build(uType* type)
{
    ::STRINGS[6] = uString::Const("value out of range");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New7_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ArgumentOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentOutOfRangeException", options);
    type->fp_build_ = ArgumentOutOfRangeException_build;
    return type;
}

// public ArgumentOutOfRangeException(string paramName) :115
void ArgumentOutOfRangeException__ctor_5_fn(ArgumentOutOfRangeException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) :110
void ArgumentOutOfRangeException__ctor_6_fn(ArgumentOutOfRangeException* __this, uString* message, uString* paramName)
{
    __this->ctor_6(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) :115
void ArgumentOutOfRangeException__New6_fn(uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New6(paramName);
}

// public ArgumentOutOfRangeException New(string message, string paramName) :110
void ArgumentOutOfRangeException__New7_fn(uString* message, uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New7(message, paramName);
}

// public ArgumentOutOfRangeException(string paramName) [instance] :115
void ArgumentOutOfRangeException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[6/*"value out o...*/], paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) [instance] :110
void ArgumentOutOfRangeException::ctor_6(uString* message, uString* paramName)
{
    ctor_4(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) [static] :115
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New6(uString* paramName)
{
    ArgumentOutOfRangeException* obj2 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj2->ctor_5(paramName);
    return obj2;
}

// public ArgumentOutOfRangeException New(string message, string paramName) [static] :110
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New7(uString* message, uString* paramName)
{
    ArgumentOutOfRangeException* obj1 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj1->ctor_6(message, paramName);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Array :158
// {
static void Array_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof();
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ArraySortImpl_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[3/*Uno.Runtime.Implementation.ArrayCopyImpl*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[3/*Uno.Runtime.Implementation.ArrayCopyImpl*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[4/*Uno.Runtime.Implementation.ArraySortImpl*/]->MakeMethod(2/*Sort<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[4/*Uno.Runtime.Implementation.ArraySortImpl*/]->MakeMethod(2/*Sort<T>*/, type->MethodTypes[3]->U(0), NULL));
    type->Reflection.SetFunctions(4,
        new uFunction("Copy`1", type->MethodTypes[0], (void*)Array__Copy_fn, 0, true, uVoid_typeof(), 5, type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Copy`1", type->MethodTypes[1], (void*)Array__Copy1_fn, 0, true, uVoid_typeof(), 3, type->MethodTypes[1]->U(0)->Array(), type->MethodTypes[1]->U(0)->Array(), ::g::Uno::Int_typeof()),
        new uFunction("Sort`1", type->MethodTypes[2], (void*)Array__Sort_fn, 0, true, uVoid_typeof(), 4, type->MethodTypes[2]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL)),
        new uFunction("Sort`1", type->MethodTypes[3], (void*)Array__Sort1_fn, 0, true, uVoid_typeof(), 2, type->MethodTypes[3]->U(0)->Array(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[3]->U(0), NULL)));
}

uClassType* Array_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Array", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->MethodTypes[2] = type->NewMethodType(1, 1);
    type->MethodTypes[3] = type->NewMethodType(1, 1);
    type->fp_build_ = Array_build;
    return type;
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :165
void Array__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    Array::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) :160
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int* length)
{
    Array::Copy1(__type, sourceArray, destinationArray, *length);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :177
void Array__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    Array::Sort(__type, elements, *index, *length, comparison);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) :172
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison)
{
    Array::Sort1(__type, elements, comparison);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :165
void Array::Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArrayCopyImpl.Copy<T>*/),
    };
    uStackFrame __("Uno.Array", "Copy`1(T[],int,T[],int,int)");
    ::g::Uno::Runtime::Implementation::ArrayCopyImpl::Copy(__types[0], sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) [static] :160
void Array::Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int length)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArrayCopyImpl.Copy<T>*/),
    };
    uStackFrame __("Uno.Array", "Copy`1(T[],T[],int)");
    ::g::Uno::Runtime::Implementation::ArrayCopyImpl::Copy(__types[0], sourceArray, 0, destinationArray, 0, length);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :177
void Array::Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArraySortImpl.Sort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],int,int,Uno.Comparison<T>)");
    ::g::Uno::Runtime::Implementation::ArraySortImpl::Sort(__types[0], elements, index, length, comparison);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) [static] :172
void Array::Sort1(uType* __type, uArray* elements, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArraySortImpl.Sort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],Uno.Comparison<T>)");
    ::g::Uno::Runtime::Implementation::ArraySortImpl::Sort(__types[0], elements, 0, uPtr(elements)->Length(), comparison);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract class Attribute :210
// {
static void Attribute_build(uType* type)
{
}

uType* Attribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Attribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Attribute", options);
    type->fp_build_ = Attribute_build;
    return type;
}

// protected generated Attribute() :210
void Attribute__ctor__fn(Attribute* __this)
{
    __this->ctor_();
}

// protected generated Attribute() [instance] :210
void Attribute::ctor_()
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Bool :280
// {
static void Bool_build(uType* type)
{
    ::STRINGS[7] = uString::Const("String");
    ::STRINGS[8] = uString::Const("true");
    ::STRINGS[9] = uString::Const("false");
    ::STRINGS[10] = uString::Const("Unable to convert string to bool");
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("Parse", NULL, (void*)Bool__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Bool_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(bool);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Bool", options);
    type->fp_build_ = Bool_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Bool__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Bool__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Bool__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :283
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :289
void Bool__GetHashCode_fn(bool* __this, uType* __type, int* __retval)
{
    return *__retval = *__this ? 1 : 0, void();
}

// public static bool Parse(string str) :310
void Bool__Parse_fn(uString* str, bool* __retval)
{
    *__retval = Bool::Parse(str);
}

// public override sealed string ToString() :300
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval)
{
    return *__retval = uString::Const(*__this ? "True" : "False"), void();
}

// public static bool Parse(string str) [static] :310
bool Bool::Parse(uString* str)
{
    uStackFrame __("bool", "Parse(string)");

    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"String"*/]));

    uString* trimmedStr = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(str))));

    if (::g::Uno::String::op_Equality(trimmedStr, ::STRINGS[8/*"true"*/]))
        return true;

    if (::g::Uno::String::op_Equality(trimmedStr, ::STRINGS[9/*"false"*/]))
        return false;

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[10/*"Unable to c...*/]));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class Buffer :360
// {
static void Buffer_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Buffer is read only");
    ::TYPES[6] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::TYPES[6/*byte[]*/], offsetof(::g::Uno::Buffer, _data), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Buffer, _isReadOnly), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Buffer, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Buffer, _sizeInBytes), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("GetByte", NULL, (void*)Buffer__GetByte_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetFloat", NULL, (void*)Buffer__GetFloat_fn, 0, false, ::g::Uno::Float_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetFloat2", NULL, (void*)Buffer__GetFloat2_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetUInt", NULL, (void*)Buffer__GetUInt_fn, 0, false, ::g::Uno::UInt_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_Item", NULL, (void*)Buffer__get_Item_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Buffer__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction(".ctor", NULL, (void*)Buffer__New1_fn, 0, true, type, 1, ::TYPES[6/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)Buffer__New4_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte4_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set5_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set6_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set8_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set18_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set23_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_SizeInBytes", NULL, (void*)Buffer__get_SizeInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Buffer", options);
    type->fp_build_ = Buffer_build;
    return type;
}

// public Buffer(byte[] data) :390
void Buffer__ctor__fn(Buffer* __this, uArray* data)
{
    __this->ctor_(data);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :377
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly)
{
    __this->ctor_2(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer(int sizeInBytes) :395
void Buffer__ctor_3_fn(Buffer* __this, int* sizeInBytes)
{
    __this->ctor_3(*sizeInBytes);
}

// public byte GetByte(int offset) :479
void Buffer__GetByte_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->GetByte(*offset);
}

// public float GetFloat(int offset, [bool littleEndian]) :673
void Buffer__GetFloat_fn(Buffer* __this, int* offset, bool* littleEndian, float* __retval)
{
    *__retval = __this->GetFloat(*offset, *littleEndian);
}

// public float2 GetFloat2(int offset, [bool littleEndian]) :684
void Buffer__GetFloat2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetFloat2(*offset, *littleEndian);
}

// internal byte[] get_GetHandle() :412
void Buffer__get_GetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->GetHandle();
}

// public uint GetUInt(int offset, [bool littleEndian]) :640
void Buffer__GetUInt_fn(Buffer* __this, int* offset, bool* littleEndian, uint32_t* __retval)
{
    *__retval = __this->GetUInt(*offset, *littleEndian);
}

// public byte get_Item(int offset) :438
void Buffer__get_Item_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->Item(*offset);
}

// public void set_Item(int offset, byte value) :439
void Buffer__set_Item_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Item(*offset, *value);
}

// public Buffer New(byte[] data) :390
void Buffer__New1_fn(uArray* data, Buffer** __retval)
{
    *__retval = Buffer::New1(data);
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :377
void Buffer__New3_fn(uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly, Buffer** __retval)
{
    *__retval = Buffer::New3(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer New(int sizeInBytes) :395
void Buffer__New4_fn(int* sizeInBytes, Buffer** __retval)
{
    *__retval = Buffer::New4(*sizeInBytes);
}

// public void Set(int offset, byte value) :485
void Buffer__Set_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Set(*offset, *value);
}

// public void Set(int offset, byte4 value) :508
void Buffer__Set2_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* value)
{
    __this->Set2(*offset, *value);
}

// public void Set(int offset, float value, [bool littleEndian]) :679
void Buffer__Set4_fn(Buffer* __this, int* offset, float* value, bool* littleEndian)
{
    __this->Set4(*offset, *value, *littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) :690
void Buffer__Set5_fn(Buffer* __this, int* offset, ::g::Uno::Float2* value, bool* littleEndian)
{
    __this->Set5(*offset, *value, *littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) :702
void Buffer__Set6_fn(Buffer* __this, int* offset, ::g::Uno::Float3* value, bool* littleEndian)
{
    __this->Set6(*offset, *value, *littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) :715
void Buffer__Set8_fn(Buffer* __this, int* offset, ::g::Uno::Float4* value, bool* littleEndian)
{
    __this->Set8(*offset, *value, *littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) :522
void Buffer__Set18_fn(Buffer* __this, int* offset, int16_t* value, bool* littleEndian)
{
    __this->Set18(*offset, *value, *littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) :559
void Buffer__Set23_fn(Buffer* __this, int* offset, uint16_t* value, bool* littleEndian)
{
    __this->Set23(*offset, *value, *littleEndian);
}

// internal byte[] get_SetHandle() :417
void Buffer__get_SetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->SetHandle();
}

// public int get_SizeInBytes() :407
void Buffer__get_SizeInBytes_fn(Buffer* __this, int* __retval)
{
    *__retval = __this->SizeInBytes();
}

// public Buffer(byte[] data) [instance] :390
void Buffer::ctor_(uArray* data)
{
    uStackFrame __("Uno.Buffer", ".ctor(byte[])");
    ctor_2(data, 0, uPtr(data)->Length(), true);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [instance] :377
void Buffer::ctor_2(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    _data = data;
    _offset = offset;
    _sizeInBytes = sizeInBytes;
    _isReadOnly = isReadOnly;
}

// public Buffer(int sizeInBytes) [instance] :395
void Buffer::ctor_3(int sizeInBytes)
{
    ctor_2(uArray::New(::TYPES[6/*byte[]*/], sizeInBytes), 0, sizeInBytes, false);
}

// public byte GetByte(int offset) [instance] :479
uint8_t Buffer::GetByte(int offset)
{
    uStackFrame __("Uno.Buffer", "GetByte(int)");
    return uPtr(GetHandle())->Item<uint8_t>(_offset + offset);
}

// public float GetFloat(int offset, [bool littleEndian]) [instance] :673
float Buffer::GetFloat(int offset, bool littleEndian)
{
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(GetHandle(), _offset + offset, littleEndian);
}

// public float2 GetFloat2(int offset, [bool littleEndian]) [instance] :684
::g::Uno::Float2 Buffer::GetFloat2(int offset, bool littleEndian)
{
    return ::g::Uno::Float2__New2(GetFloat(offset, littleEndian), GetFloat(offset + 4, littleEndian));
}

// internal byte[] get_GetHandle() [instance] :412
uArray* Buffer::GetHandle()
{
    return _data;
}

// public uint GetUInt(int offset, [bool littleEndian]) [instance] :640
uint32_t Buffer::GetUInt(int offset, bool littleEndian)
{
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(GetHandle(), _offset + offset, littleEndian);
}

// public byte get_Item(int offset) [instance] :438
uint8_t Buffer::Item(int offset)
{
    uStackFrame __("Uno.Buffer", "get_Item(int)");
    return GetByte(offset);
}

// public void set_Item(int offset, byte value) [instance] :439
void Buffer::Item(int offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "set_Item(int,byte)");
    Set(offset, value);
}

// public void Set(int offset, byte value) [instance] :485
void Buffer::Set(int offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte)");
    uPtr(SetHandle())->Item<uint8_t>(_offset + offset) = value;
}

// public void Set(int offset, byte4 value) [instance] :508
void Buffer::Set2(int offset, ::g::Uno::Byte4 value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte4)");
    Set(offset, value.X);
    Set(offset + 1, value.Y);
    Set(offset + 2, value.Z);
    Set(offset + 3, value.W);
}

// public void Set(int offset, float value, [bool littleEndian]) [instance] :679
void Buffer::Set4(int offset, float value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(SetHandle(), _offset + offset, value, littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) [instance] :690
void Buffer::Set5(int offset, ::g::Uno::Float2 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float2,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) [instance] :702
void Buffer::Set6(int offset, ::g::Uno::Float3 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float3,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) [instance] :715
void Buffer::Set8(int offset, ::g::Uno::Float4 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float4,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
    Set4(offset + 12, value.W, littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) [instance] :522
void Buffer::Set18(int offset, int16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,short,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetShort(SetHandle(), _offset + offset, value, littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) [instance] :559
void Buffer::Set23(int offset, uint16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,ushort,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(SetHandle(), _offset + offset, value, littleEndian);
}

// internal byte[] get_SetHandle() [instance] :417
uArray* Buffer::SetHandle()
{
    uStackFrame __("Uno.Buffer", "get_SetHandle()");

    if (_isReadOnly)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"Buffer is r...*/]));

    return _data;
}

// public int get_SizeInBytes() [instance] :407
int Buffer::SizeInBytes()
{
    return _sizeInBytes;
}

// public Buffer New(byte[] data) [static] :390
Buffer* Buffer::New1(uArray* data)
{
    Buffer* obj3 = (Buffer*)uNew(Buffer_typeof());
    obj3->ctor_(data);
    return obj3;
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [static] :377
Buffer* Buffer::New3(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    Buffer* obj1 = (Buffer*)uNew(Buffer_typeof());
    obj1->ctor_2(data, offset, sizeInBytes, isReadOnly);
    return obj1;
}

// public Buffer New(int sizeInBytes) [static] :395
Buffer* Buffer::New4(int sizeInBytes)
{
    Buffer* obj4 = (Buffer*)uNew(Buffer_typeof());
    obj4->ctor_3(sizeInBytes);
    return obj4;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Byte :821
// {
static void Byte_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* Byte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte", options);
    type->fp_build_ = Byte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :827
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :833
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :844
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Byte2 :945
// {
static void Byte2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte2, X), 0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Byte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Byte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte2", options);
    type->fp_build_ = Byte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :988
void Byte2__Equals_fn(Byte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :989
void Byte2__GetHashCode_fn(Byte2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :990
void Byte2__ToString_fn(Byte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[7/*byte*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[7/*byte*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Byte4 :1002
// {
static void Byte4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte4, X), 0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte4, Y), 0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte4, Z), 0,
        ::TYPES[7/*byte*/], offsetof(::g::Uno::Byte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Byte4__New2_fn, 0, true, type, 4, ::TYPES[7/*byte*/], ::TYPES[7/*byte*/], ::TYPES[7/*byte*/], ::TYPES[7/*byte*/]));
}

uStructType* Byte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Byte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte4", options);
    type->fp_build_ = Byte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte4__ToString_fn;
    return type;
}

// public Byte4(byte x, byte y, byte z, byte w) :1037
void Byte4__ctor_1_fn(Byte4* __this, uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public override sealed bool Equals(object o) :1063
void Byte4__Equals_fn(Byte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :1064
void Byte4__GetHashCode_fn(Byte4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public Byte4 New(byte x, byte y, byte z, byte w) :1037
void Byte4__New2_fn(uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w, Byte4* __retval)
{
    *__retval = Byte4__New2(*x, *y, *z, *w);
}

// public override sealed string ToString() :1065
void Byte4__ToString_fn(Byte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[7/*byte*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[7/*byte*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Byte::ToString(__this->Z, ::TYPES[7/*byte*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Byte::ToString(__this->W, ::TYPES[7/*byte*/])), void();
}

// public Byte4(byte x, byte y, byte z, byte w) [instance] :1037
void Byte4::ctor_1(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Byte4 New(byte x, byte y, byte z, byte w) [static] :1037
Byte4 Byte4__New2(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    Byte4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Char :1084
// {
static void Char_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("IsDigit", NULL, (void*)Char__IsDigit_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsWhiteSpace", NULL, (void*)Char__IsWhiteSpace_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("ToLower", NULL, (void*)Char__ToLower_fn, 0, true, type, 1, type),
        new uFunction("ToUpper", NULL, (void*)Char__ToUpper_fn, 0, true, type, 1, type));
}

uStructType* Char_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uChar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Char", options);
    type->fp_build_ = Char_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Char__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Char__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Char__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :1090
void Char__Equals_fn(uChar* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uChar>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :1096
void Char__GetHashCode_fn(uChar* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public static bool IsDigit(char c) :1186
void Char__IsDigit_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsDigit(*c);
}

// public static bool IsWhiteSpace(char c) :1170
void Char__IsWhiteSpace_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsWhiteSpace(*c);
}

// public static char ToLower(char c) :1154
void Char__ToLower_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToLower(*c);
}

// public override sealed string ToString() :1107
void Char__ToString_fn(uChar* __this, uType* __type, uString** __retval)
{
    uString* result = uString::New(1);
    result->_ptr[0] = *__this;
    return *__retval = result, void();
}

// public static char ToUpper(char c) :1138
void Char__ToUpper_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToUpper(*c);
}

// public static bool IsDigit(char c) [static] :1186
bool Char::IsDigit(uChar c)
{
    return (c >= '0') && (c <= '9');
}

// public static bool IsWhiteSpace(char c) [static] :1170
bool Char::IsWhiteSpace(uChar c)
{
    switch (c)
    {
        case ' ':
        case 5760:
        case 8192:
        case 8193:
        case 8194:
        case 8195:
        case 8196:
        case 8197:
        case 8198:
        case 8199:
        case 8200:
        case 8201:
        case 8202:
        case 8239:
        case 8287:
        case 12288:
        case 8232:
        case 8233:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 133:
        case 160:
            return true;
        default:
            return false;
    }
}

// public static char ToLower(char c) [static] :1154
uChar Char::ToLower(uChar c)
{
    return uBase::Unicode::ToLower(c);
}

// public static char ToUpper(char c) [static] :1138
uChar Char::ToUpper(uChar c)
{
    return uBase::Unicode::ToUpper(c);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Color :1358
// {
// static Color() :1358
static void Color__cctor__fn(uType* __type)
{
    Color::ToYCbCrMat_ = ::g::Uno::Float3x3__New1(0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color::ToYCbCrMatInv_ = ::g::Uno::Float3x3__New1(1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

static void Color_build(uType* type)
{
    ::STRINGS[13] = uString::Const("hex");
    ::STRINGS[14] = uString::Const("ch");
    type->SetFields(0,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&::g::Uno::Color::ToYCbCrMat_, uFieldFlagsStatic,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&::g::Uno::Color::ToYCbCrMatInv_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("ToYCbCrMat", 0),
        new uField("ToYCbCrMatInv", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("FromArgb", NULL, (void*)Color__FromArgb_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("FromHex", NULL, (void*)Color__FromHex_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("FromRgba", NULL, (void*)Color__FromRgba_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("ToArgb", NULL, (void*)Color__ToArgb_fn, 0, true, ::g::Uno::UInt_typeof(), 1, ::g::Uno::Float4_typeof()));
}

uClassType* Color_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Color", options);
    type->fp_build_ = Color_build;
    type->fp_cctor_ = Color__cctor__fn;
    return type;
}

// public static float4 FromArgb(uint argb) :1438
void Color__FromArgb_fn(uint32_t* argb, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromArgb(*argb);
}

// public static float4 FromHex(string hex) :1579
void Color__FromHex_fn(uString* hex, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromHex(hex);
}

// private static float4 FromInt4(int4 rgba) :1412
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromInt4(*rgba);
}

// public static float4 FromRgba(uint rgba) :1423
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromRgba(*rgba);
}

// private static int ParseHexByte(char ch1, char ch2) :1527
void Color__ParseHexByte_fn(uChar* ch1, uChar* ch2, int* __retval)
{
    *__retval = Color::ParseHexByte(*ch1, *ch2);
}

// private static int ParseHexNibble(char ch) :1521
void Color__ParseHexNibble_fn(uChar* ch, int* __retval)
{
    *__retval = Color::ParseHexNibble(*ch);
}

// private static int4 ParseHexString(string hex) :1534
void Color__ParseHexString_fn(uString* hex, ::g::Uno::Int4* __retval)
{
    *__retval = Color::ParseHexString(hex);
}

// private static int ParseHexValue(char ch) :1509
void Color__ParseHexValue_fn(uChar* ch, int* __retval)
{
    *__retval = Color::ParseHexValue(*ch);
}

// public static uint ToArgb(float4 rgba) :1387
void Color__ToArgb_fn(::g::Uno::Float4* rgba, uint32_t* __retval)
{
    *__retval = Color::ToArgb(*rgba);
}

// private static uint ToArgb(int4 rgba) :1382
void Color__ToArgb1_fn(::g::Uno::Int4* rgba, uint32_t* __retval)
{
    *__retval = Color::ToArgb1(*rgba);
}

// private static int4 ToInt4(float4 rgba) :1371
void Color__ToInt4_fn(::g::Uno::Float4* rgba, ::g::Uno::Int4* __retval)
{
    *__retval = Color::ToInt4(*rgba);
}

::g::Uno::Float3x3 Color::ToYCbCrMat_;
::g::Uno::Float3x3 Color::ToYCbCrMatInv_;

// public static float4 FromArgb(uint argb) [static] :1438
::g::Uno::Float4 Color::FromArgb(uint32_t argb)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__New2((float)((argb >> 16) & 255U) / 255.0f, (float)((argb >> 8) & 255U) / 255.0f, (float)((argb >> 0) & 255U) / 255.0f, (float)((argb >> 24) & 255U) / 255.0f);
}

// public static float4 FromHex(string hex) [static] :1579
::g::Uno::Float4 Color::FromHex(uString* hex)
{
    uStackFrame __("Uno.Color", "FromHex(string)");
    Color_typeof()->Init();

    if ((uPtr(hex)->Length() > 0) && (uPtr(hex)->Item(0) == '#'))
        hex = ::g::Uno::String::Substring(uPtr(hex), 1);

    return Color::FromInt4(Color::ParseHexString(hex));
}

// private static float4 FromInt4(int4 rgba) [static] :1412
::g::Uno::Float4 Color::FromInt4(::g::Uno::Int4 rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__op_Division1(::g::Uno::Float4__op_Implicit1(rgba), 255.0f);
}

// public static float4 FromRgba(uint rgba) [static] :1423
::g::Uno::Float4 Color::FromRgba(uint32_t rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__New2((float)((rgba >> 24) & 255U) / 255.0f, (float)((rgba >> 16) & 255U) / 255.0f, (float)((rgba >> 8) & 255U) / 255.0f, (float)((rgba >> 0) & 255U) / 255.0f);
}

// private static int ParseHexByte(char ch1, char ch2) [static] :1527
int Color::ParseHexByte(uChar ch1, uChar ch2)
{
    uStackFrame __("Uno.Color", "ParseHexByte(char,char)");
    Color_typeof()->Init();
    int v1 = Color::ParseHexValue(ch1);
    int v2 = Color::ParseHexValue(ch2);
    return (v1 << 4) | v2;
}

// private static int ParseHexNibble(char ch) [static] :1521
int Color::ParseHexNibble(uChar ch)
{
    uStackFrame __("Uno.Color", "ParseHexNibble(char)");
    Color_typeof()->Init();
    int v = Color::ParseHexValue(ch);
    return (v << 4) | v;
}

// private static int4 ParseHexString(string hex) [static] :1534
::g::Uno::Int4 Color::ParseHexString(uString* hex)
{
    uStackFrame __("Uno.Color", "ParseHexString(string)");
    Color_typeof()->Init();

    if (uPtr(hex)->Length() == 3)
        return ::g::Uno::Int4__New2(Color::ParseHexNibble(uPtr(hex)->Item(0)), Color::ParseHexNibble(uPtr(hex)->Item(1)), Color::ParseHexNibble(uPtr(hex)->Item(2)), 255);
    else if (uPtr(hex)->Length() == 4)
        return ::g::Uno::Int4__New2(Color::ParseHexNibble(uPtr(hex)->Item(0)), Color::ParseHexNibble(uPtr(hex)->Item(1)), Color::ParseHexNibble(uPtr(hex)->Item(2)), Color::ParseHexNibble(uPtr(hex)->Item(3)));
    else if (uPtr(hex)->Length() == 6)
        return ::g::Uno::Int4__New2(Color::ParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1)), Color::ParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3)), Color::ParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5)), 255);
    else if (uPtr(hex)->Length() == 8)
        return ::g::Uno::Int4__New2(Color::ParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1)), Color::ParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3)), Color::ParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5)), Color::ParseHexByte(uPtr(hex)->Item(6), uPtr(hex)->Item(7)));
    else
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[13/*"hex"*/]));
}

// private static int ParseHexValue(char ch) [static] :1509
int Color::ParseHexValue(uChar ch)
{
    uStackFrame __("Uno.Color", "ParseHexValue(char)");
    Color_typeof()->Init();

    if ((ch >= '0') && (ch <= '9'))
        return (int)ch - 48;
    else if ((ch >= 'a') && (ch <= 'f'))
        return 10 + ((int)ch - 97);
    else if ((ch >= 'A') && (ch <= 'F'))
        return 10 + ((int)ch - 65);

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[14/*"ch"*/]));
}

// public static uint ToArgb(float4 rgba) [static] :1387
uint32_t Color::ToArgb(::g::Uno::Float4 rgba)
{
    Color_typeof()->Init();
    return Color::ToArgb1(Color::ToInt4(rgba));
}

// private static uint ToArgb(int4 rgba) [static] :1382
uint32_t Color::ToArgb1(::g::Uno::Int4 rgba)
{
    Color_typeof()->Init();
    return (uint32_t)((((rgba.W << 24) | (rgba.X << 16)) | (rgba.Y << 8)) | rgba.Z);
}

// private static int4 ToInt4(float4 rgba) [static] :1371
::g::Uno::Int4 Color::ToInt4(::g::Uno::Float4 rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Math::Clamp13(::g::Uno::Int4__op_Explicit(::g::Uno::Float4__op_Addition1(::g::Uno::Float4__op_Multiply1(rgba, 255.0f), 0.5f)), 0, 255);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate int Comparison<T>(T a, T b) :1685
uDelegateType* Comparison_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Comparison`1", 2, 1);
    type->SetSignature(::g::Uno::Int_typeof(),
        type->T(0),
        type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class DateTime :1695
// {
static void DateTime_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)DateTime__New1_fn, 0, true, type, 0),
        new uFunction("get_Now", NULL, (void*)DateTime__get_Now_fn, 0, true, ::g::Uno::Time::ZonedDateTime_typeof(), 0),
        new uFunction("get_UtcNow", NULL, (void*)DateTime__get_UtcNow_fn, 0, true, ::g::Uno::Time::ZonedDateTime_typeof(), 0));
}

uType* DateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.DateTime", options);
    type->fp_build_ = DateTime_build;
    type->fp_ctor_ = (void*)DateTime__New1_fn;
    return type;
}

// public generated DateTime() :1695
void DateTime__ctor__fn(DateTime* __this)
{
    __this->ctor_();
}

// public generated DateTime New() :1695
void DateTime__New1_fn(DateTime** __retval)
{
    *__retval = DateTime::New1();
}

// public static Uno.Time.ZonedDateTime get_Now() :1699
void DateTime__get_Now_fn(::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = DateTime::Now();
}

// public static Uno.Time.ZonedDateTime get_UtcNow() :1707
void DateTime__get_UtcNow_fn(::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = DateTime::UtcNow();
}

// public generated DateTime() [instance] :1695
void DateTime::ctor_()
{
}

// public generated DateTime New() [static] :1695
DateTime* DateTime::New1()
{
    DateTime* obj1 = (DateTime*)uNew(DateTime_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Time.ZonedDateTime get_Now() [static] :1699
::g::Uno::Time::ZonedDateTime* DateTime::Now()
{
    uStackFrame __("Uno.DateTime", "get_Now()");
    return ::g::Uno::Time::ZonedDateTime::Now();
}

// public static Uno.Time.ZonedDateTime get_UtcNow() [static] :1707
::g::Uno::Time::ZonedDateTime* DateTime::UtcNow()
{
    uStackFrame __("Uno.DateTime", "get_UtcNow()");
    return uPtr(::g::Uno::Time::ZonedDateTime::Now())->WithZone(::g::Uno::Time::DateTimeZone::Utc());
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public class Delegate :1726
// {
static void Delegate_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Combine", NULL, (void*)Delegate__Combine_fn, 0, true, type, 2, type, type),
        new uFunction("Remove", NULL, (void*)Delegate__Remove_fn, 0, true, type, 2, type, type));
}

uType* Delegate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Delegate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Delegate", options);
    type->fp_build_ = Delegate_build;
    type->fp_ctor_ = (void*)Delegate__New1_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Delegate__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Delegate__GetHashCode_fn;
    return type;
}

// private Delegate() :1728
void Delegate__ctor__fn(uDelegate* __this)
{
    Delegate::ctor_(__this);
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) :1732
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Combine(source, value);
}

// public override sealed bool Equals(object other) :1898
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval)
{
    return *__retval = uIs(other, Delegate_typeof()) && Delegate::EqualsImpl(__this, uAs<uDelegate*>(other, Delegate_typeof())), void();
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) :1866
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::EqualsImpl(left, right);
}

// public override sealed int GetHashCode() :1903
void Delegate__GetHashCode_fn(uDelegate* __this, int* __retval)
{
    return *__retval = 0, void();
}

// private Delegate New() :1728
void Delegate__New1_fn(uDelegate** __retval)
{
    *__retval = Delegate::New1();
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) :1888
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Equality(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) :1893
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Inequality(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) :1780
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Remove(source, value);
}

// private Delegate() [instance] :1728
void Delegate::ctor_(uDelegate* __this)
{
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) [static] :1732
uDelegate* Delegate::Combine(uDelegate* source, uDelegate* value)
{
    if (!value)
        return source;
    if (!source)
        return value;
    if (source->__type != value->__type)
        U_THROW_ICE();
    
    uDelegate copy;
    uDelegate *prev = &copy;
    
    for (uDelegate* d = value; d != NULL; d = d->_prev)
        prev = prev->_prev = d->Copy();
    
    prev->_prev = source;
    return copy._prev;
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) [static] :1866
bool Delegate::EqualsImpl(uDelegate* left, uDelegate* right)
{
    return left == right || (
            left != NULL && right != NULL &&
            left->__type == right->__type &&
            left->_func == right->_func &&
            left->_this == right->_this &&
            ::g::Uno::Object::Equals1(left->_prev, right->_prev)
        );
}

// private Delegate New() [static] :1728
uDelegate* Delegate::New1()
{
    uDelegate* obj1 = (uDelegate*)uNew(Delegate_typeof());
    Delegate::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) [static] :1888
bool Delegate::op_Equality(uDelegate* left, uDelegate* right)
{
    return Delegate::EqualsImpl(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) [static] :1893
bool Delegate::op_Inequality(uDelegate* left, uDelegate* right)
{
    return !Delegate::EqualsImpl(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) [static] :1780
uDelegate* Delegate::Remove(uDelegate* source, uDelegate* value)
{
    if (source == NULL || value == NULL)
        return source;
    if (value->__type != source->__type)
        U_THROW_ICE();
    
    for (uDelegate *first = source; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = value; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                d->_func != last->_func ||
                d->_this != last->_this)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = source; e != first; e = e->_prev)
                prev = prev->_prev = e->Copy();
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return source;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Double :1927
// {
static void Double_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Double__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Double__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Double_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(double);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Double", options);
    type->fp_build_ = Double_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Double__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Double__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Double__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :1936
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :1942
void Double__GetHashCode_fn(double* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static double Parse(string str) :1967
void Double__Parse_fn(uString* str, double* __retval)
{
    *__retval = Double::Parse(str);
}

// public override sealed string ToString() :1953
void Double__ToString_fn(double* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, double& res) :2004
void Double__TryParse_fn(uString* str, double* res, bool* __retval)
{
    *__retval = Double::TryParse(str, res);
}

// public static double Parse(string str) [static] :1967
double Double::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToDouble();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, double& res) [static] :2004
bool Double::TryParse(uString* str, double* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToDouble(res);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Enum :2085
// {
static void Enum_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Unable to parse enum '");
    ::STRINGS[16] = uString::Const("'");
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Enum__Parse_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Parse", NULL, (void*)Enum__Parse1_fn, 0, true, uObject_typeof(), 3, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* Enum_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Enum", options);
    type->fp_build_ = Enum_build;
    return type;
}

// public static object Parse(Uno.Type type, string str) :2100
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval)
{
    *__retval = Enum::Parse(type, str);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) :2087
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval)
{
    *__retval = Enum::Parse1(type, str, *ignoreCase);
}

// public static object Parse(Uno.Type type, string str) [static] :2100
uObject* Enum::Parse(uType* type, uString* str)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string)");
    return Enum::Parse1(type, str, false);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) [static] :2087
uObject* Enum::Parse1(uType* type, uString* str, bool ignoreCase)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string,bool)");
    uPtr(type);
    int64_t result;
    if (uEnum::TryParse(type, str, ignoreCase, &result))
        return uBoxPtr(type, &result);
    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[15/*"Unable to p...*/], str), ::STRINGS[16/*"'"*/])));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public class EventArgs :2175
// {
// static EventArgs() :2175
static void EventArgs__cctor__fn(uType* __type)
{
    EventArgs::Empty_ = EventArgs::New1();
}

static void EventArgs_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&::g::Uno::EventArgs::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EventArgs__New1_fn, 0, true, type, 0));
}

uType* EventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.EventArgs", options);
    type->fp_build_ = EventArgs_build;
    type->fp_ctor_ = (void*)EventArgs__New1_fn;
    type->fp_cctor_ = EventArgs__cctor__fn;
    return type;
}

// public generated EventArgs() :2175
void EventArgs__ctor__fn(EventArgs* __this)
{
    __this->ctor_();
}

// public generated EventArgs New() :2175
void EventArgs__New1_fn(EventArgs** __retval)
{
    *__retval = EventArgs::New1();
}

uSStrong<EventArgs*> EventArgs::Empty_;

// public generated EventArgs() [instance] :2175
void EventArgs::ctor_()
{
}

// public generated EventArgs New() [static] :2175
EventArgs* EventArgs::New1()
{
    EventArgs* obj1 = (EventArgs*)uNew(EventArgs_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void EventHandler(object sender, Uno.EventArgs args) :2189
uDelegateType* EventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void EventHandler<TEventArgs>(object sender, TEventArgs args) :2192
uDelegateType* EventHandler1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public class Exception :130
// {
static void Exception_build(uType* type)
{
    ::STRINGS[17] = uString::Const("");
    ::STRINGS[4] = uString::Const(": ");
    ::STRINGS[18] = uString::Const(" ---> ");
    ::STRINGS[19] = uString::Const("\n"
        "    --- End of inner exception stack trace ---");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::STRINGS[20] = uString::Const("Uno.Exception.StackTrace is not supported in this build configuration");
    type->SetFields(0,
        type, offsetof(::g::Uno::Exception, _inner), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Exception, _message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Exception, _trace), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_InnerException", NULL, (void*)Exception__get_InnerException_fn, 0, false, type, 0),
        new uFunction("get_Message", NULL, NULL, offsetof(Exception_type, fp_get_Message), false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Exception__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Exception__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Exception__New3_fn, 0, true, type, 2, ::g::Uno::String_typeof(), type),
        new uFunction("get_StackTrace", NULL, (void*)Exception__get_StackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

Exception_type* Exception_typeof()
{
    static uSStrong<Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Exception);
    options.TypeSize = sizeof(Exception_type);
    type = (Exception_type*)uClassType::New("Uno.Exception", options);
    type->fp_build_ = Exception_build;
    type->fp_ctor_ = (void*)Exception__New1_fn;
    type->fp_get_Message = Exception__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Exception__ToString_fn;
    return type;
}

// public Exception() :150
void Exception__ctor__fn(Exception* __this)
{
    __this->ctor_();
}

// public Exception(string message) :155
void Exception__ctor_1_fn(Exception* __this, uString* message)
{
    __this->ctor_1(message);
}

// public Exception(string message, Uno.Exception inner) :160
void Exception__ctor_2_fn(Exception* __this, uString* message, Exception* inner)
{
    __this->ctor_2(message, inner);
}

// public Uno.Exception get_InnerException() :141
void Exception__get_InnerException_fn(Exception* __this, Exception** __retval)
{
    *__retval = __this->InnerException();
}

// public virtual string get_Message() :135
void Exception__get_Message_fn(Exception* __this, uString** __retval)
{
    return *__retval = __this->_message, void();
}

// public Exception New() :150
void Exception__New1_fn(Exception** __retval)
{
    *__retval = Exception::New1();
}

// public Exception New(string message) :155
void Exception__New2_fn(uString* message, Exception** __retval)
{
    *__retval = Exception::New2(message);
}

// public Exception New(string message, Uno.Exception inner) :160
void Exception__New3_fn(uString* message, Exception* inner, Exception** __retval)
{
    *__retval = Exception::New3(message, inner);
}

// public string get_StackTrace() :147
void Exception__get_StackTrace_fn(Exception* __this, uString** __retval)
{
    *__retval = __this->StackTrace();
}

// public override string ToString() :169
void Exception__ToString_fn(Exception* __this, uString** __retval)
{
    uStackFrame __("Uno.Exception", "ToString()");
    uString* temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(::g::Uno::Object::GetType(__this), ::STRINGS[4/*": "*/]), __this->Message());

    if (__this->_inner != NULL)
        temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[18/*" ---> "*/]), uPtr(__this->_inner)->ToString()), ::STRINGS[19/*"\n    --- E...*/]);

    if (::g::Uno::String::IsNullOrEmpty(__this->_trace))
        return *__retval = temp, void();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[3/*"\n"*/]), __this->_trace), void();
}

// public Exception() [instance] :150
void Exception::ctor_()
{
    ctor_1(::STRINGS[17/*""*/]);
}

// public Exception(string message) [instance] :155
void Exception::ctor_1(uString* message)
{
    ctor_2(message, NULL);
}

// public Exception(string message, Uno.Exception inner) [instance] :160
void Exception::ctor_2(uString* message, Exception* inner)
{
    _message = message;
    _inner = inner;
    _trace = uGetStackTrace();
}

// public Uno.Exception get_InnerException() [instance] :141
Exception* Exception::InnerException()
{
    return _inner;
}

// public string get_StackTrace() [instance] :147
uString* Exception::StackTrace()
{
    uString* ind1 = _trace;
    return (ind1 != NULL) ? ind1 : ::STRINGS[20/*"Uno.Excepti...*/];
}

// public Exception New() [static] :150
Exception* Exception::New1()
{
    Exception* obj2 = (Exception*)uNew(Exception_typeof());
    obj2->ctor_();
    return obj2;
}

// public Exception New(string message) [static] :155
Exception* Exception::New2(uString* message)
{
    Exception* obj3 = (Exception*)uNew(Exception_typeof());
    obj3->ctor_1(message);
    return obj3;
}

// public Exception New(string message, Uno.Exception inner) [static] :160
Exception* Exception::New3(uString* message, Exception* inner)
{
    Exception* obj4 = (Exception*)uNew(Exception_typeof());
    obj4->ctor_2(message, inner);
    return obj4;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class FakeTime :2200
// {
static void FakeTime_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FakeTime__New1_fn, 0, true, type, 0));
}

uType* FakeTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FakeTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FakeTime", options);
    type->fp_build_ = FakeTime_build;
    type->fp_ctor_ = (void*)FakeTime__New1_fn;
    return type;
}

// public generated FakeTime() :2200
void FakeTime__ctor__fn(FakeTime* __this)
{
    __this->ctor_();
}

// public generated FakeTime New() :2200
void FakeTime__New1_fn(FakeTime** __retval)
{
    *__retval = FakeTime::New1();
}

// public generated FakeTime() [instance] :2200
void FakeTime::ctor_()
{
}

// public generated FakeTime New() [static] :2200
FakeTime* FakeTime::New1()
{
    FakeTime* obj1 = (FakeTime*)uNew(FakeTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class FlagsAttribute :2216
// {
static void FlagsAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FlagsAttribute__New1_fn, 0, true, type, 0));
}

uType* FlagsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(FlagsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FlagsAttribute", options);
    type->fp_build_ = FlagsAttribute_build;
    type->fp_ctor_ = (void*)FlagsAttribute__New1_fn;
    return type;
}

// public generated FlagsAttribute() :2216
void FlagsAttribute__ctor_1_fn(FlagsAttribute* __this)
{
    __this->ctor_1();
}

// public generated FlagsAttribute New() :2216
void FlagsAttribute__New1_fn(FlagsAttribute** __retval)
{
    *__retval = FlagsAttribute::New1();
}

// public generated FlagsAttribute() [instance] :2216
void FlagsAttribute::ctor_1()
{
    ctor_();
}

// public generated FlagsAttribute New() [static] :2216
FlagsAttribute* FlagsAttribute::New1()
{
    FlagsAttribute* obj1 = (FlagsAttribute*)uNew(FlagsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float :2238
// {
static void Float_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("IsInfinity", NULL, (void*)Float__IsInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNegativeInfinity", NULL, (void*)Float__IsNegativeInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsPositiveInfinity", NULL, (void*)Float__IsPositiveInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Parse", NULL, (void*)Float__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Float_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(float);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float", options);
    type->fp_build_ = Float_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :2249
void Float__Equals_fn(float* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2255
void Float__GetHashCode_fn(float* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static bool IsInfinity(float f) :2385
void Float__IsInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsInfinity(*f);
}

// public static bool IsNegativeInfinity(float f) :2375
void Float__IsNegativeInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNegativeInfinity(*f);
}

// public static bool IsPositiveInfinity(float f) :2380
void Float__IsPositiveInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsPositiveInfinity(*f);
}

// public static float Parse(string str) :2280
void Float__Parse_fn(uString* str, float* __retval)
{
    *__retval = Float::Parse(str);
}

// public override sealed string ToString() :2266
void Float__ToString_fn(float* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool IsInfinity(float f) [static] :2385
bool Float::IsInfinity(float f)
{
    return Float::IsNegativeInfinity(f) || Float::IsPositiveInfinity(f);
}

// public static bool IsNegativeInfinity(float f) [static] :2375
bool Float::IsNegativeInfinity(float f)
{
    return f == -FLT_INF;
}

// public static bool IsPositiveInfinity(float f) [static] :2380
bool Float::IsPositiveInfinity(float f)
{
    return f == FLT_INF;
}

// public static float Parse(string str) [static] :2280
float Float::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToFloat();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float2 :2401
// {
static void Float2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<float2>*/, type, NULL);
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2, X), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Float2__get_Item_fn, 0, false, ::TYPES[9/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float2__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New1_fn, 0, true, type, 1, ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New2_fn, 0, true, type, 2, ::TYPES[9/*float*/], ::TYPES[9/*float*/]));
}

uStructType* Float2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Float2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2", options);
    type->fp_build_ = Float2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2__ToString_fn;
    return type;
}

// public Float2(float xy) :2422
void Float2__ctor__fn(Float2* __this, float* xy)
{
    __this->ctor_(*xy);
}

// public Float2(float x, float y) :2423
void Float2__ctor_1_fn(Float2* __this, float* x, float* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :2453
void Float2__Equals_fn(Float2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2454
void Float2__GetHashCode_fn(Float2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public float get_Item(int index) :2408
void Float2__get_Item_fn(Float2* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :2414
void Float2__set_Item_fn(Float2* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float2 New(float xy) :2422
void Float2__New1_fn(float* xy, Float2* __retval)
{
    *__retval = Float2__New1(*xy);
}

// public Float2 New(float x, float y) :2423
void Float2__New2_fn(float* x, float* y, Float2* __retval)
{
    *__retval = Float2__New2(*x, *y);
}

// public static operator +(float a, float2 b) :2437
void Float2__op_Addition_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition(*a, *b);
}

// public static operator +(float2 a, float b) :2432
void Float2__op_Addition1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Addition1(*a, *b);
}

// public static operator +(float2 a, float2 b) :2427
void Float2__op_Addition2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition2(*a, *b);
}

// public static operator /(float2 a, float b) :2435
void Float2__op_Division1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Division1(*a, *b);
}

// public static operator /(float2 a, float2 b) :2430
void Float2__op_Division2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Division2(*a, *b);
}

// public static operator ==(float2 a, float2 b) :2442
void Float2__op_Equality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Equality(*a, *b);
}

// public static implicit operator float2(int2 a) :2451
void Float2__op_Implicit1_fn(::g::Uno::Int2* a, Float2* __retval)
{
    *__retval = Float2__op_Implicit1(*a);
}

// public static operator !=(float2 a, float2 b) :2443
void Float2__op_Inequality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Inequality(*a, *b);
}

// public static operator *(float a, float2 b) :2439
void Float2__op_Multiply_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply(*a, *b);
}

// public static operator *(float2 a, float b) :2434
void Float2__op_Multiply1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply1(*a, *b);
}

// public static operator *(float2 a, float2 b) :2429
void Float2__op_Multiply2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply2(*a, *b);
}

// public static operator -(float2 a, float b) :2433
void Float2__op_Subtraction1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction1(*a, *b);
}

// public static operator -(float2 a, float2 b) :2428
void Float2__op_Subtraction2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction2(*a, *b);
}

// public static operator -(float2 a) :2425
void Float2__op_UnaryNegation_fn(Float2* a, Float2* __retval)
{
    *__retval = Float2__op_UnaryNegation(*a);
}

// public override sealed string ToString() :2455
void Float2__ToString_fn(Float2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[9/*float*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[9/*float*/])), void();
}

// public Float2(float xy) [instance] :2422
void Float2::ctor_(float xy)
{
    X = (Y = xy);
}

// public Float2(float x, float y) [instance] :2423
void Float2::ctor_1(float x, float y)
{
    X = x;
    Y = y;
}

// public float get_Item(int index) [instance] :2408
float Float2::Item(int index)
{
    uStackFrame __("float2", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :2414
void Float2::Item(int index, float value)
{
    uStackFrame __("float2", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float2 New(float xy) [static] :2422
Float2 Float2__New1(float xy)
{
    Float2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Float2 New(float x, float y) [static] :2423
Float2 Float2__New2(float x, float y)
{
    Float2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(float a, float2 b) [static] :2437
Float2 Float2__op_Addition(float a, Float2 b)
{
    return Float2__New2(a + b.X, a + b.Y);
}

// public static operator +(float2 a, float b) [static] :2432
Float2 Float2__op_Addition1(Float2 a, float b)
{
    return Float2__New2(a.X + b, a.Y + b);
}

// public static operator +(float2 a, float2 b) [static] :2427
Float2 Float2__op_Addition2(Float2 a, Float2 b)
{
    return Float2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(float2 a, float b) [static] :2435
Float2 Float2__op_Division1(Float2 a, float b)
{
    return Float2__New2(a.X / b, a.Y / b);
}

// public static operator /(float2 a, float2 b) [static] :2430
Float2 Float2__op_Division2(Float2 a, Float2 b)
{
    return Float2__New2(a.X / b.X, a.Y / b.Y);
}

// public static operator ==(float2 a, float2 b) [static] :2442
bool Float2__op_Equality(Float2 a, Float2 b)
{
    bool ret5;
    return (::g::Uno::Generic__Equals_fn(::TYPES[8/*Uno.Generic.Equals<float2>*/], uCRef(a), uCRef(b), &ret5), ret5);
}

// public static implicit operator float2(int2 a) [static] :2451
Float2 Float2__op_Implicit1(::g::Uno::Int2 a)
{
    return Float2__New2((float)a.X, (float)a.Y);
}

// public static operator !=(float2 a, float2 b) [static] :2443
bool Float2__op_Inequality(Float2 a, Float2 b)
{
    bool ret6;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[8/*Uno.Generic.Equals<float2>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static operator *(float a, float2 b) [static] :2439
Float2 Float2__op_Multiply(float a, Float2 b)
{
    return Float2__New2(a * b.X, a * b.Y);
}

// public static operator *(float2 a, float b) [static] :2434
Float2 Float2__op_Multiply1(Float2 a, float b)
{
    return Float2__New2(a.X * b, a.Y * b);
}

// public static operator *(float2 a, float2 b) [static] :2429
Float2 Float2__op_Multiply2(Float2 a, Float2 b)
{
    return Float2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(float2 a, float b) [static] :2433
Float2 Float2__op_Subtraction1(Float2 a, float b)
{
    return Float2__New2(a.X - b, a.Y - b);
}

// public static operator -(float2 a, float2 b) [static] :2428
Float2 Float2__op_Subtraction2(Float2 a, Float2 b)
{
    return Float2__New2(a.X - b.X, a.Y - b.Y);
}

// public static operator -(float2 a) [static] :2425
Float2 Float2__op_UnaryNegation(Float2 a)
{
    return Float2__New2(-a.X, -a.Y);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float2x2 :2468
// {
static void Float2x2_build(uType* type)
{
    ::STRINGS[21] = uString::Const(",");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2x2, M11), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2x2, M12), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2x2, M21), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float2x2, M22), 0);
    type->Reflection.SetFields(4,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M21", 2),
        new uField("M22", 3));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Float2x2__New1_fn, 0, true, type, 4, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2x2__New2_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()));
}

uStructType* Float2x2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Float2x2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2x2", options);
    type->fp_build_ = Float2x2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2x2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2x2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2x2__ToString_fn;
    return type;
}

// public Float2x2(float m11, float m12, float m21, float m22) :2496
void Float2x2__ctor__fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22)
{
    __this->ctor_(*m11, *m12, *m21, *m22);
}

// public Float2x2(float2 a, float2 b) :2504
void Float2x2__ctor_1_fn(Float2x2* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b)
{
    __this->ctor_1(*a, *b);
}

// public override sealed bool Equals(object o) :2560
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2561
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Float2x2 New(float m11, float m12, float m21, float m22) :2496
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval)
{
    *__retval = Float2x2__New1(*m11, *m12, *m21, *m22);
}

// public Float2x2 New(float2 a, float2 b) :2504
void Float2x2__New2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, Float2x2* __retval)
{
    *__retval = Float2x2__New2(*a, *b);
}

// public override sealed string ToString() :2562
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2x2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[9/*float*/]), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[9/*float*/])), void();
}

// public Float2x2(float m11, float m12, float m21, float m22) [instance] :2496
void Float2x2::ctor_(float m11, float m12, float m21, float m22)
{
    M11 = m11;
    M12 = m12;
    M21 = m21;
    M22 = m22;
}

// public Float2x2(float2 a, float2 b) [instance] :2504
void Float2x2::ctor_1(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    M11 = a.X;
    M12 = a.Y;
    M21 = b.X;
    M22 = b.Y;
}

// public Float2x2 New(float m11, float m12, float m21, float m22) [static] :2496
Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22)
{
    Float2x2 obj1;
    obj1.ctor_(m11, m12, m21, m22);
    return obj1;
}

// public Float2x2 New(float2 a, float2 b) [static] :2504
Float2x2 Float2x2__New2(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    Float2x2 obj2;
    obj2.ctor_1(a, b);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float3 :2580
// {
static void Float3_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<float3>*/, type, NULL);
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3, X), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3, Y), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Float3__New1_fn, 0, true, type, 1, ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New2_fn, 0, true, type, 3, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New4_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::TYPES[9/*float*/]));
}

uStructType* Float3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Float3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3", options);
    type->fp_build_ = Float3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3__ToString_fn;
    return type;
}

// public Float3(float xyz) :2603
void Float3__ctor__fn(Float3* __this, float* xyz)
{
    __this->ctor_(*xyz);
}

// public Float3(float x, float y, float z) :2604
void Float3__ctor_1_fn(Float3* __this, float* x, float* y, float* z)
{
    __this->ctor_1(*x, *y, *z);
}

// public Float3(float2 xy, float z) :2605
void Float3__ctor_3_fn(Float3* __this, ::g::Uno::Float2* xy, float* z)
{
    __this->ctor_3(*xy, *z);
}

// public override sealed bool Equals(object o) :2630
void Float3__Equals_fn(Float3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :2631
void Float3__GetHashCode_fn(Float3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public Float3 New(float xyz) :2603
void Float3__New1_fn(float* xyz, Float3* __retval)
{
    *__retval = Float3__New1(*xyz);
}

// public Float3 New(float x, float y, float z) :2604
void Float3__New2_fn(float* x, float* y, float* z, Float3* __retval)
{
    *__retval = Float3__New2(*x, *y, *z);
}

// public Float3 New(float2 xy, float z) :2605
void Float3__New4_fn(::g::Uno::Float2* xy, float* z, Float3* __retval)
{
    *__retval = Float3__New4(*xy, *z);
}

// public static operator +(float3 a, float3 b) :2608
void Float3__op_Addition2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Addition2(*a, *b);
}

// public static operator /(float3 a, float b) :2616
void Float3__op_Division1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Division1(*a, *b);
}

// public static operator /(float3 a, float3 b) :2611
void Float3__op_Division2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Division2(*a, *b);
}

// public static operator ==(float3 a, float3 b) :2623
void Float3__op_Equality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Equality(*a, *b);
}

// public static operator !=(float3 a, float3 b) :2624
void Float3__op_Inequality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Inequality(*a, *b);
}

// public static operator *(float a, float3 b) :2620
void Float3__op_Multiply_fn(float* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply(*a, *b);
}

// public static operator *(float3 a, float b) :2615
void Float3__op_Multiply1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply1(*a, *b);
}

// public static operator *(float3 a, float3 b) :2610
void Float3__op_Multiply2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply2(*a, *b);
}

// public static operator -(float3 a, float3 b) :2609
void Float3__op_Subtraction2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Subtraction2(*a, *b);
}

// public static operator -(float3 a) :2626
void Float3__op_UnaryNegation_fn(Float3* a, Float3* __retval)
{
    *__retval = Float3__op_UnaryNegation(*a);
}

// public override sealed string ToString() :2632
void Float3__ToString_fn(Float3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[9/*float*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[9/*float*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[9/*float*/])), void();
}

// public Float3(float xyz) [instance] :2603
void Float3::ctor_(float xyz)
{
    X = (Y = (Z = xyz));
}

// public Float3(float x, float y, float z) [instance] :2604
void Float3::ctor_1(float x, float y, float z)
{
    X = x;
    Y = y;
    Z = z;
}

// public Float3(float2 xy, float z) [instance] :2605
void Float3::ctor_3(::g::Uno::Float2 xy, float z)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
}

// public Float3 New(float xyz) [static] :2603
Float3 Float3__New1(float xyz)
{
    Float3 obj1;
    obj1.ctor_(xyz);
    return obj1;
}

// public Float3 New(float x, float y, float z) [static] :2604
Float3 Float3__New2(float x, float y, float z)
{
    Float3 obj2;
    obj2.ctor_1(x, y, z);
    return obj2;
}

// public Float3 New(float2 xy, float z) [static] :2605
Float3 Float3__New4(::g::Uno::Float2 xy, float z)
{
    Float3 obj3;
    obj3.ctor_3(xy, z);
    return obj3;
}

// public static operator +(float3 a, float3 b) [static] :2608
Float3 Float3__op_Addition2(Float3 a, Float3 b)
{
    return Float3__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

// public static operator /(float3 a, float b) [static] :2616
Float3 Float3__op_Division1(Float3 a, float b)
{
    return Float3__New2(a.X / b, a.Y / b, a.Z / b);
}

// public static operator /(float3 a, float3 b) [static] :2611
Float3 Float3__op_Division2(Float3 a, Float3 b)
{
    return Float3__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z);
}

// public static operator ==(float3 a, float3 b) [static] :2623
bool Float3__op_Equality(Float3 a, Float3 b)
{
    bool ret7;
    return (::g::Uno::Generic__Equals_fn(::TYPES[10/*Uno.Generic.Equals<float3>*/], uCRef(a), uCRef(b), &ret7), ret7);
}

// public static operator !=(float3 a, float3 b) [static] :2624
bool Float3__op_Inequality(Float3 a, Float3 b)
{
    bool ret8;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[10/*Uno.Generic.Equals<float3>*/], uCRef(a), uCRef(b), &ret8), ret8);
}

// public static operator *(float a, float3 b) [static] :2620
Float3 Float3__op_Multiply(float a, Float3 b)
{
    return Float3__New2(a * b.X, a * b.Y, a * b.Z);
}

// public static operator *(float3 a, float b) [static] :2615
Float3 Float3__op_Multiply1(Float3 a, float b)
{
    return Float3__New2(a.X * b, a.Y * b, a.Z * b);
}

// public static operator *(float3 a, float3 b) [static] :2610
Float3 Float3__op_Multiply2(Float3 a, Float3 b)
{
    return Float3__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

// public static operator -(float3 a, float3 b) [static] :2609
Float3 Float3__op_Subtraction2(Float3 a, Float3 b)
{
    return Float3__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

// public static operator -(float3 a) [static] :2626
Float3 Float3__op_UnaryNegation(Float3 a)
{
    return Float3__op_Multiply1(a, -1.0f);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float3x3 :2645
// {
static void Float3x3_build(uType* type)
{
    ::STRINGS[21] = uString::Const(",");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M11), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M12), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M13), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M21), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M22), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M23), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M31), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M32), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float3x3, M33), 0);
    type->Reflection.SetFields(9,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M21", 3),
        new uField("M22", 4),
        new uField("M23", 5),
        new uField("M31", 6),
        new uField("M32", 7),
        new uField("M33", 8));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Float3x3__New1_fn, 0, true, type, 9, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]));
}

uStructType* Float3x3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ValueSize = sizeof(Float3x3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3x3", options);
    type->fp_build_ = Float3x3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3x3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3x3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3x3__ToString_fn;
    return type;
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :2676
void Float3x3__ctor__fn(Float3x3* __this, float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33)
{
    __this->ctor_(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed bool Equals(object o) :2763
void Float3x3__Equals_fn(Float3x3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :2764
void Float3x3__GetHashCode_fn(Float3x3* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :2676
void Float3x3__New1_fn(float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33, Float3x3* __retval)
{
    *__retval = Float3x3__New1(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed string ToString() :2766
void Float3x3__ToString_fn(Float3x3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3x3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[9/*float*/]), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[9/*float*/])), ::g::Uno::Float::ToString(__this->M13, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[9/*float*/])), ::g::Uno::Float::ToString(__this->M23, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[9/*float*/])), ::g::Uno::Float::ToString(__this->M33, ::TYPES[9/*float*/])), void();
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [instance] :2676
void Float3x3::ctor_(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M31 = m31;
    M32 = m32;
    M33 = m33;
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [static] :2676
Float3x3 Float3x3__New1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 obj1;
    obj1.ctor_(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float4 :2784
// {
static void Float4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<float4>*/, type, NULL);
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4, X), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4, Y), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4, Z), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(9,
        new uFunction("get_Identity", NULL, (void*)Float4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4__get_Item_fn, 0, false, ::TYPES[9/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New1_fn, 0, true, type, 1, ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New2_fn, 0, true, type, 4, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New5_fn, 0, true, type, 2, ::TYPES[9/*float*/], ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New6_fn, 0, true, type, 3, ::g::Uno::Float2_typeof(), ::TYPES[9/*float*/], ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New7_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New8_fn, 0, true, type, 2, ::g::Uno::Float3_typeof(), ::TYPES[9/*float*/]));
}

uStructType* Float4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Float4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4", options);
    type->fp_build_ = Float4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4__ToString_fn;
    return type;
}

// public Float4(float xyzw) :2814
void Float4__ctor__fn(Float4* __this, float* xyzw)
{
    __this->ctor_(*xyzw);
}

// public Float4(float x, float y, float z, float w) :2815
void Float4__ctor_1_fn(Float4* __this, float* x, float* y, float* z, float* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Float4(float x, float3 yzw) :2821
void Float4__ctor_4_fn(Float4* __this, float* x, ::g::Uno::Float3* yzw)
{
    __this->ctor_4(*x, *yzw);
}

// public Float4(float2 xy, float z, float w) :2816
void Float4__ctor_5_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w)
{
    __this->ctor_5(*xy, *z, *w);
}

// public Float4(float2 xy, float2 zw) :2819
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public Float4(float3 xyz, float w) :2820
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w)
{
    __this->ctor_7(*xyz, *w);
}

// public override sealed bool Equals(object o) :2848
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :2849
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public static float4 get_Identity() :2788
void Float4__get_Identity_fn(Float4* __retval)
{
    *__retval = Float4__Identity();
}

// public float get_Item(int index) :2796
void Float4__get_Item_fn(Float4* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :2804
void Float4__set_Item_fn(Float4* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float4 New(float xyzw) :2814
void Float4__New1_fn(float* xyzw, Float4* __retval)
{
    *__retval = Float4__New1(*xyzw);
}

// public Float4 New(float x, float y, float z, float w) :2815
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New2(*x, *y, *z, *w);
}

// public Float4 New(float x, float3 yzw) :2821
void Float4__New5_fn(float* x, ::g::Uno::Float3* yzw, Float4* __retval)
{
    *__retval = Float4__New5(*x, *yzw);
}

// public Float4 New(float2 xy, float z, float w) :2816
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New6(*xy, *z, *w);
}

// public Float4 New(float2 xy, float2 zw) :2819
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval)
{
    *__retval = Float4__New7(*xy, *zw);
}

// public Float4 New(float3 xyz, float w) :2820
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval)
{
    *__retval = Float4__New8(*xyz, *w);
}

// public static operator +(float a, float4 b) :2834
void Float4__op_Addition_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition(*a, *b);
}

// public static operator +(float4 a, float b) :2829
void Float4__op_Addition1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Addition1(*a, *b);
}

// public static operator +(float4 a, float4 b) :2824
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition2(*a, *b);
}

// public static operator /(float4 a, float b) :2832
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Division1(*a, *b);
}

// public static operator /(float4 a, float4 b) :2827
void Float4__op_Division2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Division2(*a, *b);
}

// public static operator ==(float4 a, float4 b) :2839
void Float4__op_Equality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Equality(*a, *b);
}

// public static implicit operator float4(int4 a) :2846
void Float4__op_Implicit1_fn(::g::Uno::Int4* a, Float4* __retval)
{
    *__retval = Float4__op_Implicit1(*a);
}

// public static operator !=(float4 a, float4 b) :2840
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Inequality(*a, *b);
}

// public static operator *(float a, float4 b) :2836
void Float4__op_Multiply_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply(*a, *b);
}

// public static operator *(float4 a, float b) :2831
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply1(*a, *b);
}

// public static operator *(float4 a, float4 b) :2826
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply2(*a, *b);
}

// public static operator -(float4 a, float4 b) :2825
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Subtraction2(*a, *b);
}

// public override sealed string ToString() :2850
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[9/*float*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[9/*float*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[9/*float*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->W, ::TYPES[9/*float*/])), void();
}

// public Float4(float xyzw) [instance] :2814
void Float4::ctor_(float xyzw)
{
    X = (Y = (Z = (W = xyzw)));
}

// public Float4(float x, float y, float z, float w) [instance] :2815
void Float4::ctor_1(float x, float y, float z, float w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Float4(float x, float3 yzw) [instance] :2821
void Float4::ctor_4(float x, ::g::Uno::Float3 yzw)
{
    X = x;
    Y = yzw.X;
    Z = yzw.Y;
    W = yzw.Z;
}

// public Float4(float2 xy, float z, float w) [instance] :2816
void Float4::ctor_5(::g::Uno::Float2 xy, float z, float w)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
    W = w;
}

// public Float4(float2 xy, float2 zw) [instance] :2819
void Float4::ctor_6(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public Float4(float3 xyz, float w) [instance] :2820
void Float4::ctor_7(::g::Uno::Float3 xyz, float w)
{
    X = xyz.X;
    Y = xyz.Y;
    Z = xyz.Z;
    W = w;
}

// public float get_Item(int index) [instance] :2796
float Float4::Item(int index)
{
    uStackFrame __("float4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :2804
void Float4::Item(int index, float value)
{
    uStackFrame __("float4", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4 New(float xyzw) [static] :2814
Float4 Float4__New1(float xyzw)
{
    Float4 obj1;
    obj1.ctor_(xyzw);
    return obj1;
}

// public Float4 New(float x, float y, float z, float w) [static] :2815
Float4 Float4__New2(float x, float y, float z, float w)
{
    Float4 obj2;
    obj2.ctor_1(x, y, z, w);
    return obj2;
}

// public Float4 New(float x, float3 yzw) [static] :2821
Float4 Float4__New5(float x, ::g::Uno::Float3 yzw)
{
    Float4 obj8;
    obj8.ctor_4(x, yzw);
    return obj8;
}

// public Float4 New(float2 xy, float z, float w) [static] :2816
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w)
{
    Float4 obj3;
    obj3.ctor_5(xy, z, w);
    return obj3;
}

// public Float4 New(float2 xy, float2 zw) [static] :2819
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    Float4 obj6;
    obj6.ctor_6(xy, zw);
    return obj6;
}

// public Float4 New(float3 xyz, float w) [static] :2820
Float4 Float4__New8(::g::Uno::Float3 xyz, float w)
{
    Float4 obj7;
    obj7.ctor_7(xyz, w);
    return obj7;
}

// public static operator +(float a, float4 b) [static] :2834
Float4 Float4__op_Addition(float a, Float4 b)
{
    return Float4__New2(a + b.X, a + b.Y, a + b.Z, a + b.W);
}

// public static operator +(float4 a, float b) [static] :2829
Float4 Float4__op_Addition1(Float4 a, float b)
{
    return Float4__New2(a.X + b, a.Y + b, a.Z + b, a.W + b);
}

// public static operator +(float4 a, float4 b) [static] :2824
Float4 Float4__op_Addition2(Float4 a, Float4 b)
{
    return Float4__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

// public static operator /(float4 a, float b) [static] :2832
Float4 Float4__op_Division1(Float4 a, float b)
{
    return Float4__New2(a.X / b, a.Y / b, a.Z / b, a.W / b);
}

// public static operator /(float4 a, float4 b) [static] :2827
Float4 Float4__op_Division2(Float4 a, Float4 b)
{
    return Float4__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z, a.W / b.W);
}

// public static operator ==(float4 a, float4 b) [static] :2839
bool Float4__op_Equality(Float4 a, Float4 b)
{
    bool ret11;
    return (::g::Uno::Generic__Equals_fn(::TYPES[11/*Uno.Generic.Equals<float4>*/], uCRef(a), uCRef(b), &ret11), ret11);
}

// public static implicit operator float4(int4 a) [static] :2846
Float4 Float4__op_Implicit1(::g::Uno::Int4 a)
{
    return Float4__New2((float)a.X, (float)a.Y, (float)a.Z, (float)a.W);
}

// public static operator !=(float4 a, float4 b) [static] :2840
bool Float4__op_Inequality(Float4 a, Float4 b)
{
    bool ret12;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[11/*Uno.Generic.Equals<float4>*/], uCRef(a), uCRef(b), &ret12), ret12);
}

// public static operator *(float a, float4 b) [static] :2836
Float4 Float4__op_Multiply(float a, Float4 b)
{
    return Float4__New2(a * b.X, a * b.Y, a * b.Z, a * b.W);
}

// public static operator *(float4 a, float b) [static] :2831
Float4 Float4__op_Multiply1(Float4 a, float b)
{
    return Float4__New2(a.X * b, a.Y * b, a.Z * b, a.W * b);
}

// public static operator *(float4 a, float4 b) [static] :2826
Float4 Float4__op_Multiply2(Float4 a, Float4 b)
{
    return Float4__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z, a.W * b.W);
}

// public static operator -(float4 a, float4 b) [static] :2825
Float4 Float4__op_Subtraction2(Float4 a, Float4 b)
{
    return Float4__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z, a.W - b.W);
}

// public static float4 get_Identity() [static] :2788
Float4 Float4__Identity()
{
    return Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Float4x4 :2864
// {
static void Float4x4_build(uType* type)
{
    ::STRINGS[21] = uString::Const(",");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M11), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M12), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M13), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M14), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M21), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M22), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M23), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M24), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M31), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M32), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M33), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M34), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M41), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M42), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M43), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Float4x4, M44), 0);
    type->Reflection.SetFields(16,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M14", 3),
        new uField("M21", 4),
        new uField("M22", 5),
        new uField("M23", 6),
        new uField("M24", 7),
        new uField("M31", 8),
        new uField("M32", 9),
        new uField("M33", 10),
        new uField("M34", 11),
        new uField("M41", 12),
        new uField("M42", 13),
        new uField("M43", 14),
        new uField("M44", 15));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Identity", NULL, (void*)Float4x4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4x4__get_Item_fn, 0, false, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4x4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4x4__New1_fn, 0, true, type, 16, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]));
}

uStructType* Float4x4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ValueSize = sizeof(Float4x4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4x4", options);
    type->fp_build_ = Float4x4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4x4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4x4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4x4__ToString_fn;
    return type;
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :2898
void Float4x4__ctor__fn(Float4x4* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->ctor_(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public override sealed bool Equals(object o) :3024
void Float4x4__Equals_fn(Float4x4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret4;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret4), ret4), void();
}

// public override sealed int GetHashCode() :3025
void Float4x4__GetHashCode_fn(Float4x4* __this, uType* __type, int* __retval)
{
    int ret5;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret5), ret5), void();
}

// public static float4x4 get_Identity() :2868
void Float4x4__get_Identity_fn(Float4x4* __retval)
{
    *__retval = Float4x4__Identity();
}

// public float4 get_Item(int index) :2880
void Float4x4__get_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float4 value) :2888
void Float4x4__set_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* value)
{
    __this->Item(*index, *value);
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :2898
void Float4x4__New1_fn(float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44, Float4x4* __retval)
{
    *__retval = Float4x4__New1(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public static operator +(float4x4 left, float4x4 right) :2948
void Float4x4__op_Addition_fn(Float4x4* left, Float4x4* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Addition(*left, *right);
}

// public static operator *(float4x4 left, float right) :2970
void Float4x4__op_Multiply_fn(Float4x4* left, float* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Multiply(*left, *right);
}

// public static operator -(float4x4 left, float4x4 right) :2926
void Float4x4__op_Subtraction_fn(Float4x4* left, Float4x4* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Subtraction(*left, *right);
}

// public override sealed string ToString() :3027
void Float4x4__ToString_fn(Float4x4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4x4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[9/*float*/]), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M13, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M14, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M23, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M24, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M33, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M34, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M41, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M42, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M43, ::TYPES[9/*float*/])), ::STRINGS[21/*","*/]), ::g::Uno::Float::ToString(__this->M44, ::TYPES[9/*float*/])), void();
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :2898
void Float4x4::ctor_(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M14 = m14;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M24 = m24;
    M31 = m31;
    M32 = m32;
    M33 = m33;
    M34 = m34;
    M41 = m41;
    M42 = m42;
    M43 = m43;
    M44 = m44;
}

// public float4 get_Item(int index) [instance] :2880
::g::Uno::Float4 Float4x4::Item(int index)
{
    uStackFrame __("float4x4", "get_Item(int)");

    if (index == 0)
        return ::g::Uno::Float4__New2(M11, M12, M13, M14);
    else if (index == 1)
        return ::g::Uno::Float4__New2(M21, M22, M23, M24);
    else if (index == 2)
        return ::g::Uno::Float4__New2(M31, M32, M33, M34);
    else if (index == 3)
        return ::g::Uno::Float4__New2(M41, M42, M43, M44);
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float4 value) [instance] :2888
void Float4x4::Item(int index, ::g::Uno::Float4 value)
{
    uStackFrame __("float4x4", "set_Item(int,float4)");

    if (index == 0)
    {
        M11 = value.X;
        M12 = value.Y;
        M13 = value.Z;
        M14 = value.W;
    }
    else if (index == 1)
    {
        M21 = value.X;
        M22 = value.Y;
        M23 = value.Z;
        M24 = value.W;
    }
    else if (index == 2)
    {
        M31 = value.X;
        M32 = value.Y;
        M33 = value.Z;
        M34 = value.W;
    }
    else if (index == 3)
    {
        M41 = value.X;
        M42 = value.Y;
        M43 = value.Z;
        M44 = value.W;
    }
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :2898
Float4x4 Float4x4__New1(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 obj1;
    obj1.ctor_(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return obj1;
}

// public static operator +(float4x4 left, float4x4 right) [static] :2948
Float4x4 Float4x4__op_Addition(Float4x4 left, Float4x4 right)
{
    Float4x4 result;
    result.M11 = (left.M11 + right.M11);
    result.M12 = (left.M12 + right.M12);
    result.M13 = (left.M13 + right.M13);
    result.M14 = (left.M14 + right.M14);
    result.M21 = (left.M21 + right.M21);
    result.M22 = (left.M22 + right.M22);
    result.M23 = (left.M23 + right.M23);
    result.M24 = (left.M24 + right.M24);
    result.M31 = (left.M31 + right.M31);
    result.M32 = (left.M32 + right.M32);
    result.M33 = (left.M33 + right.M33);
    result.M34 = (left.M34 + right.M34);
    result.M41 = (left.M41 + right.M41);
    result.M42 = (left.M42 + right.M42);
    result.M43 = (left.M43 + right.M43);
    result.M44 = (left.M44 + right.M44);
    return result;
}

// public static operator *(float4x4 left, float right) [static] :2970
Float4x4 Float4x4__op_Multiply(Float4x4 left, float right)
{
    Float4x4 result;
    result.M11 = (left.M11 * right);
    result.M12 = (left.M12 * right);
    result.M13 = (left.M13 * right);
    result.M14 = (left.M14 * right);
    result.M21 = (left.M21 * right);
    result.M22 = (left.M22 * right);
    result.M23 = (left.M23 * right);
    result.M24 = (left.M24 * right);
    result.M31 = (left.M31 * right);
    result.M32 = (left.M32 * right);
    result.M33 = (left.M33 * right);
    result.M34 = (left.M34 * right);
    result.M41 = (left.M41 * right);
    result.M42 = (left.M42 * right);
    result.M43 = (left.M43 * right);
    result.M44 = (left.M44 * right);
    return result;
}

// public static operator -(float4x4 left, float4x4 right) [static] :2926
Float4x4 Float4x4__op_Subtraction(Float4x4 left, Float4x4 right)
{
    Float4x4 result;
    result.M11 = (left.M11 - right.M11);
    result.M12 = (left.M12 - right.M12);
    result.M13 = (left.M13 - right.M13);
    result.M14 = (left.M14 - right.M14);
    result.M21 = (left.M21 - right.M21);
    result.M22 = (left.M22 - right.M22);
    result.M23 = (left.M23 - right.M23);
    result.M24 = (left.M24 - right.M24);
    result.M31 = (left.M31 - right.M31);
    result.M32 = (left.M32 - right.M32);
    result.M33 = (left.M33 - right.M33);
    result.M34 = (left.M34 - right.M34);
    result.M41 = (left.M41 - right.M41);
    result.M42 = (left.M42 - right.M42);
    result.M43 = (left.M43 - right.M43);
    result.M44 = (left.M44 - right.M44);
    return result;
}

// public static float4x4 get_Identity() [static] :2868
Float4x4 Float4x4__Identity()
{
    return Float4x4__New1(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class FormatException :192
// {
static void FormatException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FormatException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* FormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.FormatException", options);
    type->fp_build_ = FormatException_build;
    return type;
}

// public FormatException(string message) :194
void FormatException__ctor_3_fn(FormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public FormatException New(string message) :194
void FormatException__New4_fn(uString* message, FormatException** __retval)
{
    *__retval = FormatException::New4(message);
}

// public FormatException(string message) [instance] :194
void FormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public FormatException New(string message) [static] :194
FormatException* FormatException::New4(uString* message)
{
    FormatException* obj1 = (FormatException*)uNew(FormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<TResult>() :3045
uDelegateType* Func_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T, TResult>(T arg) :3048
uDelegateType* Func1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`2", 1, 2);
    type->SetSignature(type->T(1),
        type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, TResult>(T1 arg1, T2 arg2) :3051
uDelegateType* Func2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`3", 2, 3);
    type->SetSignature(type->T(2),
        type->T(0),
        type->T(1));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, TResult>(T1 arg1, T2 arg2, T3 arg3) :3054
uDelegateType* Func3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`4", 3, 4);
    type->SetSignature(type->T(3),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :3057
uDelegateType* Func4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`5", 4, 5);
    type->SetSignature(type->T(4),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :3060
uDelegateType* Func5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`6", 5, 6);
    type->SetSignature(type->T(5),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :3063
uDelegateType* Func6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`7", 6, 7);
    type->SetSignature(type->T(6),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :3066
uDelegateType* Func7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`8", 7, 8);
    type->SetSignature(type->T(7),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :3069
uDelegateType* Func8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`9", 8, 9);
    type->SetSignature(type->T(8),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :3072
uDelegateType* Func9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`10", 9, 10);
    type->SetSignature(type->T(9),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :3075
uDelegateType* Func10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`11", 10, 11);
    type->SetSignature(type->T(10),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :3078
uDelegateType* Func11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`12", 11, 12);
    type->SetSignature(type->T(11),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :3081
uDelegateType* Func12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`13", 12, 13);
    type->SetSignature(type->T(12),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :3084
uDelegateType* Func13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`14", 13, 14);
    type->SetSignature(type->T(13),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :3087
uDelegateType* Func14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`15", 14, 15);
    type->SetSignature(type->T(14),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :3090
uDelegateType* Func15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`16", 15, 16);
    type->SetSignature(type->T(15),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :3093
uDelegateType* Func16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`17", 16, 17);
    type->SetSignature(type->T(16),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class GC :3104
// {
static void GC_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("SuppressFinalize", NULL, (void*)GC__SuppressFinalize_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

uClassType* GC_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.GC", options);
    type->fp_build_ = GC_build;
    return type;
}

// public static void SuppressFinalize(object obj) :3106
void GC__SuppressFinalize_fn(uObject* obj)
{
    GC::SuppressFinalize(obj);
}

// public static void SuppressFinalize(object obj) [static] :3106
void GC::SuppressFinalize(uObject* obj)
{
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Generic :3121
// {
static void Generic_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[12/*Uno.Runtime.Implementation.GenericEqualsImpl*/]->MakeMethod(0/*Equals<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->Reflection.SetFunctions(1,
        new uFunction("Equals`1", type->MethodTypes[0], (void*)Generic__Equals_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(0)));
}

uClassType* Generic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Generic", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Generic_build;
    return type;
}

// public static bool Equals<T>(T left, T right) :3123
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.GenericEqualsImpl.Equals<T>*/),
    };
    bool ret1;
    return *__retval = (::g::Uno::Runtime::Implementation::GenericEqualsImpl__Equals_fn(__types[0], left, right, &ret1), ret1), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public abstract interface IDisposable :3414
// {
uInterfaceType* IDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.IDisposable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispose", NULL, NULL, offsetof(IDisposable, fp_Dispose), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class IndexOutOfRangeException :209
// {
static void IndexOutOfRangeException_build(uType* type)
{
    ::STRINGS[22] = uString::Const("Index out of range");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IndexOutOfRangeException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* IndexOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IndexOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IndexOutOfRangeException", options);
    type->fp_build_ = IndexOutOfRangeException_build;
    type->fp_ctor_ = (void*)IndexOutOfRangeException__New4_fn;
    return type;
}

// public IndexOutOfRangeException() :211
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this)
{
    __this->ctor_3();
}

// public IndexOutOfRangeException New() :211
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval)
{
    *__retval = IndexOutOfRangeException::New4();
}

// public IndexOutOfRangeException() [instance] :211
void IndexOutOfRangeException::ctor_3()
{
    ctor_1(::STRINGS[22/*"Index out o...*/]);
}

// public IndexOutOfRangeException New() [static] :211
IndexOutOfRangeException* IndexOutOfRangeException::New4()
{
    IndexOutOfRangeException* obj1 = (IndexOutOfRangeException*)uNew(IndexOutOfRangeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Int :3451
// {
static void Int_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Int__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Int__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Int_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int", options);
    type->fp_build_ = Int_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3457
void Int__Equals_fn(int* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3463
void Int__GetHashCode_fn(int* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static int Parse(string str) :3488
void Int__Parse_fn(uString* str, int* __retval)
{
    *__retval = Int::Parse(str);
}

// public override sealed string ToString() :3474
void Int__ToString_fn(int* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, int& res) :3525
void Int__TryParse_fn(uString* str, int* res, bool* __retval)
{
    *__retval = Int::TryParse(str, res);
}

// public static int Parse(string str) [static] :3488
int Int::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToInt();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, int& res) [static] :3525
bool Int::TryParse(uString* str, int* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToInt(res);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Int2 :3596
// {
static void Int2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<int2>*/, type, NULL);
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int2, X), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Int2__New1_fn, 0, true, type, 1, ::TYPES[14/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int2__New2_fn, 0, true, type, 2, ::TYPES[14/*int*/], ::TYPES[14/*int*/]));
}

uStructType* Int2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Int2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int2", options);
    type->fp_build_ = Int2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int2__ToString_fn;
    return type;
}

// public Int2(int xy) :3617
void Int2__ctor__fn(Int2* __this, int* xy)
{
    __this->ctor_(*xy);
}

// public Int2(int x, int y) :3618
void Int2__ctor_1_fn(Int2* __this, int* x, int* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :3641
void Int2__Equals_fn(Int2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :3642
void Int2__GetHashCode_fn(Int2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Int2 New(int xy) :3617
void Int2__New1_fn(int* xy, Int2* __retval)
{
    *__retval = Int2__New1(*xy);
}

// public Int2 New(int x, int y) :3618
void Int2__New2_fn(int* x, int* y, Int2* __retval)
{
    *__retval = Int2__New2(*x, *y);
}

// public static operator +(int2 a, int2 b) :3620
void Int2__op_Addition1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Addition1(*a, *b);
}

// public static operator /(int2 a, int2 b) :3623
void Int2__op_Division1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Division1(*a, *b);
}

// public static explicit operator int2(float2 v) :3639
void Int2__op_Explicit_fn(::g::Uno::Float2* v, Int2* __retval)
{
    *__retval = Int2__op_Explicit(*v);
}

// public static implicit operator int2(ushort2 v) :3637
void Int2__op_Implicit3_fn(::g::Uno::UShort2* v, Int2* __retval)
{
    *__retval = Int2__op_Implicit3(*v);
}

// public static operator !=(int2 a, int2 b) :3631
void Int2__op_Inequality_fn(Int2* a, Int2* b, bool* __retval)
{
    *__retval = Int2__op_Inequality(*a, *b);
}

// public static operator *(int2 a, int b) :3627
void Int2__op_Multiply_fn(Int2* a, int* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply(*a, *b);
}

// public static operator *(int2 a, int2 b) :3622
void Int2__op_Multiply1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply1(*a, *b);
}

// public static operator -(int2 a, int2 b) :3621
void Int2__op_Subtraction1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Subtraction1(*a, *b);
}

// public override sealed string ToString() :3643
void Int2__ToString_fn(Int2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), void();
}

// public Int2(int xy) [instance] :3617
void Int2::ctor_(int xy)
{
    X = (Y = xy);
}

// public Int2(int x, int y) [instance] :3618
void Int2::ctor_1(int x, int y)
{
    X = x;
    Y = y;
}

// public Int2 New(int xy) [static] :3617
Int2 Int2__New1(int xy)
{
    Int2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Int2 New(int x, int y) [static] :3618
Int2 Int2__New2(int x, int y)
{
    Int2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(int2 a, int2 b) [static] :3620
Int2 Int2__op_Addition1(Int2 a, Int2 b)
{
    return Int2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(int2 a, int2 b) [static] :3623
Int2 Int2__op_Division1(Int2 a, Int2 b)
{
    return Int2__New2(a.X / b.X, a.Y / b.Y);
}

// public static explicit operator int2(float2 v) [static] :3639
Int2 Int2__op_Explicit(::g::Uno::Float2 v)
{
    return Int2__New2((int)v.X, (int)v.Y);
}

// public static implicit operator int2(ushort2 v) [static] :3637
Int2 Int2__op_Implicit3(::g::Uno::UShort2 v)
{
    return Int2__New2((int)v.X, (int)v.Y);
}

// public static operator !=(int2 a, int2 b) [static] :3631
bool Int2__op_Inequality(Int2 a, Int2 b)
{
    bool ret6;
    return !(::g::Uno::Generic__Equals_fn(::TYPES[13/*Uno.Generic.Equals<int2>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static operator *(int2 a, int b) [static] :3627
Int2 Int2__op_Multiply(Int2 a, int b)
{
    return Int2__New2(a.X * b, a.Y * b);
}

// public static operator *(int2 a, int2 b) [static] :3622
Int2 Int2__op_Multiply1(Int2 a, Int2 b)
{
    return Int2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(int2 a, int2 b) [static] :3621
Int2 Int2__op_Subtraction1(Int2 a, Int2 b)
{
    return Int2__New2(a.X - b.X, a.Y - b.Y);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Int3 :3656
// {
static void Int3_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int3, X), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int3, Y), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* Int3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Int3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int3", options);
    type->fp_build_ = Int3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int3__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3699
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :3700
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public override sealed string ToString() :3697
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[14/*int*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Int4 :3714
// {
static void Int4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int4, X), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int4, Y), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int4, Z), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Int4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Int4__get_Item_fn, 0, false, ::TYPES[14/*int*/], 1, ::TYPES[14/*int*/]),
        new uFunction("set_Item", NULL, (void*)Int4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::TYPES[14/*int*/], ::TYPES[14/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New2_fn, 0, true, type, 4, ::TYPES[14/*int*/], ::TYPES[14/*int*/], ::TYPES[14/*int*/], ::TYPES[14/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New7_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()));
}

uStructType* Int4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Int4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int4", options);
    type->fp_build_ = Int4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int4__ToString_fn;
    return type;
}

// public Int4(int x, int y, int z, int w) :3739
void Int4__ctor_1_fn(Int4* __this, int* x, int* y, int* z, int* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Int4(int2 xy, int2 zw) :3743
void Int4__ctor_6_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public override sealed bool Equals(object o) :3767
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :3768
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public int get_Item(int index) :3721
void Int4__get_Item_fn(Int4* __this, int* index, int* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, int value) :3729
void Int4__set_Item_fn(Int4* __this, int* index, int* value)
{
    __this->Item(*index, *value);
}

// public Int4 New(int x, int y, int z, int w) :3739
void Int4__New2_fn(int* x, int* y, int* z, int* w, Int4* __retval)
{
    *__retval = Int4__New2(*x, *y, *z, *w);
}

// public Int4 New(int2 xy, int2 zw) :3743
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval)
{
    *__retval = Int4__New7(*xy, *zw);
}

// public static explicit operator int4(float4 v) :3765
void Int4__op_Explicit_fn(::g::Uno::Float4* v, Int4* __retval)
{
    *__retval = Int4__op_Explicit(*v);
}

// public override sealed string ToString() :3769
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[14/*int*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[14/*int*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[14/*int*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->W, ::TYPES[14/*int*/])), void();
}

// public Int4(int x, int y, int z, int w) [instance] :3739
void Int4::ctor_1(int x, int y, int z, int w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Int4(int2 xy, int2 zw) [instance] :3743
void Int4::ctor_6(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public int get_Item(int index) [instance] :3721
int Int4::Item(int index)
{
    uStackFrame __("int4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, int value) [instance] :3729
void Int4::Item(int index, int value)
{
    uStackFrame __("int4", "set_Item(int,int)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Int4 New(int x, int y, int z, int w) [static] :3739
Int4 Int4__New2(int x, int y, int z, int w)
{
    Int4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}

// public Int4 New(int2 xy, int2 zw) [static] :3743
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    Int4 obj5;
    obj5.ctor_6(xy, zw);
    return obj5;
}

// public static explicit operator int4(float4 v) [static] :3765
Int4 Int4__op_Explicit(::g::Uno::Float4 v)
{
    return Int4__New2((int)v.X, (int)v.Y, (int)v.Z, (int)v.W);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct IntPtr :3787
// {
static void IntPtr_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        type, (uintptr_t)&::g::Uno::IntPtr::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
}

uStructType* IntPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IntPtr", options);
    type->fp_build_ = IntPtr_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))IntPtr__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))IntPtr__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))IntPtr__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3845
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3851
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) :3810
void IntPtr__op_Equality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Equality(*left, *right);
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) :3822
void IntPtr__op_Inequality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Inequality(*left, *right);
}

// public override sealed string ToString() :3866
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

void* IntPtr::Zero_;

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) [static] :3810
bool IntPtr::op_Equality(void* left, void* right)
{
    return left == right;
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) [static] :3822
bool IntPtr::op_Inequality(void* left, void* right)
{
    return left != right;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class InvalidCastException :226
// {
static void InvalidCastException_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Invalid cast");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidCastException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidCastException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidCastException", options);
    type->fp_build_ = InvalidCastException_build;
    type->fp_ctor_ = (void*)InvalidCastException__New4_fn;
    return type;
}

// public InvalidCastException() :233
void InvalidCastException__ctor_3_fn(InvalidCastException* __this)
{
    __this->ctor_3();
}

// public InvalidCastException(string message) :228
void InvalidCastException__ctor_4_fn(InvalidCastException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidCastException New() :233
void InvalidCastException__New4_fn(InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New4();
}

// public InvalidCastException New(string message) :228
void InvalidCastException__New5_fn(uString* message, InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New5(message);
}

// public InvalidCastException() [instance] :233
void InvalidCastException::ctor_3()
{
    ctor_4(::STRINGS[23/*"Invalid cast"*/]);
}

// public InvalidCastException(string message) [instance] :228
void InvalidCastException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidCastException New() [static] :233
InvalidCastException* InvalidCastException::New4()
{
    InvalidCastException* obj2 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj2->ctor_3();
    return obj2;
}

// public InvalidCastException New(string message) [static] :228
InvalidCastException* InvalidCastException::New5(uString* message)
{
    InvalidCastException* obj1 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj1->ctor_4(message);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class InvalidOperationException :248
// {
static void InvalidOperationException_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Invalid operation");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidOperationException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidOperationException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidOperationException", options);
    type->fp_build_ = InvalidOperationException_build;
    type->fp_ctor_ = (void*)InvalidOperationException__New4_fn;
    return type;
}

// public InvalidOperationException() :250
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this)
{
    __this->ctor_3();
}

// public InvalidOperationException(string message) :255
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidOperationException New() :250
void InvalidOperationException__New4_fn(InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New4();
}

// public InvalidOperationException New(string message) :255
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New5(message);
}

// public InvalidOperationException() [instance] :250
void InvalidOperationException::ctor_3()
{
    ctor_1(::STRINGS[24/*"Invalid ope...*/]);
}

// public InvalidOperationException(string message) [instance] :255
void InvalidOperationException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidOperationException New() [static] :250
InvalidOperationException* InvalidOperationException::New4()
{
    InvalidOperationException* obj1 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidOperationException New(string message) [static] :255
InvalidOperationException* InvalidOperationException::New5(uString* message)
{
    InvalidOperationException* obj2 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Long :3930
// {
static void Long_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("Parse", NULL, (void*)Long__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Long_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Long", options);
    type->fp_build_ = Long_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Long__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Long__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Long__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :3936
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :3942
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static long Parse(string str) :3967
void Long__Parse_fn(uString* str, int64_t* __retval)
{
    *__retval = Long::Parse(str);
}

// public override sealed string ToString() :3953
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static long Parse(string str) [static] :3967
int64_t Long::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToLong();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Math :4076
// {
static void Math_build(uType* type)
{
    type->Reflection.SetFunctions(66,
        new uFunction("Abs", NULL, (void*)Math__Abs_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs5_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Acos", NULL, (void*)Math__Acos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Asin", NULL, (void*)Math__Asin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Asin", NULL, (void*)Math__Asin1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Atan2", NULL, (void*)Math__Atan22_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp_fn, 0, true, ::g::Uno::Double_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp3_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp8_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp13_fn, 0, true, ::g::Uno::Int4_typeof(), 3, ::g::Uno::Int4_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Exp", NULL, (void*)Math__Exp1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("IsPow2", NULL, (void*)Math__IsPow2_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp2_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp4_fn, 0, true, ::g::Uno::Float3_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp6_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Log", NULL, (void*)Math__Log1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max2_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max7_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max10_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max13_fn, 0, true, ::g::Uno::Int4_typeof(), 2, ::g::Uno::Int4_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min13_fn, 0, true, ::g::Uno::Int4_typeof(), 2, ::g::Uno::Int4_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("NextPow2", NULL, (void*)Math__NextPow2_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round1_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round4_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Saturate", NULL, (void*)Math__Saturate1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sign", NULL, (void*)Math__Sign1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt4_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Tan", NULL, (void*)Math__Tan1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
}

uClassType* Math_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Math", options);
    type->fp_build_ = Math_build;
    return type;
}

// public static double Abs(double x) :4309
void Math__Abs_fn(double* x, double* __retval)
{
    *__retval = Math::Abs(*x);
}

// public static float Abs(float x) :4310
void Math__Abs1_fn(float* x, float* __retval)
{
    *__retval = Math::Abs1(*x);
}

// public static float2 Abs(float2 a) :4311
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Abs2(*a);
}

// public static int Abs(int x) :4314
void Math__Abs5_fn(int* x, int* __retval)
{
    *__retval = Math::Abs5(*x);
}

// public static float Acos(float radians) :4179
void Math__Acos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Acos1(*radians);
}

// public static double Asin(double radians) :4154
void Math__Asin_fn(double* radians, double* __retval)
{
    *__retval = Math::Asin(*radians);
}

// public static float Asin(float radians) :4161
void Math__Asin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Asin1(*radians);
}

// public static float Atan2(float y, float x) :4215
void Math__Atan22_fn(float* y, float* x, float* __retval)
{
    *__retval = Math::Atan22(*y, *x);
}

// public static double Ceil(double x) :4348
void Math__Ceil_fn(double* x, double* __retval)
{
    *__retval = Math::Ceil(*x);
}

// public static float Ceil(float x) :4355
void Math__Ceil1_fn(float* x, float* __retval)
{
    *__retval = Math::Ceil1(*x);
}

// public static float2 Ceil(float2 v) :4361
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Ceil2(*v);
}

// public static double Clamp(double x, double minimum, double maximum) :4412
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval)
{
    *__retval = Math::Clamp(*x, *minimum, *maximum);
}

// public static float Clamp(float x, float minimum, float maximum) :4413
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval)
{
    *__retval = Math::Clamp1(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) :4415
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp3(*x, *minimum, *maximum);
}

// public static int Clamp(int x, int minimum, int maximum) :4420
void Math__Clamp8_fn(int* x, int* minimum, int* maximum, int* __retval)
{
    *__retval = Math::Clamp8(*x, *minimum, *maximum);
}

// public static int4 Clamp(int4 x, int minimum, int maximum) :4425
void Math__Clamp13_fn(::g::Uno::Int4* x, int* minimum, int* maximum, ::g::Uno::Int4* __retval)
{
    *__retval = Math::Clamp13(*x, *minimum, *maximum);
}

// public static double Cos(double radians) :4118
void Math__Cos_fn(double* radians, double* __retval)
{
    *__retval = Math::Cos(*radians);
}

// public static float Cos(float radians) :4125
void Math__Cos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Cos1(*radians);
}

// public static float DegreesToRadians(float degrees) :4088
void Math__DegreesToRadians1_fn(float* degrees, float* __retval)
{
    *__retval = Math::DegreesToRadians1(*degrees);
}

// public static float3 DegreesToRadians(float3 degrees) :4090
void Math__DegreesToRadians3_fn(::g::Uno::Float3* degrees, ::g::Uno::Float3* __retval)
{
    *__retval = Math::DegreesToRadians3(*degrees);
}

// public static float Exp(float x) :4247
void Math__Exp1_fn(float* x, float* __retval)
{
    *__retval = Math::Exp1(*x);
}

// public static double Floor(double x) :4330
void Math__Floor_fn(double* x, double* __retval)
{
    *__retval = Math::Floor(*x);
}

// public static float Floor(float x) :4337
void Math__Floor1_fn(float* x, float* __retval)
{
    *__retval = Math::Floor1(*x);
}

// public static float2 Floor(float2 v) :4343
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Floor2(*v);
}

// public static bool IsPow2(int x) :4566
void Math__IsPow2_fn(int* x, bool* __retval)
{
    *__retval = Math::IsPow2(*x);
}

// public static float Lerp(float a, float b, float t) :4429
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval)
{
    *__retval = Math::Lerp1(*a, *b, *t);
}

// public static float2 Lerp(float2 a, float2 b, float t) :4430
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Lerp2(*a, *b, *t);
}

// public static float3 Lerp(float3 a, float3 b, float t) :4432
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Lerp4(*a, *b, *t);
}

// public static float4 Lerp(float4 a, float4 b, float t) :4434
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Lerp6(*a, *b, *t);
}

// public static float Log(float x) :4260
void Math__Log1_fn(float* x, float* __retval)
{
    *__retval = Math::Log1(*x);
}

// public static double Max(double a, double b) :4380
void Math__Max_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Max(*a, *b);
}

// public static float Max(float a, float b) :4381
void Math__Max1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Max1(*a, *b);
}

// public static float2 Max(float2 a, float b) :4382
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max2(*a, *b);
}

// public static float2 Max(float2 a, float2 b) :4383
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max3(*a, *b);
}

// public static float3 Max(float3 a, float3 b) :4385
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max5(*a, *b);
}

// public static float4 Max(float4 a, float4 b) :4387
void Math__Max7_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Max7(*a, *b);
}

// public static int Max(int a, int b) :4388
void Math__Max8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Max8(*a, *b);
}

// public static int2 Max(int2 a, int2 b) :4390
void Math__Max10_fn(::g::Uno::Int2* a, ::g::Uno::Int2* b, ::g::Uno::Int2* __retval)
{
    *__retval = Math::Max10(*a, *b);
}

// public static int4 Max(int4 a, int b) :4393
void Math__Max13_fn(::g::Uno::Int4* a, int* b, ::g::Uno::Int4* __retval)
{
    *__retval = Math::Max13(*a, *b);
}

// public static double Min(double a, double b) :4396
void Math__Min_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Min(*a, *b);
}

// public static float Min(float a, float b) :4397
void Math__Min1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Min1(*a, *b);
}

// public static float2 Min(float2 a, float2 b) :4399
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min3(*a, *b);
}

// public static float3 Min(float3 a, float3 b) :4401
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min5(*a, *b);
}

// public static int Min(int a, int b) :4404
void Math__Min8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Min8(*a, *b);
}

// public static int4 Min(int4 a, int b) :4409
void Math__Min13_fn(::g::Uno::Int4* a, int* b, ::g::Uno::Int4* __retval)
{
    *__retval = Math::Min13(*a, *b);
}

// public static double Mod(double x, double y) :4371
void Math__Mod_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Mod(*x, *y);
}

// public static float Mod(float x, float y) :4372
void Math__Mod1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Mod1(*x, *y);
}

// public static int NextPow2(int x) :4555
void Math__NextPow2_fn(int* x, int* __retval)
{
    *__retval = Math::NextPow2(*x);
}

// public static double Pow(double x, double y) :4229
void Math__Pow_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Pow(*x, *y);
}

// public static float Pow(float x, float y) :4236
void Math__Pow1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Pow1(*x, *y);
}

// public static double RadiansToDegrees(double radians) :4093
void Math__RadiansToDegrees_fn(double* radians, double* __retval)
{
    *__retval = Math::RadiansToDegrees(*radians);
}

// public static float RadiansToDegrees(float radians) :4094
void Math__RadiansToDegrees1_fn(float* radians, float* __retval)
{
    *__retval = Math::RadiansToDegrees1(*radians);
}

// public static float3 RadiansToDegrees(float3 radians) :4096
void Math__RadiansToDegrees3_fn(::g::Uno::Float3* radians, ::g::Uno::Float3* __retval)
{
    *__retval = Math::RadiansToDegrees3(*radians);
}

// public static double Round(double x) :4494
void Math__Round_fn(double* x, double* __retval)
{
    *__retval = Math::Round(*x);
}

// public static double Round(double d, int decimals) :4505
void Math__Round1_fn(double* d, int* decimals, double* __retval)
{
    *__retval = Math::Round1(*d, *decimals);
}

// public static float Round(float x) :4495
void Math__Round2_fn(float* x, float* __retval)
{
    *__retval = Math::Round2(*x);
}

// public static float2 Round(float2 x) :4496
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Round4(*x);
}

// public static float Saturate(float x) :4489
void Math__Saturate1_fn(float* x, float* __retval)
{
    *__retval = Math::Saturate1(*x);
}

// public static float Sign(float x) :4320
void Math__Sign1_fn(float* x, float* __retval)
{
    *__retval = Math::Sign1(*x);
}

// public static double Sin(double radians) :4100
void Math__Sin_fn(double* radians, double* __retval)
{
    *__retval = Math::Sin(*radians);
}

// public static float Sin(float radians) :4107
void Math__Sin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Sin1(*radians);
}

// public static double Sqrt(double x) :4283
void Math__Sqrt_fn(double* x, double* __retval)
{
    *__retval = Math::Sqrt(*x);
}

// public static float Sqrt(float x) :4290
void Math__Sqrt1_fn(float* x, float* __retval)
{
    *__retval = Math::Sqrt1(*x);
}

// public static float2 Sqrt(float2 x) :4296
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Sqrt2(*x);
}

// public static float4 Sqrt(float4 x) :4298
void Math__Sqrt4_fn(::g::Uno::Float4* x, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Sqrt4(*x);
}

// public static float Tan(float radians) :4143
void Math__Tan1_fn(float* radians, float* __retval)
{
    *__retval = Math::Tan1(*radians);
}

// public static double Abs(double x) [static] :4309
double Math::Abs(double x)
{
    return (x >= 0.0) ? x : -x;
}

// public static float Abs(float x) [static] :4310
float Math::Abs1(float x)
{
    return (x >= 0.0f) ? x : -x;
}

// public static float2 Abs(float2 a) [static] :4311
::g::Uno::Float2 Math::Abs2(::g::Uno::Float2 a)
{
    return ::g::Uno::Float2__New2(Math::Abs1(a.X), Math::Abs1(a.Y));
}

// public static int Abs(int x) [static] :4314
int Math::Abs5(int x)
{
    return (x >= 0) ? x : -x;
}

// public static float Acos(float radians) [static] :4179
float Math::Acos1(float radians)
{
    return acosf(radians);
}

// public static double Asin(double radians) [static] :4154
double Math::Asin(double radians)
{
    return asin(radians);
}

// public static float Asin(float radians) [static] :4161
float Math::Asin1(float radians)
{
    return asinf(radians);
}

// public static float Atan2(float y, float x) [static] :4215
float Math::Atan22(float y, float x)
{
    return atan2f(y, x);
}

// public static double Ceil(double x) [static] :4348
double Math::Ceil(double x)
{
    return ceil(x);
}

// public static float Ceil(float x) [static] :4355
float Math::Ceil1(float x)
{
    return ceilf(x);
}

// public static float2 Ceil(float2 v) [static] :4361
::g::Uno::Float2 Math::Ceil2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Ceil1(v.X), Math::Ceil1(v.Y));
}

// public static double Clamp(double x, double minimum, double maximum) [static] :4412
double Math::Clamp(double x, double minimum, double maximum)
{
    return Math::Max(Math::Min(x, maximum), minimum);
}

// public static float Clamp(float x, float minimum, float maximum) [static] :4413
float Math::Clamp1(float x, float minimum, float maximum)
{
    return Math::Max1(Math::Min1(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) [static] :4415
::g::Uno::Float2 Math::Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum)
{
    return Math::Max3(Math::Min3(x, maximum), minimum);
}

// public static int Clamp(int x, int minimum, int maximum) [static] :4420
int Math::Clamp8(int x, int minimum, int maximum)
{
    return Math::Max8(Math::Min8(x, maximum), minimum);
}

// public static int4 Clamp(int4 x, int minimum, int maximum) [static] :4425
::g::Uno::Int4 Math::Clamp13(::g::Uno::Int4 x, int minimum, int maximum)
{
    return Math::Max13(Math::Min13(x, maximum), minimum);
}

// public static double Cos(double radians) [static] :4118
double Math::Cos(double radians)
{
    return cos(radians);
}

// public static float Cos(float radians) [static] :4125
float Math::Cos1(float radians)
{
    return cosf(radians);
}

// public static float DegreesToRadians(float degrees) [static] :4088
float Math::DegreesToRadians1(float degrees)
{
    return degrees * 0.0174532924f;
}

// public static float3 DegreesToRadians(float3 degrees) [static] :4090
::g::Uno::Float3 Math::DegreesToRadians3(::g::Uno::Float3 degrees)
{
    return ::g::Uno::Float3__op_Multiply1(degrees, 0.0174532924f);
}

// public static float Exp(float x) [static] :4247
float Math::Exp1(float x)
{
    return Math::Pow1(2.71828175f, x);
}

// public static double Floor(double x) [static] :4330
double Math::Floor(double x)
{
    return floor(x);
}

// public static float Floor(float x) [static] :4337
float Math::Floor1(float x)
{
    return floorf(x);
}

// public static float2 Floor(float2 v) [static] :4343
::g::Uno::Float2 Math::Floor2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Floor1(v.X), Math::Floor1(v.Y));
}

// public static bool IsPow2(int x) [static] :4566
bool Math::IsPow2(int x)
{
    return x == (x & -x);
}

// public static float Lerp(float a, float b, float t) [static] :4429
float Math::Lerp1(float a, float b, float t)
{
    return a + ((b - a) * t);
}

// public static float2 Lerp(float2 a, float2 b, float t) [static] :4430
::g::Uno::Float2 Math::Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t)
{
    return ::g::Uno::Float2__op_Addition2(a, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction2(b, a), t));
}

// public static float3 Lerp(float3 a, float3 b, float t) [static] :4432
::g::Uno::Float3 Math::Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t)
{
    return ::g::Uno::Float3__op_Addition2(a, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Subtraction2(b, a), t));
}

// public static float4 Lerp(float4 a, float4 b, float t) [static] :4434
::g::Uno::Float4 Math::Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t)
{
    return ::g::Uno::Float4__op_Addition2(a, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Subtraction2(b, a), t));
}

// public static float Log(float x) [static] :4260
float Math::Log1(float x)
{
    return logf(x);
}

// public static double Max(double a, double b) [static] :4380
double Math::Max(double a, double b)
{
    return (a > b) ? a : b;
}

// public static float Max(float a, float b) [static] :4381
float Math::Max1(float a, float b)
{
    return (a > b) ? a : b;
}

// public static float2 Max(float2 a, float b) [static] :4382
::g::Uno::Float2 Math::Max2(::g::Uno::Float2 a, float b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b));
}

// public static float2 Max(float2 a, float2 b) [static] :4383
::g::Uno::Float2 Math::Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y));
}

// public static float3 Max(float3 a, float3 b) [static] :4385
::g::Uno::Float3 Math::Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z));
}

// public static float4 Max(float4 a, float4 b) [static] :4387
::g::Uno::Float4 Math::Max7(::g::Uno::Float4 a, ::g::Uno::Float4 b)
{
    return ::g::Uno::Float4__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z), Math::Max1(a.W, b.W));
}

// public static int Max(int a, int b) [static] :4388
int Math::Max8(int a, int b)
{
    return (a > b) ? a : b;
}

// public static int2 Max(int2 a, int2 b) [static] :4390
::g::Uno::Int2 Math::Max10(::g::Uno::Int2 a, ::g::Uno::Int2 b)
{
    return ::g::Uno::Int2__New2(Math::Max8(a.X, b.X), Math::Max8(a.Y, b.Y));
}

// public static int4 Max(int4 a, int b) [static] :4393
::g::Uno::Int4 Math::Max13(::g::Uno::Int4 a, int b)
{
    return ::g::Uno::Int4__New2(Math::Max8(a.X, b), Math::Max8(a.Y, b), Math::Max8(a.Z, b), Math::Max8(a.W, b));
}

// public static double Min(double a, double b) [static] :4396
double Math::Min(double a, double b)
{
    return (a < b) ? a : b;
}

// public static float Min(float a, float b) [static] :4397
float Math::Min1(float a, float b)
{
    return (a < b) ? a : b;
}

// public static float2 Min(float2 a, float2 b) [static] :4399
::g::Uno::Float2 Math::Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y));
}

// public static float3 Min(float3 a, float3 b) [static] :4401
::g::Uno::Float3 Math::Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y), Math::Min1(a.Z, b.Z));
}

// public static int Min(int a, int b) [static] :4404
int Math::Min8(int a, int b)
{
    return (a < b) ? a : b;
}

// public static int4 Min(int4 a, int b) [static] :4409
::g::Uno::Int4 Math::Min13(::g::Uno::Int4 a, int b)
{
    return ::g::Uno::Int4__New2(Math::Min8(a.X, b), Math::Min8(a.Y, b), Math::Min8(a.Z, b), Math::Min8(a.W, b));
}

// public static double Mod(double x, double y) [static] :4371
double Math::Mod(double x, double y)
{
    return x - (y * Math::Floor(x / y));
}

// public static float Mod(float x, float y) [static] :4372
float Math::Mod1(float x, float y)
{
    return x - (y * Math::Floor1(x / y));
}

// public static int NextPow2(int x) [static] :4555
int Math::NextPow2(int x)
{
    int y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

// public static double Pow(double x, double y) [static] :4229
double Math::Pow(double x, double y)
{
    return pow(x, y);
}

// public static float Pow(float x, float y) [static] :4236
float Math::Pow1(float x, float y)
{
    return powf(x, y);
}

// public static double RadiansToDegrees(double radians) [static] :4093
double Math::RadiansToDegrees(double radians)
{
    return radians * 57.295779513082323;
}

// public static float RadiansToDegrees(float radians) [static] :4094
float Math::RadiansToDegrees1(float radians)
{
    return radians * 57.2957764f;
}

// public static float3 RadiansToDegrees(float3 radians) [static] :4096
::g::Uno::Float3 Math::RadiansToDegrees3(::g::Uno::Float3 radians)
{
    return ::g::Uno::Float3__op_Multiply1(radians, 57.2957764f);
}

// public static double Round(double x) [static] :4494
double Math::Round(double x)
{
    return Math::Floor(x + 0.5);
}

// public static double Round(double d, int decimals) [static] :4505
double Math::Round1(double d, int decimals)
{
    int64_t multiplier = (int64_t)Math::Pow1(10.0f, (float)decimals);
    int64_t intPart = (int64_t)d;
    double decimalPart = Math::Round((d - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

// public static float Round(float x) [static] :4495
float Math::Round2(float x)
{
    return Math::Floor1(x + 0.5f);
}

// public static float2 Round(float2 x) [static] :4496
::g::Uno::Float2 Math::Round4(::g::Uno::Float2 x)
{
    return Math::Floor2(::g::Uno::Float2__op_Addition1(x, 0.5f));
}

// public static float Saturate(float x) [static] :4489
float Math::Saturate1(float x)
{
    return Math::Clamp1(x, 0.0f, 1.0f);
}

// public static float Sign(float x) [static] :4320
float Math::Sign1(float x)
{
    return (x < 0.0f) ? -1.0f : (x > 0.0f) ? 1.0f : 0.0f;
}

// public static double Sin(double radians) [static] :4100
double Math::Sin(double radians)
{
    return sin(radians);
}

// public static float Sin(float radians) [static] :4107
float Math::Sin1(float radians)
{
    return sinf(radians);
}

// public static double Sqrt(double x) [static] :4283
double Math::Sqrt(double x)
{
    return sqrt(x);
}

// public static float Sqrt(float x) [static] :4290
float Math::Sqrt1(float x)
{
    return sqrtf(x);
}

// public static float2 Sqrt(float2 x) [static] :4296
::g::Uno::Float2 Math::Sqrt2(::g::Uno::Float2 x)
{
    return ::g::Uno::Float2__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y));
}

// public static float4 Sqrt(float4 x) [static] :4298
::g::Uno::Float4 Math::Sqrt4(::g::Uno::Float4 x)
{
    return ::g::Uno::Float4__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y), Math::Sqrt1(x.Z), Math::Sqrt1(x.W));
}

// public static float Tan(float radians) [static] :4143
float Math::Tan1(float radians)
{
    return tanf(radians);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Matrix :4584
// {
static void Matrix_build(uType* type)
{
    type->Reflection.SetFunctions(15,
        new uFunction("Decompose", NULL, (void*)Matrix__Decompose_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float3_typeof()->ByRef(), ::g::Uno::Float4_typeof()->ByRef(), ::g::Uno::Float3_typeof()->ByRef()),
        new uFunction("Invert", NULL, (void*)Matrix__Invert2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul8_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul9_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul10_fn, 0, true, ::g::Uno::Float4x4_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("RotationAxis", NULL, (void*)Matrix__RotationAxis_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RotationQuaternion", NULL, (void*)Matrix__RotationQuaternion_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("RotationZ", NULL, (void*)Matrix__RotationZ_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Shear", NULL, (void*)Matrix__Shear_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("TryInvert", NULL, (void*)Matrix__TryInvert2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()->ByRef()));
}

uClassType* Matrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Matrix", options);
    type->fp_build_ = Matrix_build;
    return type;
}

// public static bool Decompose(float4x4 value, float3& scale, float4& rotationQuaternion, float3& translation) :5128
void Matrix__Decompose_fn(::g::Uno::Float4x4* value, ::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation, bool* __retval)
{
    *__retval = Matrix::Decompose(*value, scale, rotationQuaternion, translation);
}

// public static float4x4 Invert(float4x4 value) :4991
void Matrix__Invert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Invert2(*value);
}

// public static float4x4 Mul(float4x4 left, float4x4 right) :4939
void Matrix__Mul8_fn(::g::Uno::Float4x4* left, ::g::Uno::Float4x4* right, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul8(*left, *right);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) :4912
void Matrix__Mul9_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul9(*a, *b, *c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) :4911
void Matrix__Mul10_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* d, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul10(*a, *b, *c, *d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) :4788
void Matrix__RotationAxis_fn(::g::Uno::Float3* axisNormalized, float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationAxis(*axisNormalized, *angleRadians);
}

// public static float4x4 RotationQuaternion(float4 rotation) :4834
void Matrix__RotationQuaternion_fn(::g::Uno::Float4* rotation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationQuaternion(*rotation);
}

// public static float4x4 RotationZ(float angleRadians) :4829
void Matrix__RotationZ_fn(float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationZ(*angleRadians);
}

// public static float4x4 Scaling(float scale) :4770
void Matrix__Scaling_fn(float* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling(*scale);
}

// public static float4x4 Scaling(float x, float y, float z) :4761
void Matrix__Scaling1_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling1(*x, *y, *z);
}

// public static float4x4 Scaling(float3 scale) :4752
void Matrix__Scaling2_fn(::g::Uno::Float3* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling2(*scale);
}

// public static float4x4 Shear(float2 angle) :4779
void Matrix__Shear_fn(::g::Uno::Float2* angle, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Shear(*angle);
}

// public static float4x4 Translation(float x, float y, float z) :4893
void Matrix__Translation_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation(*x, *y, *z);
}

// public static float4x4 Translation(float3 offset) :4884
void Matrix__Translation1_fn(::g::Uno::Float3* offset, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation1(*offset);
}

// public static bool TryInvert(float4x4 value, float4x4& result) :5005
void Matrix__TryInvert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = Matrix::TryInvert2(*value, result);
}

// public static bool Decompose(float4x4 value, float3& scale, float4& rotationQuaternion, float3& translation) [static] :5128
bool Matrix::Decompose(::g::Uno::Float4x4 value, ::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation)
{
    (*translation).X = value.M41;
    (*translation).Y = value.M42;
    (*translation).Z = value.M43;
    (*scale).X = ::g::Uno::Math::Sqrt1(((value.M11 * value.M11) + (value.M12 * value.M12)) + (value.M13 * value.M13));
    (*scale).Y = ::g::Uno::Math::Sqrt1(((value.M21 * value.M21) + (value.M22 * value.M22)) + (value.M23 * value.M23));
    (*scale).Z = ::g::Uno::Math::Sqrt1(((value.M31 * value.M31) + (value.M32 * value.M32)) + (value.M33 * value.M33));

    if (((::g::Uno::Math::Abs1((*scale).X) < 1e-05f) || (::g::Uno::Math::Abs1((*scale).Y) < 1e-05f)) || (::g::Uno::Math::Abs1((*scale).Z) < 1e-05f))
    {
        *rotationQuaternion = ::g::Uno::Float4__Identity();
        return false;
    }

    ::g::Uno::Float3x3 rotationMatrix = ::g::Uno::Float3x3__New1(value.M11 / (*scale).X, value.M12 / (*scale).X, value.M13 / (*scale).X, value.M21 / (*scale).Y, value.M22 / (*scale).Y, value.M23 / (*scale).Y, value.M31 / (*scale).Z, value.M32 / (*scale).Z, value.M33 / (*scale).Z);
    *rotationQuaternion = ::g::Uno::Quaternion::RotationMatrix(rotationMatrix);
    return true;
}

// public static float4x4 Invert(float4x4 value) [static] :4991
::g::Uno::Float4x4 Matrix::Invert2(::g::Uno::Float4x4 value)
{
    ::g::Uno::Float4x4 result;

    if (!Matrix::TryInvert2(value, &result))
        return ::g::Uno::Float4x4__Identity();

    return result;
}

// public static float4x4 Mul(float4x4 left, float4x4 right) [static] :4939
::g::Uno::Float4x4 Matrix::Mul8(::g::Uno::Float4x4 left, ::g::Uno::Float4x4 right)
{
    ::g::Uno::Float4x4 result;
    result.M11 = ((((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41));
    result.M12 = ((((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42));
    result.M13 = ((((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43));
    result.M14 = ((((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44));
    result.M21 = ((((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41));
    result.M22 = ((((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42));
    result.M23 = ((((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43));
    result.M24 = ((((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44));
    result.M31 = ((((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41));
    result.M32 = ((((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42));
    result.M33 = ((((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43));
    result.M34 = ((((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44));
    result.M41 = ((((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41));
    result.M42 = ((((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42));
    result.M43 = ((((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43));
    result.M44 = ((((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44));
    return result;
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) [static] :4912
::g::Uno::Float4x4 Matrix::Mul9(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c)
{
    return Matrix::Mul8(Matrix::Mul8(a, b), c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) [static] :4911
::g::Uno::Float4x4 Matrix::Mul10(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c, ::g::Uno::Float4x4 d)
{
    return Matrix::Mul8(Matrix::Mul9(a, b, c), d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) [static] :4788
::g::Uno::Float4x4 Matrix::RotationAxis(::g::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::g::Uno::Vector::Normalize1(axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::g::Uno::Math::Cos1(angleRadians);
    float s = ::g::Uno::Math::Sin1(angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (xx + (c * (1.0f - xx)));
    result.M12 = ((xy - (c * xy)) + (s * z));
    result.M13 = ((xz - (c * xz)) - (s * y));
    result.M21 = ((xy - (c * xy)) - (s * z));
    result.M22 = (yy + (c * (1.0f - yy)));
    result.M23 = ((yz - (c * yz)) + (s * x));
    result.M31 = ((xz - (c * xz)) + (s * y));
    result.M32 = ((yz - (c * yz)) - (s * x));
    result.M33 = (zz + (c * (1.0f - zz)));
    return result;
}

// public static float4x4 RotationQuaternion(float4 rotation) [static] :4834
::g::Uno::Float4x4 Matrix::RotationQuaternion(::g::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (1.0f - (2.0f * (yy + zz)));
    result.M12 = (2.0f * (xy + zw));
    result.M13 = (2.0f * (zx - yw));
    result.M21 = (2.0f * (xy - zw));
    result.M22 = (1.0f - (2.0f * (zz + xx)));
    result.M23 = (2.0f * (yz + xw));
    result.M31 = (2.0f * (zx + yw));
    result.M32 = (2.0f * (yz - xw));
    result.M33 = (1.0f - (2.0f * (yy + xx)));
    return result;
}

// public static float4x4 RotationZ(float angleRadians) [static] :4829
::g::Uno::Float4x4 Matrix::RotationZ(float angleRadians)
{
    return Matrix::RotationAxis(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), angleRadians);
}

// public static float4x4 Scaling(float scale) [static] :4770
::g::Uno::Float4x4 Matrix::Scaling(float scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

// public static float4x4 Scaling(float x, float y, float z) [static] :4761
::g::Uno::Float4x4 Matrix::Scaling1(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

// public static float4x4 Scaling(float3 scale) [static] :4752
::g::Uno::Float4x4 Matrix::Scaling2(::g::Uno::Float3 scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

// public static float4x4 Shear(float2 angle) [static] :4779
::g::Uno::Float4x4 Matrix::Shear(::g::Uno::Float2 angle)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M12 = ::g::Uno::Math::Tan1(angle.Y);
    result.M21 = ::g::Uno::Math::Tan1(angle.X);
    return result;
}

// public static float4x4 Translation(float x, float y, float z) [static] :4893
::g::Uno::Float4x4 Matrix::Translation(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

// public static float4x4 Translation(float3 offset) [static] :4884
::g::Uno::Float4x4 Matrix::Translation1(::g::Uno::Float3 offset)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}

// public static bool TryInvert(float4x4 value, float4x4& result) [static] :5005
bool Matrix::TryInvert2(::g::Uno::Float4x4 value, ::g::Uno::Float4x4* result)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);
    float detInv = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    (*result).M11 = (d11 * detInv);
    (*result).M12 = (-d21 * detInv);
    (*result).M13 = (d31 * detInv);
    (*result).M14 = (-d41 * detInv);
    (*result).M21 = (-d12 * detInv);
    (*result).M22 = (d22 * detInv);
    (*result).M23 = (-d32 * detInv);
    (*result).M24 = (d42 * detInv);
    (*result).M31 = (d13 * detInv);
    (*result).M32 = (-d23 * detInv);
    (*result).M33 = (d33 * detInv);
    (*result).M34 = (-d43 * detInv);
    (*result).M41 = (-d14 * detInv);
    (*result).M42 = (d24 * detInv);
    (*result).M43 = (-d34 * detInv);
    (*result).M44 = (d44 * detInv);
    return ::g::Uno::Math::Abs1(det) > 1e-05f;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class NotImplementedException :270
// {
static void NotImplementedException_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Not implemented");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NotImplementedException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NotImplementedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NotImplementedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotImplementedException", options);
    type->fp_build_ = NotImplementedException_build;
    type->fp_ctor_ = (void*)NotImplementedException__New4_fn;
    return type;
}

// public NotImplementedException() :272
void NotImplementedException__ctor_3_fn(NotImplementedException* __this)
{
    __this->ctor_3();
}

// public NotImplementedException New() :272
void NotImplementedException__New4_fn(NotImplementedException** __retval)
{
    *__retval = NotImplementedException::New4();
}

// public NotImplementedException() [instance] :272
void NotImplementedException::ctor_3()
{
    ctor_1(::STRINGS[25/*"Not impleme...*/]);
}

// public NotImplementedException New() [static] :272
NotImplementedException* NotImplementedException::New4()
{
    NotImplementedException* obj1 = (NotImplementedException*)uNew(NotImplementedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class NotSupportedException :287
// {
static void NotSupportedException_build(uType* type)
{
    ::STRINGS[26] = uString::Const("Method not supported");
    type->SetFields(3);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* NotSupportedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NotSupportedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotSupportedException", options);
    type->fp_build_ = NotSupportedException_build;
    type->fp_ctor_ = (void*)NotSupportedException__New4_fn;
    return type;
}

// public NotSupportedException() :289
void NotSupportedException__ctor_3_fn(NotSupportedException* __this)
{
    __this->ctor_3();
}

// public NotSupportedException(string message) :294
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public NotSupportedException New() :289
void NotSupportedException__New4_fn(NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New4();
}

// public NotSupportedException New(string message) :294
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New5(message);
}

// public NotSupportedException() [instance] :289
void NotSupportedException::ctor_3()
{
    ctor_1(::STRINGS[26/*"Method not ...*/]);
}

// public NotSupportedException(string message) [instance] :294
void NotSupportedException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public NotSupportedException New() [static] :289
NotSupportedException* NotSupportedException::New4()
{
    NotSupportedException* obj1 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public NotSupportedException New(string message) [static] :294
NotSupportedException* NotSupportedException::New5(uString* message)
{
    NotSupportedException* obj2 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class NullReferenceException :309
// {
static void NullReferenceException_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Object reference was null");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NullReferenceException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NullReferenceException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NullReferenceException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NullReferenceException", options);
    type->fp_build_ = NullReferenceException_build;
    type->fp_ctor_ = (void*)NullReferenceException__New4_fn;
    return type;
}

// public NullReferenceException() :311
void NullReferenceException__ctor_3_fn(NullReferenceException* __this)
{
    __this->ctor_3();
}

// public NullReferenceException New() :311
void NullReferenceException__New4_fn(NullReferenceException** __retval)
{
    *__retval = NullReferenceException::New4();
}

// public NullReferenceException() [instance] :311
void NullReferenceException::ctor_3()
{
    ctor_1(::STRINGS[27/*"Object refe...*/]);
}

// public NullReferenceException New() [static] :311
NullReferenceException* NullReferenceException::New4()
{
    NullReferenceException* obj1 = (NullReferenceException*)uNew(NullReferenceException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic class Object :5199
// {
// public virtual bool Equals(object o) :5239
void Object__Equals_fn(uObject* __this, uObject* o, bool* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = __this == o || (
                o != NULL && (
                    o->__type == __this->__type || (
                        o->__type->Type == uTypeTypeEnum &&
                        o->__type->Base == __this->__type
                    )
                ) &&
                memcmp((const uint8_t*)__this + sizeof(uObject), (const uint8_t*)o + sizeof(uObject), __this->__type->ValueSize) == 0
            ), void();
    default:
        return *__retval = __this == o, void();
    }
}

// public static bool Equals(object left, object right) :5281
void Object__Equals1_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::Equals1(left, right);
}

// public virtual int GetHashCode() :5219
void Object__GetHashCode_fn(uObject* __this, int* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this + sizeof(uObject), (int)__this->__type->ValueSize), void();
    default:
        return *__retval = (int)uBase::Default::Hash(__this), void();
    }
}

// public Uno.Type GetType() :5206
void Object__GetType_fn(uObject* __this, uType** __retval)
{
    *__retval = Object::GetType(__this);
}

// public Object New() :5201
void Object__New_fn(uObject** __retval)
{
    *__retval = Object::New();
}

// public static bool ReferenceEquals(object left, object right) :5293
void Object__ReferenceEquals_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::ReferenceEquals(left, right);
}

// public virtual string ToString() :5267
void Object__ToString_fn(uObject* __this, uString** __retval)
{
    return *__retval = __this->__type->Type == uTypeTypeEnum
        ? uEnum::GetString(__this->__type, (uint8_t*)__this + sizeof(uObject))
        : uString::Const(__this->__type->FullName), void();
}

// public Uno.Type GetType() [instance] :5206
uType* Object::GetType(uObject* __this)
{
    return __this->__type;
}

// public static bool Equals(object left, object right) [static] :5281
bool Object::Equals1(uObject* left, uObject* right)
{
    uStackFrame __("object", "Equals(object,object)");

    if (left == right)
        return true;

    if ((left == NULL) || (right == NULL))
        return false;

    return Object::Equals(uPtr(left), right);
}

// public Object New() [static] :5201
uObject* Object::New()
{
    uObject* obj1 = (uObject*)uNew(uObject_typeof());
    return obj1;
}

// public static bool ReferenceEquals(object left, object right) [static] :5293
bool Object::ReferenceEquals(uObject* left, uObject* right)
{
    return left == right;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class ObjectDisposedException :326
// {
static void ObjectDisposedException_build(uType* type)
{
    ::STRINGS[28] = uString::Const("Attempt to access disposed object: ");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ObjectDisposedException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ObjectDisposedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ObjectDisposedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ObjectDisposedException", options);
    type->fp_build_ = ObjectDisposedException_build;
    return type;
}

// public ObjectDisposedException(string objectName) :328
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName)
{
    __this->ctor_3(objectName);
}

// public ObjectDisposedException New(string objectName) :328
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval)
{
    *__retval = ObjectDisposedException::New4(objectName);
}

// public ObjectDisposedException(string objectName) [instance] :328
void ObjectDisposedException::ctor_3(uString* objectName)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[28/*"Attempt to ...*/], objectName));
}

// public ObjectDisposedException New(string objectName) [static] :328
ObjectDisposedException* ObjectDisposedException::New4(uString* objectName)
{
    ObjectDisposedException* obj1 = (ObjectDisposedException*)uNew(ObjectDisposedException_typeof());
    obj1->ctor_3(objectName);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class ObsoleteAttribute :5311
// {
static void ObsoleteAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::ObsoleteAttribute, _IsError), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::ObsoleteAttribute, _Message), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsError", NULL, (void*)ObsoleteAttribute__get_IsError_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)ObsoleteAttribute__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* ObsoleteAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObsoleteAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.ObsoleteAttribute", options);
    type->fp_build_ = ObsoleteAttribute_build;
    type->fp_ctor_ = (void*)ObsoleteAttribute__New1_fn;
    return type;
}

// private ObsoleteAttribute() :5313
void ObsoleteAttribute__ctor_1_fn(ObsoleteAttribute* __this)
{
    __this->ctor_1();
}

// private ObsoleteAttribute(string message) :5315
void ObsoleteAttribute__ctor_2_fn(ObsoleteAttribute* __this, uString* message)
{
    __this->ctor_2(message);
}

// private ObsoleteAttribute(string message, bool isError) :5320
void ObsoleteAttribute__ctor_3_fn(ObsoleteAttribute* __this, uString* message, bool* isError)
{
    __this->ctor_3(message, *isError);
}

// public generated bool get_IsError() :5327
void ObsoleteAttribute__get_IsError_fn(ObsoleteAttribute* __this, bool* __retval)
{
    *__retval = __this->IsError();
}

// private generated void set_IsError(bool value) :5327
void ObsoleteAttribute__set_IsError_fn(ObsoleteAttribute* __this, bool* value)
{
    __this->IsError(*value);
}

// public generated string get_Message() :5326
void ObsoleteAttribute__get_Message_fn(ObsoleteAttribute* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :5326
void ObsoleteAttribute__set_Message_fn(ObsoleteAttribute* __this, uString* value)
{
    __this->Message(value);
}

// private ObsoleteAttribute New() :5313
void ObsoleteAttribute__New1_fn(ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New1();
}

// private ObsoleteAttribute New(string message) :5315
void ObsoleteAttribute__New2_fn(uString* message, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New2(message);
}

// private ObsoleteAttribute New(string message, bool isError) :5320
void ObsoleteAttribute__New3_fn(uString* message, bool* isError, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New3(message, *isError);
}

// private ObsoleteAttribute() [instance] :5313
void ObsoleteAttribute::ctor_1()
{
    ctor_();
}

// private ObsoleteAttribute(string message) [instance] :5315
void ObsoleteAttribute::ctor_2(uString* message)
{
    ctor_();
    Message(message);
}

// private ObsoleteAttribute(string message, bool isError) [instance] :5320
void ObsoleteAttribute::ctor_3(uString* message, bool isError)
{
    ctor_();
    Message(message);
    IsError(isError);
}

// public generated bool get_IsError() [instance] :5327
bool ObsoleteAttribute::IsError()
{
    return _IsError;
}

// private generated void set_IsError(bool value) [instance] :5327
void ObsoleteAttribute::IsError(bool value)
{
    _IsError = value;
}

// public generated string get_Message() [instance] :5326
uString* ObsoleteAttribute::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :5326
void ObsoleteAttribute::Message(uString* value)
{
    _Message = value;
}

// private ObsoleteAttribute New() [static] :5313
ObsoleteAttribute* ObsoleteAttribute::New1()
{
    ObsoleteAttribute* obj1 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}

// private ObsoleteAttribute New(string message) [static] :5315
ObsoleteAttribute* ObsoleteAttribute::New2(uString* message)
{
    ObsoleteAttribute* obj2 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj2->ctor_2(message);
    return obj2;
}

// private ObsoleteAttribute New(string message, bool isError) [static] :5320
ObsoleteAttribute* ObsoleteAttribute::New3(uString* message, bool isError)
{
    ObsoleteAttribute* obj3 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj3->ctor_3(message, isError);
    return obj3;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/exceptions/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class OverflowException :343
// {
static void OverflowException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OverflowException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* OverflowException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OverflowException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.OverflowException", options);
    type->fp_build_ = OverflowException_build;
    return type;
}

// public OverflowException(string message) :345
void OverflowException__ctor_3_fn(OverflowException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public OverflowException New(string message) :345
void OverflowException__New4_fn(uString* message, OverflowException** __retval)
{
    *__retval = OverflowException::New4(message);
}

// public OverflowException(string message) [instance] :345
void OverflowException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public OverflowException New(string message) [static] :345
OverflowException* OverflowException::New4(uString* message)
{
    OverflowException* obj1 = (OverflowException*)uNew(OverflowException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public delegate bool Predicate<T>(T arg) :5339
uDelegateType* Predicate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Predicate`1", 1, 1);
    type->SetSignature(::g::Uno::Bool_typeof(),
        type->T(0));
    return type;
}

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Quaternion :5352
// {
static void Quaternion_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle1_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("RotationMatrix", NULL, (void*)Quaternion__RotationMatrix_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float3x3_typeof()),
        new uFunction("ToEulerAngle", NULL, (void*)Quaternion__ToEulerAngle_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("ToEulerAngleDegrees", NULL, (void*)Quaternion__ToEulerAngleDegrees_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float4_typeof()));
}

uClassType* Quaternion_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Quaternion", options);
    type->fp_build_ = Quaternion_build;
    return type;
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) :5482
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle(*pitch, *yaw, *roll);
}

// public static float4 FromEulerAngle(float3 v) :5477
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle1(*v);
}

// private static float NormalizeAngleDegrees(float angle) :5565
void Quaternion__NormalizeAngleDegrees_fn(float* angle, float* __retval)
{
    *__retval = Quaternion::NormalizeAngleDegrees(*angle);
}

// private static float3 NormalizeAnglesDegrees(float3 angles) :5557
void Quaternion__NormalizeAnglesDegrees_fn(::g::Uno::Float3* angles, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::NormalizeAnglesDegrees(*angles);
}

// public static float4 RotationMatrix(float3x3 matrix) :5574
void Quaternion__RotationMatrix_fn(::g::Uno::Float3x3* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::RotationMatrix(*matrix);
}

// public static float3 ToEulerAngle(float4 q1) :5518
void Quaternion__ToEulerAngle_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::ToEulerAngle(*q1);
}

// public static float3 ToEulerAngleDegrees(float4 q1) :5549
void Quaternion__ToEulerAngleDegrees_fn(::g::Uno::Float4* q1, ::g::Uno::Float3* __retval)
{
    *__retval = Quaternion::ToEulerAngleDegrees(*q1);
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) [static] :5482
::g::Uno::Float4 Quaternion::FromEulerAngle(float pitch, float yaw, float roll)
{
    float tmp = pitch;
    pitch = yaw;
    yaw = tmp;
    float rollOver2 = roll * 0.5f;
    float sinRollOver2 = ::g::Uno::Math::Sin1(rollOver2);
    float cosRollOver2 = ::g::Uno::Math::Cos1(rollOver2);
    float yawOver2 = yaw * 0.5f;
    float sinYawOver2 = ::g::Uno::Math::Sin1(yawOver2);
    float cosYawOver2 = ::g::Uno::Math::Cos1(yawOver2);
    float pitchOver2 = pitch * 0.5f;
    float sinPitchOver2 = ::g::Uno::Math::Sin1(pitchOver2);
    float cosPitchOver2 = ::g::Uno::Math::Cos1(pitchOver2);
    ::g::Uno::Float4 result;
    result.W = (((cosPitchOver2 * cosYawOver2) * cosRollOver2) + ((sinPitchOver2 * sinYawOver2) * sinRollOver2));
    result.X = (((cosPitchOver2 * sinYawOver2) * cosRollOver2) + ((sinPitchOver2 * cosYawOver2) * sinRollOver2));
    result.Y = (((sinPitchOver2 * cosYawOver2) * cosRollOver2) - ((cosPitchOver2 * sinYawOver2) * sinRollOver2));
    result.Z = (((cosPitchOver2 * cosYawOver2) * sinRollOver2) - ((sinPitchOver2 * sinYawOver2) * cosRollOver2));
    return result;
}

// public static float4 FromEulerAngle(float3 v) [static] :5477
::g::Uno::Float4 Quaternion::FromEulerAngle1(::g::Uno::Float3 v)
{
    return Quaternion::FromEulerAngle(v.X, v.Y, v.Z);
}

// private static float NormalizeAngleDegrees(float angle) [static] :5565
float Quaternion::NormalizeAngleDegrees(float angle)
{
    while (angle > 360.0f)
        angle = angle - 360.0f;

    while (angle < 0.0f)
        angle = angle + 360.0f;

    return angle;
}

// private static float3 NormalizeAnglesDegrees(float3 angles) [static] :5557
::g::Uno::Float3 Quaternion::NormalizeAnglesDegrees(::g::Uno::Float3 angles)
{
    angles.X = Quaternion::NormalizeAngleDegrees(angles.X);
    angles.Y = Quaternion::NormalizeAngleDegrees(angles.Y);
    angles.Z = Quaternion::NormalizeAngleDegrees(angles.Z);
    return angles;
}

// public static float4 RotationMatrix(float3x3 matrix) [static] :5574
::g::Uno::Float4 Quaternion::RotationMatrix(::g::Uno::Float3x3 matrix)
{
    float sqrt;
    float halff;
    float scale = (matrix.M11 + matrix.M22) + matrix.M33;
    ::g::Uno::Float4 result;

    if (scale > 0.0f)
    {
        sqrt = ::g::Uno::Math::Sqrt1(scale + 1.0f);
        result.W = (sqrt * 0.5f);
        sqrt = 0.5f / sqrt;
        result.X = ((matrix.M23 - matrix.M32) * sqrt);
        result.Y = ((matrix.M31 - matrix.M13) * sqrt);
        result.Z = ((matrix.M12 - matrix.M21) * sqrt);
    }
    else if ((matrix.M11 >= matrix.M22) && (matrix.M11 >= matrix.M33))
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M11) - matrix.M22) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = (0.5f * sqrt);
        result.Y = ((matrix.M12 + matrix.M21) * halff);
        result.Z = ((matrix.M13 + matrix.M31) * halff);
        result.W = ((matrix.M23 - matrix.M32) * halff);
    }
    else if (matrix.M22 > matrix.M33)
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M22) - matrix.M11) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = ((matrix.M21 + matrix.M12) * halff);
        result.Y = (0.5f * sqrt);
        result.Z = ((matrix.M32 + matrix.M23) * halff);
        result.W = ((matrix.M31 - matrix.M13) * halff);
    }
    else
    {
        sqrt = ::g::Uno::Math::Sqrt1(((1.0f + matrix.M33) - matrix.M11) - matrix.M22);
        halff = 0.5f / sqrt;
        result.X = ((matrix.M31 + matrix.M13) * halff);
        result.Y = ((matrix.M32 + matrix.M23) * halff);
        result.Z = (0.5f * sqrt);
        result.W = ((matrix.M12 - matrix.M21) * halff);
    }

    return result;
}

// public static float3 ToEulerAngle(float4 q1) [static] :5518
::g::Uno::Float3 Quaternion::ToEulerAngle(::g::Uno::Float4 q1)
{
    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = ((sqx + sqy) + sqz) + sqw;
    float test = (q1.X * q1.W) - (q1.Y * q1.Z);
    ::g::Uno::Float3 v;

    if (test > (0.4995f * unit))
    {
        v.Y = (2.0f * ::g::Uno::Math::Atan22(q1.Y, q1.X));
        v.X = 1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    if (test < (-0.4995f * unit))
    {
        v.Y = (-2.0f * ::g::Uno::Math::Atan22(q1.Y, q1.X));
        v.X = -1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    ::g::Uno::Float4 q = ::g::Uno::Float4__New2(q1.W, q1.Z, q1.X, q1.Y);
    v.Y = ::g::Uno::Math::Atan22(((2.0f * q.X) * q.W) + ((2.0f * q.Y) * q.Z), 1.0f - (2.0f * ((q.Z * q.Z) + (q.W * q.W))));
    v.X = ::g::Uno::Math::Asin1(2.0f * ((q.X * q.Z) - (q.W * q.Y)));
    v.Z = ::g::Uno::Math::Atan22(((2.0f * q.X) * q.Y) + ((2.0f * q.Z) * q.W), 1.0f - (2.0f * ((q.Y * q.Y) + (q.Z * q.Z))));
    return v;
}

// public static float3 ToEulerAngleDegrees(float4 q1) [static] :5549
::g::Uno::Float3 Quaternion::ToEulerAngleDegrees(::g::Uno::Float4 q1)
{
    ::g::Uno::Float3 v = Quaternion::ToEulerAngle(q1);
    return Quaternion::NormalizeAnglesDegrees(::g::Uno::Float3__New2(::g::Uno::Math::RadiansToDegrees1(v.X), ::g::Uno::Math::RadiansToDegrees1(v.Y), ::g::Uno::Math::RadiansToDegrees1(v.Z)));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public struct Rect :5795
// {
static void Rect_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Rect, Left), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Rect, Top), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Rect, Right), 0,
        ::TYPES[9/*float*/], offsetof(::g::Uno::Rect, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(30,
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints1_fn, 0, true, type, 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Equals", NULL, (void*)Rect__Equals2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("get_Height", NULL, (void*)Rect__get_Height_fn, 0, false, ::TYPES[9/*float*/], 0),
        new uFunction("set_Height", NULL, (void*)Rect__set_Height_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate_fn, 0, true, type, 2, type, ::TYPES[9/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("Intersect", NULL, (void*)Rect__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("Intersects", NULL, (void*)Rect__Intersects_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_LeftBottom", NULL, (void*)Rect__get_LeftBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_LeftTop", NULL, (void*)Rect__get_LeftTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Maximum", NULL, (void*)Rect__get_Maximum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Rect__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Rect__get_Minimum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Rect__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Rect__New1_fn, 0, true, type, 4, ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/], ::TYPES[9/*float*/]),
        new uFunction(".ctor", NULL, (void*)Rect__New2_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_Position", NULL, (void*)Rect__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Rect__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RightBottom", NULL, (void*)Rect__get_RightBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_RightTop", NULL, (void*)Rect__get_RightTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("Scale", NULL, (void*)Rect__Scale_fn, 0, true, type, 2, type, ::TYPES[9/*float*/]),
        new uFunction("Scale", NULL, (void*)Rect__Scale1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("get_Size", NULL, (void*)Rect__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Rect__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Transform", NULL, (void*)Rect__Transform_fn, 0, true, type, 2, type, ::g::Uno::Float4x4_typeof()),
        new uFunction("Translate", NULL, (void*)Rect__Translate_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("Union", NULL, (void*)Rect__Union_fn, 0, true, type, 2, type, type),
        new uFunction("get_Width", NULL, (void*)Rect__get_Width_fn, 0, false, ::TYPES[9/*float*/], 0),
        new uFunction("set_Width", NULL, (void*)Rect__set_Width_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*float*/]));
}

uStructType* Rect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Rect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Rect", options);
    type->fp_build_ = Rect_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Rect__ToString_fn;
    return type;
}

// public Rect(float left, float top, float right, float bottom) :5799
void Rect__ctor__fn(Rect* __this, float* left, float* top, float* right, float* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Rect(float2 pos, float2 size) :5807
void Rect__ctor_1_fn(Rect* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->ctor_1(*pos, *size);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) :6014
void Rect__ContainingPoints_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, Rect* __retval)
{
    *__retval = Rect__ContainingPoints(*point0, *point1);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) :6030
void Rect__ContainingPoints1_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, ::g::Uno::Float2* point2, ::g::Uno::Float2* point3, Rect* __retval)
{
    *__retval = Rect__ContainingPoints1(*point0, *point1, *point2, *point3);
}

// public static bool Equals(Uno.Rect rect1, Uno.Rect rect2) :5815
void Rect__Equals2_fn(Rect* rect1, Rect* rect2, bool* __retval)
{
    *__retval = Rect__Equals2(*rect1, *rect2);
}

// public float get_Height() :5886
void Rect__get_Height_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :5887
void Rect__set_Height_fn(Rect* __this, float* value)
{
    __this->Height(*value);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) :5989
void Rect__Inflate_fn(Rect* r, float* size, Rect* __retval)
{
    *__retval = Rect__Inflate(*r, *size);
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) :5980
void Rect__Inflate1_fn(Rect* r, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__Inflate1(*r, *size);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) :5939
void Rect__Intersect_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Intersect(*a, *b);
}

// public bool Intersects(Uno.Rect r) :5915
void Rect__Intersects_fn(Rect* __this, Rect* r, bool* __retval)
{
    *__retval = __this->Intersects(*r);
}

// public float2 get_LeftBottom() :5858
void Rect__get_LeftBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftBottom();
}

// public float2 get_LeftTop() :5848
void Rect__get_LeftTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftTop();
}

// public float2 get_Maximum() :5837
void Rect__get_Maximum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float2 value) :5838
void Rect__set_Maximum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Maximum(*value);
}

// public float2 get_Minimum() :5831
void Rect__get_Minimum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float2 value) :5832
void Rect__set_Minimum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Minimum(*value);
}

// public Rect New(float left, float top, float right, float bottom) :5799
void Rect__New1_fn(float* left, float* top, float* right, float* bottom, Rect* __retval)
{
    *__retval = Rect__New1(*left, *top, *right, *bottom);
}

// public Rect New(float2 pos, float2 size) :5807
void Rect__New2_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__New2(*pos, *size);
}

// public static implicit operator Uno.Rect(Uno.Recti r) :5925
void Rect__op_Implicit_fn(::g::Uno::Recti* r, Rect* __retval)
{
    *__retval = Rect__op_Implicit(*r);
}

// public float2 get_Position() :5868
void Rect__get_Position_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :5869
void Rect__set_Position_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RightBottom() :5863
void Rect__get_RightBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightBottom();
}

// public float2 get_RightTop() :5853
void Rect__get_RightTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightTop();
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) :5975
void Rect__Scale_fn(Rect* r, float* scale, Rect* __retval)
{
    *__retval = Rect__Scale(*r, *scale);
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) :5966
void Rect__Scale1_fn(Rect* r, ::g::Uno::Float2* scale, Rect* __retval)
{
    *__retval = Rect__Scale1(*r, *scale);
}

// public float2 get_Size() :5892
void Rect__get_Size_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :5893
void Rect__set_Size_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :5920
void Rect__ToString_fn(Rect* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Rect", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->Left, ::TYPES[9/*float*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Top, ::TYPES[9/*float*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Right, ::TYPES[9/*float*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Float::ToString(__this->Bottom, ::TYPES[9/*float*/])), void();
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) :5948
void Rect__Transform_fn(Rect* r, ::g::Uno::Float4x4* matrix, Rect* __retval)
{
    *__retval = Rect__Transform(*r, *matrix);
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) :5957
void Rect__Translate_fn(Rect* r, ::g::Uno::Float2* offset, Rect* __retval)
{
    *__retval = Rect__Translate(*r, *offset);
}

// public static Uno.Rect Union(Uno.Rect a, Uno.Rect b) :5930
void Rect__Union_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Union(*a, *b);
}

// public float get_Width() :5880
void Rect__get_Width_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :5881
void Rect__set_Width_fn(Rect* __this, float* value)
{
    __this->Width(*value);
}

// public Rect(float left, float top, float right, float bottom) [instance] :5799
void Rect::ctor_(float left, float top, float right, float bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Rect(float2 pos, float2 size) [instance] :5807
void Rect::ctor_1(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (::g::Uno::Float::IsInfinity(size.X) ? size.X : Left + size.X);
    Bottom = (::g::Uno::Float::IsInfinity(size.Y) ? size.Y : Top + size.Y);
}

// public float get_Height() [instance] :5886
float Rect::Height()
{
    return ::g::Uno::Float::IsInfinity(Bottom) ? Bottom : Bottom - Top;
}

// public void set_Height(float value) [instance] :5887
void Rect::Height(float value)
{
    Bottom = (::g::Uno::Float::IsInfinity(value) ? value : Top + value);
}

// public bool Intersects(Uno.Rect r) [instance] :5915
bool Rect::Intersects(Rect r)
{
    return !((((r.Left > Right) || (r.Right < Left)) || (r.Top > Bottom)) || (r.Bottom < Top));
}

// public float2 get_LeftBottom() [instance] :5858
::g::Uno::Float2 Rect::LeftBottom()
{
    return ::g::Uno::Float2__New2(Left, Bottom);
}

// public float2 get_LeftTop() [instance] :5848
::g::Uno::Float2 Rect::LeftTop()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public float2 get_Maximum() [instance] :5837
::g::Uno::Float2 Rect::Maximum()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public void set_Maximum(float2 value) [instance] :5838
void Rect::Maximum(::g::Uno::Float2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public float2 get_Minimum() [instance] :5831
::g::Uno::Float2 Rect::Minimum()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public void set_Minimum(float2 value) [instance] :5832
void Rect::Minimum(::g::Uno::Float2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public float2 get_Position() [instance] :5868
::g::Uno::Float2 Rect::Position()
{
    return Minimum();
}

// public void set_Position(float2 value) [instance] :5869
void Rect::Position(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 sz = Size();
    Left = value.X;
    Top = value.Y;
    Size(sz);
}

// public float2 get_RightBottom() [instance] :5863
::g::Uno::Float2 Rect::RightBottom()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public float2 get_RightTop() [instance] :5853
::g::Uno::Float2 Rect::RightTop()
{
    return ::g::Uno::Float2__New2(Right, Top);
}

// public float2 get_Size() [instance] :5892
::g::Uno::Float2 Rect::Size()
{
    return ::g::Uno::Float2__New2(Width(), Height());
}

// public void set_Size(float2 value) [instance] :5893
void Rect::Size(::g::Uno::Float2 value)
{
    Width(value.X);
    Height(value.Y);
}

// public float get_Width() [instance] :5880
float Rect::Width()
{
    return ::g::Uno::Float::IsInfinity(Right) ? Right : Right - Left;
}

// public void set_Width(float value) [instance] :5881
void Rect::Width(float value)
{
    Right = (::g::Uno::Float::IsInfinity(value) ? value : Left + value);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) [static] :6014
Rect Rect__ContainingPoints(::g::Uno::Float2 point0, ::g::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) [static] :6030
Rect Rect__ContainingPoints1(::g::Uno::Float2 point0, ::g::Uno::Float2 point1, ::g::Uno::Float2 point2, ::g::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    minX = ::g::Uno::Math::Min1(minX, point2.X);
    maxX = ::g::Uno::Math::Max1(maxX, point2.X);
    minY = ::g::Uno::Math::Min1(minY, point2.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point2.Y);
    minX = ::g::Uno::Math::Min1(minX, point3.X);
    maxX = ::g::Uno::Math::Max1(maxX, point3.X);
    minY = ::g::Uno::Math::Min1(minY, point3.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point3.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static bool Equals(Uno.Rect rect1, Uno.Rect rect2) [static] :5815
bool Rect__Equals2(Rect rect1, Rect rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) [static] :5989
Rect Rect__Inflate(Rect r, float size)
{
    return Rect__Inflate1(r, ::g::Uno::Float2__New2(size, size));
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) [static] :5980
Rect Rect__Inflate1(Rect r, ::g::Uno::Float2 size)
{
    return Rect__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) [static] :5939
Rect Rect__Intersect(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Max1(a.Left, b.Left), ::g::Uno::Math::Max1(a.Top, b.Top), ::g::Uno::Math::Min1(a.Right, b.Right), ::g::Uno::Math::Min1(a.Bottom, b.Bottom));
}

// public Rect New(float left, float top, float right, float bottom) [static] :5799
Rect Rect__New1(float left, float top, float right, float bottom)
{
    Rect obj1;
    obj1.ctor_(left, top, right, bottom);
    return obj1;
}

// public Rect New(float2 pos, float2 size) [static] :5807
Rect Rect__New2(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Rect obj2;
    obj2.ctor_1(pos, size);
    return obj2;
}

// public static implicit operator Uno.Rect(Uno.Recti r) [static] :5925
Rect Rect__op_Implicit(::g::Uno::Recti r)
{
    return Rect__New1((float)r.Left, (float)r.Top, (float)r.Right, (float)r.Bottom);
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) [static] :5975
Rect Rect__Scale(Rect r, float scale)
{
    return Rect__Scale1(r, ::g::Uno::Float2__New2(scale, scale));
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) [static] :5966
Rect Rect__Scale1(Rect r, ::g::Uno::Float2 scale)
{
    return Rect__New1(r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) [static] :5948
Rect Rect__Transform(Rect r, ::g::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints1(::g::Uno::Vector::TransformCoordinate(r.LeftTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightBottom(), matrix), ::g::Uno::Vector::TransformCoordinate(r.LeftBottom(), matrix));
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) [static] :5957
Rect Rect__Translate(Rect r, ::g::Uno::Float2 offset)
{
    return Rect__New1(r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}

// public static Uno.Rect Union(Uno.Rect a, Uno.Rect b) [static] :5930
Rect Rect__Union(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Min1(a.Left, b.Left), ::g::Uno::Math::Min1(a.Top, b.Top), ::g::Uno::Math::Max1(a.Right, b.Right), ::g::Uno::Math::Max1(a.Bottom, b.Bottom));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public struct Recti :6057
// {
static void Recti_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Recti, Left), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Recti, Top), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Recti, Right), 0,
        ::TYPES[14/*int*/], offsetof(::g::Uno::Recti, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(16,
        new uFunction("get_Area", NULL, (void*)Recti__get_Area_fn, 0, false, ::TYPES[14/*int*/], 0),
        new uFunction("Contains", NULL, (void*)Recti__Contains1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)Recti__Equals2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate_fn, 0, true, type, 2, type, ::TYPES[14/*int*/]),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Int2_typeof()),
        new uFunction("Intersect", NULL, (void*)Recti__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("get_Maximum", NULL, (void*)Recti__get_Maximum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Recti__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Recti__get_Minimum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Recti__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction(".ctor", NULL, (void*)Recti__New1_fn, 0, true, type, 4, ::TYPES[14/*int*/], ::TYPES[14/*int*/], ::TYPES[14/*int*/], ::TYPES[14/*int*/]),
        new uFunction(".ctor", NULL, (void*)Recti__New2_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("get_Position", NULL, (void*)Recti__get_Position_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Recti__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Size", NULL, (void*)Recti__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Recti__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

uStructType* Recti_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Recti);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Recti", options);
    type->fp_build_ = Recti_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Recti__ToString_fn;
    return type;
}

// public Recti(int left, int top, int right, int bottom) :6061
void Recti__ctor__fn(Recti* __this, int* left, int* top, int* right, int* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Recti(int2 pos, int2 size) :6069
void Recti__ctor_1_fn(Recti* __this, ::g::Uno::Int2* pos, ::g::Uno::Int2* size)
{
    __this->ctor_1(*pos, *size);
}

// public int get_Area() :6136
void Recti__get_Area_fn(Recti* __this, int* __retval)
{
    *__retval = __this->Area();
}

// public bool Contains(Uno.Recti r) :6139
void Recti__Contains1_fn(Recti* __this, Recti* r, bool* __retval)
{
    *__retval = __this->Contains1(*r);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) :6077
void Recti__Equals2_fn(Recti* rect1, Recti* rect2, bool* __retval)
{
    *__retval = Recti__Equals2(*rect1, *rect2);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) :6216
void Recti__Inflate_fn(Recti* r, int* size, Recti* __retval)
{
    *__retval = Recti__Inflate(*r, *size);
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) :6207
void Recti__Inflate1_fn(Recti* r, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__Inflate1(*r, *size);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) :6173
void Recti__Intersect_fn(Recti* a, Recti* b, Recti* __retval)
{
    *__retval = Recti__Intersect(*a, *b);
}

// public int2 get_Maximum() :6093
void Recti__get_Maximum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(int2 value) :6094
void Recti__set_Maximum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Maximum(*value);
}

// public int2 get_Minimum() :6087
void Recti__get_Minimum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(int2 value) :6088
void Recti__set_Minimum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Minimum(*value);
}

// public Recti New(int left, int top, int right, int bottom) :6061
void Recti__New1_fn(int* left, int* top, int* right, int* bottom, Recti* __retval)
{
    *__retval = Recti__New1(*left, *top, *right, *bottom);
}

// public Recti New(int2 pos, int2 size) :6069
void Recti__New2_fn(::g::Uno::Int2* pos, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__New2(*pos, *size);
}

// public int2 get_Position() :6124
void Recti__get_Position_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int2 value) :6125
void Recti__set_Position_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Position(*value);
}

// public int2 get_Size() :6130
void Recti__get_Size_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(int2 value) :6131
void Recti__set_Size_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :6154
void Recti__ToString_fn(Recti* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Recti", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->Left, ::TYPES[14/*int*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Top, ::TYPES[14/*int*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Right, ::TYPES[14/*int*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Int::ToString(__this->Bottom, ::TYPES[14/*int*/])), void();
}

// public Recti(int left, int top, int right, int bottom) [instance] :6061
void Recti::ctor_(int left, int top, int right, int bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Recti(int2 pos, int2 size) [instance] :6069
void Recti::ctor_1(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (Left + size.X);
    Bottom = (Top + size.Y);
}

// public int get_Area() [instance] :6136
int Recti::Area()
{
    return (Right - Left) * (Bottom - Top);
}

// public bool Contains(Uno.Recti r) [instance] :6139
bool Recti::Contains1(Recti r)
{
    return (((Left <= r.Left) && (Right >= r.Right)) && (Top <= r.Top)) && (Bottom >= r.Bottom);
}

// public int2 get_Maximum() [instance] :6093
::g::Uno::Int2 Recti::Maximum()
{
    return ::g::Uno::Int2__New2(Right, Bottom);
}

// public void set_Maximum(int2 value) [instance] :6094
void Recti::Maximum(::g::Uno::Int2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public int2 get_Minimum() [instance] :6087
::g::Uno::Int2 Recti::Minimum()
{
    return ::g::Uno::Int2__New2(Left, Top);
}

// public void set_Minimum(int2 value) [instance] :6088
void Recti::Minimum(::g::Uno::Int2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public int2 get_Position() [instance] :6124
::g::Uno::Int2 Recti::Position()
{
    return Minimum();
}

// public void set_Position(int2 value) [instance] :6125
void Recti::Position(::g::Uno::Int2 value)
{
    ::g::Uno::Int2 dp = ::g::Uno::Int2__op_Subtraction1(value, Position());
    Left = value.X;
    Right = (Right + dp.X);
    Top = value.Y;
    Bottom = (Bottom + dp.Y);
}

// public int2 get_Size() [instance] :6130
::g::Uno::Int2 Recti::Size()
{
    return ::g::Uno::Int2__New2(Right - Left, Bottom - Top);
}

// public void set_Size(int2 value) [instance] :6131
void Recti::Size(::g::Uno::Int2 value)
{
    Right = (Left + value.X);
    Bottom = (Top + value.Y);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) [static] :6077
bool Recti__Equals2(Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) [static] :6216
Recti Recti__Inflate(Recti r, int size)
{
    return Recti__Inflate1(r, ::g::Uno::Int2__New2(size, size));
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) [static] :6207
Recti Recti__Inflate1(Recti r, ::g::Uno::Int2 size)
{
    return Recti__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) [static] :6173
Recti Recti__Intersect(Recti a, Recti b)
{
    return Recti__New1(::g::Uno::Math::Max8(a.Left, b.Left), ::g::Uno::Math::Max8(a.Top, b.Top), ::g::Uno::Math::Min8(a.Right, b.Right), ::g::Uno::Math::Min8(a.Bottom, b.Bottom));
}

// public Recti New(int left, int top, int right, int bottom) [static] :6061
Recti Recti__New1(int left, int top, int right, int bottom)
{
    Recti obj4;
    obj4.ctor_(left, top, right, bottom);
    return obj4;
}

// public Recti New(int2 pos, int2 size) [static] :6069
Recti Recti__New2(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Recti obj5;
    obj5.ctor_1(pos, size);
    return obj5;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct SByte :6238
// {
static void SByte_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* SByte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte", options);
    type->fp_build_ = SByte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6245
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :6251
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :6262
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct SByte2 :6317
// {
static void SByte2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte2, X), 0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* SByte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SByte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte2", options);
    type->fp_build_ = SByte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6360
void SByte2__Equals_fn(SByte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :6361
void SByte2__GetHashCode_fn(SByte2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :6362
void SByte2__ToString_fn(SByte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[15/*sbyte*/]), ::STRINGS[12/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[15/*sbyte*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct SByte4 :6375
// {
static void SByte4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte4, X), 0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte4, Y), 0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte4, Z), 0,
        ::TYPES[15/*sbyte*/], offsetof(::g::Uno::SByte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* SByte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(SByte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte4", options);
    type->fp_build_ = SByte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6426
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :6427
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :6428
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[15/*sbyte*/]), ::STRINGS[12/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[15/*sbyte*/])), ::STRINGS[12/*", "*/]), ::g::Uno::SByte::ToString(__this->Z, ::TYPES[15/*sbyte*/])), ::STRINGS[12/*", "*/]), ::g::Uno::SByte::ToString(__this->W, ::TYPES[15/*sbyte*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Short :6446
// {
static void Short_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* Short_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short", options);
    type->fp_build_ = Short_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6452
void Short__Equals_fn(int16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :6458
void Short__GetHashCode_fn(int16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :6469
void Short__ToString_fn(int16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Short2 :6568
// {
static void Short2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short2, X), 0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Short2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Short2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short2", options);
    type->fp_build_ = Short2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6610
void Short2__Equals_fn(Short2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :6611
void Short2__GetHashCode_fn(Short2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :6612
void Short2__ToString_fn(Short2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[16/*short*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[16/*short*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct Short4 :6625
// {
static void Short4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short4, X), 0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short4, Y), 0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short4, Z), 0,
        ::TYPES[16/*short*/], offsetof(::g::Uno::Short4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* Short4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Short4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short4", options);
    type->fp_build_ = Short4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :6676
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :6677
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :6678
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[16/*short*/]), ::STRINGS[12/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[16/*short*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Short::ToString(__this->Z, ::TYPES[16/*short*/])), ::STRINGS[12/*", "*/]), ::g::Uno::Short::ToString(__this->W, ::TYPES[16/*short*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic sealed class String :6697
// {
// static String() :6697
static void String__cctor__fn(uType* __type)
{
    String::Empty_ = ::STRINGS[17/*""*/];
}

static void String_build(uType* type)
{
    ::STRINGS[17] = uString::Const("");
    ::STRINGS[29] = uString::Const("value");
    ::STRINGS[30] = uString::Const("startIndex");
    ::STRINGS[31] = uString::Const("str");
    ::STRINGS[32] = uString::Const("pos");
    ::STRINGS[33] = uString::Const("oldValue");
    ::TYPES[17] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL);
    ::TYPES[19] = type->Array();
    ::TYPES[20] = ::TYPES[17/*char[]*/]->Array();
    type->SetFields(0,
        type, (uintptr_t)&::g::Uno::String::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(28,
        new uFunction("Compare", NULL, (void*)String__Compare_fn, 0, true, ::g::Uno::Int_typeof(), 2, type, type),
        new uFunction("Concat", NULL, (void*)String__Concat_fn, 0, true, type, 2, uObject_typeof(), uObject_typeof()),
        new uFunction("Concat", NULL, (void*)String__Concat1_fn, 0, true, type, 2, type, type),
        new uFunction("Contains", NULL, (void*)String__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("EndsWith", NULL, (void*)String__EndsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals3_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Format", NULL, (void*)String__Format_fn, 0, true, type, 2, type, uObject_typeof()->Array()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf1_fn, 0, false, ::g::Uno::Int_typeof(), 2, type, ::g::Uno::Int_typeof()),
        new uFunction("Insert", NULL, (void*)String__Insert_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), type),
        new uFunction("IsNullOrEmpty", NULL, (void*)String__IsNullOrEmpty_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNullOrWhiteSpace", NULL, (void*)String__IsNullOrWhiteSpace_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Join", NULL, (void*)String__Join_fn, 0, true, type, 2, type, ::TYPES[19/*string[]*/]),
        new uFunction("LastIndexOf", NULL, (void*)String__LastIndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("LastIndexOf", NULL, (void*)String__LastIndexOf1_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace_fn, 0, false, type, 2, ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace1_fn, 0, false, type, 2, type, type),
        new uFunction("Split", NULL, (void*)String__Split_fn, 0, false, ::TYPES[19/*string[]*/], 1, ::TYPES[17/*char[]*/]),
        new uFunction("StartsWith", NULL, (void*)String__StartsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Substring", NULL, (void*)String__Substring_fn, 0, false, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Substring", NULL, (void*)String__Substring1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray_fn, 0, false, ::TYPES[17/*char[]*/], 0),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray1_fn, 0, false, ::TYPES[17/*char[]*/], 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToLower", NULL, (void*)String__ToLower_fn, 0, false, type, 0),
        new uFunction("ToUpper", NULL, (void*)String__ToUpper_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim1_fn, 0, false, type, 1, ::TYPES[17/*char[]*/]));
}

uType* String_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.String", options);
    type->fp_build_ = String_build;
    type->fp_cctor_ = String__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))String__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))String__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))String__ToString_fn;
    return type;
}

// public static int Compare(string a, string b) :7332
void String__Compare_fn(uString* a, uString* b, int* __retval)
{
    *__retval = String::Compare(a, b);
}

// public static string Concat(object a, object b) :6913
void String__Concat_fn(uObject* a, uObject* b, uString** __retval)
{
    *__retval = String::Concat(a, b);
}

// public static string Concat(string a, string b) :6870
void String__Concat1_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::Concat1(a, b);
}

// public bool Contains(string str) :7355
void String__Contains_fn(uString* __this, uString* str, bool* __retval)
{
    *__retval = String::Contains(__this, str);
}

// public bool EndsWith(string value) :7004
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::EndsWith(__this, value);
}

// public override sealed bool Equals(object other) :6820
void String__Equals_fn(uString* __this, uObject* other, bool* __retval)
{
    if (other != NULL && __this->__type == other->__type)
    {
        uString* str = (uString*)other;
        return *__retval = __this->_length == str->_length && !memcmp(__this->_ptr, str->_ptr, sizeof(uChar) * __this->_length), void();
    }
    
    return *__retval = false, void();
}

// public bool Equals(string other) :6836
void String__Equals2_fn(uString* __this, uString* other, bool* __retval)
{
    *__retval = String::Equals2(__this, other);
}

// public static bool Equals(string left, string right) :6841
void String__Equals3_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::Equals3(left, right);
}

// public static string Format(string str, object[] objs) :7344
void String__Format_fn(uString* str, uArray* objs, uString** __retval)
{
    *__retval = String::Format(str, objs);
}

// public override sealed int GetHashCode() :6714
void String__GetHashCode_fn(uString* __this, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this->_ptr, sizeof(uChar) * __this->_length), void();
}

// public int IndexOf(char c, [int startIndex]) :6958
void String__IndexOf_fn(uString* __this, uChar* c, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf(__this, *c, *startIndex);
}

// public int IndexOf(string str, [int startIndex]) :7303
void String__IndexOf1_fn(uString* __this, uString* str, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf1(__this, str, *startIndex);
}

// private int IndexOfFirstNotInSet(char[] charSet) :7242
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfFirstNotInSet(__this, charSet);
}

// private int IndexOfFirstNotWhiteSpace() :7264
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfFirstNotWhiteSpace(__this);
}

// private int IndexOfLastNotInSet(char[] charSet) :7250
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfLastNotInSet(__this, charSet);
}

// private int IndexOfLastNotWhiteSpace() :7272
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfLastNotWhiteSpace(__this);
}

// public string Insert(int pos, string str) :7280
void String__Insert_fn(uString* __this, int* pos, uString* str, uString** __retval)
{
    *__retval = String::Insert(__this, *pos, str);
}

// private bool InSet(char c, char[] charSet) :7258
void String__InSet_fn(uString* __this, uChar* c, uArray* charSet, bool* __retval)
{
    *__retval = String::InSet(__this, *c, charSet);
}

// public static bool IsNullOrEmpty(string s) :7104
void String__IsNullOrEmpty_fn(uString* s, bool* __retval)
{
    *__retval = String::IsNullOrEmpty(s);
}

// public static bool IsNullOrWhiteSpace(string value) :7109
void String__IsNullOrWhiteSpace_fn(uString* value, bool* __retval)
{
    *__retval = String::IsNullOrWhiteSpace(value);
}

// public static string Join(string separator, string[] value) :7089
void String__Join_fn(uString* separator, uArray* value, uString** __retval)
{
    *__retval = String::Join(separator, value);
}

// public int LastIndexOf(char c) :6970
void String__LastIndexOf_fn(uString* __this, uChar* c, int* __retval)
{
    *__retval = String::LastIndexOf(__this, *c);
}

// public int LastIndexOf(char c, [int startIndex]) :6975
void String__LastIndexOf1_fn(uString* __this, uChar* c, int* startIndex, int* __retval)
{
    *__retval = String::LastIndexOf1(__this, *c, *startIndex);
}

// private bool MatchesAt(string str, int pos) :7324
void String__MatchesAt_fn(uString* __this, uString* str, int* pos, bool* __retval)
{
    *__retval = String::MatchesAt(__this, str, *pos);
}

// public static operator +(object a, string b) :6928
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition(a, b);
}

// public static operator +(string a, object b) :6923
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval)
{
    *__retval = String::op_Addition1(a, b);
}

// public static operator +(string a, string b) :6918
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition2(a, b);
}

// public static operator ==(string left, string right) :6860
void String__op_Equality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Equality(left, right);
}

// public static operator !=(string left, string right) :6865
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Inequality(left, right);
}

// public string Replace(char oldChar, char newChar) :6736
void String__Replace_fn(uString* __this, uChar* oldChar, uChar* newChar, uString** __retval)
{
    *__retval = String::Replace(__this, *oldChar, *newChar);
}

// public string Replace(string oldValue, string newValue) :6747
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval)
{
    *__retval = String::Replace1(__this, oldValue, newValue);
}

// public string[] Split(char[] splitChars) :7034
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval)
{
    *__retval = String::Split(__this, splitChars);
}

// public bool StartsWith(string value) :6990
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::StartsWith(__this, value);
}

// private char[] SubCharArray(int start, int len) :6776
void String__SubCharArray_fn(uString* __this, int* start, int* len, uArray** __retval)
{
    *__retval = String::SubCharArray(__this, *start, *len);
}

// public string Substring(int start) :6953
void String__Substring_fn(uString* __this, int* start, uString** __retval)
{
    *__retval = String::Substring(__this, *start);
}

// public string Substring(int start, int len) :6933
void String__Substring1_fn(uString* __this, int* start, int* len, uString** __retval)
{
    *__retval = String::Substring1(__this, *start, *len);
}

// public char[] ToCharArray() :7029
void String__ToCharArray_fn(uString* __this, uArray** __retval)
{
    *__retval = String::ToCharArray(__this);
}

// public char[] ToCharArray(int start, int length) :7019
void String__ToCharArray1_fn(uString* __this, int* start, int* length, uArray** __retval)
{
    *__retval = String::ToCharArray1(__this, *start, *length);
}

// public string ToLower() :6786
void String__ToLower_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToLower(__this);
}

// public override sealed string ToString() :6731
void String__ToString_fn(uString* __this, uString** __retval)
{
    return *__retval = __this, void();
}

// public string ToUpper() :6803
void String__ToUpper_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToUpper(__this);
}

// public string Trim() :7166
void String__Trim_fn(uString* __this, uString** __retval)
{
    *__retval = String::Trim(__this);
}

// public string Trim(char[] trimChars) :7180
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval)
{
    *__retval = String::Trim1(__this, trimChars);
}

uSStrong<uString*> String::Empty_;

// public bool Contains(string str) [instance] :7355
bool String::Contains(uString* __this, uString* str)
{
    uStackFrame __("string", "Contains(string)");
    return String::IndexOf1(__this, str, 0) >= 0;
}

// public bool EndsWith(string value) [instance] :7004
bool String::EndsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "EndsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[29/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    int index = __this->Length() - uPtr(value)->Length();

    for (int i = 0; i < value->Length(); i++)
        if (__this->Item(index++) != uPtr(value)->Item(i))
            return false;

    return true;
}

// public bool Equals(string other) [instance] :6836
bool String::Equals2(uString* __this, uString* other)
{
    uStackFrame __("string", "Equals(string)");
    return String::Equals3(__this, other);
}

// public int IndexOf(char c, [int startIndex]) [instance] :6958
int String::IndexOf(uString* __this, uChar c, int startIndex)
{
    uStackFrame __("string", "IndexOf(char,[int])");

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[30/*"startIndex"*/]));

    for (int i = startIndex; i < __this->Length(); i++)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// public int IndexOf(string str, [int startIndex]) [instance] :7303
int String::IndexOf1(uString* __this, uString* str, int startIndex)
{
    uStackFrame __("string", "IndexOf(string,[int])");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    if (String::op_Equality(str, String::Empty()))
        return 0;

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[30/*"startIndex"*/]));

    for (int hay = startIndex; hay < __this->Length(); hay++)
    {
        if (uPtr(str)->Length() > (__this->Length() - hay))
            return -1;

        if (String::MatchesAt(__this, str, hay))
            return hay;
    }

    return -1;
}

// private int IndexOfFirstNotInSet(char[] charSet) [instance] :7242
int String::IndexOfFirstNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfFirstNotInSet(char[])");

    for (int i = 0; i < __this->Length(); i++)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfFirstNotWhiteSpace() [instance] :7264
int String::IndexOfFirstNotWhiteSpace(uString* __this)
{
    for (int i = 0; i < __this->Length(); i++)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// private int IndexOfLastNotInSet(char[] charSet) [instance] :7250
int String::IndexOfLastNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfLastNotInSet(char[])");

    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfLastNotWhiteSpace() [instance] :7272
int String::IndexOfLastNotWhiteSpace(uString* __this)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// public string Insert(int pos, string str) [instance] :7280
uString* String::Insert(uString* __this, int pos, uString* str)
{
    uStackFrame __("string", "Insert(int,string)");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    if ((pos < 0) || (pos > __this->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[32/*"pos"*/]));

    if (uPtr(str)->Length() == 0)
        return __this;

    if (__this->Length() == 0)
        return str;

    uArray* s = uArray::New(::TYPES[17/*char[]*/], __this->Length() + uPtr(str)->Length());

    for (int i = 0; i < pos; i++)
        uPtr(s)->Item<uChar>(i) = __this->Item(i);

    for (int i1 = 0; i1 < str->Length(); i1++)
        uPtr(s)->Item<uChar>(i1 + pos) = uPtr(str)->Item(i1);

    for (int i2 = pos; i2 < __this->Length(); i2++)
        uPtr(s)->Item<uChar>(i2 + uPtr(str)->Length()) = __this->Item(i2);

    return uString::CharArray(s);
}

// private bool InSet(char c, char[] charSet) [instance] :7258
bool String::InSet(uString* __this, uChar c, uArray* charSet)
{
    uStackFrame __("string", "InSet(char,char[])");

    for (int i = 0; i < uPtr(charSet)->Length(); i++)
        if (uPtr(charSet)->Item<uChar>(i) == c)
            return true;

    return false;
}

// public int LastIndexOf(char c) [instance] :6970
int String::LastIndexOf(uString* __this, uChar c)
{
    uStackFrame __("string", "LastIndexOf(char)");
    return String::LastIndexOf1(__this, c, __this->Length() - 1);
}

// public int LastIndexOf(char c, [int startIndex]) [instance] :6975
int String::LastIndexOf1(uString* __this, uChar c, int startIndex)
{
    uStackFrame __("string", "LastIndexOf(char,[int])");

    if ((startIndex >= __this->Length()) && (__this->Length() > 0))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[30/*"startIndex"*/]));

    if (__this->Length() == 0)
        return -1;

    for (int i = startIndex; i >= 0; i--)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// private bool MatchesAt(string str, int pos) [instance] :7324
bool String::MatchesAt(uString* __this, uString* str, int pos)
{
    uStackFrame __("string", "MatchesAt(string,int)");

    for (int i = 0; i < uPtr(str)->Length(); i++)
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != uPtr(str)->Item(i)))
            return false;

    return true;
}

// public string Replace(char oldChar, char newChar) [instance] :6736
uString* String::Replace(uString* __this, uChar oldChar, uChar newChar)
{
    uStackFrame __("string", "Replace(char,char)");
    uArray* s = uArray::New(::TYPES[17/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        uPtr(s)->Item<uChar>(i) = __this->Item(i);

        if (s->Item<uChar>(i) == oldChar)
            uPtr(s)->Item<uChar>(i) = newChar;
    }

    return uString::CharArray(s);
}

// public string Replace(string oldValue, string newValue) [instance] :6747
uString* String::Replace1(uString* __this, uString* oldValue, uString* newValue)
{
    uStackFrame __("string", "Replace(string,string)");

    if (String::op_Equality(oldValue, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[33/*"oldValue"*/]));

    if (String::op_Equality(oldValue, String::Empty()))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[17/*""*/], ::STRINGS[33/*"oldValue"*/]));

    int index = String::IndexOf1(__this, oldValue, 0);

    if (index == -1)
        return __this;

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    int pos = 0;

    while (index != -1)
    {
        uPtr(sb)->Append1(String::SubCharArray(__this, pos, index - pos));
        sb->Append2(newValue);
        pos = index + uPtr(oldValue)->Length();
        index = String::IndexOf1(__this, oldValue, pos);
    }

    sb->Append1(String::SubCharArray(__this, pos, __this->Length() - pos));
    return sb->ToString();
}

// public string[] Split(char[] splitChars) [instance] :7034
uArray* String::Split(uString* __this, uArray* splitChars)
{
    uStackFrame __("string", "Split(char[])");

    if ((splitChars == NULL) || (uPtr(splitChars)->Length() == 0))
        splitChars = uArray::Init<int>(::TYPES[17/*char[]*/], 4, ' ', 9, 10, 13);

    int splitCount = 0;
    int charCount = 0;

    for (int i = 0; i < __this->Length(); i++)

        for (int k = 0; k < uPtr(splitChars)->Length(); k++)
            if (__this->Item(i) == uPtr(splitChars)->Item<uChar>(k))
                splitCount++;

    uArray* r = uArray::New(::TYPES[19/*string[]*/], splitCount + 1);
    uArray* ch = uArray::New(::TYPES[20/*char[][]*/], splitCount + 1);
    splitCount = 0;
    int start = 0;

    for (int i1 = 0; i1 < __this->Length(); i1++)
    {
        bool found = false;

        for (int k1 = 0; k1 < uPtr(splitChars)->Length(); k1++)
            if (__this->Item(i1) == uPtr(splitChars)->Item<uChar>(k1))
            {
                uPtr(ch)->Strong<uArray*>(splitCount) = uArray::New(::TYPES[17/*char[]*/], charCount);

                for (int n = 0; n < charCount; n++)
                    uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<uChar>(n) = __this->Item(start + n);

                start = i1 + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }

        if (!found)
            charCount++;
    }

    ch->Strong<uArray*>(splitCount) = uArray::New(::TYPES[17/*char[]*/], charCount);

    for (int n1 = 0; n1 < charCount; n1++)
        uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<uChar>(n1) = __this->Item(start + n1);

    for (int i2 = 0; i2 < ch->Length(); i2++)
        uPtr(r)->Strong<uString*>(i2) = uString::CharArray(uPtr(ch)->Strong<uArray*>(i2));

    return r;
}

// public bool StartsWith(string value) [instance] :6990
bool String::StartsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "StartsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[29/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    for (int i = 0; i < uPtr(value)->Length(); i++)
        if (__this->Item(i) != uPtr(value)->Item(i))
            return false;

    return true;
}

// private char[] SubCharArray(int start, int len) [instance] :6776
uArray* String::SubCharArray(uString* __this, int start, int len)
{
    uStackFrame __("string", "SubCharArray(int,int)");
    uArray* chars = uArray::New(::TYPES[17/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(chars)->Item<uChar>(i) = __this->Item(start + i);

    return chars;
}

// public string Substring(int start) [instance] :6953
uString* String::Substring(uString* __this, int start)
{
    uStackFrame __("string", "Substring(int)");
    return String::Substring1(__this, start, __this->Length() - start);
}

// public string Substring(int start, int len) [instance] :6933
uString* String::Substring1(uString* __this, int start, int len)
{
    uStackFrame __("string", "Substring(int,int)");

    if ((start == __this->Length()) && (len == 0))
        return String::Empty();

    uArray* s = uArray::New(::TYPES[17/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(s)->Item<uChar>(i) = __this->Item(start + i);

    return uString::CharArray(s);
}

// public char[] ToCharArray() [instance] :7029
uArray* String::ToCharArray(uString* __this)
{
    uStackFrame __("string", "ToCharArray()");
    return String::ToCharArray1(__this, 0, __this->Length());
}

// public char[] ToCharArray(int start, int length) [instance] :7019
uArray* String::ToCharArray1(uString* __this, int start, int length)
{
    uStackFrame __("string", "ToCharArray(int,int)");
    uArray* result = uArray::New(::TYPES[17/*char[]*/], length);

    for (int i = 0; i < length; i++)
        uPtr(result)->Item<uChar>(i) = __this->Item(start + i);

    return result;
}

// public string ToLower() [instance] :6786
uString* String::ToLower(uString* __this)
{
    uStackFrame __("string", "ToLower()");
    uArray* chars = uArray::New(::TYPES[17/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToLower(__this->Item(i));

    return uString::CharArray(chars);
}

// public string ToUpper() [instance] :6803
uString* String::ToUpper(uString* __this)
{
    uStackFrame __("string", "ToUpper()");
    uArray* chars = uArray::New(::TYPES[17/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToUpper(__this->Item(i));

    return uString::CharArray(chars);
}

// public string Trim() [instance] :7166
uString* String::Trim(uString* __this)
{
    uStackFrame __("string", "Trim()");

    if (String::op_Equality(__this, String::Empty()))
        return String::Empty();

    int first = String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
        return String::Empty();

    int last = String::IndexOfLastNotWhiteSpace(__this);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public string Trim(char[] trimChars) [instance] :7180
uString* String::Trim1(uString* __this, uArray* trimChars)
{
    uStackFrame __("string", "Trim(char[])");

    if (String::op_Equality(__this, String::Empty()))
        return String::Empty();

    int first = String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
        return String::Empty();

    int last = String::IndexOfLastNotInSet(__this, trimChars);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public static int Compare(string a, string b) [static] :7332
int String::Compare(uString* a, uString* b)
{
    uStackFrame __("string", "Compare(string,string)");
    String_typeof()->Init();

    for (int i = 0; i < ::g::Uno::Math::Min8(uPtr(a)->Length(), uPtr(b)->Length()); i++)
    {
        if (uPtr(a)->Item(i) < uPtr(b)->Item(i))
            return -1;

        if (uPtr(b)->Item(i) < uPtr(a)->Item(i))
            return 1;
    }

    if (uPtr(a)->Length() < uPtr(b)->Length())
        return -1;

    if (uPtr(b)->Length() < uPtr(a)->Length())
        return 1;

    return 0;
}

// public static string Concat(object a, object b) [static] :6913
uString* String::Concat(uObject* a, uObject* b)
{
    uStackFrame __("string", "Concat(object,object)");
    String_typeof()->Init();
    return String::Concat1((a == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(a)), (b == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(b)));
}

// public static string Concat(string a, string b) [static] :6870
uString* String::Concat1(uString* a, uString* b)
{
    uStackFrame __("string", "Concat(string,string)");
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(a, NULL) && ::g::Uno::Object::ReferenceEquals(b, NULL))
        return String::Empty();

    if (::g::Uno::Object::ReferenceEquals(a, NULL))
        return b;

    if (::g::Uno::Object::ReferenceEquals(b, NULL))
        return a;

    uArray* s = uArray::New(::TYPES[17/*char[]*/], uPtr(a)->Length() + uPtr(b)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(s)->Item<uChar>(i) = uPtr(a)->Item(i);

    for (int i1 = 0; i1 < b->Length(); i1++)
        uPtr(s)->Item<uChar>(uPtr(a)->Length() + i1) = uPtr(b)->Item(i1);

    return uString::CharArray(s);
}

// public static bool Equals(string left, string right) [static] :6841
bool String::Equals3(uString* left, uString* right)
{
    uStackFrame __("string", "Equals(string,string)");
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(left, right))
        return true;

    if (::g::Uno::Object::ReferenceEquals(left, NULL) || ::g::Uno::Object::ReferenceEquals(right, NULL))
        return false;

    if (uPtr(left)->Length() != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(left)->Length(); i++)
        if (uPtr(left)->Item(i) != uPtr(right)->Item(i))
            return false;

    return true;
}

// public static string Format(string str, object[] objs) [static] :7344
uString* String::Format(uString* str, uArray* objs)
{
    uStackFrame __("string", "Format(string,object[])");
    String_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > ret3;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    ::g::Uno::Collections::List* tokens = ::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer::TokenizeFormatString(str);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tokens), &ret3), ret3); enum1.MoveNext(::TYPES[18/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]); )
    {
        ::g::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum1.Current(::TYPES[18/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
        uPtr(builder)->Append2(uPtr(token)->ToString1(objs));
    }

    return builder->ToString();
}

// public static bool IsNullOrEmpty(string s) [static] :7104
bool String::IsNullOrEmpty(uString* s)
{
    String_typeof()->Init();
    return String::op_Equality(s, NULL) || String::op_Equality(s, String::Empty());
}

// public static bool IsNullOrWhiteSpace(string value) [static] :7109
bool String::IsNullOrWhiteSpace(uString* value)
{
    uStackFrame __("string", "IsNullOrWhiteSpace(string)");
    String_typeof()->Init();

    if (String::op_Equality(value, NULL))
        return true;

    for (int i = 0; i < uPtr(value)->Length(); i++)
        if (!::g::Uno::Char::IsWhiteSpace(uPtr(value)->Item(i)))
            return false;

    return true;
}

// public static string Join(string separator, string[] value) [static] :7089
uString* String::Join(uString* separator, uArray* value)
{
    uStackFrame __("string", "Join(string,string[])");
    String_typeof()->Init();
    uString* result = ::STRINGS[17/*""*/];

    for (int i = 0; i < uPtr(value)->Length(); i++)
    {
        if (i > 0)
            result = String::op_Addition2(result, separator);

        result = String::op_Addition2(result, uPtr(value)->Strong<uString*>(i));
    }

    return result;
}

// public static operator +(object a, string b) [static] :6928
uString* String::op_Addition(uObject* a, uString* b)
{
    uStackFrame __("string", "+(object,string)");
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, object b) [static] :6923
uString* String::op_Addition1(uString* a, uObject* b)
{
    uStackFrame __("string", "+(string,object)");
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, string b) [static] :6918
uString* String::op_Addition2(uString* a, uString* b)
{
    uStackFrame __("string", "+(string,string)");
    String_typeof()->Init();
    return String::Concat1(a, b);
}

// public static operator ==(string left, string right) [static] :6860
bool String::op_Equality(uString* left, uString* right)
{
    uStackFrame __("string", "==(string,string)");
    String_typeof()->Init();
    return String::Equals3(left, right);
}

// public static operator !=(string left, string right) [static] :6865
bool String::op_Inequality(uString* left, uString* right)
{
    uStackFrame __("string", "!=(string,string)");
    String_typeof()->Init();
    return !String::Equals3(left, right);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Tuple :7376
// {
static void Tuple_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Tuple2_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[21/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL));
    type->Reflection.SetFunctions(1,
        new uFunction("Create`2", type->MethodTypes[0], (void*)Tuple__Create1_fn, 0, true, ::TYPES[21/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1)));
}

uClassType* Tuple_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Tuple", options);
    type->MethodTypes[0] = type->NewMethodType(2, 1);
    type->fp_build_ = Tuple_build;
    return type;
}

// public static Uno.Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2) :7379
void Tuple__Create1_fn(uType* __type, void* item1, void* item2, ::g::Uno::Tuple2** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Tuple<T1, T2>*/),
    };
    ::g::Uno::Tuple2* ret2;
    return *__retval = (::g::Uno::Tuple2__New1_fn(__types[0], item1, item2, &ret2), ret2), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class Tuple<T1, T2> :7427
// {
static void Tuple2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::STRINGS[34] = uString::Const("(");
    ::STRINGS[35] = uString::Const(")");
    type->SetPrecalc(
        type->T(0),
        type->T(1));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("AppendItems", NULL, (void*)Tuple2__AppendItems_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Text::StringBuilder_typeof()),
        new uFunction("get_Item1", NULL, (void*)Tuple2__get_Item1_fn, 0, false, type->T(0), 0),
        new uFunction("get_Item2", NULL, (void*)Tuple2__get_Item2_fn, 0, false, type->T(1), 0),
        new uFunction(".ctor", type, (void*)Tuple2__New1_fn, 0, true, type, 2, type->T(0), type->T(1)));
}

uType* Tuple2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Tuple2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Tuple`2", options);
    type->fp_build_ = Tuple2_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Tuple2__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Tuple2__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Tuple2__ToString_fn;
    return type;
}

// public Tuple(T1 item1, T2 item2) :7432
void Tuple2__ctor__fn(Tuple2* __this, void* item1, void* item2)
{
    Tuple2__set_Item1_fn(__this, item1);
    Tuple2__set_Item2_fn(__this, item2);
}

// public void AppendItems(Uno.Text.StringBuilder sb) :7460
void Tuple2__AppendItems_fn(Tuple2* __this, ::g::Uno::Text::StringBuilder* sb)
{
    __this->AppendItems(sb);
}

// public override sealed bool Equals(object other) :7438
void Tuple2__Equals_fn(Tuple2* __this, uObject* other, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T1*/),
        __this->__type->Precalced(1/*T2*/),
    };
    uStackFrame __("Uno.Tuple`2", "Equals(object)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret7(__types[1], U_ALLOCA(__types[1]->ValueSize));
    Tuple2* tother = uAs<Tuple2*>(other, __this->__type);
    return *__retval = (tother != NULL) ? ::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr((Tuple2__get_Item1_fn(__this, &ret4), ret4)), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], (Tuple2__get_Item1_fn(uPtr(tother), &ret5), ret5))) && ::g::Uno::Object::Equals(uBoxPtr(__types[1], uPtr((Tuple2__get_Item2_fn(__this, &ret6), ret6)), U_ALLOCA(__types[1]->ObjectSize)), uBoxPtr(__types[1], (Tuple2__get_Item2_fn(uPtr(tother), &ret7), ret7))) : false, void();
}

// public override sealed int GetHashCode() :7446
void Tuple2__GetHashCode_fn(Tuple2* __this, int* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T1*/),
        __this->__type->Precalced(1/*T2*/),
    };
    uStackFrame __("Uno.Tuple`2", "GetHashCode()");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[1], U_ALLOCA(__types[1]->ValueSize));
    return *__retval = ::g::Uno::Object::GetHashCode(uBoxPtr(__types[0], uPtr((Tuple2__get_Item1_fn(__this, &ret8), ret8)), U_ALLOCA(__types[0]->ObjectSize))) ^ ::g::Uno::Object::GetHashCode(uBoxPtr(__types[1], uPtr((Tuple2__get_Item2_fn(__this, &ret9), ret9)), U_ALLOCA(__types[1]->ObjectSize))), void();
}

// public generated T1 get_Item1() :7429
void Tuple2__get_Item1_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item1()), void();
}

// private generated void set_Item1(T1 value) :7429
void Tuple2__set_Item1_fn(Tuple2* __this, void* value)
{
    __this->_Item1() = value;
}

// public generated T2 get_Item2() :7430
void Tuple2__get_Item2_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item2()), void();
}

// private generated void set_Item2(T2 value) :7430
void Tuple2__set_Item2_fn(Tuple2* __this, void* value)
{
    __this->_Item2() = value;
}

// public Tuple New(T1 item1, T2 item2) :7432
void Tuple2__New1_fn(uType* __type, void* item1, void* item2, Tuple2** __retval)
{
    Tuple2* obj1 = (Tuple2*)uNew(__type);
    Tuple2__ctor__fn(obj1, item1, item2);
    return *__retval = obj1, void();
}

// public override sealed string ToString() :7451
void Tuple2__ToString_fn(Tuple2* __this, uString** __retval)
{
    uStackFrame __("Uno.Tuple`2", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[34/*"("*/]);
    __this->AppendItems(sb);
    sb->Append2(::STRINGS[35/*")"*/]);
    return *__retval = sb->ToString(), void();
}

// public void AppendItems(Uno.Text.StringBuilder sb) [instance] :7460
void Tuple2::AppendItems(::g::Uno::Text::StringBuilder* sb)
{
    uType* __types[] = {
        __type->Precalced(0/*T1*/),
        __type->Precalced(1/*T2*/),
    };
    uStackFrame __("Uno.Tuple`2", "AppendItems(Uno.Text.StringBuilder)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uPtr(sb)->Append2(::g::Uno::Object::ToString(uBoxPtr(__types[0], uPtr((Tuple2__get_Item1_fn(this, &ret2), ret2)), U_ALLOCA(__types[0]->ObjectSize))));
    sb->Append2(::STRINGS[12/*", "*/]);
    sb->Append2(::g::Uno::Object::ToString(uBoxPtr(__types[1], uPtr((Tuple2__get_Item2_fn(this, &ret3), ret3)), U_ALLOCA(__types[1]->ObjectSize))));
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class Type :7833
// {
// static Type() :7833
static void Type__cctor__fn(uType* __type)
{
    Type::EmptyTypes_ = uArray::New(::TYPES[22/*Uno.Type[]*/], 0);
}

static void Type_build(uType* type)
{
    ::STRINGS[36] = uString::Const("typeName");
    ::STRINGS[37] = uString::Const("typeArguments");
    ::TYPES[22] = type->Array();
    type->SetFields(0,
        ::TYPES[22/*Uno.Type[]*/], (uintptr_t)&::g::Uno::Type::EmptyTypes_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("EmptyTypes", 0));
    type->Reflection.SetFunctions(24,
        new uFunction("get_BaseType", NULL, (void*)Type__get_BaseType_fn, 0, false, type, 0),
        new uFunction("get_ContainsGenericParameters", NULL, (void*)Type__get_ContainsGenericParameters_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)Type__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_GenericParameterPosition", NULL, (void*)Type__get_GenericParameterPosition_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetElementType", NULL, (void*)Type__GetElementType_fn, 0, false, type, 0),
        new uFunction("GetGenericArguments", NULL, (void*)Type__GetGenericArguments_fn, 0, false, ::TYPES[22/*Uno.Type[]*/], 0),
        new uFunction("GetGenericTypeDefinition", NULL, (void*)Type__GetGenericTypeDefinition_fn, 0, false, type, 0),
        new uFunction("GetInterfaces", NULL, (void*)Type__GetInterfaces_fn, 0, false, ::TYPES[22/*Uno.Type[]*/], 0),
        new uFunction("GetType", NULL, (void*)Type__GetType1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("GetType", NULL, (void*)Type__GetType2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_HasElementType", NULL, (void*)Type__get_HasElementType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsArray", NULL, (void*)Type__get_IsArray_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsByRef", NULL, (void*)Type__get_IsByRef_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsClass", NULL, (void*)Type__get_IsClass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsEnum", NULL, (void*)Type__get_IsEnum_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericParameter", NULL, (void*)Type__get_IsGenericParameter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericType", NULL, (void*)Type__get_IsGenericType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericTypeDefinition", NULL, (void*)Type__get_IsGenericTypeDefinition_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsInterface", NULL, (void*)Type__get_IsInterface_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSubclassOf", NULL, (void*)Type__IsSubclassOf_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_IsValueType", NULL, (void*)Type__get_IsValueType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("MakeArrayType", NULL, (void*)Type__MakeArrayType_fn, 0, false, type, 0),
        new uFunction("MakeByRefType", NULL, (void*)Type__MakeByRefType_fn, 0, false, type, 0),
        new uFunction("MakeGenericType", NULL, (void*)Type__MakeGenericType_fn, 0, false, type, 1, ::TYPES[22/*Uno.Type[]*/]));
}

uType* Type_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Type);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Type", options);
    type->fp_build_ = Type_build;
    type->fp_ctor_ = (void*)Type__New1_fn;
    type->fp_cctor_ = Type__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Type__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Type__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Type__ToString_fn;
    return type;
}

// internal Type() :7837
void Type__ctor__fn(uType* __this)
{
    Type::ctor_(__this);
}

// public Uno.Type get_BaseType() :7870
void Type__get_BaseType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::BaseType(__this);
}

// public bool get_ContainsGenericParameters() :7881
void Type__get_ContainsGenericParameters_fn(uType* __this, bool* __retval)
{
    *__retval = Type::ContainsGenericParameters(__this);
}

// public override sealed bool Equals(object obj) :7851
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Uno::Object__Equals_fn(__this, obj, &ret2), ret2), void();
}

// public string get_FullName() :7892
void Type__get_FullName_fn(uType* __this, uString** __retval)
{
    *__retval = Type::FullName(__this);
}

// public int get_GenericParameterPosition() :7903
void Type__get_GenericParameterPosition_fn(uType* __this, int* __retval)
{
    *__retval = Type::GenericParameterPosition(__this);
}

// public Uno.Type GetElementType() :8022
void Type__GetElementType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetElementType(__this);
}

// public Uno.Type[] GetGenericArguments() :8032
void Type__GetGenericArguments_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetGenericArguments(__this);
}

// public Uno.Type GetGenericTypeDefinition() :8045
void Type__GetGenericTypeDefinition_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetGenericTypeDefinition(__this);
}

// public override sealed int GetHashCode() :7856
void Type__GetHashCode_fn(uType* __this, int* __retval)
{
    int ret3;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret3), ret3), void();
}

// public Uno.Type[] GetInterfaces() :8053
void Type__GetInterfaces_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetInterfaces(__this);
}

// public static extern Uno.Type GetType(string typeName) :8067
void Type__GetType1_fn(uString* typeName, uType** __retval)
{
    *__retval = Type::GetType1(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) :8076
void Type__GetType2_fn(uString* typeName, bool* throwOnError, uType** __retval)
{
    *__retval = Type::GetType2(typeName, *throwOnError);
}

// public bool get_HasElementType() :7914
void Type__get_HasElementType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::HasElementType(__this);
}

// public bool get_IsArray() :7925
void Type__get_IsArray_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsArray(__this);
}

// public bool get_IsByRef() :7936
void Type__get_IsByRef_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsByRef(__this);
}

// public bool get_IsClass() :7947
void Type__get_IsClass_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsClass(__this);
}

// public bool get_IsEnum() :7958
void Type__get_IsEnum_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsEnum(__this);
}

// public bool get_IsGenericParameter() :7969
void Type__get_IsGenericParameter_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericParameter(__this);
}

// public bool get_IsGenericType() :7980
void Type__get_IsGenericType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericType(__this);
}

// public bool get_IsGenericTypeDefinition() :7991
void Type__get_IsGenericTypeDefinition_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericTypeDefinition(__this);
}

// public bool get_IsInterface() :8002
void Type__get_IsInterface_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsInterface(__this);
}

// public bool IsSubclassOf(Uno.Type c) :8089
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval)
{
    *__retval = Type::IsSubclassOf(__this, c);
}

// public bool get_IsValueType() :8013
void Type__get_IsValueType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsValueType(__this);
}

// public Uno.Type MakeArrayType() :8097
void Type__MakeArrayType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeArrayType(__this);
}

// public Uno.Type MakeByRefType() :8105
void Type__MakeByRefType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeByRefType(__this);
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) :8113
void Type__MakeGenericType_fn(uType* __this, uArray* typeArguments, uType** __retval)
{
    *__retval = Type::MakeGenericType(__this, typeArguments);
}

// internal Type New() :7837
void Type__New1_fn(uType** __retval)
{
    *__retval = Type::New1();
}

// public static operator ==(Uno.Type a, Uno.Type b) :7841
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Equality(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) :7846
void Type__op_Inequality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Inequality(a, b);
}

// public override sealed string ToString() :7861
void Type__ToString_fn(uType* __this, uString** __retval)
{
    return *__retval = Type::FullName(__this), void();
}

uSStrong<uArray*> Type::EmptyTypes_;

// internal Type() [instance] :7837
void Type::ctor_(uType* __this)
{
}

// public Uno.Type get_BaseType() [instance] :7870
uType* Type::BaseType(uType* __this)
{
    return __this->Base;
}

// public bool get_ContainsGenericParameters() [instance] :7881
bool Type::ContainsGenericParameters(uType* __this)
{
    return !__this->IsClosed();
}

// public string get_FullName() [instance] :7892
uString* Type::FullName(uType* __this)
{
    return uString::Utf8(__this->FullName);
}

// public int get_GenericParameterPosition() [instance] :7903
int Type::GenericParameterPosition(uType* __this)
{
    return __this->Type == uTypeTypeGeneric ? (int)((uGenericType*)__this)->GenericIndex : -1;
}

// public Uno.Type GetElementType() [instance] :8022
uType* Type::GetElementType(uType* __this)
{
    return Type::IsArray(__this) ? ((uArrayType*)__this)->ElementType : Type::IsByRef(__this) ? ((uByRefType*)__this)->ValueType : NULL;
}

// public Uno.Type[] GetGenericArguments() [instance] :8032
uArray* Type::GetGenericArguments(uType* __this)
{
    uStackFrame __("Uno.Type", "GetGenericArguments()");
    uArray* array = uArray::New(::TYPES[22/*Uno.Type[]*/], __this->GenericCount);

    for (int i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Generics[i];

    return array;
}

// public Uno.Type GetGenericTypeDefinition() [instance] :8045
uType* Type::GetGenericTypeDefinition(uType* __this)
{
    return __this->Definition;
}

// public Uno.Type[] GetInterfaces() [instance] :8053
uArray* Type::GetInterfaces(uType* __this)
{
    uStackFrame __("Uno.Type", "GetInterfaces()");
    uArray* array = uArray::New(::TYPES[22/*Uno.Type[]*/], __this->InterfaceCount);

    for (int i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Interfaces[i].Type;

    return array;
}

// public bool get_HasElementType() [instance] :7914
bool Type::HasElementType(uType* __this)
{
    return __this->Type == uTypeTypeArray || __this->Type == uTypeTypeByRef;
}

// public bool get_IsArray() [instance] :7925
bool Type::IsArray(uType* __this)
{
    return __this->Type == uTypeTypeArray;
}

// public bool get_IsByRef() [instance] :7936
bool Type::IsByRef(uType* __this)
{
    return __this->Type == uTypeTypeByRef;
}

// public bool get_IsClass() [instance] :7947
bool Type::IsClass(uType* __this)
{
    return __this->Type != uTypeTypeInterface && U_IS_OBJECT(__this);
}

// public bool get_IsEnum() [instance] :7958
bool Type::IsEnum(uType* __this)
{
    return __this->Type == uTypeTypeEnum;
}

// public bool get_IsGenericParameter() [instance] :7969
bool Type::IsGenericParameter(uType* __this)
{
    return __this->Type == uTypeTypeGeneric;
}

// public bool get_IsGenericType() [instance] :7980
bool Type::IsGenericType(uType* __this)
{
    return __this->GenericCount > 0;
}

// public bool get_IsGenericTypeDefinition() [instance] :7991
bool Type::IsGenericTypeDefinition(uType* __this)
{
    return __this->GenericCount > 0 && __this->Definition == __this;
}

// public bool get_IsInterface() [instance] :8002
bool Type::IsInterface(uType* __this)
{
    return __this->Type == uTypeTypeInterface;
}

// public bool IsSubclassOf(Uno.Type c) [instance] :8089
bool Type::IsSubclassOf(uType* __this, uType* c)
{
    return __this->Is(c);
}

// public bool get_IsValueType() [instance] :8013
bool Type::IsValueType(uType* __this)
{
    return U_IS_VALUE(__this);
}

// public Uno.Type MakeArrayType() [instance] :8097
uType* Type::MakeArrayType(uType* __this)
{
    return __this->Array();
}

// public Uno.Type MakeByRefType() [instance] :8105
uType* Type::MakeByRefType(uType* __this)
{
    return __this->ByRef();
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) [instance] :8113
uType* Type::MakeGenericType(uType* __this, uArray* typeArguments)
{
    uStackFrame __("Uno.Type", "MakeGenericType(Uno.Type[])");

    if (typeArguments == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[37/*"typeArguments"*/]));

    return __this->MakeGeneric((size_t)typeArguments->Length(), (uType**)typeArguments->Ptr());
}

// public static extern Uno.Type GetType(string typeName) [static] :8067
uType* Type::GetType1(uString* typeName)
{
    Type_typeof()->Init();
    return uReflection::GetType(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) [static] :8076
uType* Type::GetType2(uString* typeName, bool throwOnError)
{
    uStackFrame __("Uno.Type", "GetType(string,bool)");
    Type_typeof()->Init();
    uType* type = uReflection::GetType(typeName);

    if (throwOnError && Type::op_Equality(type, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[36/*"typeName"*/]));

    return type;
}

// internal Type New() [static] :7837
uType* Type::New1()
{
    uType* obj1 = (uType*)uNew(Type_typeof());
    Type::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Type a, Uno.Type b) [static] :7841
bool Type::op_Equality(uType* a, uType* b)
{
    Type_typeof()->Init();
    return ::g::Uno::Object::ReferenceEquals(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) [static] :7846
bool Type::op_Inequality(uType* a, uType* b)
{
    Type_typeof()->Init();
    return !::g::Uno::Object::ReferenceEquals(a, b);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct UInt :8143
// {
static void UInt_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* UInt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UInt", options);
    type->fp_build_ = UInt_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UInt__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UInt__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UInt__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :8149
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint32_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :8155
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :8166
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct ULong :8272
// {
static void ULong_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* ULong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.ULong", options);
    type->fp_build_ = ULong_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ULong__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ULong__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))ULong__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :8278
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :8284
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public override sealed string ToString() :8295
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct UShort :8420
// {
static void UShort_build(uType* type)
{
    ::TYPES[5] = uObject_typeof();
}

uStructType* UShort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uint16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort", options);
    type->fp_build_ = UShort_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :8426
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :8432
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :8443
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct UShort2 :8541
// {
static void UShort2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort2, X), 0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UShort2__New2_fn, 0, true, type, 2, ::TYPES[23/*ushort*/], ::TYPES[23/*ushort*/]));
}

uStructType* UShort2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(UShort2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort2", options);
    type->fp_build_ = UShort2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort2__ToString_fn;
    return type;
}

// public UShort2(ushort x, ushort y) :8562
void UShort2__ctor_1_fn(UShort2* __this, uint16_t* x, uint16_t* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :8583
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :8584
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public UShort2 New(ushort x, ushort y) :8562
void UShort2__New2_fn(uint16_t* x, uint16_t* y, UShort2* __retval)
{
    *__retval = UShort2__New2(*x, *y);
}

// public override sealed string ToString() :8585
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[23/*ushort*/]), ::STRINGS[12/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[23/*ushort*/])), void();
}

// public UShort2(ushort x, ushort y) [instance] :8562
void UShort2::ctor_1(uint16_t x, uint16_t y)
{
    X = x;
    Y = y;
}

// public UShort2 New(ushort x, ushort y) [static] :8562
UShort2 UShort2__New2(uint16_t x, uint16_t y)
{
    UShort2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public intrinsic struct UShort4 :8597
// {
static void UShort4_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[5] = uObject_typeof();
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort4, X), 0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort4, Y), 0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort4, Z), 0,
        ::TYPES[23/*ushort*/], offsetof(::g::Uno::UShort4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* UShort4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(UShort4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort4", options);
    type->fp_build_ = UShort4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :8648
void UShort4__Equals_fn(UShort4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :8649
void UShort4__GetHashCode_fn(UShort4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :8650
void UShort4__ToString_fn(UShort4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[23/*ushort*/]), ::STRINGS[12/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[23/*ushort*/])), ::STRINGS[12/*", "*/]), ::g::Uno::UShort::ToString(__this->Z, ::TYPES[23/*ushort*/])), ::STRINGS[12/*", "*/]), ::g::Uno::UShort::ToString(__this->W, ::TYPES[23/*ushort*/])), void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public static class Vector :8665
// {
static void Vector_build(uType* type)
{
    type->Reflection.SetFunctions(16,
        new uFunction("Distance", NULL, (void*)Vector__Distance_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Dot", NULL, (void*)Vector__Dot_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize1_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize2_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2x2_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform1_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform4_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate1_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()));
}

uClassType* Vector_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Vector", options);
    type->fp_build_ = Vector_build;
    return type;
}

// public static float Distance(float2 p0, float2 p1) :8675
void Vector__Distance_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, float* __retval)
{
    *__retval = Vector::Distance(*p0, *p1);
}

// public static float Dot(float2 a, float2 b) :8683
void Vector__Dot_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Vector::Dot(*a, *b);
}

// public static float Length(float2 v) :8671
void Vector__Length_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::Length(*v);
}

// public static float Length(float3 v) :8672
void Vector__Length1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::Length1(*v);
}

// public static float Length(float4 v) :8673
void Vector__Length2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::Length2(*v);
}

// public static float LengthSquared(float2 v) :8667
void Vector__LengthSquared_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::LengthSquared(*v);
}

// public static float LengthSquared(float3 v) :8668
void Vector__LengthSquared1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::LengthSquared1(*v);
}

// public static float LengthSquared(float4 v) :8669
void Vector__LengthSquared2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::LengthSquared2(*v);
}

// public static float2 Normalize(float2 v) :8679
void Vector__Normalize_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Normalize(*v);
}

// public static float3 Normalize(float3 v) :8680
void Vector__Normalize1_fn(::g::Uno::Float3* v, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::Normalize1(*v);
}

// public static float4 Normalize(float4 v) :8681
void Vector__Normalize2_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Normalize2(*v);
}

// public static float2 Transform(float2 vector, float2x2 matrix) :8793
void Vector__Transform_fn(::g::Uno::Float2* vector, ::g::Uno::Float2x2* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Transform(*vector, *matrix);
}

// public static float4 Transform(float2 vector, float4x4 matrix) :8809
void Vector__Transform1_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform1(*vector, *matrix);
}

// public static float4 Transform(float3 vector, float4x4 matrix) :8818
void Vector__Transform4_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform4(*vector, *matrix);
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) :8853
void Vector__TransformCoordinate_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::TransformCoordinate(*vector, *matrix);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) :8837
void Vector__TransformCoordinate1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformCoordinate1(*vector, *matrix);
}

// public static float Distance(float2 p0, float2 p1) [static] :8675
float Vector::Distance(::g::Uno::Float2 p0, ::g::Uno::Float2 p1)
{
    return Vector::Length(::g::Uno::Float2__op_Subtraction2(p1, p0));
}

// public static float Dot(float2 a, float2 b) [static] :8683
float Vector::Dot(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

// public static float Length(float2 v) [static] :8671
float Vector::Length(::g::Uno::Float2 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared(v));
}

// public static float Length(float3 v) [static] :8672
float Vector::Length1(::g::Uno::Float3 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared1(v));
}

// public static float Length(float4 v) [static] :8673
float Vector::Length2(::g::Uno::Float4 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared2(v));
}

// public static float LengthSquared(float2 v) [static] :8667
float Vector::LengthSquared(::g::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

// public static float LengthSquared(float3 v) [static] :8668
float Vector::LengthSquared1(::g::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

// public static float LengthSquared(float4 v) [static] :8669
float Vector::LengthSquared2(::g::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

// public static float2 Normalize(float2 v) [static] :8679
::g::Uno::Float2 Vector::Normalize(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__op_Division1(v, Vector::Length(v));
}

// public static float3 Normalize(float3 v) [static] :8680
::g::Uno::Float3 Vector::Normalize1(::g::Uno::Float3 v)
{
    return ::g::Uno::Float3__op_Division1(v, Vector::Length1(v));
}

// public static float4 Normalize(float4 v) [static] :8681
::g::Uno::Float4 Vector::Normalize2(::g::Uno::Float4 v)
{
    return ::g::Uno::Float4__op_Division1(v, Vector::Length2(v));
}

// public static float2 Transform(float2 vector, float2x2 matrix) [static] :8793
::g::Uno::Float2 Vector::Transform(::g::Uno::Float2 vector, ::g::Uno::Float2x2 matrix)
{
    return ::g::Uno::Float2__New2((vector.X * matrix.M11) + (vector.Y * matrix.M21), (vector.X * matrix.M12) + (vector.Y * matrix.M22));
}

// public static float4 Transform(float2 vector, float4x4 matrix) [static] :8809
::g::Uno::Float4 Vector::Transform1(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

// public static float4 Transform(float3 vector, float4x4 matrix) [static] :8818
::g::Uno::Float4 Vector::Transform4(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) [static] :8853
::g::Uno::Float2 Vector::TransformCoordinate(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform1(vector, matrix);
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(tmp.X, tmp.Y), tmp.W);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) [static] :8837
::g::Uno::Float3 Vector::TransformCoordinate1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform4(vector, matrix);
    return ::g::Uno::Float3__op_Division1(::g::Uno::Float3__New2(tmp.X, tmp.Y, tmp.Z), tmp.W);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class WeakReference<T> :8878
// {
static void WeakReference_build(uType* type)
{
    type->SetFields(0,
        type->T(0), offsetof(::g::Uno::WeakReference, _target), uFieldFlagsWeak);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)WeakReference__New1_fn, 0, true, type, 1, type->T(0)),
        new uFunction("TryGetTarget", NULL, (void*)WeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

uType* WeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(WeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReference`1", options);
    type->fp_build_ = WeakReference_build;
    return type;
}

// public WeakReference(T target) :8884
void WeakReference__ctor__fn(WeakReference* __this, uObject* target)
{
    __this->ctor_(target);
}

// public WeakReference New(T target) :8884
void WeakReference__New1_fn(uType* __type, uObject* target, WeakReference** __retval)
{
    *__retval = WeakReference::New1(__type, target);
}

// public bool TryGetTarget(T& target) :8894
void WeakReference__TryGetTarget_fn(WeakReference* __this, uObject** target, bool* __retval)
{
    *__retval = __this->TryGetTarget(target);
}

// public WeakReference(T target) [instance] :8884
void WeakReference::ctor_(uObject* target)
{
    _target = target;
}

// public bool TryGetTarget(T& target) [instance] :8894
bool WeakReference::TryGetTarget(uObject** target)
{
    uObject* result = _target;
    *target = result;
    return result != NULL;
}

// public WeakReference New(T target) [static] :8884
WeakReference* WeakReference::New1(uType* __type, uObject* target)
{
    WeakReference* obj1 = (WeakReference*)uNew(__type);
    obj1->ctor_(target);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/source/uno/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class WeakReferenceAttribute :8912
// {
static void WeakReferenceAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WeakReferenceAttribute__New1_fn, 0, true, type, 0));
}

uType* WeakReferenceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(WeakReferenceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReferenceAttribute", options);
    type->fp_build_ = WeakReferenceAttribute_build;
    type->fp_ctor_ = (void*)WeakReferenceAttribute__New1_fn;
    return type;
}

// public generated WeakReferenceAttribute() :8912
void WeakReferenceAttribute__ctor_1_fn(WeakReferenceAttribute* __this)
{
    __this->ctor_1();
}

// public generated WeakReferenceAttribute New() :8912
void WeakReferenceAttribute__New1_fn(WeakReferenceAttribute** __retval)
{
    *__retval = WeakReferenceAttribute::New1();
}

// public generated WeakReferenceAttribute() [instance] :8912
void WeakReferenceAttribute::ctor_1()
{
    ctor_();
}

// public generated WeakReferenceAttribute New() [static] :8912
WeakReferenceAttribute* WeakReferenceAttribute::New1()
{
    WeakReferenceAttribute* obj1 = (WeakReferenceAttribute*)uNew(WeakReferenceAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}} // ::g::Uno
