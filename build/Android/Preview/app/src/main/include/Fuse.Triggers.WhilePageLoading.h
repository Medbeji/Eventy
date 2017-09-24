// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhilePageLoading;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePageLoading :821
// {
::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof();
void WhilePageLoading__ctor_6_fn(WhilePageLoading* __this);
void WhilePageLoading__New2_fn(WhilePageLoading** __retval);
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a);
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this);
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this);

struct WhilePageLoading : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::WebView*> _webView;

    void ctor_6();
    void OnProgressChanged1(uObject* s, uObject* a);
    static WhilePageLoading* New2();
};
// }

}}} // ::g::Fuse::Triggers
