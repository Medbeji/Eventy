// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Buffer.h>
#include <uBase/Bundle.h>
#include <uBase/Console.h>
#include <uBase/Memory.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.CppXliStream.h>
#include <Uno.IO.CppXliStreamHandle.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.Runtime.Implement-f781096a.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace IO{

// public sealed class BundleFile :632
// {
static void BundleFile_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Uno.IO.BundleFile.BundlePath");
    ::STRINGS[1] = uString::Const("bytes");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::BundleFile, _bytes), 0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(::g::Uno::IO::BundleFile, _Bundle), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _BundlePath), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BundleFile, _IsFile), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _SourcePath), 0,
        ::TYPES[2/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(::g::Uno::IO::BundleFile, Changed1), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Bundle", NULL, (void*)BundleFile__get_Bundle_fn, 0, false, ::g::Uno::IO::Bundle_typeof(), 0),
        new uFunction("get_BundlePath", NULL, (void*)BundleFile__get_BundlePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Changed", NULL, (void*)BundleFile__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("remove_Changed", NULL, (void*)BundleFile__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("get_IsFile", NULL, (void*)BundleFile__get_IsFile_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("OpenRead", NULL, (void*)BundleFile__OpenRead_fn, 0, false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, (void*)BundleFile__ReadAllBytes_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction("ReadAllText", NULL, (void*)BundleFile__ReadAllText_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_SourcePath", NULL, (void*)BundleFile__get_SourcePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Update", NULL, (void*)BundleFile__Update_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*byte[]*/]));
}

uType* BundleFile_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BundleFile);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.BundleFile", options);
    type->fp_build_ = BundleFile_build;
    type->fp_ToString = (void(*)(uObject*, uString**))BundleFile__ToString_fn;
    return type;
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :671
void BundleFile__ctor__fn(BundleFile* __this, ::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    __this->ctor_(bundle, sourcePath, bundlePath);
}

// public generated Uno.IO.Bundle get_Bundle() :640
void BundleFile__get_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// private generated void set_Bundle(Uno.IO.Bundle value) :640
void BundleFile__set_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// public generated string get_BundlePath() :644
void BundleFile__get_BundlePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->BundlePath();
}

// private generated void set_BundlePath(string value) :644
void BundleFile__set_BundlePath_fn(BundleFile* __this, uString* value)
{
    __this->BundlePath(value);
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) :637
void BundleFile__add_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) :637
void BundleFile__remove_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() :746
void BundleFile__CppXliOpenRead_fn(BundleFile* __this, uBase::Stream** __retval)
{
    *__retval = __this->CppXliOpenRead();
}

// public generated bool get_IsFile() :645
void BundleFile__get_IsFile_fn(BundleFile* __this, bool* __retval)
{
    *__retval = __this->IsFile();
}

// private generated void set_IsFile(bool value) :645
void BundleFile__set_IsFile_fn(BundleFile* __this, bool* value)
{
    __this->IsFile(*value);
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :671
void BundleFile__New1_fn(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath, BundleFile** __retval)
{
    *__retval = BundleFile::New1(bundle, sourcePath, bundlePath);
}

// public Uno.IO.Stream OpenRead() :679
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval)
{
    *__retval = __this->OpenRead();
}

// public byte[] ReadAllBytes() :759
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval)
{
    *__retval = __this->ReadAllBytes();
}

// public string ReadAllText() :802
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->ReadAllText();
}

// public generated string get_SourcePath() :643
void BundleFile__get_SourcePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->SourcePath();
}

// private generated void set_SourcePath(string value) :643
void BundleFile__set_SourcePath_fn(BundleFile* __this, uString* value)
{
    __this->SourcePath(value);
}

// public override sealed string ToString() :828
void BundleFile__ToString_fn(BundleFile* __this, uString** __retval)
{
    return *__retval = __this->SourcePath(), void();
}

// public extern void Update(byte[] bytes) :815
void BundleFile__Update_fn(BundleFile* __this, uArray* bytes)
{
    __this->Update(bytes);
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [instance] :671
void BundleFile::ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    Bundle(bundle);
    SourcePath(sourcePath);
    BundlePath(bundlePath);
    IsFile(::g::Uno::String::op_Inequality(bundlePath, NULL) && false);
}

// public generated Uno.IO.Bundle get_Bundle() [instance] :640
::g::Uno::IO::Bundle* BundleFile::Bundle()
{
    return _Bundle;
}

// private generated void set_Bundle(Uno.IO.Bundle value) [instance] :640
void BundleFile::Bundle(::g::Uno::IO::Bundle* value)
{
    _Bundle = value;
}

// public generated string get_BundlePath() [instance] :644
uString* BundleFile::BundlePath()
{
    return _BundlePath;
}

// private generated void set_BundlePath(string value) [instance] :644
void BundleFile::BundlePath(uString* value)
{
    _BundlePath = value;
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :637
void BundleFile::add_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "add_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[2/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :637
void BundleFile::remove_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "remove_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[2/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() [instance] :746
uBase::Stream* BundleFile::CppXliOpenRead()
{
    try
    {
        uBase::String filename = uStringToXliString(this->_BundlePath);
        return uBase::Bundle->OpenFile(filename);
    }
    catch (const uBase::Exception& e)
    {
        U_THROW(::g::Uno::Exception::New1());
    }
}

// public generated bool get_IsFile() [instance] :645
bool BundleFile::IsFile()
{
    return _IsFile;
}

// private generated void set_IsFile(bool value) [instance] :645
void BundleFile::IsFile(bool value)
{
    _IsFile = value;
}

// public Uno.IO.Stream OpenRead() [instance] :679
::g::Uno::IO::Stream* BundleFile::OpenRead()
{
    uStackFrame __("Uno.IO.BundleFile", "OpenRead()");

    if (_bytes != NULL)
        return ::g::Uno::IO::MemoryStream::New3(_bytes, false);

    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"Uno.IO.Bund...*/]));

    return ::g::Uno::IO::CppXliStream::New1(CppXliOpenRead());
}

// public byte[] ReadAllBytes() [instance] :759
uArray* BundleFile::ReadAllBytes()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllBytes()");

    if (_bytes != NULL)
    {
        uArray* result = uArray::New(::TYPES[0/*byte[]*/], uPtr(_bytes)->Length());
        ::g::Uno::Array::Copy1(::TYPES[1/*Uno.Array.Copy<byte>*/], _bytes, result, result->Length());
        return result;
    }

    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"Uno.IO.Bund...*/]));

    try
    {
        uBase::String filename = uStringToXliString(this->_BundlePath);
        uBase::Auto<uBase::DataAccessor> buffer = uBase::Bundle->OpenFileAsBuffer(filename);
        return uArray::New(::g::Uno::Byte_typeof()->Array(), buffer->GetSizeInBytes(), buffer->GetPtr());
    }
    catch (const uBase::Exception& e)
    {
        U_THROW(::g::Uno::Exception::New1());
    }
}

// public string ReadAllText() [instance] :802
uString* BundleFile::ReadAllText()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllText()");

    if (_bytes != NULL)
        return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(_bytes);

    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadAllBytes());
}

// public generated string get_SourcePath() [instance] :643
uString* BundleFile::SourcePath()
{
    return _SourcePath;
}

// private generated void set_SourcePath(string value) [instance] :643
void BundleFile::SourcePath(uString* value)
{
    _SourcePath = value;
}

// public extern void Update(byte[] bytes) [instance] :815
void BundleFile::Update(uArray* bytes)
{
    uStackFrame __("Uno.IO.BundleFile", "Update(byte[])");

    if (bytes == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"bytes"*/]));

    BundlePath(NULL);
    IsFile(false);
    _bytes = bytes;

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid(this);
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [static] :671
BundleFile* BundleFile::New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    BundleFile* obj1 = (BundleFile*)uNew(BundleFile_typeof());
    obj1->ctor_(bundle, sourcePath, bundlePath);
    return obj1;
}
// }

}}} // ::g::Uno::IO
