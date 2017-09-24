// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectDependency;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ProjectDependency :1355
// {
uType* ProjectDependency_typeof();
void ProjectDependency__ctor__fn(ProjectDependency* __this, uString* path, uString* descriptor);
void ProjectDependency__Equals_fn(ProjectDependency* __this, uObject* obj, bool* __retval);
void ProjectDependency__Equals2_fn(ProjectDependency* __this, ProjectDependency* other, bool* __retval);
void ProjectDependency__GetHashCode_fn(ProjectDependency* __this, int* __retval);
void ProjectDependency__New1_fn(uString* path, uString* descriptor, ProjectDependency** __retval);
void ProjectDependency__op_Equality_fn(ProjectDependency* left, ProjectDependency* right, bool* __retval);
void ProjectDependency__op_Inequality_fn(ProjectDependency* left, ProjectDependency* right, bool* __retval);
void ProjectDependency__Read_fn(::g::System::IO::BinaryReader* reader, ProjectDependency** __retval);
void ProjectDependency__ToString_fn(ProjectDependency* __this, uString** __retval);
void ProjectDependency__Write_fn(ProjectDependency* dependency, ::g::System::IO::BinaryWriter* writer);

struct ProjectDependency : uObject
{
    uStrong<uString*> Descriptor;
    uStrong<uString*> Path;

    void ctor_(uString* path, uString* descriptor);
    bool Equals2(ProjectDependency* other);
    static ProjectDependency* New1(uString* path, uString* descriptor);
    static bool op_Equality(ProjectDependency* left, ProjectDependency* right);
    static bool op_Inequality(ProjectDependency* left, ProjectDependency* right);
    static ProjectDependency* Read(::g::System::IO::BinaryReader* reader);
    static void Write(ProjectDependency* dependency, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
