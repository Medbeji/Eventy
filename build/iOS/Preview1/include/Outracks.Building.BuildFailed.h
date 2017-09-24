// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Building{struct BuildFailed;}}}

namespace g{
namespace Outracks{
namespace Building{

// public abstract class BuildFailed :8
// {
::g::Uno::Exception_type* BuildFailed_typeof();
void BuildFailed__ctor_3_fn(BuildFailed* __this, uString* reason, ::g::Uno::Exception* innerException);

struct BuildFailed : ::g::Uno::Exception
{
    void ctor_3(uString* reason, ::g::Uno::Exception* innerException);
};
// }

}}} // ::g::Outracks::Building
