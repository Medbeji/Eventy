// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct LineNumber;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public struct LineNumber :911
// {
uStructType* LineNumber_typeof();
void LineNumber__ctor__fn(LineNumber* __this, int* line);
void LineNumber__Equals_fn(LineNumber* __this, uType* __type, uObject* obj, bool* __retval);
void LineNumber__Equals2_fn(LineNumber* __this, LineNumber* other, bool* __retval);
void LineNumber__GetHashCode_fn(LineNumber* __this, uType* __type, int* __retval);
void LineNumber__New1_fn(int* line, LineNumber* __retval);
void LineNumber__op_Equality_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__op_GreaterThan_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__op_GreaterThanOrEqual_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__op_Implicit_fn(LineNumber* line, int* __retval);
void LineNumber__op_Inequality_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__op_LessThan_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__op_LessThanOrEqual_fn(LineNumber* left, LineNumber* right, bool* __retval);
void LineNumber__ToString_fn(LineNumber* __this, uType* __type, uString** __retval);

struct LineNumber
{
    int _lineMinusOne;

    void ctor_(int line);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return LineNumber__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(LineNumber other);
    int GetHashCode(uType* __type) { int __retval; return LineNumber__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return LineNumber__ToString_fn(this, __type, &__retval), __retval; }
};

LineNumber LineNumber__New1(int line);
bool LineNumber__op_Equality(LineNumber left, LineNumber right);
bool LineNumber__op_GreaterThan(LineNumber left, LineNumber right);
bool LineNumber__op_GreaterThanOrEqual(LineNumber left, LineNumber right);
int LineNumber__op_Implicit(LineNumber line);
bool LineNumber__op_Inequality(LineNumber left, LineNumber right);
bool LineNumber__op_LessThan(LineNumber left, LineNumber right);
bool LineNumber__op_LessThanOrEqual(LineNumber left, LineNumber right);
// }

}}} // ::g::Outracks::Simulator
