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
namespace g{namespace Fuse{namespace Triggers{struct PageLoaded;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class PageLoaded :1103
// {
::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof();
void PageLoaded__ctor_5_fn(PageLoaded* __this);
void PageLoaded__New2_fn(PageLoaded** __retval);
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a);
void PageLoaded__OnRooted_fn(PageLoaded* __this);
void PageLoaded__OnUnrooted_fn(PageLoaded* __this);

struct PageLoaded : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _webView;

    void ctor_5();
    void OnPageLoaded(uObject* s, uObject* a);
    static PageLoaded* New2();
};
// }

}}} // ::g::Fuse::Triggers
