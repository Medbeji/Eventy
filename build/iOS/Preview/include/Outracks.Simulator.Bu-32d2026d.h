// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional-1.h>
#include <Uno.Guid.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct BuildIssueDetected;}}}
namespace g{namespace Outracks{namespace Simulator{struct SourceReference;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class BuildIssueDetected :19
// {
struct BuildIssueDetected_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BuildIssueDetected_type* BuildIssueDetected_typeof();
void BuildIssueDetected__ctor__fn(BuildIssueDetected* __this);
void BuildIssueDetected__ctor_1_fn(BuildIssueDetected* __this, int* type, uString* code, uString* message, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* source, ::g::Uno::Guid* buildId);
void BuildIssueDetected__get_BuildId_fn(BuildIssueDetected* __this, ::g::Uno::Guid* __retval);
void BuildIssueDetected__set_BuildId_fn(BuildIssueDetected* __this, ::g::Uno::Guid* value);
void BuildIssueDetected__get_Code_fn(BuildIssueDetected* __this, uString** __retval);
void BuildIssueDetected__set_Code_fn(BuildIssueDetected* __this, uString* value);
void BuildIssueDetected__get_Message_fn(BuildIssueDetected* __this, uString** __retval);
void BuildIssueDetected__set_Message_fn(BuildIssueDetected* __this, uString* value);
void BuildIssueDetected__New1_fn(BuildIssueDetected** __retval);
void BuildIssueDetected__New2_fn(int* type, uString* code, uString* message, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* source, ::g::Uno::Guid* buildId, BuildIssueDetected** __retval);
void BuildIssueDetected__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BuildIssueDetected** __retval);
void BuildIssueDetected__get_Severity_fn(BuildIssueDetected* __this, int* __retval);
void BuildIssueDetected__set_Severity_fn(BuildIssueDetected* __this, int* value);
void BuildIssueDetected__get_Source_fn(BuildIssueDetected* __this, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* __retval);
void BuildIssueDetected__set_Source_fn(BuildIssueDetected* __this, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* value);
void BuildIssueDetected__ToString_fn(BuildIssueDetected* __this, uString** __retval);
void BuildIssueDetected__get_Type_fn(BuildIssueDetected* __this, uString** __retval);
void BuildIssueDetected__WriteDataTo_fn(BuildIssueDetected* __this, ::g::System::IO::BinaryWriter* writer);

struct BuildIssueDetected : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return BuildIssueDetected_typeof()->Init(), MessageType_; }
    ::g::Uno::Guid _BuildId;
    uStrong<uString*> _Code;
    uStrong<uString*> _Message;
    int _Severity;
    uTField _Source() { return __type->Field(this, 4); }

    void ctor_();
    void ctor_1(int type, uString* code, uString* message, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > source, ::g::Uno::Guid buildId);
    ::g::Uno::Guid BuildId();
    void BuildId(::g::Uno::Guid value);
    uString* Code();
    void Code(uString* value);
    uString* Message();
    void Message(uString* value);
    int Severity();
    void Severity(int value);
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > Source();
    void Source(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BuildIssueDetected* New1();
    static BuildIssueDetected* New2(int type, uString* code, uString* message, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > source, ::g::Uno::Guid buildId);
    static BuildIssueDetected* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}} // ::g::Outracks::Simulator
