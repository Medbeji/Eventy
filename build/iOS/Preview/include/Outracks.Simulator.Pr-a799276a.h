// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Guid.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct GenerateBytecode;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UxFileContents;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class GenerateBytecode :651
// {
struct GenerateBytecode_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

GenerateBytecode_type* GenerateBytecode_typeof();
void GenerateBytecode__ctor__fn(GenerateBytecode* __this, ::g::Uno::Guid* id, ::g::Outracks::Simulator::ImmutableList* uxFiles);
void GenerateBytecode__get_Id_fn(GenerateBytecode* __this, ::g::Uno::Guid* __retval);
void GenerateBytecode__set_Id_fn(GenerateBytecode* __this, ::g::Uno::Guid* value);
void GenerateBytecode__New1_fn(::g::Uno::Guid* id, ::g::Outracks::Simulator::ImmutableList* uxFiles, GenerateBytecode** __retval);
void GenerateBytecode__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, GenerateBytecode** __retval);
void GenerateBytecode__get_Type_fn(GenerateBytecode* __this, uString** __retval);
void GenerateBytecode__get_UxFiles_fn(GenerateBytecode* __this, ::g::Outracks::Simulator::ImmutableList** __retval);
void GenerateBytecode__set_UxFiles_fn(GenerateBytecode* __this, ::g::Outracks::Simulator::ImmutableList* value);
void GenerateBytecode__WriteDataTo_fn(GenerateBytecode* __this, ::g::System::IO::BinaryWriter* writer);

struct GenerateBytecode : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return GenerateBytecode_typeof()->Init(), MessageType_; }
    ::g::Uno::Guid _Id;
    uStrong< ::g::Outracks::Simulator::ImmutableList*> _UxFiles;

    void ctor_(::g::Uno::Guid id, ::g::Outracks::Simulator::ImmutableList* uxFiles);
    ::g::Uno::Guid Id();
    void Id(::g::Uno::Guid value);
    uString* Type();
    ::g::Outracks::Simulator::ImmutableList* UxFiles();
    void UxFiles(::g::Outracks::Simulator::ImmutableList* value);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static GenerateBytecode* New1(::g::Uno::Guid id, ::g::Outracks::Simulator::ImmutableList* uxFiles);
    static GenerateBytecode* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
