// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.Native/0.46.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Slider :1787
// {
::g::Fuse::Controls::Native::Android::LeafView_type* Slider_typeof();
void Slider__Dispose_fn(Slider* __this);
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress);

struct Slider : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnSeekBarChanged(double newProgress);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
