// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct SourceReference;}}}
namespace g{namespace Outracks{namespace Simulator{struct SourceReferenceCanonicalization;}}}
namespace g{namespace Outracks{namespace Simulator{struct TextPosition;}}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class SourceReferenceCanonicalization :1021
// {
uClassType* SourceReferenceCanonicalization_typeof();
void SourceReferenceCanonicalization__ToCanonicalForm_fn(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* src, uString** __retval);
void SourceReferenceCanonicalization__ToCanonicalForm1_fn(::g::Outracks::Simulator::SourceReference* src, uString** __retval);
void SourceReferenceCanonicalization__ToCanonicalForm2_fn(::g::Outracks::Simulator::TextPosition* pos, uString** __retval);

struct SourceReferenceCanonicalization : uObject
{
    static uString* ToCanonicalForm(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > src);
    static uString* ToCanonicalForm1(::g::Outracks::Simulator::SourceReference* src);
    static uString* ToCanonicalForm2(::g::Outracks::Simulator::TextPosition pos);
};
// }

}}} // ::g::Outracks::Simulator
