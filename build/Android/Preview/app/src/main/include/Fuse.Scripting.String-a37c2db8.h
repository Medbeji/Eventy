// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class StringChangedArgs :322
// {
struct StringChangedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

StringChangedArgs_type* StringChangedArgs_typeof();
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue);
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s);
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval);

struct StringChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(uString* newValue);
    static StringChangedArgs* New3(uString* newValue);
};
// }

}}} // ::g::Fuse::Scripting
