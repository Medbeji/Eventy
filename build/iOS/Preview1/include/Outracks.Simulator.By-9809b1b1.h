// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct PrecompiledElement;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectMetadata;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Outracks{namespace Simulator{struct ObjectIdentifier;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ProjectMetadata :1427
// {
uType* ProjectMetadata_typeof();
void ProjectMetadata__ctor__fn(ProjectMetadata* __this, ::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements);
void ProjectMetadata__New1_fn(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements, ProjectMetadata** __retval);
void ProjectMetadata__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, ProjectMetadata** __retval);
void ProjectMetadata__ReadType_fn(::g::System::IO::BinaryReader* reader, ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> >* __retval);
void ProjectMetadata__WriteDataTo_fn(ProjectMetadata* __this, ::g::System::IO::BinaryWriter* writer);
void ProjectMetadata__WriteType_fn(::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> >* type, ::g::System::IO::BinaryWriter* writer);

struct ProjectMetadata : uObject
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> ElementTypeHierarchy;
    uStrong< ::g::Outracks::Simulator::ImmutableList*> PrecompiledElements;

    void ctor_(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static ProjectMetadata* New1(::g::Outracks::Simulator::ImmutableList* hierarchy, ::g::Outracks::Simulator::ImmutableList* elements);
    static ProjectMetadata* ReadDataFrom(::g::System::IO::BinaryReader* reader);
    static ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> > ReadType(::g::System::IO::BinaryReader* reader);
    static void WriteType(::g::Uno::Collections::KeyValuePair<uStrong< ::g::Outracks::Simulator::ObjectIdentifier*>, uStrong<uObject*> > type, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
