// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{struct BinaryMessage__WriteClosure;}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// private sealed class BinaryMessage.WriteClosure :768
// {
uType* BinaryMessage__WriteClosure_typeof();
void BinaryMessage__WriteClosure__ctor__fn(BinaryMessage__WriteClosure* __this);
void BinaryMessage__WriteClosure__Execute_fn(BinaryMessage__WriteClosure* __this, ::g::System::IO::BinaryWriter* writer);
void BinaryMessage__WriteClosure__New1_fn(BinaryMessage__WriteClosure** __retval);

struct BinaryMessage__WriteClosure : uObject
{
    uStrong<uArray*> Data;

    void ctor_();
    void Execute(::g::System::IO::BinaryWriter* writer);
    static BinaryMessage__WriteClosure* New1();
};
// }

}} // ::g::Outracks
