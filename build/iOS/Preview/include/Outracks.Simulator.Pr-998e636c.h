// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct RegisterName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class RegisterName :729
// {
struct RegisterName_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

RegisterName_type* RegisterName_typeof();
void RegisterName__ctor__fn(RegisterName* __this);
void RegisterName__ctor_1_fn(RegisterName* __this, uString* deviceId, uString* deviceName);
void RegisterName__get_DeviceId_fn(RegisterName* __this, uString** __retval);
void RegisterName__set_DeviceId_fn(RegisterName* __this, uString* value);
void RegisterName__get_DeviceName_fn(RegisterName* __this, uString** __retval);
void RegisterName__set_DeviceName_fn(RegisterName* __this, uString* value);
void RegisterName__New1_fn(RegisterName** __retval);
void RegisterName__New2_fn(uString* deviceId, uString* deviceName, RegisterName** __retval);
void RegisterName__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, RegisterName** __retval);
void RegisterName__get_Type_fn(RegisterName* __this, uString** __retval);
void RegisterName__WriteDataTo_fn(RegisterName* __this, ::g::System::IO::BinaryWriter* writer);

struct RegisterName : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return RegisterName_typeof()->Init(), MessageType_; }
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;

    void ctor_();
    void ctor_1(uString* deviceId, uString* deviceName);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static RegisterName* New1();
    static RegisterName* New2(uString* deviceId, uString* deviceName);
    static RegisterName* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
