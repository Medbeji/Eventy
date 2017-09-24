// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/ClubPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ClubPage;}
namespace g{struct ClubPage__Template;}

namespace g{

// public partial sealed class ClubPage.Template :6
// {
::g::Uno::UX::Template_type* ClubPage__Template_typeof();
void ClubPage__Template__ctor_1_fn(ClubPage__Template* __this, ::g::ClubPage* parent, ::g::ClubPage* parentInstance);
void ClubPage__Template__New1_fn(ClubPage__Template* __this, uObject** __retval);
void ClubPage__Template__New2_fn(::g::ClubPage* parent, ::g::ClubPage* parentInstance, ClubPage__Template** __retval);

struct ClubPage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ClubPage__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::ClubPage*> __parent1;
    uWeak< ::g::ClubPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ClubPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ClubPage__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ClubPage__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ClubPage__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ClubPage__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ClubPage__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ClubPage__Template_typeof()->Init(), __selector6_; }
    uStrong< ::g::Uno::UX::Property1*> __self_CardAlignment_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Country_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_ForegroundColor_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_ImageName_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_InDetailsMode_inst1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::ClubPage* parent, ::g::ClubPage* parentInstance);
    static ClubPage__Template* New2(::g::ClubPage* parent, ::g::ClubPage* parentInstance);
};
// }

} // ::g
