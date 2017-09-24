// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Ch-a9dd1b1a.h>
#include <Outracks.Simulator.LineNumber.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct TextPosition;}}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public struct TextPosition :1224
// {
uStructType* TextPosition_typeof();
void TextPosition__ctor__fn(TextPosition* __this, ::g::Outracks::Simulator::LineNumber* line, ::g::Outracks::Simulator::CharacterNumber* character);
void TextPosition__Equals_fn(TextPosition* __this, uType* __type, uObject* obj, bool* __retval);
void TextPosition__Equals2_fn(TextPosition* __this, TextPosition* other, bool* __retval);
void TextPosition__GetHashCode_fn(TextPosition* __this, uType* __type, int* __retval);
void TextPosition__New1_fn(::g::Outracks::Simulator::LineNumber* line, ::g::Outracks::Simulator::CharacterNumber* character, TextPosition* __retval);
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_GreaterThan_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_Inequality_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_LessThan_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval);
void TextPosition__Read_fn(::g::System::IO::BinaryReader* reader, TextPosition* __retval);
void TextPosition__ToString_fn(TextPosition* __this, uType* __type, uString** __retval);
void TextPosition__Write_fn(::g::System::IO::BinaryWriter* writer, TextPosition* value);

struct TextPosition
{
    ::g::Outracks::Simulator::LineNumber Line;
    ::g::Outracks::Simulator::CharacterNumber Character;

    void ctor_(::g::Outracks::Simulator::LineNumber line, ::g::Outracks::Simulator::CharacterNumber character);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return TextPosition__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(TextPosition other);
    int GetHashCode(uType* __type) { int __retval; return TextPosition__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return TextPosition__ToString_fn(this, __type, &__retval), __retval; }
};

TextPosition TextPosition__New1(::g::Outracks::Simulator::LineNumber line, ::g::Outracks::Simulator::CharacterNumber character);
bool TextPosition__op_Equality(TextPosition a, TextPosition b);
bool TextPosition__op_GreaterThan(TextPosition a, TextPosition b);
bool TextPosition__op_GreaterThanOrEqual(TextPosition a, TextPosition b);
bool TextPosition__op_Inequality(TextPosition a, TextPosition b);
bool TextPosition__op_LessThan(TextPosition a, TextPosition b);
bool TextPosition__op_LessThanOrEqual(TextPosition a, TextPosition b);
TextPosition TextPosition__Read(::g::System::IO::BinaryReader* reader);
void TextPosition__Write(::g::System::IO::BinaryWriter* writer, TextPosition value);
// }

}}} // ::g::Outracks::Simulator
