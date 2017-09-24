// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.BasicTheme/0.46.1/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Basic{struct TextInput;}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Basic{

// public partial sealed class TextInput :602
// {
::g::Fuse::Controls::TextInputControl_type* TextInput_typeof();
void TextInput__ctor_8_fn(TextInput* __this);
void TextInput__InitializeUX_fn(TextInput* __this);
void TextInput__New4_fn(TextInput** __retval);

struct TextInput : ::g::Fuse::Controls::TextInput
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextInput_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TextInput_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return TextInput_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return TextInput_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return TextInput_typeof()->Init(), __selector4_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> _dividerRect;
    uStrong< ::g::Uno::UX::Property1*> _dividerRect_Height_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_TextColor_inst;
    uStrong< ::g::Fuse::Drawing::SolidColor*> thisDivider;
    uStrong< ::g::Uno::UX::Property1*> thisDivider_Color_inst;

    void ctor_8();
    void InitializeUX();
    static TextInput* New4();
};
// }

}} // ::g::Basic
