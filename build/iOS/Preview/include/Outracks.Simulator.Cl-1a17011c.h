// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Cl-76415cc8.h>
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Gestures{struct ClickedArgs;}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct ShowingPrompt;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal abstract class ShowingPrompt :1307
// {
struct ShowingPrompt_type : ::g::Outracks::Simulator::Client::State_type
{
    void(*fp_OnCancel)(::g::Outracks::Simulator::Client::ShowingPrompt*, ::g::Outracks::Simulator::Client::State**);
    void(*fp_OnOk)(::g::Outracks::Simulator::Client::ShowingPrompt*, uString*, ::g::Outracks::Simulator::Client::State**);
};

ShowingPrompt_type* ShowingPrompt_typeof();
void ShowingPrompt__ctor_1_fn(ShowingPrompt* __this, uString* header, uString* body);
void ShowingPrompt__OnCancelClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args);
void ShowingPrompt__OnEnterState_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval);
void ShowingPrompt__OnOkClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args);
void ShowingPrompt__OnUpdate_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval);

struct ShowingPrompt : ::g::Outracks::Simulator::Client::State
{
    uStrong<uString*> _body;
    bool _cancelClicked;
    uStrong<uString*> _header;
    uStrong< ::g::Fuse::Controls::TextInput*> _input;
    bool _okClicked;

    void ctor_1(uString* header, uString* body);
    ::g::Outracks::Simulator::Client::State* OnCancel() { ::g::Outracks::Simulator::Client::State* __retval; return (((ShowingPrompt_type*)__type)->fp_OnCancel)(this, &__retval), __retval; }
    void OnCancelClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args);
    ::g::Outracks::Simulator::Client::State* OnOk(uString* text) { ::g::Outracks::Simulator::Client::State* __retval; return (((ShowingPrompt_type*)__type)->fp_OnOk)(this, text, &__retval), __retval; }
    void OnOkClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args);
};
// }

}}}} // ::g::Outracks::Simulator::Client
