// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DialogButton;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct GoOffline;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal static class GoOffline :785
// {
uClassType* GoOffline_typeof();
void GoOffline__PrependOption_fn(uArray* otherButtons, uArray** __retval);

struct GoOffline : uObject
{
    static uArray* PrependOption(uArray* otherButtons);
};
// }

}}}} // ::g::Outracks::Simulator::Client
