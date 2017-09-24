// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct CharacterNumber;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public struct CharacterNumber :827
// {
uStructType* CharacterNumber_typeof();
void CharacterNumber__ctor__fn(CharacterNumber* __this, int* character);
void CharacterNumber__Equals_fn(CharacterNumber* __this, uType* __type, uObject* obj, bool* __retval);
void CharacterNumber__Equals2_fn(CharacterNumber* __this, CharacterNumber* other, bool* __retval);
void CharacterNumber__GetHashCode_fn(CharacterNumber* __this, uType* __type, int* __retval);
void CharacterNumber__New1_fn(int* character, CharacterNumber* __retval);
void CharacterNumber__op_Equality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_GreaterThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_GreaterThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_Implicit_fn(CharacterNumber* line, int* __retval);
void CharacterNumber__op_Inequality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_LessThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__op_LessThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval);
void CharacterNumber__ToString_fn(CharacterNumber* __this, uType* __type, uString** __retval);

struct CharacterNumber
{
    int _characterMinusOne;

    void ctor_(int character);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return CharacterNumber__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(CharacterNumber other);
    int GetHashCode(uType* __type) { int __retval; return CharacterNumber__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return CharacterNumber__ToString_fn(this, __type, &__retval), __retval; }
};

CharacterNumber CharacterNumber__New1(int character);
bool CharacterNumber__op_Equality(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_GreaterThan(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_GreaterThanOrEqual(CharacterNumber left, CharacterNumber right);
int CharacterNumber__op_Implicit(CharacterNumber line);
bool CharacterNumber__op_Inequality(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_LessThan(CharacterNumber left, CharacterNumber right);
bool CharacterNumber__op_LessThanOrEqual(CharacterNumber left, CharacterNumber right);
// }

}}} // ::g::Outracks::Simulator
