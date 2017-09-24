// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Edit.Caret.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct CaretContext;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public struct CaretContext :199
// {
uStructType* CaretContext_typeof();
void CaretContext__ctor__fn(CaretContext* __this, ::g::Uno::Collections::List* pruns, uString* source);
void CaretContext__Backspace_fn(CaretContext* __this, int* i, uString** __retval);
void CaretContext__Clamp_fn(CaretContext* __this, int* i, int* __retval);
void CaretContext__ClosestCaretOnLine_fn(CaretContext* __this, ::g::Uno::Float2* pos, int* desiredLine, int* def, int* __retval);
void CaretContext__Delete_fn(CaretContext* __this, int* i, uString** __retval);
void CaretContext__DeleteSpan_fn(CaretContext* __this, int* start, int* caret, uString** __retval);
void CaretContext__GetClosest_fn(CaretContext* __this, ::g::Uno::Float2* pos, float* lineHeight, int* __retval);
void CaretContext__GetVisualPosition_fn(CaretContext* __this, int* i, ::g::Uno::Float2* __retval);
void CaretContext__GetVisualRects_fn(CaretContext* __this, int* i1, int* i2, float* lineHeight, ::g::Uno::Collections::List** __retval);
void CaretContext__Insert_fn(CaretContext* __this, uChar* c, int* i, uString** __retval);
void CaretContext__LeftMost_fn(CaretContext* __this, int* __retval);
void CaretContext__LeftToRight_fn(CaretContext* __this, int* i, bool* __retval);
void CaretContext__LerpClustersLTR_fn(uString* source, int* cluster1, ::g::Uno::Float2* pos1, int* cluster2, ::g::Uno::Float2* pos2, int* lineIndex, int* runIndex, ::g::Uno::Collections::List* result);
void CaretContext__LerpClustersRTL_fn(uString* source, int* cluster1, ::g::Uno::Float2* pos1, int* cluster2, ::g::Uno::Float2* pos2, int* lineIndex, int* runIndex, ::g::Uno::Collections::List* result);
void CaretContext__MoveDown_fn(CaretContext* __this, int* currentIndex, int* __retval);
void CaretContext__MoveLeft_fn(CaretContext* __this, int* i, int* __retval);
void CaretContext__MoveRight_fn(CaretContext* __this, int* i, int* __retval);
void CaretContext__MoveUp_fn(CaretContext* __this, int* currentIndex, int* __retval);
void CaretContext__New1_fn(::g::Uno::Collections::List* pruns, uString* source, CaretContext* __retval);
void CaretContext__PossibleCaretPositions_fn(::g::Uno::Collections::List* lines, uString* source, ::g::Uno::Collections::List** __retval);
void CaretContext__RightMost_fn(CaretContext* __this, int* __retval);
void CaretContext__SquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* __retval);
void CaretContext__StringRangeLength_fn(uString* source, int* cluster1, int* cluster2, int* __retval);
void CaretContext__WeightedSquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* yweight, float* __retval);

struct CaretContext
{
    uStrong< ::g::Uno::Collections::List*> _runs;
    uStrong<uString*> _source;
    uStrong< ::g::Uno::Collections::List*> _carets;
    uStrong<uArray*> _runIndices;

    void ctor_(::g::Uno::Collections::List* pruns, uString* source);
    uString* Backspace(int* i);
    int Clamp(int i);
    int ClosestCaretOnLine(::g::Uno::Float2 pos, int desiredLine, int def);
    uString* Delete(int* i);
    uString* DeleteSpan(int start, int* caret);
    int GetClosest(::g::Uno::Float2 pos, float lineHeight);
    ::g::Uno::Float2 GetVisualPosition(int i);
    ::g::Uno::Collections::List* GetVisualRects(int i1, int i2, float lineHeight);
    uString* Insert(uChar c, int* i);
    int LeftMost();
    bool LeftToRight(int i);
    int MoveDown(int currentIndex);
    int MoveLeft(int i);
    int MoveRight(int i);
    int MoveUp(int currentIndex);
    int RightMost();
    static ::g::Uno::Collections::List* PossibleCaretPositions(::g::Uno::Collections::List* lines, uString* source);
    static int StringRangeLength(uString* source, int cluster1, int cluster2);
};

void CaretContext__LerpClustersLTR(uString* source, int cluster1, ::g::Uno::Float2 pos1, int cluster2, ::g::Uno::Float2 pos2, int lineIndex, int runIndex, ::g::Uno::Collections::List* result);
void CaretContext__LerpClustersRTL(uString* source, int cluster1, ::g::Uno::Float2 pos1, int cluster2, ::g::Uno::Float2 pos2, int lineIndex, int runIndex, ::g::Uno::Collections::List* result);
CaretContext CaretContext__New1(::g::Uno::Collections::List* pruns, uString* source);
float CaretContext__SquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q);
float CaretContext__WeightedSquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q, float yweight);
// }

}}}} // ::g::Fuse::Text::Edit
