// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NamespaceName;}}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NamespaceName :1196
// {
uType* NamespaceName_typeof();
void NamespaceName__ctor__fn(NamespaceName* __this, uString* fullName);
void NamespaceName___Read_fn(::g::System::IO::BinaryReader* reader, NamespaceName** __retval);
void NamespaceName___Write_fn(NamespaceName* name, ::g::System::IO::BinaryWriter* writer);
void NamespaceName__Equals_fn(NamespaceName* __this, uObject* obj, bool* __retval);
void NamespaceName__Equals2_fn(NamespaceName* __this, NamespaceName* other, bool* __retval);
void NamespaceName__GetHashCode_fn(NamespaceName* __this, int* __retval);
void NamespaceName__New1_fn(uString* fullName, NamespaceName** __retval);
void NamespaceName__op_Equality_fn(NamespaceName* left, NamespaceName* right, bool* __retval);
void NamespaceName__op_Inequality_fn(NamespaceName* left, NamespaceName* right, bool* __retval);
void NamespaceName__ToString_fn(NamespaceName* __this, uString** __retval);

struct NamespaceName : uObject
{
    uStrong<uString*> FullName;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return NamespaceName_typeof()->Init(), Read_; }
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return NamespaceName_typeof()->Init(), Write_; }

    void ctor_(uString* fullName);
    bool Equals2(NamespaceName* other);
    static NamespaceName* _Read(::g::System::IO::BinaryReader* reader);
    static void _Write(NamespaceName* name, ::g::System::IO::BinaryWriter* writer);
    static NamespaceName* New1(uString* fullName);
    static bool op_Equality(NamespaceName* left, NamespaceName* right);
    static bool op_Inequality(NamespaceName* left, NamespaceName* right);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
