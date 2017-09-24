// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxFileSource;}}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxFileSource :455
// {
::g::Uno::UX::FileSource_type* UxFileSource_typeof();
void UxFileSource__ctor_1_fn(UxFileSource* __this, uString* path, uArray* bytes);
void UxFileSource__New1_fn(uString* path, uArray* bytes, UxFileSource** __retval);
void UxFileSource__OpenRead_fn(UxFileSource* __this, ::g::Uno::IO::Stream** __retval);
void UxFileSource__ReadAllBytes_fn(UxFileSource* __this, uArray** __retval);
void UxFileSource__Update_fn(UxFileSource* __this, uArray* newBytes);

struct UxFileSource : ::g::Uno::UX::FileSource
{
    uStrong<uArray*> _bytes;

    void ctor_1(uString* path, uArray* bytes);
    void Update(uArray* newBytes);
    static UxFileSource* New1(uString* path, uArray* bytes);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
