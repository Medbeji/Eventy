// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct PageIndicator;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageIndicator :2635
// {
::g::Fuse::Controls::Panel_type* PageIndicator_typeof();
void PageIndicator__ctor_8_fn(PageIndicator* __this, uObject* navigation);
void PageIndicator__get_DotTemplate_fn(PageIndicator* __this, ::g::Uno::UX::Template** __retval);
void PageIndicator__set_DotTemplate_fn(PageIndicator* __this, ::g::Uno::UX::Template* value);
void PageIndicator__InitializeUX_fn(PageIndicator* __this);
void PageIndicator__New5_fn(uObject* navigation, PageIndicator** __retval);
void PageIndicator__OnRooted_fn(PageIndicator* __this);
void PageIndicator__OnUnrooted_fn(PageIndicator* __this);
void PageIndicator__RecreateDots_fn(PageIndicator* __this);
void PageIndicator__UpdateCount_fn(PageIndicator* __this, uObject* s);

struct PageIndicator : ::g::Fuse::Controls::StackPanel
{
    uStrong< ::g::Uno::UX::Template*> _dotTemplate;
    uStrong<uObject*> _pageProgress;

    void ctor_8(uObject* navigation);
    ::g::Uno::UX::Template* DotTemplate();
    void DotTemplate(::g::Uno::UX::Template* value);
    void InitializeUX();
    void RecreateDots();
    void UpdateCount(uObject* s);
    static PageIndicator* New5(uObject* navigation);
};
// }

}}} // ::g::Fuse::Controls
