// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/0.47.7/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.-5999be91.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Basic{struct Slider;}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Basic{

// public partial sealed class Slider :304
// {
::g::Fuse::Controls::RangeControl_type* Slider_typeof();
void Slider__ctor_8_fn(Slider* __this);
void Slider__InitializeUX_fn(Slider* __this);
void Slider__New5_fn(Slider** __retval);

struct Slider : ::g::Fuse::Controls::RangeControl
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Slider_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Slider_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Slider_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Slider_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Slider_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Slider_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Slider_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Slider_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Slider_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Slider_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Slider_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Circle*> _focusedThumbDot;
    uStrong< ::g::Uno::UX::Property1*> _focusedThumbDot_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Circle*> _focusedThumbRing;
    uStrong< ::g::Uno::UX::Property1*> _focusedThumbRing_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> _progressTrack;
    uStrong< ::g::Uno::UX::Property1*> _progressTrack_Width_inst;
    uStrong< ::g::Fuse::Translation*> _sliderPos;
    uStrong< ::g::Uno::UX::Property1*> _sliderPos_X_inst;
    uStrong< ::g::Fuse::Controls::Panel*> _sliderThumb;
    uStrong< ::g::Fuse::Controls::Circle*> _thumbDot;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Color_inst;

    void ctor_8();
    void InitializeUX();
    static Slider* New5();
};
// }

}} // ::g::Basic
