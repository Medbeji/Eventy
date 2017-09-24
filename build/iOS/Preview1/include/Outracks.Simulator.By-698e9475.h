// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct PrecompiledElement;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ObjectIdentifier;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class PrecompiledElement :1467
// {
uType* PrecompiledElement_typeof();
void PrecompiledElement__ctor__fn(PrecompiledElement* __this, ::g::Outracks::Simulator::ObjectIdentifier* id, uString* source);
void PrecompiledElement__New1_fn(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source, PrecompiledElement** __retval);
void PrecompiledElement__Read_fn(::g::System::IO::BinaryReader* reader, PrecompiledElement** __retval);
void PrecompiledElement__ToString_fn(PrecompiledElement* __this, uString** __retval);
void PrecompiledElement__Write_fn(PrecompiledElement* dependency, ::g::System::IO::BinaryWriter* writer);

struct PrecompiledElement : uObject
{
    uStrong< ::g::Outracks::Simulator::ObjectIdentifier*> Id;
    uStrong<uString*> Source;

    void ctor_(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source);
    static PrecompiledElement* New1(::g::Outracks::Simulator::ObjectIdentifier* id, uString* source);
    static PrecompiledElement* Read(::g::System::IO::BinaryReader* reader);
    static void Write(PrecompiledElement* dependency, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
