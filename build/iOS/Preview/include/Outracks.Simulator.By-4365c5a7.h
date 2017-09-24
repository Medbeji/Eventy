// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Variable :2160
// {
uType* Variable_typeof();
void Variable__ctor__fn(Variable* __this, uString* name);
void Variable___Read_fn(::g::System::IO::BinaryReader* reader, Variable** __retval);
void Variable___Write_fn(Variable* v, ::g::System::IO::BinaryWriter* writer);
void Variable___Write1_fn(Variable* __this, ::g::System::IO::BinaryWriter* writer);
void Variable__Equals_fn(Variable* __this, uObject* obj, bool* __retval);
void Variable__Equals2_fn(Variable* __this, Variable* other, bool* __retval);
void Variable__GetHashCode_fn(Variable* __this, int* __retval);
void Variable__GetName_fn(Variable* arg, uString** __retval);
void Variable__New1_fn(uString* name, Variable** __retval);
void Variable__op_Equality_fn(Variable* left, Variable* right, bool* __retval);
void Variable__op_Inequality_fn(Variable* left, Variable* right, bool* __retval);
void Variable__ToString_fn(Variable* __this, uString** __retval);

struct Variable : uObject
{
    uStrong<uString*> Name;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return Variable_typeof()->Init(), Read_; }
    static uSStrong<Variable*> This_;
    static uSStrong<Variable*>& This() { return Variable_typeof()->Init(), This_; }
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return Variable_typeof()->Init(), Write_; }

    void ctor_(uString* name);
    void _Write1(::g::System::IO::BinaryWriter* writer);
    bool Equals2(Variable* other);
    static Variable* _Read(::g::System::IO::BinaryReader* reader);
    static void _Write(Variable* v, ::g::System::IO::BinaryWriter* writer);
    static uString* GetName(Variable* arg);
    static Variable* New1(uString* name);
    static bool op_Equality(Variable* left, Variable* right);
    static bool op_Inequality(Variable* left, Variable* right);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
