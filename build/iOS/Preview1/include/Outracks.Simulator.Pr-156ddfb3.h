// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Ready;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Ready :713
// {
struct Ready_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

Ready_type* Ready_typeof();
void Ready__ctor__fn(Ready* __this);
void Ready__New1_fn(Ready** __retval);
void Ready__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Ready** __retval);
void Ready__get_Type_fn(Ready* __this, uString** __retval);
void Ready__WriteDataTo_fn(Ready* __this, ::g::System::IO::BinaryWriter* writer);

struct Ready : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return Ready_typeof()->Init(), MessageType_; }

    void ctor_();
    uString* Type();
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static Ready* New1();
    static Ready* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
