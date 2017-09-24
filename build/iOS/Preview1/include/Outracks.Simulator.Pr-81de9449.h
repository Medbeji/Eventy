// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct DismissDiagnostic;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class DismissDiagnostic :506
// {
struct DismissDiagnostic_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

DismissDiagnostic_type* DismissDiagnostic_typeof();
void DismissDiagnostic__ctor__fn(DismissDiagnostic* __this, uString* deviceId, uString* deviceName, int* diagnosticId);
void DismissDiagnostic__get_DeviceId_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__set_DeviceId_fn(DismissDiagnostic* __this, uString* value);
void DismissDiagnostic__get_DeviceName_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__set_DeviceName_fn(DismissDiagnostic* __this, uString* value);
void DismissDiagnostic__get_DiagnosticId_fn(DismissDiagnostic* __this, int* __retval);
void DismissDiagnostic__set_DiagnosticId_fn(DismissDiagnostic* __this, int* value);
void DismissDiagnostic__New1_fn(uString* deviceId, uString* deviceName, int* diagnosticId, DismissDiagnostic** __retval);
void DismissDiagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, DismissDiagnostic** __retval);
void DismissDiagnostic__get_Type_fn(DismissDiagnostic* __this, uString** __retval);
void DismissDiagnostic__WriteDataTo_fn(DismissDiagnostic* __this, ::g::System::IO::BinaryWriter* writer);

struct DismissDiagnostic : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return DismissDiagnostic_typeof()->Init(), MessageType_; }
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    int _DiagnosticId;

    void ctor_(uString* deviceId, uString* deviceName, int diagnosticId);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    int DiagnosticId();
    void DiagnosticId(int value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static DismissDiagnostic* New1(uString* deviceId, uString* deviceName, int diagnosticId);
    static DismissDiagnostic* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
