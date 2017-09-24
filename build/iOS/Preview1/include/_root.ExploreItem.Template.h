// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/ExploreItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}
namespace g{struct ExploreItem__Template;}

namespace g{

// public partial sealed class ExploreItem.Template :84
// {
::g::Uno::UX::Template_type* ExploreItem__Template_typeof();
void ExploreItem__Template__ctor_1_fn(ExploreItem__Template* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
void ExploreItem__Template__New1_fn(ExploreItem__Template* __this, uObject** __retval);
void ExploreItem__Template__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template** __retval);

struct ExploreItem__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ExploreItem__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::ExploreItem*> __parent1;
    uWeak< ::g::ExploreItem*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ExploreItem__Template_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
    static ExploreItem__Template* New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
};
// }

} // ::g
