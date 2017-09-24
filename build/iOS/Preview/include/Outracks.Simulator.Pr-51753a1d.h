// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct DebugLog;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class DebugLog :323
// {
struct DebugLog_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

DebugLog_type* DebugLog_typeof();
void DebugLog__ctor__fn(DebugLog* __this);
void DebugLog__ctor_1_fn(DebugLog* __this, uString* deviceId, uString* deviceName, uString* message);
void DebugLog__get_DeviceId_fn(DebugLog* __this, uString** __retval);
void DebugLog__set_DeviceId_fn(DebugLog* __this, uString* value);
void DebugLog__get_DeviceName_fn(DebugLog* __this, uString** __retval);
void DebugLog__set_DeviceName_fn(DebugLog* __this, uString* value);
void DebugLog__get_Message_fn(DebugLog* __this, uString** __retval);
void DebugLog__set_Message_fn(DebugLog* __this, uString* value);
void DebugLog__New1_fn(DebugLog** __retval);
void DebugLog__New2_fn(uString* deviceId, uString* deviceName, uString* message, DebugLog** __retval);
void DebugLog__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, DebugLog** __retval);
void DebugLog__get_Type_fn(DebugLog* __this, uString** __retval);
void DebugLog__WriteDataTo_fn(DebugLog* __this, ::g::System::IO::BinaryWriter* writer);

struct DebugLog : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return DebugLog_typeof()->Init(), MessageType_; }
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    uStrong<uString*> _Message;

    void ctor_();
    void ctor_1(uString* deviceId, uString* deviceName, uString* message);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    uString* Message();
    void Message(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static DebugLog* New1();
    static DebugLog* New2(uString* deviceId, uString* deviceName, uString* message);
    static DebugLog* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
