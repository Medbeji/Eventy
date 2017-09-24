// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Net.Http/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UriFormatException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UriFormatException :1097
// {
::g::Uno::Exception_type* UriFormatException_typeof();
void UriFormatException__ctor_3_fn(UriFormatException* __this, uString* message);
void UriFormatException__New4_fn(uString* message, UriFormatException** __retval);

struct UriFormatException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static UriFormatException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Net::Http
