// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Scripting/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__ActionClosure1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.ActionClosure<T> :411
// {
uType* JSCallback__ActionClosure1_typeof();
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action);
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval);
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval);

struct JSCallback__ActionClosure1 : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    uObject* Run(uArray* args);
    static JSCallback__ActionClosure1* New1(uType* __type, uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
