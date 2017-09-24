// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace System{
namespace IO{

// public sealed class BinaryReader :661
// {
struct BinaryReader_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryReader_type* BinaryReader_typeof();
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream);
void BinaryReader__Dispose_fn(BinaryReader* __this);
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval);
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* length, uArray** __retval);
void BinaryReader__ReadChar_fn(BinaryReader* __this, uChar* __retval);
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval);
void BinaryReader__ReadInt32_fn(BinaryReader* __this, int* __retval);
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval);

struct BinaryReader : uObject
{
    uStrong< ::g::Uno::IO::BinaryReader*> _reader;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    bool ReadBoolean();
    uArray* ReadBytes(int length);
    uChar ReadChar();
    double ReadDouble();
    int ReadInt32();
    uString* ReadString();
    static BinaryReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::System::IO
