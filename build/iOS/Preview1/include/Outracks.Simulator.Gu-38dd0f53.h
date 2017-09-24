// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct GuidSerializer;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{struct Guid;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class GuidSerializer :681
// {
uClassType* GuidSerializer_typeof();
void GuidSerializer__ReadGuid_fn(::g::System::IO::BinaryReader* reader, ::g::Uno::Guid* __retval);
void GuidSerializer__WriteGuid_fn(::g::System::IO::BinaryWriter* writer, ::g::Uno::Guid* guid);

struct GuidSerializer : uObject
{
    static ::g::Uno::Guid ReadGuid(::g::System::IO::BinaryReader* reader);
    static void WriteGuid(::g::System::IO::BinaryWriter* writer, ::g::Uno::Guid guid);
};
// }

}}} // ::g::Outracks::Simulator
