// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/textcontrols/$.uno'.
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
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Number;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Number :1647
// {
struct Number_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Triggers::IValue interface16;
};

Number_type* Number_typeof();
void Number__ctor_7_fn(Number* __this);
void Number__get_Format_fn(Number* __this, uString** __retval);
void Number__set_Format_fn(Number* __this, uString* value);
void Number__get_FormatString_fn(Number* __this, uString** __retval);
void Number__set_FormatString_fn(Number* __this, uString* value);
void Number__New4_fn(Number** __retval);
void Number__OnRooted_fn(Number* __this);
void Number__OnValueChanged_fn(Number* __this, float* n, uObject* origin);
void Number__UpdateValue_fn(Number* __this);
void Number__get_Value_fn(Number* __this, float* __retval);
void Number__set_Value_fn(Number* __this, float* value);
void Number__add_ValueChanged_fn(Number* __this, uDelegate* value);
void Number__remove_ValueChanged_fn(Number* __this, uDelegate* value);

struct Number : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _format;
    uStrong<uString*> _formatString;
    uStrong< ::g::Fuse::Controls::TextControl*> _text;
    float _value;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return Number_typeof()->Init(), _valueName_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_7();
    uString* Format();
    void Format(uString* value);
    uString* FormatString();
    void FormatString(uString* value);
    void OnValueChanged(float n, uObject* origin);
    void UpdateValue();
    float Value();
    void Value(float value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static Number* New4();
};
// }

}}} // ::g::Fuse::Controls
