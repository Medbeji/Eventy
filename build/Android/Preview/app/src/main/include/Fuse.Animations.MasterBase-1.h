// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase__GFWResult;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class MasterBase<T> :1623
// {
struct MasterBase_type : uType
{
    ::g::Fuse::Animations::IMixerMaster interface0;
    void(*fp_OnActive)(::g::Fuse::Animations::MasterBase*);
    void(*fp_OnComplete)(::g::Fuse::Animations::MasterBase*);
    void(*fp_OnInactive)(::g::Fuse::Animations::MasterBase*);
    void(*fp_get_RestValue)(::g::Fuse::Animations::MasterBase*, uTRef);
};

MasterBase_type* MasterBase_typeof();
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Complete_fn(MasterBase* __this);
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval);
void MasterBase__MarkDirty_fn(MasterBase* __this);
void MasterBase__OnActive_fn(MasterBase* __this);
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle);
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle);

struct MasterBase : uObject
{
    bool _inactive;
    uStrong< ::g::Fuse::Animations::MixerBase*> _mixerBase;
    bool DirtyValue;
    uStrong< ::g::Uno::Collections::List*> Handles;

    void ctor_(::g::Fuse::Animations::MixerBase* mixerBase);
    void Complete();
    MasterBase__GFWResult GetFullWeight();
    void MarkDirty();
    void OnActive() { (((MasterBase_type*)__type)->fp_OnActive)(this); }
    void OnComplete() { (((MasterBase_type*)__type)->fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase_type*)__type)->fp_OnInactive)(this); }
    void Register(::g::Fuse::Animations::MixerHandle* handle);
    template<class T>
    T RestValue() { T __retval; return (((MasterBase_type*)__type)->fp_get_RestValue)(this, &__retval), __retval; }
    void get_RestValue_ex(uTRef __retval) { (((MasterBase_type*)__type)->fp_get_RestValue)(this, __retval); }
    void Unregister(::g::Fuse::Animations::MixerHandle* handle);
    static void OnActive(MasterBase* __this) { MasterBase__OnActive_fn(__this); }
};
// }

}}} // ::g::Fuse::Animations
