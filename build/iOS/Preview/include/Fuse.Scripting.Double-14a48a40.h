// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.Double.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct DoubleChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class DoubleChangedArgs :332
// {
struct DoubleChangedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

DoubleChangedArgs_type* DoubleChangedArgs_typeof();
void DoubleChangedArgs__ctor_2_fn(DoubleChangedArgs* __this, double* value);
void DoubleChangedArgs__FuseScriptingIScriptEventSerialize_fn(DoubleChangedArgs* __this, uObject* s);
void DoubleChangedArgs__New3_fn(double* value, DoubleChangedArgs** __retval);

struct DoubleChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(double value);
    static DoubleChangedArgs* New3(double value);
};
// }

}}} // ::g::Fuse::Scripting
