// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Outracks{namespace UnoHost{struct HitTestQuery;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace UnoHost{

// internal sealed class HitTestQuery :64
// {
uType* HitTestQuery_typeof();
void HitTestQuery__ctor__fn(HitTestQuery* __this);
void HitTestQuery__New1_fn(HitTestQuery** __retval);
void HitTestQuery__Select_fn(HitTestQuery* __this, ::g::Fuse::HitTestResult* result);

struct HitTestQuery : uObject
{
    uStrong< ::g::Uno::Collections::List*> HitObjects;

    void ctor_();
    void Select(::g::Fuse::HitTestResult* result);
    static HitTestQuery* New1();
};
// }

}}} // ::g::Outracks::UnoHost
