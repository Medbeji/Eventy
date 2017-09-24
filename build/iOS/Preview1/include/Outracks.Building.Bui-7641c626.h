// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Building{struct BuildCanceledException;}}}

namespace g{
namespace Outracks{
namespace Building{

// public sealed class BuildCanceledException :42
// {
::g::Uno::Exception_type* BuildCanceledException_typeof();
void BuildCanceledException__ctor_3_fn(BuildCanceledException* __this);
void BuildCanceledException__New4_fn(BuildCanceledException** __retval);

struct BuildCanceledException : ::g::Uno::Exception
{
    void ctor_3();
    static BuildCanceledException* New4();
};
// }

}}} // ::g::Outracks::Building
