// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace UnoHost{struct BinaryMessageInbox;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public static class BinaryMessageInbox :11
// {
uClassType* BinaryMessageInbox_typeof();
void BinaryMessageInbox__Receive1_fn(uDelegate* onReceive, uObject** __retval);
void BinaryMessageInbox__Send_fn(uObject* message);

struct BinaryMessageInbox : uObject
{
    static uObject* Receive1(uDelegate* onReceive);
    static void Send(uObject* message);
};
// }

}}} // ::g::Outracks::UnoHost
