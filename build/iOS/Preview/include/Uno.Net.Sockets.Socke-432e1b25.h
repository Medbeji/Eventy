// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/1.0.11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct SocketException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class SocketException :1128
// {
::g::Uno::Exception_type* SocketException_typeof();
void SocketException__ctor_3_fn(SocketException* __this, uString* message);
void SocketException__New4_fn(uString* message, SocketException** __retval);

struct SocketException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static SocketException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Net::Sockets
