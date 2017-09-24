// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/ExploreItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ExploreItem;}

namespace g{

// public partial sealed class ExploreItem :2
// {
::g::Fuse::Controls::Panel_type* ExploreItem_typeof();
void ExploreItem__ctor_7_fn(ExploreItem* __this, ::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1);
void ExploreItem__get_CardAlignment_fn(ExploreItem* __this, int* __retval);
void ExploreItem__set_CardAlignment_fn(ExploreItem* __this, int* value);
void ExploreItem__get_Country_fn(ExploreItem* __this, uString** __retval);
void ExploreItem__set_Country_fn(ExploreItem* __this, uString* value);
void ExploreItem__get_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* __retval);
void ExploreItem__set_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value);
void ExploreItem__get_ImageName_fn(ExploreItem* __this, uString** __retval);
void ExploreItem__set_ImageName_fn(ExploreItem* __this, uString* value);
void ExploreItem__get_InDetailsMode_fn(ExploreItem* __this, bool* __retval);
void ExploreItem__set_InDetailsMode_fn(ExploreItem* __this, bool* value);
void ExploreItem__InitializeUX_fn(ExploreItem* __this);
void ExploreItem__New4_fn(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1, ExploreItem** __retval);
void ExploreItem__SetCardAlignment_fn(ExploreItem* __this, int* value, uObject* origin);
void ExploreItem__SetCountry_fn(ExploreItem* __this, uString* value, uObject* origin);
void ExploreItem__SetForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value, uObject* origin);
void ExploreItem__SetImageName_fn(ExploreItem* __this, uString* value, uObject* origin);
void ExploreItem__SetInDetailsMode_fn(ExploreItem* __this, bool* value, uObject* origin);

struct ExploreItem : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ExploreItem_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ExploreItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ExploreItem_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return ExploreItem_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return ExploreItem_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return ExploreItem_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return ExploreItem_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return ExploreItem_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return ExploreItem_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return ExploreItem_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return ExploreItem_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return ExploreItem_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return ExploreItem_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ExploreItem_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return ExploreItem_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return ExploreItem_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return ExploreItem_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return ExploreItem_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return ExploreItem_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ExploreItem_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ExploreItem_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ExploreItem_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ExploreItem_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return ExploreItem_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return ExploreItem_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return ExploreItem_typeof()->Init(), __selector9_; }
    int _field_CardAlignment;
    uStrong<uString*> _field_Country;
    ::g::Uno::Float4 _field_ForegroundColor;
    uStrong<uString*> _field_ImageName;
    bool _field_InDetailsMode;
    uStrong< ::g::Fuse::Controls::Panel*> detailsFactsPanel;
    uStrong< ::g::Fuse::Controls::Panel*> detailsImagePanel;
    uStrong< ::g::Fuse::Controls::Panel*> detailsInfoPanel;
    uStrong< ::g::Fuse::Controls::Panel*> detailsPlacesPanel;
    uStrong< ::g::Fuse::Controls::PageControl*> factsPageControl;
    uStrong< ::g::Fuse::Controls::Grid*> factsPanel;
    uStrong< ::g::Uno::UX::Property1*> factsPanel_HitTestMode_inst;
    uStrong< ::g::Uno::UX::Property1*> factsPanel_Opacity_inst;
    uStrong< ::g::Fuse::Translation*> factsPanelTrans;
    uStrong< ::g::Uno::UX::Property1*> factsPanelTrans_Y_inst;
    uStrong< ::g::Fuse::Controls::Image*> img;
    uStrong< ::g::Uno::UX::Property1*> img_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> img_Url_inst;
    uStrong< ::g::Fuse::Controls::Panel*> imgMaster;
    uStrong< ::g::Fuse::Controls::Panel*> infoRect;
    uStrong< ::g::Uno::UX::Property1*> infoRect_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> infoRect_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Grid*> infoRectContent;
    uStrong< ::g::Uno::UX::Property1*> infoRectContent_Opacity_inst;
    uStrong< ::g::Fuse::Translation*> infoRectContentTrans;
    uStrong< ::g::Uno::UX::Property1*> infoRectContentTrans_Y_inst;
    uStrong< ::g::Fuse::Controls::Panel*> placeContainer;
    uStrong< ::g::Uno::UX::Property1*> placeContainer_Alignment_inst;
    uStrong< ::g::Fuse::Controls::Panel*> placeRect;
    uStrong< ::g::Uno::UX::Property1*> placeRect_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Alignment_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_CardAlignment_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Country_inst;
    uStrong< ::g::Uno::UX::Property1*> this_ForegroundColor_inst;
    uStrong< ::g::Uno::UX::Property1*> this_HitTestMode_inst;
    uStrong< ::g::Uno::UX::Property1*> this_ImageName_inst;
    uStrong< ::g::Uno::UX::Property1*> this_InDetailsMode_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;

    void ctor_7(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1);
    int CardAlignment();
    void CardAlignment(int value);
    uString* Country();
    void Country(uString* value);
    ::g::Uno::Float4 ForegroundColor();
    void ForegroundColor(::g::Uno::Float4 value);
    uString* ImageName();
    void ImageName(uString* value);
    bool InDetailsMode();
    void InDetailsMode(bool value);
    void InitializeUX();
    void SetCardAlignment(int value, uObject* origin);
    void SetCountry(uString* value, uObject* origin);
    void SetForegroundColor(::g::Uno::Float4 value, uObject* origin);
    void SetImageName(uString* value, uObject* origin);
    void SetInDetailsMode(bool value, uObject* origin);
    static ExploreItem* New4(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1);
};
// }

} // ::g
