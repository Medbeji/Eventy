// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.BinaryMessag-ba12b60e.h>
#include <Outracks.BinaryMessag-c6e276d5.h>
#include <Outracks.BinaryMessage.h>
#include <Outracks.IBinaryMessage.h>
#include <Outracks.NullToNone.h>
#include <Outracks.Optional.h>
#include <Outracks.Optional-1.h>
#include <Outracks.UnoBinaryMessage.h>
#include <System.IO.BinaryReader.h>
#include <System.IO.BinaryWriter.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[9];

namespace g{
namespace Outracks{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public static class BinaryMessage :758
// {
static void BinaryMessage_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::System::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[1] = ::g::Outracks::IBinaryMessage_typeof();
    ::TYPES[2] = ::g::Outracks::UnoBinaryMessage_typeof()->MakeMethod(0/*SubArray<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Compose", NULL, (void*)BinaryMessage__Compose_fn, 0, true, ::TYPES[1/*Outracks.IBinaryMessage*/], 2, ::g::Uno::String_typeof(), ::TYPES[0/*Uno.Action<System.IO.BinaryWriter>*/]),
        new uFunction("ReadFrom", NULL, (void*)BinaryMessage__ReadFrom_fn, 0, true, ::TYPES[1/*Outracks.IBinaryMessage*/], 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("WriteTo", NULL, (void*)BinaryMessage__WriteTo_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Outracks.IBinaryMessage*/], ::g::System::IO::BinaryWriter_typeof()));
}

uClassType* BinaryMessage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.BinaryMessage", options);
    type->fp_build_ = BinaryMessage_build;
    return type;
}

// public static extern Outracks.IBinaryMessage Compose(string type, Uno.Action<System.IO.BinaryWriter> write) :792
void BinaryMessage__Compose_fn(uString* type, uDelegate* write, uObject** __retval)
{
    *__retval = BinaryMessage::Compose(type, write);
}

// public static extern Outracks.IBinaryMessage ReadFrom(System.IO.BinaryReader reader) :760
void BinaryMessage__ReadFrom_fn(::g::System::IO::BinaryReader* reader, uObject** __retval)
{
    *__retval = BinaryMessage::ReadFrom(reader);
}

// public static extern void WriteTo(Outracks.IBinaryMessage message, System.IO.BinaryWriter writer) :778
void BinaryMessage__WriteTo_fn(uObject* message, ::g::System::IO::BinaryWriter* writer)
{
    BinaryMessage::WriteTo(message, writer);
}

// public static extern Outracks.IBinaryMessage Compose(string type, Uno.Action<System.IO.BinaryWriter> write) [static] :792
uObject* BinaryMessage::Compose(uString* type, uDelegate* write)
{
    uStackFrame __("Outracks.BinaryMessage", "Compose(string,Uno.Action<System.IO.BinaryWriter>)");
    BinaryMessage__ComposedMessage* collection2;
    return (uObject*)(collection2 = BinaryMessage__ComposedMessage::New1(), uPtr(collection2)->Type(type), type, uPtr(collection2)->Write(write), write, collection2);
}

// public static extern Outracks.IBinaryMessage ReadFrom(System.IO.BinaryReader reader) [static] :760
uObject* BinaryMessage::ReadFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.BinaryMessage", "ReadFrom(System.IO.BinaryReader)");
    BinaryMessage__WriteClosure* collection1;
    uString* type = uPtr(reader)->ReadString();
    int length = reader->ReadInt32();
    uArray* data = reader->ReadBytes(length);
    return BinaryMessage::Compose(type, uDelegate::New(::TYPES[0/*Uno.Action<System.IO.BinaryWriter>*/], (void*)BinaryMessage__WriteClosure__Execute_fn, uPtr((collection1 = BinaryMessage__WriteClosure::New1(), uPtr(collection1)->Data = data, collection1))));
}

// public static extern void WriteTo(Outracks.IBinaryMessage message, System.IO.BinaryWriter writer) [static] :778
void BinaryMessage::WriteTo(uObject* message, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.BinaryMessage", "WriteTo(Outracks.IBinaryMessage,System.IO.BinaryWriter)");
    ::g::Uno::IO::MemoryStream* buffer = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)buffer), ::TYPES[3/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::System::IO::BinaryWriter* bufferWriter = ::g::System::IO::BinaryWriter::New1(buffer);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)bufferWriter), ::TYPES[3/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::Outracks::IBinaryMessage::WriteDataTo(uInterface(uPtr(message), ::TYPES[1/*Outracks.IBinaryMessage*/]), bufferWriter);
            int length = (int)uPtr(buffer)->Position();
            uPtr(writer)->Write6(::g::Outracks::IBinaryMessage::Type(uInterface(message, ::TYPES[1/*Outracks.IBinaryMessage*/])));
            writer->Write5(length);
            writer->Write1((uArray*)::g::Outracks::UnoBinaryMessage::SubArray(::TYPES[2/*Outracks.UnoBinaryMessage.SubArray<byte>*/], buffer->GetBuffer(), 0, length));
        }
    }
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// private sealed class BinaryMessage.ComposedMessage :801
// {
static void BinaryMessage__ComposedMessage_build(uType* type)
{
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(BinaryMessage__ComposedMessage_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::BinaryMessage__ComposedMessage, _Type), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::System::IO::BinaryWriter_typeof(), NULL), offsetof(::g::Outracks::BinaryMessage__ComposedMessage, _Write), 0);
}

BinaryMessage__ComposedMessage_type* BinaryMessage__ComposedMessage_typeof()
{
    static uSStrong<BinaryMessage__ComposedMessage_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryMessage__ComposedMessage);
    options.TypeSize = sizeof(BinaryMessage__ComposedMessage_type);
    type = (BinaryMessage__ComposedMessage_type*)uClassType::New("Outracks.BinaryMessage.ComposedMessage", options);
    type->fp_build_ = BinaryMessage__ComposedMessage_build;
    type->fp_ctor_ = (void*)BinaryMessage__ComposedMessage__New1_fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))BinaryMessage__ComposedMessage__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))BinaryMessage__ComposedMessage__get_Type_fn;
    return type;
}

// public generated ComposedMessage() :801
void BinaryMessage__ComposedMessage__ctor__fn(BinaryMessage__ComposedMessage* __this)
{
    __this->ctor_();
}

// public generated ComposedMessage New() :801
void BinaryMessage__ComposedMessage__New1_fn(BinaryMessage__ComposedMessage** __retval)
{
    *__retval = BinaryMessage__ComposedMessage::New1();
}

// public generated string get_Type() :803
void BinaryMessage__ComposedMessage__get_Type_fn(BinaryMessage__ComposedMessage* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(string value) :803
void BinaryMessage__ComposedMessage__set_Type_fn(BinaryMessage__ComposedMessage* __this, uString* value)
{
    __this->Type(value);
}

// public generated Uno.Action<System.IO.BinaryWriter> get_Write() :804
void BinaryMessage__ComposedMessage__get_Write_fn(BinaryMessage__ComposedMessage* __this, uDelegate** __retval)
{
    *__retval = __this->Write();
}

// public generated void set_Write(Uno.Action<System.IO.BinaryWriter> value) :804
void BinaryMessage__ComposedMessage__set_Write_fn(BinaryMessage__ComposedMessage* __this, uDelegate* value)
{
    __this->Write(value);
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :806
void BinaryMessage__ComposedMessage__WriteDataTo_fn(BinaryMessage__ComposedMessage* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

// public generated ComposedMessage() [instance] :801
void BinaryMessage__ComposedMessage::ctor_()
{
}

// public generated string get_Type() [instance] :803
uString* BinaryMessage__ComposedMessage::Type()
{
    return _Type;
}

// public generated void set_Type(string value) [instance] :803
void BinaryMessage__ComposedMessage::Type(uString* value)
{
    _Type = value;
}

// public generated Uno.Action<System.IO.BinaryWriter> get_Write() [instance] :804
uDelegate* BinaryMessage__ComposedMessage::Write()
{
    return _Write;
}

// public generated void set_Write(Uno.Action<System.IO.BinaryWriter> value) [instance] :804
void BinaryMessage__ComposedMessage::Write(uDelegate* value)
{
    _Write = value;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :806
void BinaryMessage__ComposedMessage::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.BinaryMessage.ComposedMessage", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(Write())->InvokeVoid(writer);
}

// public generated ComposedMessage New() [static] :801
BinaryMessage__ComposedMessage* BinaryMessage__ComposedMessage::New1()
{
    BinaryMessage__ComposedMessage* obj1 = (BinaryMessage__ComposedMessage*)uNew(BinaryMessage__ComposedMessage_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public abstract interface IBinaryMessage :722
// {
uInterfaceType* IBinaryMessage_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.IBinaryMessage", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Type", NULL, NULL, offsetof(IBinaryMessage, fp_get_Type), false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, NULL, offsetof(IBinaryMessage, fp_WriteDataTo), false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public static class NullToNone :313
// {
static void NullToNone_build(uType* type)
{
    ::TYPES[4] = ::g::Outracks::Optional1_typeof();
    ::TYPES[5] = ::g::Outracks::Optional_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[5/*Outracks.Optional*/]->MakeMethod(3/*Some<T>*/, type->MethodTypes[0]->U(0), NULL),
        ::TYPES[5/*Outracks.Optional*/]->MakeMethod(0/*None<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->Reflection.SetFunctions(1,
        new uFunction("ToOptional`1", type->MethodTypes[0], (void*)NullToNone__ToOptional_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), 1, type->MethodTypes[0]->U(0)));
}

uClassType* NullToNone_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.NullToNone", options);
    type->MethodTypes[0] = type->NewMethodType(1, 3);
    type->fp_build_ = NullToNone_build;
    return type;
}

// public static Outracks.Optional<T> ToOptional<T>(T value) :318
void NullToNone__ToOptional_fn(uType* __type, uObject* value, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->Precalced(1/*Outracks.Optional.Some<T>*/),
        __type->Precalced(2/*Outracks.Optional.None<T>*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], (value != NULL) ? (::g::Outracks::Optional__Some_fn(__types[1], value, &ret1), (void*)ret1) : (::g::Outracks::Optional__None_fn(__types[2], &ret2), (void*)ret2)), void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public sealed class Optional :327
// {
static void Optional_build(uType* type)
{
    ::TYPES[4] = ::g::Outracks::Optional1_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        type->MakeMethod(3/*Some<T>*/, type->MethodTypes[1]->U(0), NULL),
        type->MakeMethod(0/*None<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(3/*Some<T>*/, type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(0/*None<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->Reflection.SetFunctions(8,
        new uFunction(".ctor", NULL, (void*)Optional__New1_fn, 0, true, type, 0),
        new uFunction("None`1", type->MethodTypes[0], (void*)Optional__None_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), 0),
        new uFunction("Read`1", type->MethodTypes[1], (void*)Optional__Read_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL), 2, ::g::System::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type->MethodTypes[1]->U(0), NULL)),
        new uFunction("Read`1", type->MethodTypes[2], (void*)Optional__Read1_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL), 2, ::g::System::IO::BinaryReader_typeof(), ::g::Uno::Func_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL)),
        new uFunction("Some`1", type->MethodTypes[3], (void*)Optional__Some_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL), 1, type->MethodTypes[3]->U(0)),
        new uFunction("Write`1", type->MethodTypes[4], (void*)Optional__Write_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL), ::g::Uno::Action2_typeof()->MakeType(::g::System::IO::BinaryWriter_typeof(), type->MethodTypes[4]->U(0), NULL)),
        new uFunction("Write`1", type->MethodTypes[5], (void*)Optional__Write1_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL), ::g::Uno::Action2_typeof()->MakeType(type->MethodTypes[5]->U(0), ::g::System::IO::BinaryWriter_typeof(), NULL)),
        new uFunction("Write`1", type->MethodTypes[6], (void*)Optional__Write2_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL), ::g::Uno::Action1_typeof()->MakeType(type->MethodTypes[6]->U(0), NULL)));
}

uType* Optional_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 7;
    options.ObjectSize = sizeof(Optional);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Optional", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 3);
    type->MethodTypes[2] = type->NewMethodType(1, 3);
    type->MethodTypes[3] = type->NewMethodType(1, 1);
    type->MethodTypes[4] = type->NewMethodType(1, 1);
    type->MethodTypes[5] = type->NewMethodType(1, 1);
    type->MethodTypes[6] = type->NewMethodType(1, 1);
    type->fp_build_ = Optional_build;
    type->fp_ctor_ = (void*)Optional__New1_fn;
    return type;
}

// public generated Optional() :327
void Optional__ctor__fn(Optional* __this)
{
    __this->ctor_();
}

// public generated Optional New() :327
void Optional__New1_fn(Optional** __retval)
{
    *__retval = Optional::New1();
}

// public static Outracks.Optional<T> None<T>() :335
void Optional__None_fn(uType* __type, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Outracks::Optional1__New1_fn(__types[0], uCRef(false), uT(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize)), &ret2), ret2)), void();
}

// public static Outracks.Optional<T> Read<T>(System.IO.BinaryReader reader, Uno.Func<System.IO.BinaryReader, T> readSome) :347
void Optional__Read_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
        __type->Precalced(1/*Outracks.Optional.Some<T>*/),
        __type->Precalced(2/*Outracks.Optional.None<T>*/),
    };
    uStackFrame __("Outracks.Optional", "Read`1(System.IO.BinaryReader,Uno.Func<System.IO.BinaryReader, T>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], uPtr(reader)->ReadBoolean() ? (Optional__Some_fn(__types[2], (uPtr(readSome)->Invoke(&ret4, 1, reader), ret4), &ret3), (void*)ret3) : (Optional__None_fn(__types[3], &ret5), (void*)ret5)), void();
}

// public static Outracks.Optional<T> Read<T>(System.IO.BinaryReader reader, Uno.Func<T> readSome) :340
void Optional__Read1_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
        __type->Precalced(1/*Outracks.Optional.Some<T>*/),
        __type->Precalced(2/*Outracks.Optional.None<T>*/),
    };
    uStackFrame __("Outracks.Optional", "Read`1(System.IO.BinaryReader,Uno.Func<T>)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], uPtr(reader)->ReadBoolean() ? (Optional__Some_fn(__types[2], (uPtr(readSome)->Invoke(&ret7), ret7), &ret6), (void*)ret6) : (Optional__None_fn(__types[3], &ret8), (void*)ret8)), void();
}

// public static Outracks.Optional<T> Some<T>(T value) :330
void Optional__Some_fn(uType* __type, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
    };
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Outracks::Optional1__New1_fn(__types[0], uCRef(true), value, &ret9), ret9)), void();
}

// public static void Write<T>(System.IO.BinaryWriter writer, Outracks.Optional<T> optional, Uno.Action<System.IO.BinaryWriter, T> writeSome) :354
void Optional__Write_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
    };
    uStackFrame __("Outracks.Optional", "Write`1(System.IO.BinaryWriter,Outracks.Optional<T>,Uno.Action<System.IO.BinaryWriter, T>)");
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret10;
    optional_ = optional;

    if ((::g::Outracks::Optional1__get_HasValue_fn(&optional_, __types[0], &ret10), ret10))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->Invoke(2, writer, (::g::Outracks::Optional1__get_Value_fn(&optional_, __types[0], &ret11), (void*)ret11));
    }
    else
        uPtr(writer)->Write(false);
}

// public static void Write<T>(System.IO.BinaryWriter writer, Outracks.Optional<T> optional, Uno.Action<T, System.IO.BinaryWriter> writeSome) :367
void Optional__Write1_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
    };
    uStackFrame __("Outracks.Optional", "Write`1(System.IO.BinaryWriter,Outracks.Optional<T>,Uno.Action<T, System.IO.BinaryWriter>)");
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret12;
    optional_ = optional;

    if ((::g::Outracks::Optional1__get_HasValue_fn(&optional_, __types[0], &ret12), ret12))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->Invoke(2, (::g::Outracks::Optional1__get_Value_fn(&optional_, __types[0], &ret13), (void*)ret13), writer);
    }
    else
        uPtr(writer)->Write(false);
}

// public static void Write<T>(System.IO.BinaryWriter writer, Outracks.Optional<T> optional, Uno.Action<T> writeSome) :380
void Optional__Write2_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
    };
    uStackFrame __("Outracks.Optional", "Write`1(System.IO.BinaryWriter,Outracks.Optional<T>,Uno.Action<T>)");
    uT optional_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret14;
    optional_ = optional;

    if ((::g::Outracks::Optional1__get_HasValue_fn(&optional_, __types[0], &ret14), ret14))
    {
        uPtr(writer)->Write(true);
        uPtr(writeSome)->InvokeVoid((::g::Outracks::Optional1__get_Value_fn(&optional_, __types[0], &ret15), ret15));
    }
    else
        uPtr(writer)->Write(false);
}

// public generated Optional() [instance] :327
void Optional::ctor_()
{
}

// public generated Optional New() [static] :327
Optional* Optional::New1()
{
    Optional* obj1 = (Optional*)uNew(Optional_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public struct Optional<T> :395
// {
static void Optional1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Some {");
    ::STRINGS[1] = uString::Const("}");
    ::STRINGS[2] = uString::Const("None");
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetFields(0,
        ::TYPES[6/*bool*/], (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("Equals", type, (void*)Optional1__Equals2_fn, 0, false, ::TYPES[6/*bool*/], 1, type),
        new uFunction("get_HasValue", type, (void*)Optional1__get_HasValue_fn, 0, false, ::TYPES[6/*bool*/], 0),
        new uFunction("get_Value", type, (void*)Optional1__get_Value_fn, 0, false, type->T(0), 0));
}

uStructType* Optional1_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Outracks.Optional`1", options);
    type->fp_build_ = Optional1_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Optional1__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Optional1__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Optional1__ToString_fn;
    return type;
}

// internal Optional(bool hasValue, T value) :414
void Optional1__ctor__fn(uTRef __this, uType* __type, bool* hasValue, void* value)
{
    bool hasValue_ = *hasValue;
    __type->Field(__this, 0/*_hasValue*/).Value<bool>() = hasValue_;
    __type->Field(__this, 1/*_value*/) = value;
}

// public override sealed bool Equals(object obj) :432
void Optional1__Equals_fn(uTRef __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Optional`1", "Equals(object)");
    bool ret2;

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    return *__retval = uIs(obj, __type) && (Optional1__Equals2_fn(__this, __type, uUnboxAny(__type, obj), &ret2), ret2), void();
}

// public bool Equals(Outracks.Optional<T> other) :438
void Optional1__Equals2_fn(uTRef __this, uType* __type, void* other, bool* __retval)
{
    uStackFrame __("Outracks.Optional`1", "Equals(Outracks.Optional<T>)");
    uT other_(__type, U_ALLOCA(__type->ValueSize));
    bool ind1;
    other_ = other;
    return *__retval = ::g::Uno::Bool::Equals((ind1 = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), ind1), ::TYPES[6/*bool*/], uBox(::TYPES[6/*bool*/], other_[0/*_hasValue*/].Value<bool>())) && ::g::Uno::Object::Equals(uBoxPtr(__type->T(0), uPtr(__type->Field(__this, 1/*_value*/)), U_ALLOCA(__type->T(0)->ObjectSize)), uBoxPtr(__type->T(0), other_[1/*_value*/])), void();
}

// public override sealed int GetHashCode() :443
void Optional1__GetHashCode_fn(uTRef __this, uType* __type, int* __retval)
{
    uStackFrame __("Outracks.Optional`1", "GetHashCode()");
    bool ind2;
    return *__retval = (::g::Uno::Bool::GetHashCode((ind2 = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), ind2), ::TYPES[6/*bool*/]) * 397) ^ ::g::Uno::Object::GetHashCode(uBoxPtr(__type->T(0), uPtr(__type->Field(__this, 1/*_value*/)), U_ALLOCA(__type->T(0)->ObjectSize))), void();
}

// public bool get_HasValue() :402
void Optional1__get_HasValue_fn(uTRef __this, uType* __type, bool* __retval)
{
    return *__retval = __type->Field(__this, 0/*_hasValue*/).Value<bool>(), void();
}

// internal Optional New(bool hasValue, T value) :414
void Optional1__New1_fn(uType* __type, bool* hasValue, void* value, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    bool hasValue_ = *hasValue;
    Optional1__ctor__fn(&obj1, __type, uCRef(hasValue_), value);
    return __retval.Store(obj1), void();
}

// public static implicit operator Outracks.Optional<T>(T value) :420
void Optional1__op_Implicit_fn(uType* __type, void* value, uTRef __retval)
{
    uT ret6(__type, U_ALLOCA(__type->ValueSize));
    return __retval.Store((Optional1__New1_fn(__type, uCRef(true), value, &ret6), ret6)), void();
}

// public override sealed string ToString() :506
void Optional1__ToString_fn(uTRef __this, uType* __type, uString** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Outracks.Optional`1", "ToString()");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    return *__retval = (Optional1__get_HasValue_fn(__this, __type, &ret8), ret8) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Some {"*/], uBoxPtr(__types[0], (Optional1__get_Value_fn(__this, __type, &ret9), ret9))), ::STRINGS[1/*"}"*/]) : ::STRINGS[2/*"None"*/], void();
}

// public T get_Value() :407
void Optional1__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    uStackFrame __("Outracks.Optional`1", "get_Value()");

    if (!__type->Field(__this, 0/*_hasValue*/).Value<bool>())
        U_THROW(::g::Uno::InvalidOperationException::New4());

    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// public static class UnoBinaryMessage :729
// {
static void UnoBinaryMessage_build(uType* type)
{
    ::STRINGS[3] = uString::Const("It has happened.");
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Array_typeof();
    ::TYPES[4] = ::g::Outracks::Optional1_typeof();
    ::TYPES[1] = ::g::Outracks::IBinaryMessage_typeof();
    ::TYPES[5] = ::g::Outracks::Optional_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->MethodTypes[0]->SetPrecalc(
        type->MethodTypes[0]->U(0)->Array(),
        ::TYPES[8/*Uno.Array*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[5/*Outracks.Optional*/]->MakeMethod(0/*None<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->Reflection.SetFunctions(2,
        new uFunction("SubArray`1", type->MethodTypes[0], (void*)UnoBinaryMessage__SubArray_fn, 0, true, type->MethodTypes[0]->U(0)->Array(), 3, type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("TryParse`1", type->MethodTypes[1], (void*)UnoBinaryMessage__TryParse_fn, 0, true, ::TYPES[4/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL), 3, ::TYPES[1/*Outracks.IBinaryMessage*/], ::g::Uno::String_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type->MethodTypes[1]->U(0), NULL)));
}

uClassType* UnoBinaryMessage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.UnoBinaryMessage", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2);
    type->MethodTypes[1] = type->NewMethodType(1, 2);
    type->fp_build_ = UnoBinaryMessage_build;
    return type;
}

// public static T[] SubArray<T>(T[] data, int index, int length) :749
void UnoBinaryMessage__SubArray_fn(uType* __type, uArray* data, int* index, int* length, uArray** __retval)
{
    *__retval = UnoBinaryMessage::SubArray(__type, data, *index, *length);
}

// public static Outracks.Optional<T> TryParse<T>(Outracks.IBinaryMessage message, string type, Uno.Func<System.IO.BinaryReader, T> action) :731
void UnoBinaryMessage__TryParse_fn(uType* __type, uObject* message, uString* type, uDelegate* action, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->U(0),
        __type->Precalced(1/*Outracks.Optional.None<T>*/),
    };
    uStackFrame __("Outracks.UnoBinaryMessage", "TryParse`1(Outracks.IBinaryMessage,string,Uno.Func<System.IO.BinaryReader, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if (::g::Uno::String::op_Inequality(type, ::g::Outracks::IBinaryMessage::Type(uInterface(uPtr(message), ::TYPES[1/*Outracks.IBinaryMessage*/]))))
        return __retval.Store((::g::Outracks::Optional__None_fn(__types[2], &ret1), ret1)), void();

    ::g::Uno::IO::MemoryStream* buffer = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)buffer), ::TYPES[3/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::System::IO::BinaryWriter* bufferWriter = ::g::System::IO::BinaryWriter::New1(buffer);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)bufferWriter), ::TYPES[3/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::g::System::IO::BinaryReader* bufferReader = ::g::System::IO::BinaryReader::New1(buffer);

            {
                const auto __finally_fun = [&]()
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)bufferReader), ::TYPES[3/*Uno.IDisposable*/]));
                };

                const uFinally<decltype(__finally_fun)> __f(__finally_fun);
                ::g::Outracks::IBinaryMessage::WriteDataTo(uInterface(uPtr(message), ::TYPES[1/*Outracks.IBinaryMessage*/]), bufferWriter);
                uPtr(buffer)->Seek(0LL, 0);
                return __retval.Store((::g::Outracks::Optional1__op_Implicit_fn(__types[0], (uPtr(action)->Invoke(&ret3, 1, bufferReader), ret3), &ret2), ret2)), void();
            }
        }
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"It has happ...*/]));
}

// public static T[] SubArray<T>(T[] data, int index, int length) [static] :749
uArray* UnoBinaryMessage::SubArray(uType* __type, uArray* data, int index, int length)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
        __type->Precalced(1/*Uno.Array.Copy<T>*/),
    };
    uStackFrame __("Outracks.UnoBinaryMessage", "SubArray`1(T[],int,int)");
    uArray* result = uArray::New(__types[0], length);
    ::g::Uno::Array::Copy(__types[1], data, index, result, 0, length);
    return result;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno
// ------------------------------------------------------------------------------

// private sealed class BinaryMessage.WriteClosure :768
// {
static void BinaryMessage__WriteClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::BinaryMessage__WriteClosure, Data), 0);
}

uType* BinaryMessage__WriteClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BinaryMessage__WriteClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.BinaryMessage.WriteClosure", options);
    type->fp_build_ = BinaryMessage__WriteClosure_build;
    type->fp_ctor_ = (void*)BinaryMessage__WriteClosure__New1_fn;
    return type;
}

// public generated WriteClosure() :768
void BinaryMessage__WriteClosure__ctor__fn(BinaryMessage__WriteClosure* __this)
{
    __this->ctor_();
}

// public void Execute(System.IO.BinaryWriter writer) :772
void BinaryMessage__WriteClosure__Execute_fn(BinaryMessage__WriteClosure* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->Execute(writer);
}

// public generated WriteClosure New() :768
void BinaryMessage__WriteClosure__New1_fn(BinaryMessage__WriteClosure** __retval)
{
    *__retval = BinaryMessage__WriteClosure::New1();
}

// public generated WriteClosure() [instance] :768
void BinaryMessage__WriteClosure::ctor_()
{
}

// public void Execute(System.IO.BinaryWriter writer) [instance] :772
void BinaryMessage__WriteClosure::Execute(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.BinaryMessage.WriteClosure", "Execute(System.IO.BinaryWriter)");
    uPtr(writer)->Write1(Data);
}

// public generated WriteClosure New() [static] :768
BinaryMessage__WriteClosure* BinaryMessage__WriteClosure::New1()
{
    BinaryMessage__WriteClosure* obj1 = (BinaryMessage__WriteClosure*)uNew(BinaryMessage__WriteClosure_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}} // ::g::Outracks
