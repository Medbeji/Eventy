// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/0.47.7/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Basic{struct NavigationBar;}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Basic{

// public partial sealed class NavigationBar :197
// {
::g::Fuse::Controls::Control_type* NavigationBar_typeof();
void NavigationBar__ctor_7_fn(NavigationBar* __this);
void NavigationBar__InitializeUX_fn(NavigationBar* __this);
void NavigationBar__New4_fn(NavigationBar** __retval);

struct NavigationBar : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavigationBar_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Drawing::SolidColor*> _navigationBarFill;
    uStrong< ::g::Uno::UX::Property1*> _navigationBarFill_Color_inst;

    void ctor_7();
    void InitializeUX();
    static NavigationBar* New4();
};
// }

}} // ::g::Basic
