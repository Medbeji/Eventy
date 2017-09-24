// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Diagnostic;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Diagnostic :402
// {
struct Diagnostic_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

Diagnostic_type* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this, uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int* lineNumber, int* columnNumber, int* diagnosticId);
void Diagnostic__get_ColumnNumber_fn(Diagnostic* __this, int* __retval);
void Diagnostic__set_ColumnNumber_fn(Diagnostic* __this, int* value);
void Diagnostic__get_Details_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_Details_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DeviceId_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_DeviceId_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DeviceName_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_DeviceName_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_DiagnosticId_fn(Diagnostic* __this, int* __retval);
void Diagnostic__set_DiagnosticId_fn(Diagnostic* __this, int* value);
void Diagnostic__get_DiagnosticType_fn(Diagnostic* __this, int* __retval);
void Diagnostic__set_DiagnosticType_fn(Diagnostic* __this, int* value);
void Diagnostic__get_LineNumber_fn(Diagnostic* __this, int* __retval);
void Diagnostic__set_LineNumber_fn(Diagnostic* __this, int* value);
void Diagnostic__get_Message_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_Message_fn(Diagnostic* __this, uString* value);
void Diagnostic__New1_fn(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int* lineNumber, int* columnNumber, int* diagnosticId, Diagnostic** __retval);
void Diagnostic__NullIfEmpty_fn(uString* s, uString** __retval);
void Diagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Diagnostic** __retval);
void Diagnostic__get_SourceFile_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__set_SourceFile_fn(Diagnostic* __this, uString* value);
void Diagnostic__get_Type_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__WriteDataTo_fn(Diagnostic* __this, ::g::System::IO::BinaryWriter* writer);

struct Diagnostic : uObject
{
    static int _idEnumerator_;
    static int& _idEnumerator() { return Diagnostic_typeof()->Init(), _idEnumerator_; }
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return Diagnostic_typeof()->Init(), MessageType_; }
    int _ColumnNumber;
    uStrong<uString*> _Details;
    uStrong<uString*> _DeviceId;
    uStrong<uString*> _DeviceName;
    int _DiagnosticId;
    int _DiagnosticType;
    int _LineNumber;
    uStrong<uString*> _Message;
    uStrong<uString*> _SourceFile;

    void ctor_(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int lineNumber, int columnNumber, int diagnosticId);
    int ColumnNumber();
    void ColumnNumber(int value);
    uString* Details();
    void Details(uString* value);
    uString* DeviceId();
    void DeviceId(uString* value);
    uString* DeviceName();
    void DeviceName(uString* value);
    int DiagnosticId();
    void DiagnosticId(int value);
    int DiagnosticType();
    void DiagnosticType(int value);
    int LineNumber();
    void LineNumber(int value);
    uString* Message();
    void Message(uString* value);
    uString* SourceFile();
    void SourceFile(uString* value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static Diagnostic* New1(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int lineNumber, int columnNumber, int diagnosticId);
    static uString* NullIfEmpty(uString* s);
    static Diagnostic* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
