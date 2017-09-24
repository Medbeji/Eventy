// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview/cache/ux11/ExploreItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}
namespace g{struct ExploreItem__Template2;}

namespace g{

// public partial sealed class ExploreItem.Template2 :168
// {
::g::Uno::UX::Template_type* ExploreItem__Template2_typeof();
void ExploreItem__Template2__ctor_1_fn(ExploreItem__Template2* __this, ::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
void ExploreItem__Template2__New1_fn(ExploreItem__Template2* __this, uObject** __retval);
void ExploreItem__Template2__New2_fn(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance, ExploreItem__Template2** __retval);

struct ExploreItem__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::ExploreItem*> __parent1;
    uWeak< ::g::ExploreItem*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ExploreItem__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ExploreItem__Template2_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> TheColor_Color_inst;

    void ctor_1(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
    static ExploreItem__Template2* New2(::g::ExploreItem* parent, ::g::ExploreItem* parentInstance);
};
// }

} // ::g
