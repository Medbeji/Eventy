// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct InvalidOperationException;}}

namespace g{
namespace Uno{

// public sealed class InvalidOperationException :248
// {
::g::Uno::Exception_type* InvalidOperationException_typeof();
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this);
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message);
void InvalidOperationException__New4_fn(InvalidOperationException** __retval);
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval);

struct InvalidOperationException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static InvalidOperationException* New4();
    static InvalidOperationException* New5(uString* message);
};
// }

}} // ::g::Uno
