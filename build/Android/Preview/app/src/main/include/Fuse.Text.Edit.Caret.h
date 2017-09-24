// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Caret;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// internal struct Caret :183
// {
uStructType* Caret_typeof();
void Caret__ctor__fn(Caret* __this, int* cluster, int* lineIndex, int* runIndex, ::g::Uno::Float2* visualPos);
void Caret__New1_fn(int* cluster, int* lineIndex, int* runIndex, ::g::Uno::Float2* visualPos, Caret* __retval);

struct Caret
{
    int Cluster;
    int LineIndex;
    int RunIndex;
    ::g::Uno::Float2 VisualPos;

    void ctor_(int cluster, int lineIndex, int runIndex, ::g::Uno::Float2 visualPos);
};

Caret Caret__New1(int cluster, int lineIndex, int runIndex, ::g::Uno::Float2 visualPos);
// }

}}}} // ::g::Fuse::Text::Edit
