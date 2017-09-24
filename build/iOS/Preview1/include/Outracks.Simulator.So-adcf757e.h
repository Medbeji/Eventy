// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.Te-b740cdd0.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct SourceReference;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class SourceReference :993
// {
uType* SourceReference_typeof();
void SourceReference__ctor__fn(SourceReference* __this, uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition>* location);
void SourceReference__New1_fn(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition>* location, SourceReference** __retval);
void SourceReference__Read_fn(::g::System::IO::BinaryReader* r, SourceReference** __retval);
void SourceReference__Write_fn(::g::System::IO::BinaryWriter* w, SourceReference* s);

struct SourceReference : uObject
{
    uStrong<uString*> File;
    uTField Location() { return __type->Field(this, 1); }

    void ctor_(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> location);
    static SourceReference* New1(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> location);
    static SourceReference* Read(::g::System::IO::BinaryReader* r);
    static void Write(::g::System::IO::BinaryWriter* w, SourceReference* s);
};
// }

}}} // ::g::Outracks::Simulator
