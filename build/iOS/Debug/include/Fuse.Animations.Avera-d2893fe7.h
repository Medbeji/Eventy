// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Animations/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.Maste-9f52236c.h>
namespace g{namespace Fuse{namespace Animations{struct AverageMasterTransform;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class AverageMasterTransform :417
// {
::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof();
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval);
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this);

struct AverageMasterTransform : ::g::Fuse::Animations::MasterTransform
{
    void ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase);
    static AverageMasterTransform* New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase);
};
// }

}}} // ::g::Fuse::Animations
