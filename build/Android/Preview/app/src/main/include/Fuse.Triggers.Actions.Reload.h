// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-e0dcfc3.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Reload;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Reload :673
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();
void Reload__ctor_3_fn(Reload* __this);
void Reload__Execute_fn(Reload* __this, ::g::Fuse::Controls::WebView* webview);
void Reload__New2_fn(Reload** __retval);

struct Reload : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_3();
    static Reload* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
