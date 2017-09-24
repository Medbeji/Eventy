// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Marshal/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Computer-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{struct SizeComputer;}}

namespace g{
namespace Fuse{

// internal sealed class SizeComputer :81
// {
::g::Fuse::Computer1_type* SizeComputer_typeof();
void SizeComputer__ctor_2_fn(SizeComputer* __this);
void SizeComputer__Add1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeComputer__Convert_fn(SizeComputer* __this, uObject* obj, ::g::Uno::UX::Size* __retval);
void SizeComputer__Divide1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeComputer__EqualTo1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval);
void SizeComputer__GreaterOrEqual1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval);
void SizeComputer__GreaterThan1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval);
void SizeComputer__LessOrEqual1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval);
void SizeComputer__LessThan1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval);
void SizeComputer__Max1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeComputer__Min1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeComputer__Multiply1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);
void SizeComputer__New1_fn(SizeComputer** __retval);
void SizeComputer__Subtract1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval);

struct SizeComputer : ::g::Fuse::Computer1
{
    void ctor_2();
    static SizeComputer* New1();
};
// }

}} // ::g::Fuse
