// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DialogButton;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed class DialogButton :1440
// {
uType* DialogButton_typeof();
void DialogButton__ctor__fn(DialogButton* __this, uString* text, ::g::Outracks::Simulator::Client::State* destination);
void DialogButton__New1_fn(uString* text, ::g::Outracks::Simulator::Client::State* destination, DialogButton** __retval);

struct DialogButton : uObject
{
    uStrong< ::g::Outracks::Simulator::Client::State*> Destination;
    uStrong<uString*> Text;

    void ctor_(uString* text, ::g::Outracks::Simulator::Client::State* destination);
    static DialogButton* New1(uString* text, ::g::Outracks::Simulator::Client::State* destination);
};
// }

}}}} // ::g::Outracks::Simulator::Client
