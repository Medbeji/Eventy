// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-e0dcfc3.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct StopLoading;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class StopLoading :685
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();
void StopLoading__ctor_3_fn(StopLoading* __this);
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview);
void StopLoading__New2_fn(StopLoading** __retval);

struct StopLoading : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_3();
    static StopLoading* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
