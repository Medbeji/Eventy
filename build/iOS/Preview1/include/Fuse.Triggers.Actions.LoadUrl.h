// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-e0dcfc3.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadUrl;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadUrl :697
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();
void LoadUrl__ctor_3_fn(LoadUrl* __this);
void LoadUrl__Execute_fn(LoadUrl* __this, ::g::Fuse::Controls::WebView* webview);
void LoadUrl__New2_fn(LoadUrl** __retval);
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval);
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value);

struct LoadUrl : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _Url;

    void ctor_3();
    uString* Url();
    void Url(uString* value);
    static LoadUrl* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
