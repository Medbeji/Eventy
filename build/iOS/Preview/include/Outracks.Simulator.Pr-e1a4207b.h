// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.IBinaryMessage.h>
#include <Uno.Guid.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct BuildProject;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class BuildProject :160
// {
struct BuildProject_type : uType
{
    ::g::Outracks::IBinaryMessage interface0;
};

BuildProject_type* BuildProject_typeof();
void BuildProject__ctor__fn(BuildProject* __this, uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool* buildLibraries, bool* verbose, uString* outputDir);
void BuildProject__get_BuildLibraries_fn(BuildProject* __this, bool* __retval);
void BuildProject__set_BuildLibraries_fn(BuildProject* __this, bool* value);
void BuildProject__get_Defines_fn(BuildProject* __this, ::g::Outracks::Simulator::ImmutableList** __retval);
void BuildProject__set_Defines_fn(BuildProject* __this, ::g::Outracks::Simulator::ImmutableList* value);
void BuildProject__get_Id_fn(BuildProject* __this, ::g::Uno::Guid* __retval);
void BuildProject__set_Id_fn(BuildProject* __this, ::g::Uno::Guid* value);
void BuildProject__New1_fn(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool* buildLibraries, bool* verbose, uString* outputDir, BuildProject** __retval);
void BuildProject__get_OutputDir_fn(BuildProject* __this, uString** __retval);
void BuildProject__set_OutputDir_fn(BuildProject* __this, uString* value);
void BuildProject__get_ProjectPath_fn(BuildProject* __this, uString** __retval);
void BuildProject__set_ProjectPath_fn(BuildProject* __this, uString* value);
void BuildProject__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BuildProject** __retval);
void BuildProject__ReadDefine_fn(::g::System::IO::BinaryReader* reader, uString** __retval);
void BuildProject__get_Type_fn(BuildProject* __this, uString** __retval);
void BuildProject__get_Verbose_fn(BuildProject* __this, bool* __retval);
void BuildProject__set_Verbose_fn(BuildProject* __this, bool* value);
void BuildProject__WriteDataTo_fn(BuildProject* __this, ::g::System::IO::BinaryWriter* writer);
void BuildProject__WriteDefine_fn(uString* str, ::g::System::IO::BinaryWriter* writer);

struct BuildProject : uObject
{
    static uSStrong<uString*> MessageType_;
    static uSStrong<uString*>& MessageType() { return BuildProject_typeof()->Init(), MessageType_; }
    bool _BuildLibraries;
    uStrong< ::g::Outracks::Simulator::ImmutableList*> _Defines;
    ::g::Uno::Guid _Id;
    uStrong<uString*> _OutputDir;
    uStrong<uString*> _ProjectPath;
    bool _Verbose;

    void ctor_(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool buildLibraries, bool verbose, uString* outputDir);
    bool BuildLibraries();
    void BuildLibraries(bool value);
    ::g::Outracks::Simulator::ImmutableList* Defines();
    void Defines(::g::Outracks::Simulator::ImmutableList* value);
    ::g::Uno::Guid Id();
    void Id(::g::Uno::Guid value);
    uString* OutputDir();
    void OutputDir(uString* value);
    uString* ProjectPath();
    void ProjectPath(uString* value);
    uString* Type();
    bool Verbose();
    void Verbose(bool value);
    void WriteDataTo(::g::System::IO::BinaryWriter* writer);
    static BuildProject* New1(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool buildLibraries, bool verbose, uString* outputDir);
    static BuildProject* ReadDataFrom(::g::System::IO::BinaryReader* reader);
    static uString* ReadDefine(::g::System::IO::BinaryReader* reader);
    static void WriteDefine(uString* str, ::g::System::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
