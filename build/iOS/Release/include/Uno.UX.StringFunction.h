// This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Operator.h>
namespace g{namespace Uno{namespace UX{struct StringFunction;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class StringFunction :278
// {
struct StringFunction_type : ::g::Uno::UX::Operator_type
{
    void(*fp_Compute)(::g::Uno::UX::StringFunction*, uString*, uString**);
};

StringFunction_type* StringFunction_typeof();
void StringFunction__Push_fn(StringFunction* __this);

struct StringFunction : ::g::Uno::UX::Operator
{
    bool _hasOperand;
    uStrong<uString*> _operand;

    uString* Compute(uString* s) { uString* __retval; return (((StringFunction_type*)__type)->fp_Compute)(this, s, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
