// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Building.BuildFailed.h>
namespace g{namespace Outracks{namespace Building{struct UserCodeContainsErrors;}}}

namespace g{
namespace Outracks{
namespace Building{

// public sealed class UserCodeContainsErrors :101
// {
::g::Uno::Exception_type* UserCodeContainsErrors_typeof();
void UserCodeContainsErrors__ctor_4_fn(UserCodeContainsErrors* __this);
void UserCodeContainsErrors__New4_fn(UserCodeContainsErrors** __retval);

struct UserCodeContainsErrors : ::g::Outracks::Building::BuildFailed
{
    void ctor_4();
    static UserCodeContainsErrors* New4();
};
// }

}}} // ::g::Outracks::Building
