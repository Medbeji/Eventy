// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Timeline :2241
// {
struct Timeline_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPlayback interface8;
    ::g::Fuse::Triggers::IPulseTrigger interface9;
    ::g::Fuse::Triggers::IProgress interface10;
};

Timeline_type* Timeline_typeof();
void Timeline__ctor_5_fn(Timeline* __this);
void Timeline__BypassOff_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackget_CanPause_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanPlayTo_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanResume_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackget_CanStop_fn(Timeline* __this, bool* __retval);
void Timeline__FuseTriggersIPlaybackPause_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackPlayTo_fn(Timeline* __this, double* progress);
void Timeline__FuseTriggersIPlaybackResume_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackStop_fn(Timeline* __this);
void Timeline__get_InitialProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_InitialProgress_fn(Timeline* __this, double* value);
void Timeline__New2_fn(Timeline** __retval);
void Timeline__get_OnAtZero_fn(Timeline* __this, bool* __retval);
void Timeline__set_OnAtZero_fn(Timeline* __this, bool* value);
void Timeline__OnProgressChanged_fn(Timeline* __this);
void Timeline__OnRooted_fn(Timeline* __this);
void Timeline__pause_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Pause_fn(Timeline* __this);
void Timeline__Play_fn(Timeline* __this, double* progress);
void Timeline__get_PlayMode_fn(Timeline* __this, int* __retval);
void Timeline__set_PlayMode_fn(Timeline* __this, int* value);
void Timeline__playTo_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PlayTo1_fn(Timeline* __this, double* progress);
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval);
void Timeline__set_Progress_fn(Timeline* __this, double* value);
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__pulse_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Pulse1_fn(Timeline* __this);
void Timeline__pulseBackward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PulseBackward1_fn(Timeline* __this);
void Timeline__pulseForward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PulseForward_fn(Timeline* __this);
void Timeline__resume_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Resume_fn(Timeline* __this);
void Timeline__seek_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__SetProgress_fn(Timeline* __this, double* value, uObject* origin);
void Timeline__stop_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Stop1_fn(Timeline* __this);
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value);
void Timeline__TimelinePlayTo_fn(Timeline* __this, double* progress);

struct Timeline : ::g::Fuse::Triggers::Trigger
{
    bool _hasInitialProgress;
    bool _hasTargetProgress;
    double _initialProgress;
    int _lastPlay;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return Timeline_typeof()->Init(), _progressName_; }
    uStrong<uObject*> _progressOrigin;
    int _state;
    double _targetProgress;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_5();
    void BypassOff();
    double InitialProgress();
    void InitialProgress(double value);
    bool OnAtZero();
    void OnAtZero(bool value);
    void Pause();
    void Play(double progress);
    int PlayMode();
    void PlayMode(int value);
    void PlayTo1(double progress);
    double Progress1();
    void Progress1(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Pulse1();
    void PulseBackward1();
    void PulseForward();
    void Resume();
    void SetProgress(double value, uObject* origin);
    void Stop1();
    double TargetProgress();
    void TargetProgress(double value);
    void TimelinePlayTo(double progress);
    static Timeline* New2();
    static void pause(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void playTo(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulse(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulseBackward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulseForward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void resume(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void seek(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void stop(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
