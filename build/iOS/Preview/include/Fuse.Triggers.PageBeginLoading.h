// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct PageBeginLoading;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class PageBeginLoading :1044
// {
::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof();
void PageBeginLoading__ctor_5_fn(PageBeginLoading* __this);
void PageBeginLoading__New2_fn(PageBeginLoading** __retval);
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a);
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this);
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this);

struct PageBeginLoading : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _webView;

    void ctor_5();
    void OnPageBeginLoading(uObject* s, uObject* a);
    static PageBeginLoading* New2();
};
// }

}}} // ::g::Fuse::Triggers
