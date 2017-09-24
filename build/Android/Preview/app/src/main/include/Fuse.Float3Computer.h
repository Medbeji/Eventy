// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{struct Float3Computer;}}

namespace g{
namespace Fuse{

// internal sealed class Float3Computer :117
// {
::g::Fuse::Computer1_type* Float3Computer_typeof();
void Float3Computer__ctor_2_fn(Float3Computer* __this);
void Float3Computer__Add1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Float3Computer__Convert_fn(Float3Computer* __this, uObject* obj, ::g::Uno::Float3* __retval);
void Float3Computer__Divide1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Float3Computer__EqualTo1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, bool* __retval);
void Float3Computer__Multiply1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);
void Float3Computer__New1_fn(Float3Computer** __retval);
void Float3Computer__Subtract1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval);

struct Float3Computer : ::g::Fuse::Computer1
{
    void ctor_2();
    static Float3Computer* New1();
};
// }

}} // ::g::Fuse
