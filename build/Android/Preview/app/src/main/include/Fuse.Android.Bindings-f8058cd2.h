// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{namespace Bindings{struct AndroidDeviceInterop;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Bindings{

// internal static extern class AndroidDeviceInterop :749
// {
uClassType* AndroidDeviceInterop_typeof();
void AndroidDeviceInterop__LaunchIntent_fn(uString* action, uString* uri, uString* packageName, uString* className, ::g::Java::Object** __retval);
void AndroidDeviceInterop__MakeBufferInputStream_fn(uArray* unoArr, ::g::Java::Object** __retval);
void AndroidDeviceInterop__MakeBufferInputStream1_fn(::g::Java::Object* buf, ::g::Java::Object** __retval);
void AndroidDeviceInterop__MakeMediaDataSource_fn(uArray* unoArr, ::g::Java::Object** __retval);
void AndroidDeviceInterop__MakeMediaDataSource1_fn(::g::Java::Object* buf, ::g::Java::Object** __retval);
void AndroidDeviceInterop__OpenAssetFileDescriptor_fn(::g::Uno::IO::BundleFile* bundle, ::g::Java::Object** __retval);
void AndroidDeviceInterop__OpenAssetFileDescriptor1_fn(::g::Uno::UX::BundleFileSource* fileSource, ::g::Java::Object** __retval);

struct AndroidDeviceInterop : uObject
{
    static ::g::Java::Object* LaunchIntent(uString* action, uString* uri, uString* packageName, uString* className);
    static ::g::Java::Object* MakeBufferInputStream(uArray* unoArr);
    static ::g::Java::Object* MakeBufferInputStream1(::g::Java::Object* buf);
    static ::g::Java::Object* MakeMediaDataSource(uArray* unoArr);
    static ::g::Java::Object* MakeMediaDataSource1(::g::Java::Object* buf);
    static ::g::Java::Object* OpenAssetFileDescriptor(::g::Uno::IO::BundleFile* bundle);
    static ::g::Java::Object* OpenAssetFileDescriptor1(::g::Uno::UX::BundleFileSource* fileSource);
};
// }

}}}} // ::g::Fuse::Android::Bindings
