// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/source/uno/exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct InvalidCastException;}}

namespace g{
namespace Uno{

// public sealed class InvalidCastException :226
// {
::g::Uno::Exception_type* InvalidCastException_typeof();
void InvalidCastException__ctor_3_fn(InvalidCastException* __this);
void InvalidCastException__ctor_4_fn(InvalidCastException* __this, uString* message);
void InvalidCastException__New4_fn(InvalidCastException** __retval);
void InvalidCastException__New5_fn(uString* message, InvalidCastException** __retval);

struct InvalidCastException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static InvalidCastException* New4();
    static InvalidCastException* New5(uString* message);
};
// }

}} // ::g::Uno
