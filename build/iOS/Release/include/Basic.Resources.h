// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.BasicTheme/0.46.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Basic{struct Resources;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Basic{

// public partial sealed class Resources :36
// {
::g::Fuse::Controls::Control_type* Resources_typeof();

struct Resources : ::g::Fuse::Controls::Panel
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _colorScheme_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _colorScheme() { return Resources_typeof()->Init(), _colorScheme_; }
    static uSStrong<uArray*> Amber_;
    static uSStrong<uArray*>& Amber() { return Resources_typeof()->Init(), Amber_; }
    static ::g::Uno::Float4 BasicC100_;
    static ::g::Uno::Float4& BasicC100() { return Resources_typeof()->Init(), BasicC100_; }
    static ::g::Uno::Float4 BasicC200_;
    static ::g::Uno::Float4& BasicC200() { return Resources_typeof()->Init(), BasicC200_; }
    static ::g::Uno::Float4 BasicC300_;
    static ::g::Uno::Float4& BasicC300() { return Resources_typeof()->Init(), BasicC300_; }
    static ::g::Uno::Float4 BasicC400_;
    static ::g::Uno::Float4& BasicC400() { return Resources_typeof()->Init(), BasicC400_; }
    static ::g::Uno::Float4 BasicC50_;
    static ::g::Uno::Float4& BasicC50() { return Resources_typeof()->Init(), BasicC50_; }
    static ::g::Uno::Float4 BasicC500_;
    static ::g::Uno::Float4& BasicC500() { return Resources_typeof()->Init(), BasicC500_; }
    static ::g::Uno::Float4 BasicC600_;
    static ::g::Uno::Float4& BasicC600() { return Resources_typeof()->Init(), BasicC600_; }
    static ::g::Uno::Float4 BasicC700_;
    static ::g::Uno::Float4& BasicC700() { return Resources_typeof()->Init(), BasicC700_; }
    static ::g::Uno::Float4 BasicC800_;
    static ::g::Uno::Float4& BasicC800() { return Resources_typeof()->Init(), BasicC800_; }
    static ::g::Uno::Float4 BasicC900_;
    static ::g::Uno::Float4& BasicC900() { return Resources_typeof()->Init(), BasicC900_; }
    static ::g::Uno::Float4 BasicCEmptyFore_;
    static ::g::Uno::Float4& BasicCEmptyFore() { return Resources_typeof()->Init(), BasicCEmptyFore_; }
    static ::g::Uno::Float4 BasicCFillFore_;
    static ::g::Uno::Float4& BasicCFillFore() { return Resources_typeof()->Init(), BasicCFillFore_; }
    static ::g::Uno::Float4 BasicCLine_;
    static ::g::Uno::Float4& BasicCLine() { return Resources_typeof()->Init(), BasicCLine_; }
    static ::g::Uno::Float4 BasicCShadow_;
    static ::g::Uno::Float4& BasicCShadow() { return Resources_typeof()->Init(), BasicCShadow_; }
    static uSStrong<uArray*> Blue_;
    static uSStrong<uArray*>& Blue() { return Resources_typeof()->Init(), Blue_; }
    static uSStrong<uArray*> BlueGrey_;
    static uSStrong<uArray*>& BlueGrey() { return Resources_typeof()->Init(), BlueGrey_; }
    static uSStrong<uArray*> Brown_;
    static uSStrong<uArray*>& Brown() { return Resources_typeof()->Init(), Brown_; }
    static uSStrong<uArray*> ColorCodes_;
    static uSStrong<uArray*>& ColorCodes() { return Resources_typeof()->Init(), ColorCodes_; }
    static uSStrong<uArray*> Cyan_;
    static uSStrong<uArray*>& Cyan() { return Resources_typeof()->Init(), Cyan_; }
    static uSStrong<uArray*> DeepOrange_;
    static uSStrong<uArray*>& DeepOrange() { return Resources_typeof()->Init(), DeepOrange_; }
    static uSStrong<uArray*> DeepPurple_;
    static uSStrong<uArray*>& DeepPurple() { return Resources_typeof()->Init(), DeepPurple_; }
    static uSStrong<uArray*> Green_;
    static uSStrong<uArray*>& Green() { return Resources_typeof()->Init(), Green_; }
    static uSStrong<uArray*> Grey_;
    static uSStrong<uArray*>& Grey() { return Resources_typeof()->Init(), Grey_; }
    static uSStrong<uArray*> Indigo_;
    static uSStrong<uArray*>& Indigo() { return Resources_typeof()->Init(), Indigo_; }
    static uSStrong<uArray*> LightBlue_;
    static uSStrong<uArray*>& LightBlue() { return Resources_typeof()->Init(), LightBlue_; }
    static uSStrong<uArray*> LightGreen_;
    static uSStrong<uArray*>& LightGreen() { return Resources_typeof()->Init(), LightGreen_; }
    static uSStrong<uArray*> Lime_;
    static uSStrong<uArray*>& Lime() { return Resources_typeof()->Init(), Lime_; }
    static uSStrong<uArray*> Orange_;
    static uSStrong<uArray*>& Orange() { return Resources_typeof()->Init(), Orange_; }
    static uSStrong<uArray*> Pink_;
    static uSStrong<uArray*>& Pink() { return Resources_typeof()->Init(), Pink_; }
    static uSStrong<uArray*> Purple_;
    static uSStrong<uArray*>& Purple() { return Resources_typeof()->Init(), Purple_; }
    static uSStrong<uArray*> Red_;
    static uSStrong<uArray*>& Red() { return Resources_typeof()->Init(), Red_; }
    static uSStrong< ::g::Fuse::Font*> RobotoLight_;
    static uSStrong< ::g::Fuse::Font*>& RobotoLight() { return Resources_typeof()->Init(), RobotoLight_; }
    static uSStrong< ::g::Fuse::Font*> RobotoMedium_;
    static uSStrong< ::g::Fuse::Font*>& RobotoMedium() { return Resources_typeof()->Init(), RobotoMedium_; }
    static uSStrong< ::g::Fuse::Font*> RobotoRegular_;
    static uSStrong< ::g::Fuse::Font*>& RobotoRegular() { return Resources_typeof()->Init(), RobotoRegular_; }
    static uSStrong<uArray*> Teal_;
    static uSStrong<uArray*>& Teal() { return Resources_typeof()->Init(), Teal_; }
    static uSStrong<uArray*> Yellow_;
    static uSStrong<uArray*>& Yellow() { return Resources_typeof()->Init(), Yellow_; }
};
// }

}} // ::g::Basic
