// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{struct VideoLoader;}}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal sealed extern class VideoLoader :211
// {
uType* VideoLoader_typeof();
void VideoLoader__ctor__fn(VideoLoader* __this);
void VideoLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval);
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__New1_fn(VideoLoader** __retval);

struct VideoLoader : uObject
{
    void ctor_();
    static uString* GetBundleAbsolutePath(uString* bundlePath);
    static ::g::Uno::Threading::Future1* Load(uString* url);
    static ::g::Uno::Threading::Future1* Load1(::g::Uno::IO::BundleFile* file);
    static ::g::Uno::Threading::Future1* Load2(::g::Uno::UX::FileSource* fileSource);
    static VideoLoader* New1();
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
