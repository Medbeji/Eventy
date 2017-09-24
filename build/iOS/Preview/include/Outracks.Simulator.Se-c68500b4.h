// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Serialization;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal static class Serialization :696
// {
uClassType* Serialization_typeof();
void Serialization___ReadString_fn(::g::System::IO::BinaryReader* reader, uString** __retval);

struct Serialization : uObject
{
    static uSStrong<uDelegate*> ReadString_;
    static uSStrong<uDelegate*>& ReadString() { return Serialization_typeof()->Init(), ReadString_; }

    static uString* _ReadString(::g::System::IO::BinaryReader* reader);
};
// }

}}} // ::g::Outracks::Simulator
