// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectBytecode;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectDependency;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectMetadata;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ProjectBytecode :1308
// {
uType* ProjectBytecode_typeof();
void ProjectBytecode__ctor__fn(ProjectBytecode* __this, ::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata);
void ProjectBytecode__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata, ProjectBytecode** __retval);
void ProjectBytecode__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, ProjectBytecode** __retval);
void ProjectBytecode__ToString_fn(ProjectBytecode* __this, uString** __retval);
void ProjectBytecode__WriteDataTo_fn(ProjectBytecode* __this, ::g::System::IO::BinaryWriter* writer);

struct ProjectBytecode : uObject
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Dependencies;
    uStrong< ::g::Outracks::Simulator::Bytecode::ProjectMetadata*> Metadata;
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> Reify;

    void ctor_(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static ProjectBytecode* New1(::g::Outracks::Simulator::Bytecode::Lambda* reify, uObject* dependencies, ::g::Outracks::Simulator::Bytecode::ProjectMetadata* metadata);
    static ProjectBytecode* ReadDataFrom(::g::System::IO::BinaryReader* reader);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
