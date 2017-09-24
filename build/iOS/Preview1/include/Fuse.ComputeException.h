// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Marshal/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{struct ComputeException;}}

namespace g{
namespace Fuse{

// public sealed class ComputeException :9
// {
::g::Uno::Exception_type* ComputeException_typeof();
void ComputeException__ctor_3_fn(ComputeException* __this, uString* op, uObject* a, uObject* b);
void ComputeException__New4_fn(uString* op, uObject* a, uObject* b, ComputeException** __retval);

struct ComputeException : ::g::Uno::Exception
{
    void ctor_3(uString* op, uObject* a, uObject* b);
    static ComputeException* New4(uString* op, uObject* a, uObject* b);
};
// }

}} // ::g::Fuse
