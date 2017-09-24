// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Bundle;}}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public static class Bundle :151
// {
uClassType* Bundle_typeof();
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data);
void Bundle__Initialize_fn(uString* projectName);

struct Bundle : uObject
{
    static uSStrong< ::g::Uno::IO::Bundle*> _bundle_;
    static uSStrong< ::g::Uno::IO::Bundle*>& _bundle() { return _bundle_; }

    static void AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data);
    static void Initialize(uString* projectName);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
