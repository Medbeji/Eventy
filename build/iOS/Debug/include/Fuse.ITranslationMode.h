// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public abstract interface ITranslationMode :4683
// {
uInterfaceType* ITranslationMode_typeof();

struct ITranslationMode
{
    void(*fp_GetAbsVector)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*);
    static ::g::Uno::Float3 GetAbsVector(const uInterface& __this, ::g::Fuse::Translation* t);
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 ITranslationMode::GetAbsVector(const uInterface& __this, ::g::Fuse::Translation* t) { ::g::Uno::Float3 __retval; return __this.VTable<ITranslationMode>()->fp_GetAbsVector(__this, t, &__retval), __retval; }
// }

}} // ::g::Fuse
