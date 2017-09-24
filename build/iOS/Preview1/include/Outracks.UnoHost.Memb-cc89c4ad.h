// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/unohost.common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace UnoHost{struct MemberNotFound;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// public sealed class MemberNotFound :48
// {
::g::Uno::Exception_type* MemberNotFound_typeof();
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, uString* type, uString* member);
void MemberNotFound__New4_fn(uString* type, uString* member, MemberNotFound** __retval);

struct MemberNotFound : ::g::Uno::Exception
{
    uStrong<uString*> Member;
    uStrong<uString*> Type;

    void ctor_3(uString* type, uString* member);
    static MemberNotFound* New4(uString* type, uString* member);
};
// }

}}} // ::g::Outracks::UnoHost
