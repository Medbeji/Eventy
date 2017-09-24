// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UnhandledException;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class UnhandledException :771
// {
struct UnhandledException_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

UnhandledException_type* UnhandledException_typeof();
void UnhandledException__ctor__fn(UnhandledException* __this);
void UnhandledException__ctor_1_fn(UnhandledException* __this, uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type);
void UnhandledException__get_DeviceId_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__set_DeviceId_fn(UnhandledException* __this, uString* value);
void UnhandledException__get_DeviceName_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__set_DeviceName_fn(UnhandledException* __this, uString* value);
void UnhandledException__get_ExceptionType_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__set_ExceptionType_fn(UnhandledException* __this, uString* value);
void UnhandledException__get_Message_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__set_Message_fn(UnhandledException* __this, uString* value);
void UnhandledException__New1_fn(UnhandledException** __retval);
void UnhandledException__New2_fn(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type, UnhandledException** __retval);
void UnhandledException__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, UnhandledException** __retval);
void UnhandledException__get_StackTrace_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__set_StackTrace_fn(UnhandledException* __this, uString* value);
void UnhandledException__get_Type_fn(UnhandledException* __this, uString** __retval);
void UnhandledException__WriteDataTo_fn(UnhandledException* __this, ::g::System::IO::BinaryWriter* writer);

struct UnhandledException : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return UnhandledException_typeof()->Init(), MessageType_; }
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    uStrong<uString*> _ExceptionType;
    uStrong<uString*> _Message;
    uStrong<uString*> _StackTrace;

    void ctor_();
    void ctor_1(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    uString* ExceptionType();
    void ExceptionType(uString* value);
    uString* Message();
    void Message(uString* value);
    uString* StackTrace();
    void StackTrace(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static UnhandledException* New1();
    static UnhandledException* New2(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type);
    static UnhandledException* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
