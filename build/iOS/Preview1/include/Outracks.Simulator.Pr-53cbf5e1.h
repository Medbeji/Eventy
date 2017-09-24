// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct TriggerProgress;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class TriggerProgress :358
// {
struct TriggerProgress_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

TriggerProgress_type* TriggerProgress_typeof();
void TriggerProgress__ctor__fn(TriggerProgress* __this);
void TriggerProgress__ctor_1_fn(TriggerProgress* __this, double* progress);
void TriggerProgress__New1_fn(TriggerProgress** __retval);
void TriggerProgress__New2_fn(double* progress, TriggerProgress** __retval);
void TriggerProgress__get_Progress_fn(TriggerProgress* __this, double* __retval);
void TriggerProgress__set_Progress_fn(TriggerProgress* __this, double* value);
void TriggerProgress__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, TriggerProgress** __retval);
void TriggerProgress__get_Type_fn(TriggerProgress* __this, uString** __retval);
void TriggerProgress__WriteDataTo_fn(TriggerProgress* __this, ::g::System::IO::BinaryWriter* writer);

struct TriggerProgress : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return TriggerProgress_typeof()->Init(), MessageType_; }
    double _Progress;

    void ctor_();
    void ctor_1(double progress);
    double Progress();
    void Progress(double value);
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static TriggerProgress* New1();
    static TriggerProgress* New2(double progress);
    static TriggerProgress* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
