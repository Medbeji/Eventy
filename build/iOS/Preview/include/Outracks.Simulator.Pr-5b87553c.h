// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Error;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct ExceptionInfo;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Error :551
// {
struct Error_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

Error_type* Error_typeof();
void Error__ctor__fn(Error* __this);
void Error__ctor_1_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
void Error__get_Exception_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo** __retval);
void Error__set_Exception_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* value);
void Error__New1_fn(Error** __retval);
void Error__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, Error** __retval);
void Error__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Error** __retval);
void Error__ToString_fn(Error* __this, uString** __retval);
void Error__get_Type_fn(Error* __this, uString** __retval);
void Error__WriteDataTo_fn(Error* __this, ::g::System::IO::BinaryWriter* writer);

struct Error : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return Error_typeof()->Init(), MessageType_; }
    uStrong< ::g::Outracks::Simulator::Protocol::ExceptionInfo*> _Exception;

    void ctor_();
    void ctor_1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    ::g::Outracks::Simulator::Protocol::ExceptionInfo* Exception();
    void Exception(::g::Outracks::Simulator::Protocol::ExceptionInfo* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static Error* New1();
    static Error* New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    static Error* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
