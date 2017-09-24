// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace UnoHost{struct UnambiguousMethodNotFound;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public sealed class UnambiguousMethodNotFound :74
// {
::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof();
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, uString* type, uString* member);
void UnambiguousMethodNotFound__New4_fn(uString* type, uString* member, UnambiguousMethodNotFound** __retval);

struct UnambiguousMethodNotFound : ::g::Uno::Exception
{
    uStrong<uString*> Member;
    uStrong<uString*> Type;

    void ctor_3(uString* type, uString* member);
    static UnambiguousMethodNotFound* New4(uString* type, uString* member);
};
// }

}}} // ::g::Outracks::UnoHost
