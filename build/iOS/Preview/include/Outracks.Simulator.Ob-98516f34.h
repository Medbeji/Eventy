// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ObjectIdentifier;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ObjectIdentifier :24
// {
uType* ObjectIdentifier_typeof();
void ObjectIdentifier__ctor__fn(ObjectIdentifier* __this, uString* str, uString* document);
void ObjectIdentifier__ctor_1_fn(ObjectIdentifier* __this, uString* document, int* tagIndex);
void ObjectIdentifier__Equals_fn(ObjectIdentifier* __this, uObject* obj, bool* __retval);
void ObjectIdentifier__Equals2_fn(ObjectIdentifier* __this, ObjectIdentifier* other, bool* __retval);
void ObjectIdentifier__GetHashCode_fn(ObjectIdentifier* __this, int* __retval);
void ObjectIdentifier__New1_fn(uString* str, uString* document, ObjectIdentifier** __retval);
void ObjectIdentifier__New2_fn(uString* document, int* tagIndex, ObjectIdentifier** __retval);
void ObjectIdentifier__op_Equality_fn(ObjectIdentifier* left, ObjectIdentifier* right, bool* __retval);
void ObjectIdentifier__op_Inequality_fn(ObjectIdentifier* left, ObjectIdentifier* right, bool* __retval);
void ObjectIdentifier__Read_fn(::g::System::IO::BinaryReader* reader, ObjectIdentifier** __retval);
void ObjectIdentifier__ToString_fn(ObjectIdentifier* __this, uString** __retval);
void ObjectIdentifier__Write_fn(ObjectIdentifier* id, ::g::System::IO::BinaryWriter* writer);
void ObjectIdentifier__Write1_fn(ObjectIdentifier* __this, ::g::System::IO::BinaryWriter* writer);

struct ObjectIdentifier : uObject
{
    uStrong<uString*> _string;
    uStrong<uString*> Document;
    static uSStrong<ObjectIdentifier*> None_;
    static uSStrong<ObjectIdentifier*>& None() { return ObjectIdentifier_typeof()->Init(), None_; }

    void ctor_(uString* str, uString* document);
    void ctor_1(uString* document, int tagIndex);
    bool Equals2(ObjectIdentifier* other);
    void Write1(::g::System::IO::BinaryWriter* writer);
    static ObjectIdentifier* New1(uString* str, uString* document);
    static ObjectIdentifier* New2(uString* document, int tagIndex);
    static bool op_Equality(ObjectIdentifier* left, ObjectIdentifier* right);
    static bool op_Inequality(ObjectIdentifier* left, ObjectIdentifier* right);
    static ObjectIdentifier* Read(::g::System::IO::BinaryReader* reader);
    static void Write(ObjectIdentifier* id, ::g::System::IO::BinaryWriter* writer);
};
// }

}}} // ::g::Outracks::Simulator
