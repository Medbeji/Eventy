// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{struct BinaryMessage__ComposedMessage;}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// private sealed class BinaryMessage.ComposedMessage :801
// {
struct BinaryMessage__ComposedMessage_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BinaryMessage__ComposedMessage_type* BinaryMessage__ComposedMessage_typeof();
void BinaryMessage__ComposedMessage__ctor__fn(BinaryMessage__ComposedMessage* __this);
void BinaryMessage__ComposedMessage__New1_fn(BinaryMessage__ComposedMessage** __retval);
void BinaryMessage__ComposedMessage__get_Type_fn(BinaryMessage__ComposedMessage* __this, uString** __retval);
void BinaryMessage__ComposedMessage__set_Type_fn(BinaryMessage__ComposedMessage* __this, uString* value);
void BinaryMessage__ComposedMessage__get_Write_fn(BinaryMessage__ComposedMessage* __this, uDelegate** __retval);
void BinaryMessage__ComposedMessage__set_Write_fn(BinaryMessage__ComposedMessage* __this, uDelegate* value);
void BinaryMessage__ComposedMessage__WriteDataTo_fn(BinaryMessage__ComposedMessage* __this, ::g::System::IO::BinaryWriter* writer);

struct BinaryMessage__ComposedMessage : uObject
{
    uStrong<uString*> _Type;
    uStrong<uDelegate*> _Write;

    void ctor_();
    uString* Type();
    void Type(uString* value);
    uDelegate* Write();
    void Write(uDelegate* value);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BinaryMessage__ComposedMessage* New1();
};
// }

}} // ::g::Outracks
