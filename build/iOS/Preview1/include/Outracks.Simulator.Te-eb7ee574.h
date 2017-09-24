// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct TextOffset;}}}
namespace g{namespace Outracks{namespace Simulator{struct TextOffsetConversion;}}}
namespace g{namespace Outracks{namespace Simulator{struct TextPosition;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class TextOffsetConversion :1142
// {
uClassType* TextOffsetConversion_typeof();
void TextOffsetConversion__OffsetBy_fn(::g::Outracks::Simulator::TextPosition* pos, int* characters, uString* code, ::g::Outracks::Simulator::TextPosition* __retval);
void TextOffsetConversion__ToOffset_fn(::g::Outracks::Simulator::TextPosition* pos, uString* data, ::g::Outracks::Simulator::TextOffset** __retval);
void TextOffsetConversion__ToPosition_fn(::g::Outracks::Simulator::TextOffset* offset, uString* data, ::g::Outracks::Simulator::TextPosition* __retval);

struct TextOffsetConversion : uObject
{
    static ::g::Outracks::Simulator::TextPosition OffsetBy(::g::Outracks::Simulator::TextPosition pos, int characters, uString* code);
    static ::g::Outracks::Simulator::TextOffset* ToOffset(::g::Outracks::Simulator::TextPosition pos, uString* data);
    static ::g::Outracks::Simulator::TextPosition ToPosition(::g::Outracks::Simulator::TextOffset* offset, uString* data);
};
// }

}}} // ::g::Outracks::Simulator
