// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Optional.h>
#include <Outracks.Simulator.By-3fb73d1c.h>
#include <Outracks.Simulator.By-c66e3e07.h>
#include <Outracks.Simulator.By-fda889fc.h>
#include <Outracks.Simulator.Gu-38dd0f53.h>
#include <Outracks.Simulator.Im-4687ab12.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.Ob-98516f34.h>
#include <Outracks.Simulator.Pr-1306b863.h>
#include <Outracks.Simulator.Pr-156ddfb3.h>
#include <Outracks.Simulator.Pr-51753a1d.h>
#include <Outracks.Simulator.Pr-53cbf5e1.h>
#include <Outracks.Simulator.Pr-59de7475.h>
#include <Outracks.Simulator.Pr-5b87553c.h>
#include <Outracks.Simulator.Pr-5d4d976b.h>
#include <Outracks.Simulator.Pr-5ff08ec5.h>
#include <Outracks.Simulator.Pr-694bb62e.h>
#include <Outracks.Simulator.Pr-81de9449.h>
#include <Outracks.Simulator.Pr-998e636c.h>
#include <Outracks.Simulator.Pr-a799276a.h>
#include <Outracks.Simulator.Pr-bed485a.h>
#include <Outracks.Simulator.Pr-d1da33c5.h>
#include <Outracks.Simulator.Pr-e0a02f28.h>
#include <Outracks.Simulator.Pr-e1a4207b.h>
#include <Outracks.Simulator.So-adcf757e.h>
#include <System.IO.BinaryReader.h>
#include <System.IO.BinaryWriter.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[23];
static uType* TYPES[17];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class BuildProject :160
// {
// static BuildProject() :160
static void BuildProject__cctor__fn(uType* __type)
{
    BuildProject::MessageType_ = ::STRINGS[0/*"BuildProject"*/];
}

static void BuildProject_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BuildProject");
    ::TYPES[0] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(BuildProject_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _BuildLibraries), 0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _Defines), 0,
        ::g::Uno::Guid_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _Id), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _OutputDir), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _ProjectPath), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BuildProject, _Verbose), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::BuildProject::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 6));
    type->Reflection.SetFunctions(12,
        new uFunction("get_BuildLibraries", NULL, (void*)BuildProject__get_BuildLibraries_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Defines", NULL, (void*)BuildProject__get_Defines_fn, 0, false, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 0),
        new uFunction("get_Id", NULL, (void*)BuildProject__get_Id_fn, 0, false, ::g::Uno::Guid_typeof(), 0),
        new uFunction("set_Id", NULL, (void*)BuildProject__set_Id_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Guid_typeof()),
        new uFunction(".ctor", NULL, (void*)BuildProject__New1_fn, 0, true, type, 5, ::g::Uno::String_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::String_typeof(), NULL), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_OutputDir", NULL, (void*)BuildProject__get_OutputDir_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_OutputDir", NULL, (void*)BuildProject__set_OutputDir_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ProjectPath", NULL, (void*)BuildProject__get_ProjectPath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("ReadDataFrom", NULL, (void*)BuildProject__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)BuildProject__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Verbose", NULL, (void*)BuildProject__get_Verbose_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)BuildProject__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

BuildProject_type* BuildProject_typeof()
{
    static uSStrong<BuildProject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BuildProject);
    options.TypeSize = sizeof(BuildProject_type);
    type = (BuildProject_type*)uClassType::New("Outracks.Simulator.Protocol.BuildProject", options);
    type->fp_build_ = BuildProject_build;
    type->fp_cctor_ = BuildProject__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))BuildProject__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))BuildProject__get_Type_fn;
    return type;
}

// public BuildProject(string projectPath, Outracks.Simulator.ImmutableList<string> defines, bool buildLibraries, bool verbose, [string outputDir]) :172
void BuildProject__ctor__fn(BuildProject* __this, uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool* buildLibraries, bool* verbose, uString* outputDir)
{
    __this->ctor_(projectPath, defines, *buildLibraries, *verbose, outputDir);
}

// public generated bool get_BuildLibraries() :168
void BuildProject__get_BuildLibraries_fn(BuildProject* __this, bool* __retval)
{
    *__retval = __this->BuildLibraries();
}

// private generated void set_BuildLibraries(bool value) :168
void BuildProject__set_BuildLibraries_fn(BuildProject* __this, bool* value)
{
    __this->BuildLibraries(*value);
}

// public generated Outracks.Simulator.ImmutableList<string> get_Defines() :167
void BuildProject__get_Defines_fn(BuildProject* __this, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = __this->Defines();
}

// private generated void set_Defines(Outracks.Simulator.ImmutableList<string> value) :167
void BuildProject__set_Defines_fn(BuildProject* __this, ::g::Outracks::Simulator::ImmutableList* value)
{
    __this->Defines(value);
}

// public generated Uno.Guid get_Id() :165
void BuildProject__get_Id_fn(BuildProject* __this, ::g::Uno::Guid* __retval)
{
    *__retval = __this->Id();
}

// public generated void set_Id(Uno.Guid value) :165
void BuildProject__set_Id_fn(BuildProject* __this, ::g::Uno::Guid* value)
{
    __this->Id(*value);
}

// public BuildProject New(string projectPath, Outracks.Simulator.ImmutableList<string> defines, bool buildLibraries, bool verbose, [string outputDir]) :172
void BuildProject__New1_fn(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool* buildLibraries, bool* verbose, uString* outputDir, BuildProject** __retval)
{
    *__retval = BuildProject::New1(projectPath, defines, *buildLibraries, *verbose, outputDir);
}

// public generated string get_OutputDir() :170
void BuildProject__get_OutputDir_fn(BuildProject* __this, uString** __retval)
{
    *__retval = __this->OutputDir();
}

// public generated void set_OutputDir(string value) :170
void BuildProject__set_OutputDir_fn(BuildProject* __this, uString* value)
{
    __this->OutputDir(value);
}

// public generated string get_ProjectPath() :166
void BuildProject__get_ProjectPath_fn(BuildProject* __this, uString** __retval)
{
    *__retval = __this->ProjectPath();
}

// private generated void set_ProjectPath(string value) :166
void BuildProject__set_ProjectPath_fn(BuildProject* __this, uString* value)
{
    __this->ProjectPath(value);
}

// public static Outracks.Simulator.Protocol.BuildProject ReadDataFrom(System.IO.BinaryReader reader) :196
void BuildProject__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BuildProject** __retval)
{
    *__retval = BuildProject::ReadDataFrom(reader);
}

// private static string ReadDefine(System.IO.BinaryReader reader) :215
void BuildProject__ReadDefine_fn(::g::System::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = BuildProject::ReadDefine(reader);
}

// public string get_Type() :163
void BuildProject__get_Type_fn(BuildProject* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public generated bool get_Verbose() :169
void BuildProject__get_Verbose_fn(BuildProject* __this, bool* __retval)
{
    *__retval = __this->Verbose();
}

// private generated void set_Verbose(bool value) :169
void BuildProject__set_Verbose_fn(BuildProject* __this, bool* value)
{
    __this->Verbose(*value);
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :186
void BuildProject__WriteDataTo_fn(BuildProject* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

// private static void WriteDefine(string str, System.IO.BinaryWriter writer) :210
void BuildProject__WriteDefine_fn(uString* str, ::g::System::IO::BinaryWriter* writer)
{
    BuildProject::WriteDefine(str, writer);
}

uSStrong<uString*> BuildProject::MessageType_;

// public BuildProject(string projectPath, Outracks.Simulator.ImmutableList<string> defines, bool buildLibraries, bool verbose, [string outputDir]) [instance] :172
void BuildProject::ctor_(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool buildLibraries, bool verbose, uString* outputDir)
{
    ProjectPath(projectPath);
    Defines(defines);
    BuildLibraries(buildLibraries);
    Verbose(verbose);
    OutputDir(outputDir);
}

// public generated bool get_BuildLibraries() [instance] :168
bool BuildProject::BuildLibraries()
{
    return _BuildLibraries;
}

// private generated void set_BuildLibraries(bool value) [instance] :168
void BuildProject::BuildLibraries(bool value)
{
    _BuildLibraries = value;
}

// public generated Outracks.Simulator.ImmutableList<string> get_Defines() [instance] :167
::g::Outracks::Simulator::ImmutableList* BuildProject::Defines()
{
    return _Defines;
}

// private generated void set_Defines(Outracks.Simulator.ImmutableList<string> value) [instance] :167
void BuildProject::Defines(::g::Outracks::Simulator::ImmutableList* value)
{
    _Defines = value;
}

// public generated Uno.Guid get_Id() [instance] :165
::g::Uno::Guid BuildProject::Id()
{
    return _Id;
}

// public generated void set_Id(Uno.Guid value) [instance] :165
void BuildProject::Id(::g::Uno::Guid value)
{
    _Id = value;
}

// public generated string get_OutputDir() [instance] :170
uString* BuildProject::OutputDir()
{
    return _OutputDir;
}

// public generated void set_OutputDir(string value) [instance] :170
void BuildProject::OutputDir(uString* value)
{
    _OutputDir = value;
}

// public generated string get_ProjectPath() [instance] :166
uString* BuildProject::ProjectPath()
{
    return _ProjectPath;
}

// private generated void set_ProjectPath(string value) [instance] :166
void BuildProject::ProjectPath(uString* value)
{
    _ProjectPath = value;
}

// public string get_Type() [instance] :163
uString* BuildProject::Type()
{
    return BuildProject::MessageType();
}

// public generated bool get_Verbose() [instance] :169
bool BuildProject::Verbose()
{
    return _Verbose;
}

// private generated void set_Verbose(bool value) [instance] :169
void BuildProject::Verbose(bool value)
{
    _Verbose = value;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :186
void BuildProject::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.BuildProject", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::GuidSerializer::WriteGuid(writer, Id());
    uPtr(writer)->Write6(ProjectPath());
    ::g::Outracks::Simulator::List::Write1(::TYPES[2/*Outracks.Simulator.List.Write<string>*/], writer, Defines(), uDelegate::New(::TYPES[3/*Uno.Action<string, System.IO.BinaryWriter>*/], (void*)BuildProject__WriteDefine_fn));
    writer->Write(BuildLibraries());
    writer->Write(Verbose());
    writer->Write6(OutputDir());
}

// public BuildProject New(string projectPath, Outracks.Simulator.ImmutableList<string> defines, bool buildLibraries, bool verbose, [string outputDir]) [static] :172
BuildProject* BuildProject::New1(uString* projectPath, ::g::Outracks::Simulator::ImmutableList* defines, bool buildLibraries, bool verbose, uString* outputDir)
{
    BuildProject* obj2 = (BuildProject*)uNew(BuildProject_typeof());
    obj2->ctor_(projectPath, defines, buildLibraries, verbose, outputDir);
    return obj2;
}

// public static Outracks.Simulator.Protocol.BuildProject ReadDataFrom(System.IO.BinaryReader reader) [static] :196
BuildProject* BuildProject::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.BuildProject", "ReadDataFrom(System.IO.BinaryReader)");
    BuildProject_typeof()->Init();
    BuildProject* collection1;
    ::g::Uno::Guid id = ::g::Outracks::Simulator::GuidSerializer::ReadGuid(reader);
    uString* projectPath = uPtr(reader)->ReadString();
    ::g::Outracks::Simulator::ImmutableList* defines = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[0/*Outracks.Simulator.List.Read<string>*/], reader, uDelegate::New(::TYPES[1/*Uno.Func<System.IO.BinaryReader, string>*/], (void*)BuildProject__ReadDefine_fn));
    bool buildLibraries = reader->ReadBoolean();
    bool verbose = reader->ReadBoolean();
    uString* outputDir = reader->ReadString();
    collection1 = BuildProject::New1(projectPath, defines, buildLibraries, verbose, outputDir);
    uPtr(collection1)->Id(id);
    id;
    return collection1;
}

// private static string ReadDefine(System.IO.BinaryReader reader) [static] :215
uString* BuildProject::ReadDefine(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.BuildProject", "ReadDefine(System.IO.BinaryReader)");
    BuildProject_typeof()->Init();
    return uPtr(reader)->ReadString();
}

// private static void WriteDefine(string str, System.IO.BinaryWriter writer) [static] :210
void BuildProject::WriteDefine(uString* str, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.BuildProject", "WriteDefine(string,System.IO.BinaryWriter)");
    BuildProject_typeof()->Init();
    uPtr(writer)->Write6(str);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class BytecodeGenerated :233
// {
// static BytecodeGenerated() :233
static void BytecodeGenerated__cctor__fn(uType* __type)
{
    BytecodeGenerated::MessageType_ = ::STRINGS[1/*"BytecodeGen...*/];
}

static void BytecodeGenerated_build(uType* type)
{
    ::STRINGS[1] = uString::Const("BytecodeGenerated");
    ::STRINGS[2] = uString::Const("BytecodeGenerated: ");
    ::STRINGS[3] = uString::Const("bc4");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(BytecodeGenerated_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::ProjectBytecode_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BytecodeGenerated, _Bytecode), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::BytecodeGenerated::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 1));
    type->Reflection.SetFunctions(6,
        new uFunction("get_BinaryFormat", NULL, (void*)BytecodeGenerated__get_BinaryFormat_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Bytecode", NULL, (void*)BytecodeGenerated__get_Bytecode_fn, 0, false, ::g::Outracks::Simulator::Bytecode::ProjectBytecode_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BytecodeGenerated__New2_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::ProjectBytecode_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)BytecodeGenerated__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)BytecodeGenerated__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)BytecodeGenerated__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

BytecodeGenerated_type* BytecodeGenerated_typeof()
{
    static uSStrong<BytecodeGenerated_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BytecodeGenerated);
    options.TypeSize = sizeof(BytecodeGenerated_type);
    type = (BytecodeGenerated_type*)uClassType::New("Outracks.Simulator.Protocol.BytecodeGenerated", options);
    type->fp_build_ = BytecodeGenerated_build;
    type->fp_ctor_ = (void*)BytecodeGenerated__New1_fn;
    type->fp_cctor_ = BytecodeGenerated__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BytecodeGenerated__ToString_fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))BytecodeGenerated__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))BytecodeGenerated__get_Type_fn;
    return type;
}

// private BytecodeGenerated() :246
void BytecodeGenerated__ctor__fn(BytecodeGenerated* __this)
{
    __this->ctor_();
}

// public BytecodeGenerated(Outracks.Simulator.Bytecode.ProjectBytecode bytecode) :241
void BytecodeGenerated__ctor_1_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode)
{
    __this->ctor_1(bytecode);
}

// public static string get_BinaryFormat() :250
void BytecodeGenerated__get_BinaryFormat_fn(uString** __retval)
{
    *__retval = BytecodeGenerated::BinaryFormat();
}

// public generated Outracks.Simulator.Bytecode.ProjectBytecode get_Bytecode() :239
void BytecodeGenerated__get_Bytecode_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode** __retval)
{
    *__retval = __this->Bytecode();
}

// private generated void set_Bytecode(Outracks.Simulator.Bytecode.ProjectBytecode value) :239
void BytecodeGenerated__set_Bytecode_fn(BytecodeGenerated* __this, ::g::Outracks::Simulator::Bytecode::ProjectBytecode* value)
{
    __this->Bytecode(value);
}

// private BytecodeGenerated New() :246
void BytecodeGenerated__New1_fn(BytecodeGenerated** __retval)
{
    *__retval = BytecodeGenerated::New1();
}

// public BytecodeGenerated New(Outracks.Simulator.Bytecode.ProjectBytecode bytecode) :241
void BytecodeGenerated__New2_fn(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode, BytecodeGenerated** __retval)
{
    *__retval = BytecodeGenerated::New2(bytecode);
}

// public static Outracks.Simulator.Protocol.BytecodeGenerated ReadDataFrom(System.IO.BinaryReader reader) :258
void BytecodeGenerated__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BytecodeGenerated** __retval)
{
    *__retval = BytecodeGenerated::ReadDataFrom(reader);
}

// public override sealed string ToString() :264
void BytecodeGenerated__ToString_fn(BytecodeGenerated* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeGenerated", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[2/*"BytecodeGen...*/], uPtr(uPtr(__this->Bytecode())->Reify)->ToString()), void();
}

// public string get_Type() :237
void BytecodeGenerated__get_Type_fn(BytecodeGenerated* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :253
void BytecodeGenerated__WriteDataTo_fn(BytecodeGenerated* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> BytecodeGenerated::MessageType_;

// private BytecodeGenerated() [instance] :246
void BytecodeGenerated::ctor_()
{
}

// public BytecodeGenerated(Outracks.Simulator.Bytecode.ProjectBytecode bytecode) [instance] :241
void BytecodeGenerated::ctor_1(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode)
{
    Bytecode(bytecode);
}

// public generated Outracks.Simulator.Bytecode.ProjectBytecode get_Bytecode() [instance] :239
::g::Outracks::Simulator::Bytecode::ProjectBytecode* BytecodeGenerated::Bytecode()
{
    return _Bytecode;
}

// private generated void set_Bytecode(Outracks.Simulator.Bytecode.ProjectBytecode value) [instance] :239
void BytecodeGenerated::Bytecode(::g::Outracks::Simulator::Bytecode::ProjectBytecode* value)
{
    _Bytecode = value;
}

// public string get_Type() [instance] :237
uString* BytecodeGenerated::Type()
{
    return BytecodeGenerated::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :253
void BytecodeGenerated::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeGenerated", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(Bytecode())->WriteDataTo(writer);
}

// private BytecodeGenerated New() [static] :246
BytecodeGenerated* BytecodeGenerated::New1()
{
    BytecodeGenerated* obj2 = (BytecodeGenerated*)uNew(BytecodeGenerated_typeof());
    obj2->ctor_();
    return obj2;
}

// public BytecodeGenerated New(Outracks.Simulator.Bytecode.ProjectBytecode bytecode) [static] :241
BytecodeGenerated* BytecodeGenerated::New2(::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode)
{
    BytecodeGenerated* obj1 = (BytecodeGenerated*)uNew(BytecodeGenerated_typeof());
    obj1->ctor_1(bytecode);
    return obj1;
}

// public static Outracks.Simulator.Protocol.BytecodeGenerated ReadDataFrom(System.IO.BinaryReader reader) [static] :258
BytecodeGenerated* BytecodeGenerated::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeGenerated", "ReadDataFrom(System.IO.BinaryReader)");
    BytecodeGenerated_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::ProjectBytecode* bytecode = ::g::Outracks::Simulator::Bytecode::ProjectBytecode::ReadDataFrom(reader);
    return BytecodeGenerated::New2(bytecode);
}

// public static string get_BinaryFormat() [static] :250
uString* BytecodeGenerated::BinaryFormat()
{
    BytecodeGenerated_typeof()->Init();
    return ::STRINGS[3/*"bc4"*/];
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class BytecodeUpdated :279
// {
// static BytecodeUpdated() :279
static void BytecodeUpdated__cctor__fn(uType* __type)
{
    BytecodeUpdated::MessageType_ = ::STRINGS[4/*"BytecodeUpd...*/];
}

static void BytecodeUpdated_build(uType* type)
{
    ::STRINGS[4] = uString::Const("BytecodeUpdated");
    ::STRINGS[5] = uString::Const("BytecodeUpdated: ");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(BytecodeUpdated_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Protocol::BytecodeUpdated, _Function), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::BytecodeUpdated::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("get_Function", NULL, (void*)BytecodeUpdated__get_Function_fn, 0, false, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BytecodeUpdated__New2_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Lambda_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)BytecodeUpdated__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)BytecodeUpdated__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)BytecodeUpdated__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

BytecodeUpdated_type* BytecodeUpdated_typeof()
{
    static uSStrong<BytecodeUpdated_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BytecodeUpdated);
    options.TypeSize = sizeof(BytecodeUpdated_type);
    type = (BytecodeUpdated_type*)uClassType::New("Outracks.Simulator.Protocol.BytecodeUpdated", options);
    type->fp_build_ = BytecodeUpdated_build;
    type->fp_ctor_ = (void*)BytecodeUpdated__New1_fn;
    type->fp_cctor_ = BytecodeUpdated__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BytecodeUpdated__ToString_fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))BytecodeUpdated__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))BytecodeUpdated__get_Type_fn;
    return type;
}

// private BytecodeUpdated() :292
void BytecodeUpdated__ctor__fn(BytecodeUpdated* __this)
{
    __this->ctor_();
}

// public BytecodeUpdated(Outracks.Simulator.Bytecode.Lambda function) :287
void BytecodeUpdated__ctor_1_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    __this->ctor_1(function);
}

// public generated Outracks.Simulator.Bytecode.Lambda get_Function() :285
void BytecodeUpdated__get_Function_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda** __retval)
{
    *__retval = __this->Function();
}

// private generated void set_Function(Outracks.Simulator.Bytecode.Lambda value) :285
void BytecodeUpdated__set_Function_fn(BytecodeUpdated* __this, ::g::Outracks::Simulator::Bytecode::Lambda* value)
{
    __this->Function(value);
}

// private BytecodeUpdated New() :292
void BytecodeUpdated__New1_fn(BytecodeUpdated** __retval)
{
    *__retval = BytecodeUpdated::New1();
}

// public BytecodeUpdated New(Outracks.Simulator.Bytecode.Lambda function) :287
void BytecodeUpdated__New2_fn(::g::Outracks::Simulator::Bytecode::Lambda* function, BytecodeUpdated** __retval)
{
    *__retval = BytecodeUpdated::New2(function);
}

// public static Outracks.Simulator.Protocol.BytecodeUpdated ReadDataFrom(System.IO.BinaryReader reader) :299
void BytecodeUpdated__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, BytecodeUpdated** __retval)
{
    *__retval = BytecodeUpdated::ReadDataFrom(reader);
}

// public override sealed string ToString() :306
void BytecodeUpdated__ToString_fn(BytecodeUpdated* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeUpdated", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[5/*"BytecodeUpd...*/], uPtr(__this->Function())->ToString()), void();
}

// public string get_Type() :283
void BytecodeUpdated__get_Type_fn(BytecodeUpdated* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :294
void BytecodeUpdated__WriteDataTo_fn(BytecodeUpdated* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> BytecodeUpdated::MessageType_;

// private BytecodeUpdated() [instance] :292
void BytecodeUpdated::ctor_()
{
}

// public BytecodeUpdated(Outracks.Simulator.Bytecode.Lambda function) [instance] :287
void BytecodeUpdated::ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    Function(function);
}

// public generated Outracks.Simulator.Bytecode.Lambda get_Function() [instance] :285
::g::Outracks::Simulator::Bytecode::Lambda* BytecodeUpdated::Function()
{
    return _Function;
}

// private generated void set_Function(Outracks.Simulator.Bytecode.Lambda value) [instance] :285
void BytecodeUpdated::Function(::g::Outracks::Simulator::Bytecode::Lambda* value)
{
    _Function = value;
}

// public string get_Type() [instance] :283
uString* BytecodeUpdated::Type()
{
    return BytecodeUpdated::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :294
void BytecodeUpdated::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeUpdated", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Lambda::Write2(Function(), writer);
}

// private BytecodeUpdated New() [static] :292
BytecodeUpdated* BytecodeUpdated::New1()
{
    BytecodeUpdated* obj2 = (BytecodeUpdated*)uNew(BytecodeUpdated_typeof());
    obj2->ctor_();
    return obj2;
}

// public BytecodeUpdated New(Outracks.Simulator.Bytecode.Lambda function) [static] :287
BytecodeUpdated* BytecodeUpdated::New2(::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    BytecodeUpdated* obj1 = (BytecodeUpdated*)uNew(BytecodeUpdated_typeof());
    obj1->ctor_1(function);
    return obj1;
}

// public static Outracks.Simulator.Protocol.BytecodeUpdated ReadDataFrom(System.IO.BinaryReader reader) [static] :299
BytecodeUpdated* BytecodeUpdated::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.BytecodeUpdated", "ReadDataFrom(System.IO.BinaryReader)");
    BytecodeUpdated_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Lambda* function = ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
    return BytecodeUpdated::New2(function);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class DebugLog :323
// {
// static DebugLog() :323
static void DebugLog__cctor__fn(uType* __type)
{
    DebugLog::MessageType_ = ::STRINGS[6/*"DebugLog"*/];
}

static void DebugLog_build(uType* type)
{
    ::STRINGS[6] = uString::Const("DebugLog");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(DebugLog_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, _DeviceId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, _DeviceName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, _Message), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::DebugLog::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 3));
    type->Reflection.SetFunctions(7,
        new uFunction("get_DeviceId", NULL, (void*)DebugLog__get_DeviceId_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceName", NULL, (void*)DebugLog__get_DeviceName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)DebugLog__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DebugLog__New2_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)DebugLog__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)DebugLog__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)DebugLog__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

DebugLog_type* DebugLog_typeof()
{
    static uSStrong<DebugLog_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DebugLog);
    options.TypeSize = sizeof(DebugLog_type);
    type = (DebugLog_type*)uClassType::New("Outracks.Simulator.Protocol.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    type->fp_ctor_ = (void*)DebugLog__New1_fn;
    type->fp_cctor_ = DebugLog__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))DebugLog__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))DebugLog__get_Type_fn;
    return type;
}

// private DebugLog() :339
void DebugLog__ctor__fn(DebugLog* __this)
{
    __this->ctor_();
}

// public DebugLog(string deviceId, string deviceName, string message) :333
void DebugLog__ctor_1_fn(DebugLog* __this, uString* deviceId, uString* deviceName, uString* message)
{
    __this->ctor_1(deviceId, deviceName, message);
}

// public generated string get_DeviceId() :329
void DebugLog__get_DeviceId_fn(DebugLog* __this, uString** __retval)
{
    *__retval = __this->DeviceId();
}

// private generated void set_DeviceId(string value) :329
void DebugLog__set_DeviceId_fn(DebugLog* __this, uString* value)
{
    __this->DeviceId(value);
}

// public generated string get_DeviceName() :330
void DebugLog__get_DeviceName_fn(DebugLog* __this, uString** __retval)
{
    *__retval = __this->DeviceName();
}

// private generated void set_DeviceName(string value) :330
void DebugLog__set_DeviceName_fn(DebugLog* __this, uString* value)
{
    __this->DeviceName(value);
}

// public generated string get_Message() :331
void DebugLog__get_Message_fn(DebugLog* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :331
void DebugLog__set_Message_fn(DebugLog* __this, uString* value)
{
    __this->Message(value);
}

// private DebugLog New() :339
void DebugLog__New1_fn(DebugLog** __retval)
{
    *__retval = DebugLog::New1();
}

// public DebugLog New(string deviceId, string deviceName, string message) :333
void DebugLog__New2_fn(uString* deviceId, uString* deviceName, uString* message, DebugLog** __retval)
{
    *__retval = DebugLog::New2(deviceId, deviceName, message);
}

// public static Outracks.Simulator.Protocol.DebugLog ReadDataFrom(System.IO.BinaryReader reader) :348
void DebugLog__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, DebugLog** __retval)
{
    *__retval = DebugLog::ReadDataFrom(reader);
}

// public string get_Type() :327
void DebugLog__get_Type_fn(DebugLog* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :341
void DebugLog__WriteDataTo_fn(DebugLog* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> DebugLog::MessageType_;

// private DebugLog() [instance] :339
void DebugLog::ctor_()
{
}

// public DebugLog(string deviceId, string deviceName, string message) [instance] :333
void DebugLog::ctor_1(uString* deviceId, uString* deviceName, uString* message)
{
    DeviceId(deviceId);
    DeviceName(deviceName);
    Message(message);
}

// public generated string get_DeviceId() [instance] :329
uString* DebugLog::DeviceId()
{
    return _DeviceId;
}

// private generated void set_DeviceId(string value) [instance] :329
void DebugLog::DeviceId(uString* value)
{
    _DeviceId = value;
}

// public generated string get_DeviceName() [instance] :330
uString* DebugLog::DeviceName()
{
    return _DeviceName;
}

// private generated void set_DeviceName(string value) [instance] :330
void DebugLog::DeviceName(uString* value)
{
    _DeviceName = value;
}

// public generated string get_Message() [instance] :331
uString* DebugLog::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :331
void DebugLog::Message(uString* value)
{
    _Message = value;
}

// public string get_Type() [instance] :327
uString* DebugLog::Type()
{
    return DebugLog::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :341
void DebugLog::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.DebugLog", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(DeviceId());
    writer->Write6(DeviceName());
    writer->Write6(Message());
}

// private DebugLog New() [static] :339
DebugLog* DebugLog::New1()
{
    DebugLog* obj2 = (DebugLog*)uNew(DebugLog_typeof());
    obj2->ctor_();
    return obj2;
}

// public DebugLog New(string deviceId, string deviceName, string message) [static] :333
DebugLog* DebugLog::New2(uString* deviceId, uString* deviceName, uString* message)
{
    DebugLog* obj1 = (DebugLog*)uNew(DebugLog_typeof());
    obj1->ctor_1(deviceId, deviceName, message);
    return obj1;
}

// public static Outracks.Simulator.Protocol.DebugLog ReadDataFrom(System.IO.BinaryReader reader) [static] :348
DebugLog* DebugLog::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.DebugLog", "ReadDataFrom(System.IO.BinaryReader)");
    DebugLog_typeof()->Init();
    uString* deviceId = uPtr(reader)->ReadString();
    uString* deviceName = reader->ReadString();
    uString* message = reader->ReadString();
    return DebugLog::New2(deviceId, deviceName, message);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class Diagnostic :402
// {
// static Diagnostic() :402
static void Diagnostic__cctor__fn(uType* __type)
{
    Diagnostic::MessageType_ = ::STRINGS[7/*"Diagnostic"*/];
}

static void Diagnostic_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Diagnostic");
    ::STRINGS[8] = uString::Const("");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(Diagnostic_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _ColumnNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _Details), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _DeviceId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _DeviceName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _DiagnosticId), 0,
        ::g::Outracks::Simulator::Protocol::DiagnosticType_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _DiagnosticType), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Diagnostic, _SourceFile), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::Diagnostic::_idEnumerator_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::Diagnostic::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 10));
    type->Reflection.SetFunctions(13,
        new uFunction("get_ColumnNumber", NULL, (void*)Diagnostic__get_ColumnNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Details", NULL, (void*)Diagnostic__get_Details_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceId", NULL, (void*)Diagnostic__get_DeviceId_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceName", NULL, (void*)Diagnostic__get_DeviceName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DiagnosticId", NULL, (void*)Diagnostic__get_DiagnosticId_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_DiagnosticType", NULL, (void*)Diagnostic__get_DiagnosticType_fn, 0, false, ::g::Outracks::Simulator::Protocol::DiagnosticType_typeof(), 0),
        new uFunction("get_LineNumber", NULL, (void*)Diagnostic__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)Diagnostic__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Diagnostic__New1_fn, 0, true, type, 8, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)Diagnostic__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_SourceFile", NULL, (void*)Diagnostic__get_SourceFile_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)Diagnostic__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)Diagnostic__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

Diagnostic_type* Diagnostic_typeof()
{
    static uSStrong<Diagnostic_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Diagnostic);
    options.TypeSize = sizeof(Diagnostic_type);
    type = (Diagnostic_type*)uClassType::New("Outracks.Simulator.Protocol.Diagnostic", options);
    type->fp_build_ = Diagnostic_build;
    type->fp_cctor_ = Diagnostic__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))Diagnostic__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))Diagnostic__get_Type_fn;
    return type;
}

// public Diagnostic(string deviceId, string deviceName, string message, string details, string sourceFile, int lineNumber, int columnNumber, [int diagnosticId]) :462
void Diagnostic__ctor__fn(Diagnostic* __this, uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int* lineNumber, int* columnNumber, int* diagnosticId)
{
    __this->ctor_(deviceId, deviceName, message, details, sourceFile, *lineNumber, *columnNumber, *diagnosticId);
}

// public generated int get_ColumnNumber() :448
void Diagnostic__get_ColumnNumber_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->ColumnNumber();
}

// private generated void set_ColumnNumber(int value) :448
void Diagnostic__set_ColumnNumber_fn(Diagnostic* __this, int* value)
{
    __this->ColumnNumber(*value);
}

// public generated string get_Details() :427
void Diagnostic__get_Details_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->Details();
}

// private generated void set_Details(string value) :427
void Diagnostic__set_Details_fn(Diagnostic* __this, uString* value)
{
    __this->Details(value);
}

// public generated string get_DeviceId() :409
void Diagnostic__get_DeviceId_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->DeviceId();
}

// private generated void set_DeviceId(string value) :409
void Diagnostic__set_DeviceId_fn(Diagnostic* __this, uString* value)
{
    __this->DeviceId(value);
}

// public generated string get_DeviceName() :410
void Diagnostic__get_DeviceName_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->DeviceName();
}

// private generated void set_DeviceName(string value) :410
void Diagnostic__set_DeviceName_fn(Diagnostic* __this, uString* value)
{
    __this->DeviceName(value);
}

// public generated int get_DiagnosticId() :417
void Diagnostic__get_DiagnosticId_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->DiagnosticId();
}

// private generated void set_DiagnosticId(int value) :417
void Diagnostic__set_DiagnosticId_fn(Diagnostic* __this, int* value)
{
    __this->DiagnosticId(*value);
}

// public generated Outracks.Simulator.Protocol.DiagnosticType get_DiagnosticType() :407
void Diagnostic__get_DiagnosticType_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->DiagnosticType();
}

// private generated void set_DiagnosticType(Outracks.Simulator.Protocol.DiagnosticType value) :407
void Diagnostic__set_DiagnosticType_fn(Diagnostic* __this, int* value)
{
    __this->DiagnosticType(*value);
}

// public generated int get_LineNumber() :440
void Diagnostic__get_LineNumber_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :440
void Diagnostic__set_LineNumber_fn(Diagnostic* __this, int* value)
{
    __this->LineNumber(*value);
}

// public generated string get_Message() :422
void Diagnostic__get_Message_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :422
void Diagnostic__set_Message_fn(Diagnostic* __this, uString* value)
{
    __this->Message(value);
}

// public Diagnostic New(string deviceId, string deviceName, string message, string details, string sourceFile, int lineNumber, int columnNumber, [int diagnosticId]) :462
void Diagnostic__New1_fn(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int* lineNumber, int* columnNumber, int* diagnosticId, Diagnostic** __retval)
{
    *__retval = Diagnostic::New1(deviceId, deviceName, message, details, sourceFile, *lineNumber, *columnNumber, *diagnosticId);
}

// private static string NullIfEmpty(string s) :499
void Diagnostic__NullIfEmpty_fn(uString* s, uString** __retval)
{
    *__retval = Diagnostic::NullIfEmpty(s);
}

// public static Outracks.Simulator.Protocol.Diagnostic ReadDataFrom(System.IO.BinaryReader reader) :486
void Diagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Diagnostic** __retval)
{
    *__retval = Diagnostic::ReadDataFrom(reader);
}

// public generated string get_SourceFile() :433
void Diagnostic__get_SourceFile_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->SourceFile();
}

// private generated void set_SourceFile(string value) :433
void Diagnostic__set_SourceFile_fn(Diagnostic* __this, uString* value)
{
    __this->SourceFile(value);
}

// public string get_Type() :405
void Diagnostic__get_Type_fn(Diagnostic* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :474
void Diagnostic__WriteDataTo_fn(Diagnostic* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

int Diagnostic::_idEnumerator_;
uSStrong<uString*> Diagnostic::MessageType_;

// public Diagnostic(string deviceId, string deviceName, string message, string details, string sourceFile, int lineNumber, int columnNumber, [int diagnosticId]) [instance] :462
void Diagnostic::ctor_(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int lineNumber, int columnNumber, int diagnosticId)
{
    DeviceId(deviceId);
    DeviceName(deviceName);
    DiagnosticId((diagnosticId == -1) ? Diagnostic::_idEnumerator()++ : diagnosticId);
    Message(message);
    Details((details != NULL) ? details : ::STRINGS[8/*""*/]);
    SourceFile((sourceFile != NULL) ? sourceFile : ::STRINGS[8/*""*/]);
    LineNumber(lineNumber);
    ColumnNumber(columnNumber);
}

// public generated int get_ColumnNumber() [instance] :448
int Diagnostic::ColumnNumber()
{
    return _ColumnNumber;
}

// private generated void set_ColumnNumber(int value) [instance] :448
void Diagnostic::ColumnNumber(int value)
{
    _ColumnNumber = value;
}

// public generated string get_Details() [instance] :427
uString* Diagnostic::Details()
{
    return _Details;
}

// private generated void set_Details(string value) [instance] :427
void Diagnostic::Details(uString* value)
{
    _Details = value;
}

// public generated string get_DeviceId() [instance] :409
uString* Diagnostic::DeviceId()
{
    return _DeviceId;
}

// private generated void set_DeviceId(string value) [instance] :409
void Diagnostic::DeviceId(uString* value)
{
    _DeviceId = value;
}

// public generated string get_DeviceName() [instance] :410
uString* Diagnostic::DeviceName()
{
    return _DeviceName;
}

// private generated void set_DeviceName(string value) [instance] :410
void Diagnostic::DeviceName(uString* value)
{
    _DeviceName = value;
}

// public generated int get_DiagnosticId() [instance] :417
int Diagnostic::DiagnosticId()
{
    return _DiagnosticId;
}

// private generated void set_DiagnosticId(int value) [instance] :417
void Diagnostic::DiagnosticId(int value)
{
    _DiagnosticId = value;
}

// public generated Outracks.Simulator.Protocol.DiagnosticType get_DiagnosticType() [instance] :407
int Diagnostic::DiagnosticType()
{
    return _DiagnosticType;
}

// private generated void set_DiagnosticType(Outracks.Simulator.Protocol.DiagnosticType value) [instance] :407
void Diagnostic::DiagnosticType(int value)
{
    _DiagnosticType = value;
}

// public generated int get_LineNumber() [instance] :440
int Diagnostic::LineNumber()
{
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :440
void Diagnostic::LineNumber(int value)
{
    _LineNumber = value;
}

// public generated string get_Message() [instance] :422
uString* Diagnostic::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :422
void Diagnostic::Message(uString* value)
{
    _Message = value;
}

// public generated string get_SourceFile() [instance] :433
uString* Diagnostic::SourceFile()
{
    return _SourceFile;
}

// private generated void set_SourceFile(string value) [instance] :433
void Diagnostic::SourceFile(uString* value)
{
    _SourceFile = value;
}

// public string get_Type() [instance] :405
uString* Diagnostic::Type()
{
    return Diagnostic::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :474
void Diagnostic::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.Diagnostic", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(DeviceId());
    writer->Write6(DeviceName());
    writer->Write6(Message());
    writer->Write6(Details());
    writer->Write6(SourceFile());
    writer->Write5(LineNumber());
    writer->Write5(ColumnNumber());
    writer->Write5(DiagnosticId());
}

// public Diagnostic New(string deviceId, string deviceName, string message, string details, string sourceFile, int lineNumber, int columnNumber, [int diagnosticId]) [static] :462
Diagnostic* Diagnostic::New1(uString* deviceId, uString* deviceName, uString* message, uString* details, uString* sourceFile, int lineNumber, int columnNumber, int diagnosticId)
{
    Diagnostic* obj1 = (Diagnostic*)uNew(Diagnostic_typeof());
    obj1->ctor_(deviceId, deviceName, message, details, sourceFile, lineNumber, columnNumber, diagnosticId);
    return obj1;
}

// private static string NullIfEmpty(string s) [static] :499
uString* Diagnostic::NullIfEmpty(uString* s)
{
    Diagnostic_typeof()->Init();

    if (::g::Uno::String::IsNullOrEmpty(s))
        return NULL;

    return s;
}

// public static Outracks.Simulator.Protocol.Diagnostic ReadDataFrom(System.IO.BinaryReader reader) [static] :486
Diagnostic* Diagnostic::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.Diagnostic", "ReadDataFrom(System.IO.BinaryReader)");
    Diagnostic_typeof()->Init();
    uString* deviceId = uPtr(reader)->ReadString();
    uString* deviceName = reader->ReadString();
    uString* message = reader->ReadString();
    uString* details = Diagnostic::NullIfEmpty(reader->ReadString());
    uString* sourceFile = Diagnostic::NullIfEmpty(reader->ReadString());
    int lineNumber = reader->ReadInt32();
    int columnNumber = reader->ReadInt32();
    int diagnosticId = reader->ReadInt32();
    return Diagnostic::New1(deviceId, deviceName, message, details, sourceFile, lineNumber, columnNumber, diagnosticId);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public enum DiagnosticType :392
uEnumType* DiagnosticType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.Protocol.DiagnosticType", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Error", 0LL,
        "Warning", 1LL,
        "InternalError", 2LL,
        "Deprecated", 3LL,
        "Unsupported", 4LL,
        "PerformanceWarning", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class DismissDiagnostic :506
// {
// static DismissDiagnostic() :506
static void DismissDiagnostic__cctor__fn(uType* __type)
{
    DismissDiagnostic::MessageType_ = ::STRINGS[9/*"DismissDiag...*/];
}

static void DismissDiagnostic_build(uType* type)
{
    ::STRINGS[9] = uString::Const("DismissDiagnostic");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(DismissDiagnostic_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DismissDiagnostic, _DeviceId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DismissDiagnostic, _DeviceName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DismissDiagnostic, _DiagnosticId), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::DismissDiagnostic::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 3));
    type->Reflection.SetFunctions(7,
        new uFunction("get_DeviceId", NULL, (void*)DismissDiagnostic__get_DeviceId_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceName", NULL, (void*)DismissDiagnostic__get_DeviceName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DiagnosticId", NULL, (void*)DismissDiagnostic__get_DiagnosticId_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DismissDiagnostic__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)DismissDiagnostic__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)DismissDiagnostic__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)DismissDiagnostic__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

DismissDiagnostic_type* DismissDiagnostic_typeof()
{
    static uSStrong<DismissDiagnostic_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DismissDiagnostic);
    options.TypeSize = sizeof(DismissDiagnostic_type);
    type = (DismissDiagnostic_type*)uClassType::New("Outracks.Simulator.Protocol.DismissDiagnostic", options);
    type->fp_build_ = DismissDiagnostic_build;
    type->fp_cctor_ = DismissDiagnostic__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))DismissDiagnostic__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))DismissDiagnostic__get_Type_fn;
    return type;
}

// public DismissDiagnostic(string deviceId, string deviceName, int diagnosticId) :519
void DismissDiagnostic__ctor__fn(DismissDiagnostic* __this, uString* deviceId, uString* deviceName, int* diagnosticId)
{
    __this->ctor_(deviceId, deviceName, *diagnosticId);
}

// public generated string get_DeviceId() :511
void DismissDiagnostic__get_DeviceId_fn(DismissDiagnostic* __this, uString** __retval)
{
    *__retval = __this->DeviceId();
}

// private generated void set_DeviceId(string value) :511
void DismissDiagnostic__set_DeviceId_fn(DismissDiagnostic* __this, uString* value)
{
    __this->DeviceId(value);
}

// public generated string get_DeviceName() :512
void DismissDiagnostic__get_DeviceName_fn(DismissDiagnostic* __this, uString** __retval)
{
    *__retval = __this->DeviceName();
}

// private generated void set_DeviceName(string value) :512
void DismissDiagnostic__set_DeviceName_fn(DismissDiagnostic* __this, uString* value)
{
    __this->DeviceName(value);
}

// public generated int get_DiagnosticId() :517
void DismissDiagnostic__get_DiagnosticId_fn(DismissDiagnostic* __this, int* __retval)
{
    *__retval = __this->DiagnosticId();
}

// private generated void set_DiagnosticId(int value) :517
void DismissDiagnostic__set_DiagnosticId_fn(DismissDiagnostic* __this, int* value)
{
    __this->DiagnosticId(*value);
}

// public DismissDiagnostic New(string deviceId, string deviceName, int diagnosticId) :519
void DismissDiagnostic__New1_fn(uString* deviceId, uString* deviceName, int* diagnosticId, DismissDiagnostic** __retval)
{
    *__retval = DismissDiagnostic::New1(deviceId, deviceName, *diagnosticId);
}

// public static Outracks.Simulator.Protocol.DismissDiagnostic ReadDataFrom(System.IO.BinaryReader reader) :533
void DismissDiagnostic__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, DismissDiagnostic** __retval)
{
    *__retval = DismissDiagnostic::ReadDataFrom(reader);
}

// public string get_Type() :509
void DismissDiagnostic__get_Type_fn(DismissDiagnostic* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :526
void DismissDiagnostic__WriteDataTo_fn(DismissDiagnostic* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> DismissDiagnostic::MessageType_;

// public DismissDiagnostic(string deviceId, string deviceName, int diagnosticId) [instance] :519
void DismissDiagnostic::ctor_(uString* deviceId, uString* deviceName, int diagnosticId)
{
    DeviceId(deviceId);
    DeviceName(deviceName);
    DiagnosticId(diagnosticId);
}

// public generated string get_DeviceId() [instance] :511
uString* DismissDiagnostic::DeviceId()
{
    return _DeviceId;
}

// private generated void set_DeviceId(string value) [instance] :511
void DismissDiagnostic::DeviceId(uString* value)
{
    _DeviceId = value;
}

// public generated string get_DeviceName() [instance] :512
uString* DismissDiagnostic::DeviceName()
{
    return _DeviceName;
}

// private generated void set_DeviceName(string value) [instance] :512
void DismissDiagnostic::DeviceName(uString* value)
{
    _DeviceName = value;
}

// public generated int get_DiagnosticId() [instance] :517
int DismissDiagnostic::DiagnosticId()
{
    return _DiagnosticId;
}

// private generated void set_DiagnosticId(int value) [instance] :517
void DismissDiagnostic::DiagnosticId(int value)
{
    _DiagnosticId = value;
}

// public string get_Type() [instance] :509
uString* DismissDiagnostic::Type()
{
    return DismissDiagnostic::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :526
void DismissDiagnostic::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.DismissDiagnostic", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(DeviceId());
    writer->Write6(DeviceName());
    writer->Write5(DiagnosticId());
}

// public DismissDiagnostic New(string deviceId, string deviceName, int diagnosticId) [static] :519
DismissDiagnostic* DismissDiagnostic::New1(uString* deviceId, uString* deviceName, int diagnosticId)
{
    DismissDiagnostic* obj1 = (DismissDiagnostic*)uNew(DismissDiagnostic_typeof());
    obj1->ctor_(deviceId, deviceName, diagnosticId);
    return obj1;
}

// public static Outracks.Simulator.Protocol.DismissDiagnostic ReadDataFrom(System.IO.BinaryReader reader) [static] :533
DismissDiagnostic* DismissDiagnostic::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.DismissDiagnostic", "ReadDataFrom(System.IO.BinaryReader)");
    DismissDiagnostic_typeof()->Init();
    uString* deviceId = uPtr(reader)->ReadString();
    uString* deviceName = reader->ReadString();
    int diagnosticId = reader->ReadInt32();
    return DismissDiagnostic::New1(deviceId, deviceName, diagnosticId);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class Error :551
// {
// static Error() :551
static void Error__cctor__fn(uType* __type)
{
    Error::MessageType_ = ::STRINGS[10/*"Error"*/];
}

static void Error_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Error");
    ::STRINGS[11] = uString::Const("Read Error");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno");
    ::STRINGS[13] = uString::Const("Error: ");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(Error_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Error, _Exception), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::Error::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 1));
    type->Reflection.SetFunctions(5,
        new uFunction("get_Exception", NULL, (void*)Error__get_Exception_fn, 0, false, ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Error__New2_fn, 0, true, type, 1, ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)Error__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)Error__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)Error__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

Error_type* Error_typeof()
{
    static uSStrong<Error_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(Error_type);
    type = (Error_type*)uClassType::New("Outracks.Simulator.Protocol.Error", options);
    type->fp_build_ = Error_build;
    type->fp_ctor_ = (void*)Error__New1_fn;
    type->fp_cctor_ = Error__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Error__ToString_fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))Error__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))Error__get_Type_fn;
    return type;
}

// private Error() :563
void Error__ctor__fn(Error* __this)
{
    __this->ctor_();
}

// public Error(Outracks.Simulator.Protocol.ExceptionInfo exception) :559
void Error__ctor_1_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_1(exception);
}

// public generated Outracks.Simulator.Protocol.ExceptionInfo get_Exception() :557
void Error__get_Exception_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Outracks.Simulator.Protocol.ExceptionInfo value) :557
void Error__set_Exception_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* value)
{
    __this->Exception(value);
}

// private Error New() :563
void Error__New1_fn(Error** __retval)
{
    *__retval = Error::New1();
}

// public Error New(Outracks.Simulator.Protocol.ExceptionInfo exception) :559
void Error__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, Error** __retval)
{
    *__retval = Error::New2(exception);
}

// public static Outracks.Simulator.Protocol.Error ReadDataFrom(System.IO.BinaryReader reader) :570
void Error__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Error** __retval)
{
    *__retval = Error::ReadDataFrom(reader);
}

// public override sealed string ToString() :578
void Error__ToString_fn(Error* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[13/*"Error: "*/], uPtr(uPtr(__this->Exception())->Message)->ToString()), void();
}

// public string get_Type() :555
void Error__get_Type_fn(Error* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :565
void Error__WriteDataTo_fn(Error* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> Error::MessageType_;

// private Error() [instance] :563
void Error::ctor_()
{
}

// public Error(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :559
void Error::ctor_1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    Exception(exception);
}

// public generated Outracks.Simulator.Protocol.ExceptionInfo get_Exception() [instance] :557
::g::Outracks::Simulator::Protocol::ExceptionInfo* Error::Exception()
{
    return _Exception;
}

// private generated void set_Exception(Outracks.Simulator.Protocol.ExceptionInfo value) [instance] :557
void Error::Exception(::g::Outracks::Simulator::Protocol::ExceptionInfo* value)
{
    _Exception = value;
}

// public string get_Type() [instance] :555
uString* Error::Type()
{
    return Error::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :565
void Error::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Protocol::ExceptionInfo::Write(Exception(), writer);
}

// private Error New() [static] :563
Error* Error::New1()
{
    Error* obj2 = (Error*)uNew(Error_typeof());
    obj2->ctor_();
    return obj2;
}

// public Error New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :559
Error* Error::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_1(exception);
    return obj1;
}

// public static Outracks.Simulator.Protocol.Error ReadDataFrom(System.IO.BinaryReader reader) [static] :570
Error* Error::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "ReadDataFrom(System.IO.BinaryReader)");
    Error_typeof()->Init();
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[11/*"Read Error"*/], 1, ::STRINGS[12/*"/usr/local/...*/], 572);
    ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception = ::g::Outracks::Simulator::Protocol::ExceptionInfo::Read(reader);
    return Error::New2(exception);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class ExceptionInfo :593
// {
static void ExceptionInfo_build(uType* type)
{
    ::TYPES[4] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type, NULL);
    ::TYPES[5] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Protocol.ExceptionInfo>*/, type, NULL);
    ::TYPES[6] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[7] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Protocol.ExceptionInfo>*/, type, NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/], offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, InnerExceptions), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, StackTrace), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, Type), 0);
    type->Reflection.SetFields(4,
        new uField("InnerExceptions", 0),
        new uField("Message", 1),
        new uField("StackTrace", 2),
        new uField("Type", 3));
    type->Reflection.SetFunctions(4,
        new uFunction("Capture", NULL, (void*)ExceptionInfo__Capture_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()),
        new uFunction(".ctor", NULL, (void*)ExceptionInfo__New1_fn, 0, true, type, 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::TYPES[4/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/]),
        new uFunction("Read", NULL, (void*)ExceptionInfo__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ExceptionInfo__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* ExceptionInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ExceptionInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.ExceptionInfo", options);
    type->fp_build_ = ExceptionInfo_build;
    return type;
}

// public ExceptionInfo(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) :600
void ExceptionInfo__ctor__fn(ExceptionInfo* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    __this->ctor_(type, message, stackTrace, innerExceptions);
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Capture(Uno.Exception e) :611
void ExceptionInfo__Capture_fn(::g::Uno::Exception* e, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::Capture(e);
}

// public ExceptionInfo New(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) :600
void ExceptionInfo__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::New1(type, message, stackTrace, innerExceptions);
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Read(System.IO.BinaryReader reader) :632
void ExceptionInfo__Read_fn(::g::System::IO::BinaryReader* reader, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::Read(reader);
}

// public static void Write(Outracks.Simulator.Protocol.ExceptionInfo e, System.IO.BinaryWriter writer) :624
void ExceptionInfo__Write_fn(ExceptionInfo* e, ::g::System::IO::BinaryWriter* writer)
{
    ExceptionInfo::Write(e, writer);
}

// public ExceptionInfo(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) [instance] :600
void ExceptionInfo::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    Type = type;
    Message = message;
    StackTrace = stackTrace;
    InnerExceptions = innerExceptions;
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Capture(Uno.Exception e) [static] :611
ExceptionInfo* ExceptionInfo::Capture(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Capture(Uno.Exception)");
    return ExceptionInfo::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(uPtr(::g::Uno::Object::GetType(uPtr(e)))->ToString()), uPtr(e)->Message(), uPtr(e)->StackTrace(), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[4/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/]));
}

// public ExceptionInfo New(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) [static] :600
ExceptionInfo* ExceptionInfo::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    ExceptionInfo* obj1 = (ExceptionInfo*)uNew(ExceptionInfo_typeof());
    obj1->ctor_(type, message, stackTrace, innerExceptions);
    return obj1;
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Read(System.IO.BinaryReader reader) [static] :632
ExceptionInfo* ExceptionInfo::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::TypeName* type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    uString* message = uPtr(reader)->ReadString();
    uString* stackTrace = reader->ReadString();
    ::g::Outracks::Simulator::ImmutableList* innerExceptions = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[5/*Outracks.Simulator.List.Read<Outracks.Simulator.Protocol.ExceptionInfo>*/], reader, uDelegate::New(::TYPES[6/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.ExceptionInfo>*/], (void*)ExceptionInfo__Read_fn));
    return ExceptionInfo::New1(type, message, stackTrace, innerExceptions);
}

// public static void Write(Outracks.Simulator.Protocol.ExceptionInfo e, System.IO.BinaryWriter writer) [static] :624
void ExceptionInfo::Write(ExceptionInfo* e, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Write(Outracks.Simulator.Protocol.ExceptionInfo,System.IO.BinaryWriter)");
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(e)->Type, writer);
    uPtr(writer)->Write6(e->Message);
    writer->Write6(e->StackTrace);
    ::g::Outracks::Simulator::List::Write1(::TYPES[7/*Outracks.Simulator.List.Write<Outracks.Simulator.Protocol.ExceptionInfo>*/], writer, e->InnerExceptions, uDelegate::New(::TYPES[8/*Uno.Action<Outracks.Simulator.Protocol.ExceptionInfo, System.IO.BinaryWriter>*/], (void*)ExceptionInfo__Write_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class GenerateBytecode :651
// {
// static GenerateBytecode() :651
static void GenerateBytecode__cctor__fn(uType* __type)
{
    GenerateBytecode::MessageType_ = ::STRINGS[14/*"GenerateByt...*/];
}

static void GenerateBytecode_build(uType* type)
{
    ::STRINGS[14] = uString::Const("GenerateBytecode");
    ::TYPES[9] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Protocol.UxFileContents>*/, ::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL);
    ::TYPES[11] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(6/*Write<Outracks.Simulator.Protocol.UxFileContents>*/, ::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action2_typeof()->MakeType(::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), ::g::System::IO::BinaryWriter_typeof(), NULL);
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(GenerateBytecode_type, interface0));
    type->SetFields(0,
        ::g::Uno::Guid_typeof(), offsetof(::g::Outracks::Simulator::Protocol::GenerateBytecode, _Id), 0,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL), offsetof(::g::Outracks::Simulator::Protocol::GenerateBytecode, _UxFiles), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::GenerateBytecode::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 2));
    type->Reflection.SetFunctions(6,
        new uFunction("get_Id", NULL, (void*)GenerateBytecode__get_Id_fn, 0, false, ::g::Uno::Guid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GenerateBytecode__New1_fn, 0, true, type, 2, ::g::Uno::Guid_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL)),
        new uFunction("ReadDataFrom", NULL, (void*)GenerateBytecode__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)GenerateBytecode__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_UxFiles", NULL, (void*)GenerateBytecode__get_UxFiles_fn, 0, false, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Protocol::UxFileContents_typeof(), NULL), 0),
        new uFunction("WriteDataTo", NULL, (void*)GenerateBytecode__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

GenerateBytecode_type* GenerateBytecode_typeof()
{
    static uSStrong<GenerateBytecode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GenerateBytecode);
    options.TypeSize = sizeof(GenerateBytecode_type);
    type = (GenerateBytecode_type*)uClassType::New("Outracks.Simulator.Protocol.GenerateBytecode", options);
    type->fp_build_ = GenerateBytecode_build;
    type->fp_cctor_ = GenerateBytecode__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))GenerateBytecode__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))GenerateBytecode__get_Type_fn;
    return type;
}

// public GenerateBytecode(Uno.Guid id, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> uxFiles) :659
void GenerateBytecode__ctor__fn(GenerateBytecode* __this, ::g::Uno::Guid* id, ::g::Outracks::Simulator::ImmutableList* uxFiles)
{
    __this->ctor_(*id, uxFiles);
}

// public generated Uno.Guid get_Id() :656
void GenerateBytecode__get_Id_fn(GenerateBytecode* __this, ::g::Uno::Guid* __retval)
{
    *__retval = __this->Id();
}

// private generated void set_Id(Uno.Guid value) :656
void GenerateBytecode__set_Id_fn(GenerateBytecode* __this, ::g::Uno::Guid* value)
{
    __this->Id(*value);
}

// public GenerateBytecode New(Uno.Guid id, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> uxFiles) :659
void GenerateBytecode__New1_fn(::g::Uno::Guid* id, ::g::Outracks::Simulator::ImmutableList* uxFiles, GenerateBytecode** __retval)
{
    *__retval = GenerateBytecode::New1(*id, uxFiles);
}

// public static Outracks.Simulator.Protocol.GenerateBytecode ReadDataFrom(System.IO.BinaryReader reader) :671
void GenerateBytecode__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, GenerateBytecode** __retval)
{
    *__retval = GenerateBytecode::ReadDataFrom(reader);
}

// public string get_Type() :654
void GenerateBytecode__get_Type_fn(GenerateBytecode* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public generated Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> get_UxFiles() :657
void GenerateBytecode__get_UxFiles_fn(GenerateBytecode* __this, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = __this->UxFiles();
}

// private generated void set_UxFiles(Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> value) :657
void GenerateBytecode__set_UxFiles_fn(GenerateBytecode* __this, ::g::Outracks::Simulator::ImmutableList* value)
{
    __this->UxFiles(value);
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :665
void GenerateBytecode__WriteDataTo_fn(GenerateBytecode* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> GenerateBytecode::MessageType_;

// public GenerateBytecode(Uno.Guid id, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> uxFiles) [instance] :659
void GenerateBytecode::ctor_(::g::Uno::Guid id, ::g::Outracks::Simulator::ImmutableList* uxFiles)
{
    Id(id);
    UxFiles(uxFiles);
}

// public generated Uno.Guid get_Id() [instance] :656
::g::Uno::Guid GenerateBytecode::Id()
{
    return _Id;
}

// private generated void set_Id(Uno.Guid value) [instance] :656
void GenerateBytecode::Id(::g::Uno::Guid value)
{
    _Id = value;
}

// public string get_Type() [instance] :654
uString* GenerateBytecode::Type()
{
    return GenerateBytecode::MessageType();
}

// public generated Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> get_UxFiles() [instance] :657
::g::Outracks::Simulator::ImmutableList* GenerateBytecode::UxFiles()
{
    return _UxFiles;
}

// private generated void set_UxFiles(Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> value) [instance] :657
void GenerateBytecode::UxFiles(::g::Outracks::Simulator::ImmutableList* value)
{
    _UxFiles = value;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :665
void GenerateBytecode::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.GenerateBytecode", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::GuidSerializer::WriteGuid(writer, Id());
    ::g::Outracks::Simulator::List::Write1(::TYPES[11/*Outracks.Simulator.List.Write<Outracks.Simulator.Protocol.UxFileContents>*/], writer, UxFiles(), uDelegate::New(::TYPES[12/*Uno.Action<Outracks.Simulator.Protocol.UxFileContents, System.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::UxFileContents__Write_fn));
}

// public GenerateBytecode New(Uno.Guid id, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.UxFileContents> uxFiles) [static] :659
GenerateBytecode* GenerateBytecode::New1(::g::Uno::Guid id, ::g::Outracks::Simulator::ImmutableList* uxFiles)
{
    GenerateBytecode* obj1 = (GenerateBytecode*)uNew(GenerateBytecode_typeof());
    obj1->ctor_(id, uxFiles);
    return obj1;
}

// public static Outracks.Simulator.Protocol.GenerateBytecode ReadDataFrom(System.IO.BinaryReader reader) [static] :671
GenerateBytecode* GenerateBytecode::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.GenerateBytecode", "ReadDataFrom(System.IO.BinaryReader)");
    GenerateBytecode_typeof()->Init();
    ::g::Uno::Guid id = ::g::Outracks::Simulator::GuidSerializer::ReadGuid(reader);
    ::g::Outracks::Simulator::ImmutableList* uxFiles = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[9/*Outracks.Simulator.List.Read<Outracks.Simulator.Protocol.UxFileContents>*/], reader, uDelegate::New(::TYPES[10/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.UxFileContents>*/], (void*)::g::Outracks::Simulator::Protocol::UxFileContents__Read_fn));
    return GenerateBytecode::New1(id, uxFiles);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class Ready :713
// {
// static Ready() :713
static void Ready__cctor__fn(uType* __type)
{
    Ready::MessageType_ = ::STRINGS[15/*"Ready"*/];
}

static void Ready_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Ready");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(Ready_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::Ready::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 0));
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Ready__New1_fn, 0, true, type, 0),
        new uFunction("ReadDataFrom", NULL, (void*)Ready__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)Ready__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)Ready__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

Ready_type* Ready_typeof()
{
    static uSStrong<Ready_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Ready);
    options.TypeSize = sizeof(Ready_type);
    type = (Ready_type*)uClassType::New("Outracks.Simulator.Protocol.Ready", options);
    type->fp_build_ = Ready_build;
    type->fp_ctor_ = (void*)Ready__New1_fn;
    type->fp_cctor_ = Ready__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))Ready__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))Ready__get_Type_fn;
    return type;
}

// public generated Ready() :713
void Ready__ctor__fn(Ready* __this)
{
    __this->ctor_();
}

// public generated Ready New() :713
void Ready__New1_fn(Ready** __retval)
{
    *__retval = Ready::New1();
}

// public static Outracks.Simulator.Protocol.Ready ReadDataFrom(System.IO.BinaryReader reader) :723
void Ready__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, Ready** __retval)
{
    *__retval = Ready::ReadDataFrom(reader);
}

// public string get_Type() :717
void Ready__get_Type_fn(Ready* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :719
void Ready__WriteDataTo_fn(Ready* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> Ready::MessageType_;

// public generated Ready() [instance] :713
void Ready::ctor_()
{
}

// public string get_Type() [instance] :717
uString* Ready::Type()
{
    return Ready::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :719
void Ready::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
}

// public generated Ready New() [static] :713
Ready* Ready::New1()
{
    Ready* obj1 = (Ready*)uNew(Ready_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Outracks.Simulator.Protocol.Ready ReadDataFrom(System.IO.BinaryReader reader) [static] :723
Ready* Ready::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    Ready_typeof()->Init();
    return Ready::New1();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class RegisterName :729
// {
// static RegisterName() :729
static void RegisterName__cctor__fn(uType* __type)
{
    RegisterName::MessageType_ = ::STRINGS[16/*"RegisterName"*/];
}

static void RegisterName_build(uType* type)
{
    ::STRINGS[16] = uString::Const("RegisterName");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(RegisterName_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::RegisterName, _DeviceId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::RegisterName, _DeviceName), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::RegisterName::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 2));
    type->Reflection.SetFunctions(6,
        new uFunction("get_DeviceId", NULL, (void*)RegisterName__get_DeviceId_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceName", NULL, (void*)RegisterName__get_DeviceName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)RegisterName__New2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)RegisterName__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)RegisterName__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)RegisterName__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

RegisterName_type* RegisterName_typeof()
{
    static uSStrong<RegisterName_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RegisterName);
    options.TypeSize = sizeof(RegisterName_type);
    type = (RegisterName_type*)uClassType::New("Outracks.Simulator.Protocol.RegisterName", options);
    type->fp_build_ = RegisterName_build;
    type->fp_ctor_ = (void*)RegisterName__New1_fn;
    type->fp_cctor_ = RegisterName__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))RegisterName__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))RegisterName__get_Type_fn;
    return type;
}

// private RegisterName() :744
void RegisterName__ctor__fn(RegisterName* __this)
{
    __this->ctor_();
}

// public RegisterName(string deviceId, string deviceName) :738
void RegisterName__ctor_1_fn(RegisterName* __this, uString* deviceId, uString* deviceName)
{
    __this->ctor_1(deviceId, deviceName);
}

// public generated string get_DeviceId() :735
void RegisterName__get_DeviceId_fn(RegisterName* __this, uString** __retval)
{
    *__retval = __this->DeviceId();
}

// private generated void set_DeviceId(string value) :735
void RegisterName__set_DeviceId_fn(RegisterName* __this, uString* value)
{
    __this->DeviceId(value);
}

// public generated string get_DeviceName() :736
void RegisterName__get_DeviceName_fn(RegisterName* __this, uString** __retval)
{
    *__retval = __this->DeviceName();
}

// private generated void set_DeviceName(string value) :736
void RegisterName__set_DeviceName_fn(RegisterName* __this, uString* value)
{
    __this->DeviceName(value);
}

// private RegisterName New() :744
void RegisterName__New1_fn(RegisterName** __retval)
{
    *__retval = RegisterName::New1();
}

// public RegisterName New(string deviceId, string deviceName) :738
void RegisterName__New2_fn(uString* deviceId, uString* deviceName, RegisterName** __retval)
{
    *__retval = RegisterName::New2(deviceId, deviceName);
}

// public static Outracks.Simulator.Protocol.RegisterName ReadDataFrom(System.IO.BinaryReader reader) :752
void RegisterName__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, RegisterName** __retval)
{
    *__retval = RegisterName::ReadDataFrom(reader);
}

// public string get_Type() :733
void RegisterName__get_Type_fn(RegisterName* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :746
void RegisterName__WriteDataTo_fn(RegisterName* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> RegisterName::MessageType_;

// private RegisterName() [instance] :744
void RegisterName::ctor_()
{
}

// public RegisterName(string deviceId, string deviceName) [instance] :738
void RegisterName::ctor_1(uString* deviceId, uString* deviceName)
{
    DeviceId(deviceId);
    DeviceName(deviceName);
}

// public generated string get_DeviceId() [instance] :735
uString* RegisterName::DeviceId()
{
    return _DeviceId;
}

// private generated void set_DeviceId(string value) [instance] :735
void RegisterName::DeviceId(uString* value)
{
    _DeviceId = value;
}

// public generated string get_DeviceName() [instance] :736
uString* RegisterName::DeviceName()
{
    return _DeviceName;
}

// private generated void set_DeviceName(string value) [instance] :736
void RegisterName::DeviceName(uString* value)
{
    _DeviceName = value;
}

// public string get_Type() [instance] :733
uString* RegisterName::Type()
{
    return RegisterName::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :746
void RegisterName::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.RegisterName", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(DeviceId());
    writer->Write6(DeviceName());
}

// private RegisterName New() [static] :744
RegisterName* RegisterName::New1()
{
    RegisterName* obj2 = (RegisterName*)uNew(RegisterName_typeof());
    obj2->ctor_();
    return obj2;
}

// public RegisterName New(string deviceId, string deviceName) [static] :738
RegisterName* RegisterName::New2(uString* deviceId, uString* deviceName)
{
    RegisterName* obj1 = (RegisterName*)uNew(RegisterName_typeof());
    obj1->ctor_1(deviceId, deviceName);
    return obj1;
}

// public static Outracks.Simulator.Protocol.RegisterName ReadDataFrom(System.IO.BinaryReader reader) [static] :752
RegisterName* RegisterName::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.RegisterName", "ReadDataFrom(System.IO.BinaryReader)");
    RegisterName_typeof()->Init();
    uString* deviceId = uPtr(reader)->ReadString();
    uString* deviceName = reader->ReadString();
    return RegisterName::New2(deviceId, deviceName);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class TriggerProgress :358
// {
// static TriggerProgress() :358
static void TriggerProgress__cctor__fn(uType* __type)
{
    TriggerProgress::MessageType_ = ::STRINGS[17/*"TriggerProg...*/];
}

static void TriggerProgress_build(uType* type)
{
    ::STRINGS[17] = uString::Const("TriggerProgress");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(TriggerProgress_type, interface0));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Outracks::Simulator::Protocol::TriggerProgress, _Progress), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::TriggerProgress::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 1));
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)TriggerProgress__New2_fn, 0, true, type, 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)TriggerProgress__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ReadDataFrom", NULL, (void*)TriggerProgress__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Type", NULL, (void*)TriggerProgress__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)TriggerProgress__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

TriggerProgress_type* TriggerProgress_typeof()
{
    static uSStrong<TriggerProgress_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerProgress);
    options.TypeSize = sizeof(TriggerProgress_type);
    type = (TriggerProgress_type*)uClassType::New("Outracks.Simulator.Protocol.TriggerProgress", options);
    type->fp_build_ = TriggerProgress_build;
    type->fp_ctor_ = (void*)TriggerProgress__New1_fn;
    type->fp_cctor_ = TriggerProgress__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))TriggerProgress__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))TriggerProgress__get_Type_fn;
    return type;
}

// private TriggerProgress() :369
void TriggerProgress__ctor__fn(TriggerProgress* __this)
{
    __this->ctor_();
}

// public TriggerProgress(double progress) :365
void TriggerProgress__ctor_1_fn(TriggerProgress* __this, double* progress)
{
    __this->ctor_1(*progress);
}

// private TriggerProgress New() :369
void TriggerProgress__New1_fn(TriggerProgress** __retval)
{
    *__retval = TriggerProgress::New1();
}

// public TriggerProgress New(double progress) :365
void TriggerProgress__New2_fn(double* progress, TriggerProgress** __retval)
{
    *__retval = TriggerProgress::New2(*progress);
}

// public generated double get_Progress() :363
void TriggerProgress__get_Progress_fn(TriggerProgress* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :363
void TriggerProgress__set_Progress_fn(TriggerProgress* __this, double* value)
{
    __this->Progress(*value);
}

// public static Outracks.Simulator.Protocol.TriggerProgress ReadDataFrom(System.IO.BinaryReader reader) :376
void TriggerProgress__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, TriggerProgress** __retval)
{
    *__retval = TriggerProgress::ReadDataFrom(reader);
}

// public string get_Type() :362
void TriggerProgress__get_Type_fn(TriggerProgress* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :371
void TriggerProgress__WriteDataTo_fn(TriggerProgress* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> TriggerProgress::MessageType_;

// private TriggerProgress() [instance] :369
void TriggerProgress::ctor_()
{
}

// public TriggerProgress(double progress) [instance] :365
void TriggerProgress::ctor_1(double progress)
{
    Progress(progress);
}

// public generated double get_Progress() [instance] :363
double TriggerProgress::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :363
void TriggerProgress::Progress(double value)
{
    _Progress = value;
}

// public string get_Type() [instance] :362
uString* TriggerProgress::Type()
{
    return TriggerProgress::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :371
void TriggerProgress::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.TriggerProgress", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write3(Progress());
}

// private TriggerProgress New() [static] :369
TriggerProgress* TriggerProgress::New1()
{
    TriggerProgress* obj2 = (TriggerProgress*)uNew(TriggerProgress_typeof());
    obj2->ctor_();
    return obj2;
}

// public TriggerProgress New(double progress) [static] :365
TriggerProgress* TriggerProgress::New2(double progress)
{
    TriggerProgress* obj1 = (TriggerProgress*)uNew(TriggerProgress_typeof());
    obj1->ctor_1(progress);
    return obj1;
}

// public static Outracks.Simulator.Protocol.TriggerProgress ReadDataFrom(System.IO.BinaryReader reader) [static] :376
TriggerProgress* TriggerProgress::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.TriggerProgress", "ReadDataFrom(System.IO.BinaryReader)");
    TriggerProgress_typeof()->Init();
    double progress = uPtr(reader)->ReadDouble();
    return TriggerProgress::New2(progress);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class UnhandledException :771
// {
// static UnhandledException() :771
static void UnhandledException__cctor__fn(uType* __type)
{
    UnhandledException::MessageType_ = ::STRINGS[18/*"UnhandledEx...*/];
}

static void UnhandledException_build(uType* type)
{
    ::STRINGS[18] = uString::Const("UnhandledException");
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(UnhandledException_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, _DeviceId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, _DeviceName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, _ExceptionType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, _Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, _StackTrace), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::UnhandledException::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 5));
    type->Reflection.SetFunctions(9,
        new uFunction("get_DeviceId", NULL, (void*)UnhandledException__get_DeviceId_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_DeviceName", NULL, (void*)UnhandledException__get_DeviceName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_ExceptionType", NULL, (void*)UnhandledException__get_ExceptionType_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)UnhandledException__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UnhandledException__New2_fn, 0, true, type, 5, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("ReadDataFrom", NULL, (void*)UnhandledException__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_StackTrace", NULL, (void*)UnhandledException__get_StackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)UnhandledException__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("WriteDataTo", NULL, (void*)UnhandledException__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

UnhandledException_type* UnhandledException_typeof()
{
    static uSStrong<UnhandledException_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnhandledException);
    options.TypeSize = sizeof(UnhandledException_type);
    type = (UnhandledException_type*)uClassType::New("Outracks.Simulator.Protocol.UnhandledException", options);
    type->fp_build_ = UnhandledException_build;
    type->fp_ctor_ = (void*)UnhandledException__New1_fn;
    type->fp_cctor_ = UnhandledException__cctor__fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))UnhandledException__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))UnhandledException__get_Type_fn;
    return type;
}

// private UnhandledException() :796
void UnhandledException__ctor__fn(UnhandledException* __this)
{
    __this->ctor_();
}

// public UnhandledException(string deviceId, string deviceName, string message, string stackTrace, string type) :783
void UnhandledException__ctor_1_fn(UnhandledException* __this, uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type)
{
    __this->ctor_1(deviceId, deviceName, message, stackTrace, type);
}

// public generated string get_DeviceId() :777
void UnhandledException__get_DeviceId_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->DeviceId();
}

// private generated void set_DeviceId(string value) :777
void UnhandledException__set_DeviceId_fn(UnhandledException* __this, uString* value)
{
    __this->DeviceId(value);
}

// public generated string get_DeviceName() :778
void UnhandledException__get_DeviceName_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->DeviceName();
}

// private generated void set_DeviceName(string value) :778
void UnhandledException__set_DeviceName_fn(UnhandledException* __this, uString* value)
{
    __this->DeviceName(value);
}

// public generated string get_ExceptionType() :781
void UnhandledException__get_ExceptionType_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->ExceptionType();
}

// private generated void set_ExceptionType(string value) :781
void UnhandledException__set_ExceptionType_fn(UnhandledException* __this, uString* value)
{
    __this->ExceptionType(value);
}

// public generated string get_Message() :779
void UnhandledException__get_Message_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :779
void UnhandledException__set_Message_fn(UnhandledException* __this, uString* value)
{
    __this->Message(value);
}

// private UnhandledException New() :796
void UnhandledException__New1_fn(UnhandledException** __retval)
{
    *__retval = UnhandledException::New1();
}

// public UnhandledException New(string deviceId, string deviceName, string message, string stackTrace, string type) :783
void UnhandledException__New2_fn(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type, UnhandledException** __retval)
{
    *__retval = UnhandledException::New2(deviceId, deviceName, message, stackTrace, type);
}

// public static Outracks.Simulator.Protocol.UnhandledException ReadDataFrom(System.IO.BinaryReader reader) :807
void UnhandledException__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, UnhandledException** __retval)
{
    *__retval = UnhandledException::ReadDataFrom(reader);
}

// public generated string get_StackTrace() :780
void UnhandledException__get_StackTrace_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->StackTrace();
}

// private generated void set_StackTrace(string value) :780
void UnhandledException__set_StackTrace_fn(UnhandledException* __this, uString* value)
{
    __this->StackTrace(value);
}

// public string get_Type() :775
void UnhandledException__get_Type_fn(UnhandledException* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :798
void UnhandledException__WriteDataTo_fn(UnhandledException* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> UnhandledException::MessageType_;

// private UnhandledException() [instance] :796
void UnhandledException::ctor_()
{
}

// public UnhandledException(string deviceId, string deviceName, string message, string stackTrace, string type) [instance] :783
void UnhandledException::ctor_1(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type)
{
    DeviceId(deviceId);
    DeviceName(deviceName);
    Message(message);
    StackTrace(stackTrace);
    ExceptionType(type);
}

// public generated string get_DeviceId() [instance] :777
uString* UnhandledException::DeviceId()
{
    return _DeviceId;
}

// private generated void set_DeviceId(string value) [instance] :777
void UnhandledException::DeviceId(uString* value)
{
    _DeviceId = value;
}

// public generated string get_DeviceName() [instance] :778
uString* UnhandledException::DeviceName()
{
    return _DeviceName;
}

// private generated void set_DeviceName(string value) [instance] :778
void UnhandledException::DeviceName(uString* value)
{
    _DeviceName = value;
}

// public generated string get_ExceptionType() [instance] :781
uString* UnhandledException::ExceptionType()
{
    return _ExceptionType;
}

// private generated void set_ExceptionType(string value) [instance] :781
void UnhandledException::ExceptionType(uString* value)
{
    _ExceptionType = value;
}

// public generated string get_Message() [instance] :779
uString* UnhandledException::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :779
void UnhandledException::Message(uString* value)
{
    _Message = value;
}

// public generated string get_StackTrace() [instance] :780
uString* UnhandledException::StackTrace()
{
    return _StackTrace;
}

// private generated void set_StackTrace(string value) [instance] :780
void UnhandledException::StackTrace(uString* value)
{
    _StackTrace = value;
}

// public string get_Type() [instance] :775
uString* UnhandledException::Type()
{
    return UnhandledException::MessageType();
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :798
void UnhandledException::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.UnhandledException", "WriteDataTo(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(DeviceId());
    writer->Write6(DeviceName());
    writer->Write6(Message());
    writer->Write6(StackTrace());
    writer->Write6(Type());
}

// private UnhandledException New() [static] :796
UnhandledException* UnhandledException::New1()
{
    UnhandledException* obj2 = (UnhandledException*)uNew(UnhandledException_typeof());
    obj2->ctor_();
    return obj2;
}

// public UnhandledException New(string deviceId, string deviceName, string message, string stackTrace, string type) [static] :783
UnhandledException* UnhandledException::New2(uString* deviceId, uString* deviceName, uString* message, uString* stackTrace, uString* type)
{
    UnhandledException* obj1 = (UnhandledException*)uNew(UnhandledException_typeof());
    obj1->ctor_1(deviceId, deviceName, message, stackTrace, type);
    return obj1;
}

// public static Outracks.Simulator.Protocol.UnhandledException ReadDataFrom(System.IO.BinaryReader reader) [static] :807
UnhandledException* UnhandledException::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.UnhandledException", "ReadDataFrom(System.IO.BinaryReader)");
    UnhandledException_typeof()->Init();
    uString* deviceId = uPtr(reader)->ReadString();
    uString* deviceName = reader->ReadString();
    uString* message = reader->ReadString();
    uString* stackTrace = reader->ReadString();
    uString* type = reader->ReadString();
    return UnhandledException::New2(deviceId, deviceName, message, stackTrace, type);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class UpdateAttribute :828
// {
// static UpdateAttribute() :828
static void UpdateAttribute__cctor__fn(uType* __type)
{
    UpdateAttribute::MessageType_ = ::STRINGS[19/*"UpdateAttri...*/];
}

static void UpdateAttribute_build(uType* type)
{
    ::STRINGS[19] = uString::Const("UpdateAttribute");
    ::STRINGS[20] = uString::Const("Set ");
    ::STRINGS[21] = uString::Const(".");
    ::STRINGS[22] = uString::Const(" = ");
    ::TYPES[13] = ::g::Outracks::Optional_typeof()->MakeMethod(2/*Read<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[15] = ::g::Outracks::Optional_typeof()->MakeMethod(6/*Write<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Outracks::IBinaryMessage_typeof(), offsetof(UpdateAttribute_type, interface0));
    type->SetFields(0,
        ::g::Uno::Guid_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UpdateAttribute, _Id), 0,
        ::g::Outracks::Simulator::ObjectIdentifier_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UpdateAttribute, _Object), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UpdateAttribute, _Property), 0,
        ::g::Outracks::Simulator::SourceReference_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UpdateAttribute, _Source), 0,
        ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Protocol::UpdateAttribute::MessageType_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("MessageType", 5));
    type->Reflection.SetFunctions(10,
        new uFunction("get_Id", NULL, (void*)UpdateAttribute__get_Id_fn, 0, false, ::g::Uno::Guid_typeof(), 0),
        new uFunction("set_Id", NULL, (void*)UpdateAttribute__set_Id_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Guid_typeof()),
        new uFunction(".ctor", NULL, (void*)UpdateAttribute__New1_fn, 0, true, type, 4, ::g::Outracks::Simulator::ObjectIdentifier_typeof(), ::g::Uno::String_typeof(), ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), ::g::Outracks::Simulator::SourceReference_typeof()),
        new uFunction("get_Object", NULL, (void*)UpdateAttribute__get_Object_fn, 0, false, ::g::Outracks::Simulator::ObjectIdentifier_typeof(), 0),
        new uFunction("get_Property", NULL, (void*)UpdateAttribute__get_Property_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("ReadDataFrom", NULL, (void*)UpdateAttribute__ReadDataFrom_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("get_Source", NULL, (void*)UpdateAttribute__get_Source_fn, 0, false, ::g::Outracks::Simulator::SourceReference_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)UpdateAttribute__get_Type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)UpdateAttribute__get_Value_fn, 0, false, ::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 0),
        new uFunction("WriteDataTo", NULL, (void*)UpdateAttribute__WriteDataTo_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

UpdateAttribute_type* UpdateAttribute_typeof()
{
    static uSStrong<UpdateAttribute_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateAttribute);
    options.TypeSize = sizeof(UpdateAttribute_type);
    type = (UpdateAttribute_type*)uClassType::New("Outracks.Simulator.Protocol.UpdateAttribute", options);
    type->fp_build_ = UpdateAttribute_build;
    type->fp_cctor_ = UpdateAttribute__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))UpdateAttribute__ToString_fn;
    type->interface0.fp_WriteDataTo = (void(*)(uObject*, ::g::System::IO::BinaryWriter*))UpdateAttribute__WriteDataTo_fn;
    type->interface0.fp_get_Type = (void(*)(uObject*, uString**))UpdateAttribute__get_Type_fn;
    return type;
}

// public UpdateAttribute(Outracks.Simulator.ObjectIdentifier obj, string property, Outracks.Optional<string> value, Outracks.Simulator.SourceReference source) :840
void UpdateAttribute__ctor__fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> >* value, ::g::Outracks::Simulator::SourceReference* source)
{
    __this->ctor_(obj, property, *value, source);
}

// public generated Uno.Guid get_Id() :833
void UpdateAttribute__get_Id_fn(UpdateAttribute* __this, ::g::Uno::Guid* __retval)
{
    *__retval = __this->Id();
}

// public generated void set_Id(Uno.Guid value) :833
void UpdateAttribute__set_Id_fn(UpdateAttribute* __this, ::g::Uno::Guid* value)
{
    __this->Id(*value);
}

// public UpdateAttribute New(Outracks.Simulator.ObjectIdentifier obj, string property, Outracks.Optional<string> value, Outracks.Simulator.SourceReference source) :840
void UpdateAttribute__New1_fn(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> >* value, ::g::Outracks::Simulator::SourceReference* source, UpdateAttribute** __retval)
{
    *__retval = UpdateAttribute::New1(obj, property, *value, source);
}

// public generated Outracks.Simulator.ObjectIdentifier get_Object() :834
void UpdateAttribute__get_Object_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Outracks.Simulator.ObjectIdentifier value) :834
void UpdateAttribute__set_Object_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::ObjectIdentifier* value)
{
    __this->Object(value);
}

// public generated string get_Property() :835
void UpdateAttribute__get_Property_fn(UpdateAttribute* __this, uString** __retval)
{
    *__retval = __this->Property();
}

// private generated void set_Property(string value) :835
void UpdateAttribute__set_Property_fn(UpdateAttribute* __this, uString* value)
{
    __this->Property(value);
}

// public static Outracks.Simulator.Protocol.UpdateAttribute ReadDataFrom(System.IO.BinaryReader reader) :866
void UpdateAttribute__ReadDataFrom_fn(::g::System::IO::BinaryReader* reader, UpdateAttribute** __retval)
{
    *__retval = UpdateAttribute::ReadDataFrom(reader);
}

// public generated Outracks.Simulator.SourceReference get_Source() :838
void UpdateAttribute__get_Source_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::SourceReference** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Outracks.Simulator.SourceReference value) :838
void UpdateAttribute__set_Source_fn(UpdateAttribute* __this, ::g::Outracks::Simulator::SourceReference* value)
{
    __this->Source(value);
}

// public override sealed string ToString() :852
void UpdateAttribute__ToString_fn(UpdateAttribute* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.UpdateAttribute", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[20/*"Set "*/], __this->Object()), ::STRINGS[21/*"."*/]), __this->Property()), ::STRINGS[22/*" = "*/]), uBox(::g::Outracks::Optional1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), __this->Value())), void();
}

// public string get_Type() :831
void UpdateAttribute__get_Type_fn(UpdateAttribute* __this, uString** __retval)
{
    *__retval = __this->Type();
}

// public generated Outracks.Optional<string> get_Value() :836
void UpdateAttribute__get_Value_fn(UpdateAttribute* __this, ::g::Outracks::Optional1<uStrong<uString*> >* __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(Outracks.Optional<string> value) :836
void UpdateAttribute__set_Value_fn(UpdateAttribute* __this, ::g::Outracks::Optional1<uStrong<uString*> >* value)
{
    __this->Value(*value);
}

// public void WriteDataTo(System.IO.BinaryWriter writer) :857
void UpdateAttribute__WriteDataTo_fn(UpdateAttribute* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->WriteDataTo(writer);
}

uSStrong<uString*> UpdateAttribute::MessageType_;

// public UpdateAttribute(Outracks.Simulator.ObjectIdentifier obj, string property, Outracks.Optional<string> value, Outracks.Simulator.SourceReference source) [instance] :840
void UpdateAttribute::ctor_(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> > value, ::g::Outracks::Simulator::SourceReference* source)
{
    Object(obj);
    Property(property);
    Value(value);
    Source(source);
}

// public generated Uno.Guid get_Id() [instance] :833
::g::Uno::Guid UpdateAttribute::Id()
{
    return _Id;
}

// public generated void set_Id(Uno.Guid value) [instance] :833
void UpdateAttribute::Id(::g::Uno::Guid value)
{
    _Id = value;
}

// public generated Outracks.Simulator.ObjectIdentifier get_Object() [instance] :834
::g::Outracks::Simulator::ObjectIdentifier* UpdateAttribute::Object()
{
    return _Object;
}

// private generated void set_Object(Outracks.Simulator.ObjectIdentifier value) [instance] :834
void UpdateAttribute::Object(::g::Outracks::Simulator::ObjectIdentifier* value)
{
    _Object = value;
}

// public generated string get_Property() [instance] :835
uString* UpdateAttribute::Property()
{
    return _Property;
}

// private generated void set_Property(string value) [instance] :835
void UpdateAttribute::Property(uString* value)
{
    _Property = value;
}

// public generated Outracks.Simulator.SourceReference get_Source() [instance] :838
::g::Outracks::Simulator::SourceReference* UpdateAttribute::Source()
{
    return _Source;
}

// private generated void set_Source(Outracks.Simulator.SourceReference value) [instance] :838
void UpdateAttribute::Source(::g::Outracks::Simulator::SourceReference* value)
{
    _Source = value;
}

// public string get_Type() [instance] :831
uString* UpdateAttribute::Type()
{
    return UpdateAttribute::MessageType();
}

// public generated Outracks.Optional<string> get_Value() [instance] :836
::g::Outracks::Optional1<uStrong<uString*> > UpdateAttribute::Value()
{
    return _Value().Value< ::g::Outracks::Optional1<uStrong<uString*> > >();
}

// private generated void set_Value(Outracks.Optional<string> value) [instance] :836
void UpdateAttribute::Value(::g::Outracks::Optional1<uStrong<uString*> > value)
{
    _Value().Value< ::g::Outracks::Optional1<uStrong<uString*> > >() = value;
}

// public void WriteDataTo(System.IO.BinaryWriter writer) [instance] :857
void UpdateAttribute::WriteDataTo(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.UpdateAttribute", "WriteDataTo(System.IO.BinaryWriter)");
    ::g::Outracks::Simulator::GuidSerializer::WriteGuid(writer, Id());
    uPtr(Object())->Write1(writer);
    uPtr(writer)->Write6(Property());
    ::g::Outracks::Optional__Write2_fn(::TYPES[15/*Outracks.Optional.Write<string>*/], writer, uCRef(Value()), uDelegate::New(::TYPES[16/*Uno.Action<string>*/], (void*)::g::System::IO::BinaryWriter__Write6_fn, writer));
    ::g::Outracks::Simulator::SourceReference::Write(writer, Source());
}

// public UpdateAttribute New(Outracks.Simulator.ObjectIdentifier obj, string property, Outracks.Optional<string> value, Outracks.Simulator.SourceReference source) [static] :840
UpdateAttribute* UpdateAttribute::New1(::g::Outracks::Simulator::ObjectIdentifier* obj, uString* property, ::g::Outracks::Optional1<uStrong<uString*> > value, ::g::Outracks::Simulator::SourceReference* source)
{
    UpdateAttribute* obj2 = (UpdateAttribute*)uNew(UpdateAttribute_typeof());
    obj2->ctor_(obj, property, value, source);
    return obj2;
}

// public static Outracks.Simulator.Protocol.UpdateAttribute ReadDataFrom(System.IO.BinaryReader reader) [static] :866
UpdateAttribute* UpdateAttribute::ReadDataFrom(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.UpdateAttribute", "ReadDataFrom(System.IO.BinaryReader)");
    UpdateAttribute_typeof()->Init();
    UpdateAttribute* collection1;
    ::g::Outracks::Optional1<uStrong<uString*> > ret3;
    ::g::Uno::Guid id = ::g::Outracks::Simulator::GuidSerializer::ReadGuid(reader);
    ::g::Outracks::Simulator::ObjectIdentifier* obj = ::g::Outracks::Simulator::ObjectIdentifier::Read(reader);
    uString* property = uPtr(reader)->ReadString();
    ::g::Outracks::Optional1<uStrong<uString*> > value = (::g::Outracks::Optional__Read1_fn(::TYPES[13/*Outracks.Optional.Read<string>*/], reader, uDelegate::New(::TYPES[14/*Uno.Func<string>*/], (void*)::g::System::IO::BinaryReader__ReadString_fn, reader), &ret3), ret3);
    ::g::Outracks::Simulator::SourceReference* source = ::g::Outracks::Simulator::SourceReference::Read(reader);
    collection1 = UpdateAttribute::New1(obj, property, value, source);
    uPtr(collection1)->Id(id);
    id;
    return collection1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/messages/$.uno
// --------------------------------------------------------------------------------

// public sealed class UxFileContents :680
// {
static void UxFileContents_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UxFileContents, _Contents), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UxFileContents, _Path), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Contents", NULL, (void*)UxFileContents__get_Contents_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Contents", NULL, (void*)UxFileContents__set_Contents_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)UxFileContents__New1_fn, 0, true, type, 0),
        new uFunction("get_Path", NULL, (void*)UxFileContents__get_Path_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Path", NULL, (void*)UxFileContents__set_Path_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)UxFileContents__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)UxFileContents__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()));
}

uType* UxFileContents_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UxFileContents);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.UxFileContents", options);
    type->fp_build_ = UxFileContents_build;
    type->fp_ctor_ = (void*)UxFileContents__New1_fn;
    return type;
}

// public generated UxFileContents() :680
void UxFileContents__ctor__fn(UxFileContents* __this)
{
    __this->ctor_();
}

// public generated string get_Contents() :683
void UxFileContents__get_Contents_fn(UxFileContents* __this, uString** __retval)
{
    *__retval = __this->Contents();
}

// public generated void set_Contents(string value) :683
void UxFileContents__set_Contents_fn(UxFileContents* __this, uString* value)
{
    __this->Contents(value);
}

// public generated UxFileContents New() :680
void UxFileContents__New1_fn(UxFileContents** __retval)
{
    *__retval = UxFileContents::New1();
}

// public generated string get_Path() :682
void UxFileContents__get_Path_fn(UxFileContents* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// public generated void set_Path(string value) :682
void UxFileContents__set_Path_fn(UxFileContents* __this, uString* value)
{
    __this->Path(value);
}

// public static Outracks.Simulator.Protocol.UxFileContents Read(System.IO.BinaryReader reader) :691
void UxFileContents__Read_fn(::g::System::IO::BinaryReader* reader, UxFileContents** __retval)
{
    *__retval = UxFileContents::Read(reader);
}

// public static void Write(Outracks.Simulator.Protocol.UxFileContents str, System.IO.BinaryWriter writer) :685
void UxFileContents__Write_fn(UxFileContents* str, ::g::System::IO::BinaryWriter* writer)
{
    UxFileContents::Write(str, writer);
}

// public generated UxFileContents() [instance] :680
void UxFileContents::ctor_()
{
}

// public generated string get_Contents() [instance] :683
uString* UxFileContents::Contents()
{
    return _Contents;
}

// public generated void set_Contents(string value) [instance] :683
void UxFileContents::Contents(uString* value)
{
    _Contents = value;
}

// public generated string get_Path() [instance] :682
uString* UxFileContents::Path()
{
    return _Path;
}

// public generated void set_Path(string value) [instance] :682
void UxFileContents::Path(uString* value)
{
    _Path = value;
}

// public generated UxFileContents New() [static] :680
UxFileContents* UxFileContents::New1()
{
    UxFileContents* obj4 = (UxFileContents*)uNew(UxFileContents_typeof());
    obj4->ctor_();
    return obj4;
}

// public static Outracks.Simulator.Protocol.UxFileContents Read(System.IO.BinaryReader reader) [static] :691
UxFileContents* UxFileContents::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.UxFileContents", "Read(System.IO.BinaryReader)");
    UxFileContents* collection1;
    collection1 = UxFileContents::New1();
    uString* ind2 = uPtr(reader)->ReadString();
    uPtr(collection1)->Path(ind2);
    ;
    uString* ind3 = uPtr(reader)->ReadString();
    uPtr(collection1)->Contents(ind3);
    ;
    return collection1;
}

// public static void Write(Outracks.Simulator.Protocol.UxFileContents str, System.IO.BinaryWriter writer) [static] :685
void UxFileContents::Write(UxFileContents* str, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.UxFileContents", "Write(Outracks.Simulator.Protocol.UxFileContents,System.IO.BinaryWriter)");
    uPtr(writer)->Write6(uPtr(str)->Path());
    writer->Write6(str->Contents());
}
// }

}}}} // ::g::Outracks::Simulator::Protocol
