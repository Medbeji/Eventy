// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Edit.Caret.h>
#include <Fuse.Text.Edit.CaretContext.h>
#include <Fuse.Text.Edit.CaretIndex.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Fuse.Text.PositionedRun.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.SubstringExtensions.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno
// ------------------------------------------------------------------------------------

// internal struct Caret :183
// {
static void Caret_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Edit::Caret, Cluster), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Edit::Caret, LineIndex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Edit::Caret, RunIndex), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::Edit::Caret, VisualPos), 0);
}

uStructType* Caret_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Caret);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Edit.Caret", options);
    type->fp_build_ = Caret_build;
    return type;
}

// public Caret(int cluster, int lineIndex, int runIndex, float2 visualPos) :190
void Caret__ctor__fn(Caret* __this, int* cluster, int* lineIndex, int* runIndex, ::g::Uno::Float2* visualPos)
{
    __this->ctor_(*cluster, *lineIndex, *runIndex, *visualPos);
}

// public Caret New(int cluster, int lineIndex, int runIndex, float2 visualPos) :190
void Caret__New1_fn(int* cluster, int* lineIndex, int* runIndex, ::g::Uno::Float2* visualPos, Caret* __retval)
{
    *__retval = Caret__New1(*cluster, *lineIndex, *runIndex, *visualPos);
}

// public Caret(int cluster, int lineIndex, int runIndex, float2 visualPos) [instance] :190
void Caret::ctor_(int cluster, int lineIndex, int runIndex, ::g::Uno::Float2 visualPos)
{
    Cluster = cluster;
    LineIndex = lineIndex;
    RunIndex = runIndex;
    VisualPos = visualPos;
}

// public Caret New(int cluster, int lineIndex, int runIndex, float2 visualPos) [static] :190
Caret Caret__New1(int cluster, int lineIndex, int runIndex, ::g::Uno::Float2 visualPos)
{
    Caret obj1;
    obj1.ctor_(cluster, lineIndex, runIndex, visualPos);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno
// ------------------------------------------------------------------------------------

// public struct CaretContext :199
// {
static void CaretContext_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Char_typeof();
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Edit::Caret_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), NULL), offsetof(::g::Fuse::Text::Edit::CaretContext, _runs), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Text::Edit::CaretContext, _source), 0,
        ::TYPES[2/*Uno.Collections.List<Fuse.Text.Edit.Caret>*/], offsetof(::g::Fuse::Text::Edit::CaretContext, _carets), 0,
        ::g::Uno::Int_typeof()->Array(), offsetof(::g::Fuse::Text::Edit::CaretContext, _runIndices), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("Backspace", NULL, (void*)CaretContext__Backspace_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()->ByRef()),
        new uFunction("Delete", NULL, (void*)CaretContext__Delete_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()->ByRef()),
        new uFunction("DeleteSpan", NULL, (void*)CaretContext__DeleteSpan_fn, 0, false, ::g::Uno::String_typeof(), 2, ::g::Fuse::Text::Edit::CaretIndex_typeof(), ::g::Fuse::Text::Edit::CaretIndex_typeof()->ByRef()),
        new uFunction("GetClosest", NULL, (void*)CaretContext__GetClosest_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("GetVisualPosition", NULL, (void*)CaretContext__GetVisualPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()),
        new uFunction("GetVisualRects", NULL, (void*)CaretContext__GetVisualRects_fn, 0, false, ::TYPES[0/*Uno.Collections.List<Uno.Rect>*/], 3, ::g::Fuse::Text::Edit::CaretIndex_typeof(), ::g::Fuse::Text::Edit::CaretIndex_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Insert", NULL, (void*)CaretContext__Insert_fn, 0, false, ::g::Uno::String_typeof(), 2, ::TYPES[1/*char*/], ::g::Fuse::Text::Edit::CaretIndex_typeof()->ByRef()),
        new uFunction("LeftMost", NULL, (void*)CaretContext__LeftMost_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 0),
        new uFunction("MoveDown", NULL, (void*)CaretContext__MoveDown_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()),
        new uFunction("MoveLeft", NULL, (void*)CaretContext__MoveLeft_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()),
        new uFunction("MoveRight", NULL, (void*)CaretContext__MoveRight_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()),
        new uFunction("MoveUp", NULL, (void*)CaretContext__MoveUp_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 1, ::g::Fuse::Text::Edit::CaretIndex_typeof()),
        new uFunction(".ctor", NULL, (void*)CaretContext__New1_fn, 0, true, type, 2, ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), NULL), ::g::Uno::String_typeof()),
        new uFunction("RightMost", NULL, (void*)CaretContext__RightMost_fn, 0, false, ::g::Fuse::Text::Edit::CaretIndex_typeof(), 0));
}

uStructType* CaretContext_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(CaretContext);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Edit.CaretContext", options);
    type->fp_build_ = CaretContext_build;
    return type;
}

// public CaretContext(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> pruns, string source) :206
void CaretContext__ctor__fn(CaretContext* __this, ::g::Uno::Collections::List* pruns, uString* source)
{
    __this->ctor_(pruns, source);
}

// public string Backspace(Fuse.Text.Edit.CaretIndex& i) :536
void CaretContext__Backspace_fn(CaretContext* __this, int* i, uString** __retval)
{
    *__retval = __this->Backspace(i);
}

// private Fuse.Text.Edit.CaretIndex Clamp(Fuse.Text.Edit.CaretIndex i) :344
void CaretContext__Clamp_fn(CaretContext* __this, int* i, int* __retval)
{
    *__retval = __this->Clamp(*i);
}

// private Fuse.Text.Edit.CaretIndex ClosestCaretOnLine(float2 pos, int desiredLine, Fuse.Text.Edit.CaretIndex def) :415
void CaretContext__ClosestCaretOnLine_fn(CaretContext* __this, ::g::Uno::Float2* pos, int* desiredLine, int* def, int* __retval)
{
    *__retval = __this->ClosestCaretOnLine(*pos, *desiredLine, *def);
}

// public string Delete(Fuse.Text.Edit.CaretIndex& i) :522
void CaretContext__Delete_fn(CaretContext* __this, int* i, uString** __retval)
{
    *__retval = __this->Delete(i);
}

// public string DeleteSpan(Fuse.Text.Edit.CaretIndex start, Fuse.Text.Edit.CaretIndex& caret) :553
void CaretContext__DeleteSpan_fn(CaretContext* __this, int* start, int* caret, uString** __retval)
{
    *__retval = __this->DeleteSpan(*start, caret);
}

// public Fuse.Text.Edit.CaretIndex GetClosest(float2 pos, float lineHeight) :358
void CaretContext__GetClosest_fn(CaretContext* __this, ::g::Uno::Float2* pos, float* lineHeight, int* __retval)
{
    *__retval = __this->GetClosest(*pos, *lineHeight);
}

// public float2 GetVisualPosition(Fuse.Text.Edit.CaretIndex i) :349
void CaretContext__GetVisualPosition_fn(CaretContext* __this, int* i, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetVisualPosition(*i);
}

// public Uno.Collections.List<Uno.Rect> GetVisualRects(Fuse.Text.Edit.CaretIndex i1, Fuse.Text.Edit.CaretIndex i2, float lineHeight) :436
void CaretContext__GetVisualRects_fn(CaretContext* __this, int* i1, int* i2, float* lineHeight, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->GetVisualRects(*i1, *i2, *lineHeight);
}

// public string Insert(char c, Fuse.Text.Edit.CaretIndex& i) :512
void CaretContext__Insert_fn(CaretContext* __this, uChar* c, int* i, uString** __retval)
{
    *__retval = __this->Insert(*c, i);
}

// public Fuse.Text.Edit.CaretIndex LeftMost() :338
void CaretContext__LeftMost_fn(CaretContext* __this, int* __retval)
{
    *__retval = __this->LeftMost();
}

// private bool LeftToRight(Fuse.Text.Edit.CaretIndex i) :506
void CaretContext__LeftToRight_fn(CaretContext* __this, int* i, bool* __retval)
{
    *__retval = __this->LeftToRight(*i);
}

// private static void LerpClustersLTR(string source, int cluster1, float2 pos1, int cluster2, float2 pos2, int lineIndex, int runIndex, Uno.Collections.List<Fuse.Text.Edit.Caret> result) :292
void CaretContext__LerpClustersLTR_fn(uString* source, int* cluster1, ::g::Uno::Float2* pos1, int* cluster2, ::g::Uno::Float2* pos2, int* lineIndex, int* runIndex, ::g::Uno::Collections::List* result)
{
    CaretContext__LerpClustersLTR(source, *cluster1, *pos1, *cluster2, *pos2, *lineIndex, *runIndex, result);
}

// private static void LerpClustersRTL(string source, int cluster1, float2 pos1, int cluster2, float2 pos2, int lineIndex, int runIndex, Uno.Collections.List<Fuse.Text.Edit.Caret> result) :311
void CaretContext__LerpClustersRTL_fn(uString* source, int* cluster1, ::g::Uno::Float2* pos1, int* cluster2, ::g::Uno::Float2* pos2, int* lineIndex, int* runIndex, ::g::Uno::Collections::List* result)
{
    CaretContext__LerpClustersRTL(source, *cluster1, *pos1, *cluster2, *pos2, *lineIndex, *runIndex, result);
}

// public Fuse.Text.Edit.CaretIndex MoveDown(Fuse.Text.Edit.CaretIndex currentIndex) :403
void CaretContext__MoveDown_fn(CaretContext* __this, int* currentIndex, int* __retval)
{
    *__retval = __this->MoveDown(*currentIndex);
}

// public Fuse.Text.Edit.CaretIndex MoveLeft(Fuse.Text.Edit.CaretIndex i) :342
void CaretContext__MoveLeft_fn(CaretContext* __this, int* i, int* __retval)
{
    *__retval = __this->MoveLeft(*i);
}

// public Fuse.Text.Edit.CaretIndex MoveRight(Fuse.Text.Edit.CaretIndex i) :341
void CaretContext__MoveRight_fn(CaretContext* __this, int* i, int* __retval)
{
    *__retval = __this->MoveRight(*i);
}

// public Fuse.Text.Edit.CaretIndex MoveUp(Fuse.Text.Edit.CaretIndex currentIndex) :391
void CaretContext__MoveUp_fn(CaretContext* __this, int* currentIndex, int* __retval)
{
    *__retval = __this->MoveUp(*currentIndex);
}

// public CaretContext New(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> pruns, string source) :206
void CaretContext__New1_fn(::g::Uno::Collections::List* pruns, uString* source, CaretContext* __retval)
{
    *__retval = CaretContext__New1(pruns, source);
}

// private static Uno.Collections.List<Fuse.Text.Edit.Caret> PossibleCaretPositions(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> lines, string source) :214
void CaretContext__PossibleCaretPositions_fn(::g::Uno::Collections::List* lines, uString* source, ::g::Uno::Collections::List** __retval)
{
    *__retval = CaretContext::PossibleCaretPositions(lines, source);
}

// public Fuse.Text.Edit.CaretIndex RightMost() :339
void CaretContext__RightMost_fn(CaretContext* __this, int* __retval)
{
    *__retval = __this->RightMost();
}

// private static float SquaredDist(float2 p, float2 q) :384
void CaretContext__SquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* __retval)
{
    *__retval = CaretContext__SquaredDist(*p, *q);
}

// private static int StringRangeLength(string source, int cluster1, int cluster2) :329
void CaretContext__StringRangeLength_fn(uString* source, int* cluster1, int* cluster2, int* __retval)
{
    *__retval = CaretContext::StringRangeLength(source, *cluster1, *cluster2);
}

// private static float WeightedSquaredDist(float2 p, float2 q, float yweight) :377
void CaretContext__WeightedSquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* yweight, float* __retval)
{
    *__retval = CaretContext__WeightedSquaredDist(*p, *q, *yweight);
}

// public CaretContext(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> pruns, string source) [instance] :206
void CaretContext::ctor_(::g::Uno::Collections::List* pruns, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", ".ctor(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>>,string)");
    _runs = pruns;
    _source = source;
    _carets = CaretContext::PossibleCaretPositions(_runs, _source);
}

// public string Backspace(Fuse.Text.Edit.CaretIndex& i) [instance] :536
uString* CaretContext::Backspace(int* i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "Backspace(Fuse.Text.Edit.CaretIndex&)");
    ::g::Fuse::Text::Edit::Caret ret2;
    *i = Clamp(*i);

    if (uPtr(_carets)->Count() == 0)
        return _source;

    int deletionPos = ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(_source, (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(*i), &ret2), ret2).Cluster);

    if (LeftToRight(*i) && (*i > 0))
        *i = *i - 1;

    if (0 <= deletionPos)
        return ::g::Fuse::Text::SubstringExtensions::DeleteAt(_source, &deletionPos);

    return _source;
}

// private Fuse.Text.Edit.CaretIndex Clamp(Fuse.Text.Edit.CaretIndex i) [instance] :344
int CaretContext::Clamp(int i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "Clamp(Fuse.Text.Edit.CaretIndex)");
    return ::g::Uno::Math::Clamp8(i, LeftMost(), RightMost());
}

// private Fuse.Text.Edit.CaretIndex ClosestCaretOnLine(float2 pos, int desiredLine, Fuse.Text.Edit.CaretIndex def) [instance] :415
int CaretContext::ClosestCaretOnLine(::g::Uno::Float2 pos, int desiredLine, int def)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "ClosestCaretOnLine(float2,int,Fuse.Text.Edit.CaretIndex)");
    ::g::Fuse::Text::Edit::Caret ret3;
    int minIndex = def;
    float minSquaredDist = FLT_INF;

    for (int i = 0; i < uPtr(_carets)->Count(); ++i)
    {
        ::g::Fuse::Text::Edit::Caret caret = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i), &ret3), ret3);

        if (caret.LineIndex == desiredLine)
        {
            float dist = CaretContext__SquaredDist(pos, caret.VisualPos);

            if (dist < minSquaredDist)
            {
                minSquaredDist = dist;
                minIndex = i;
            }
        }
    }

    return minIndex;
}

// public string Delete(Fuse.Text.Edit.CaretIndex& i) [instance] :522
uString* CaretContext::Delete(int* i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "Delete(Fuse.Text.Edit.CaretIndex&)");
    ::g::Fuse::Text::Edit::Caret ret4;
    *i = Clamp(*i);

    if (uPtr(_carets)->Count() == 0)
        return _source;

    int deletionPos = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(*i), &ret4), ret4).Cluster;

    if (!LeftToRight(*i) && (*i > 0))
        *i = *i - 1;

    if (deletionPos < uPtr(_source)->Length())
        return ::g::Fuse::Text::SubstringExtensions::DeleteAt(_source, &deletionPos);

    return _source;
}

// public string DeleteSpan(Fuse.Text.Edit.CaretIndex start, Fuse.Text.Edit.CaretIndex& caret) [instance] :553
uString* CaretContext::DeleteSpan(int start, int* caret)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "DeleteSpan(Fuse.Text.Edit.CaretIndex,Fuse.Text.Edit.CaretIndex&)");
    ::g::Fuse::Text::Edit::Caret ret5;
    ::g::Fuse::Text::Edit::Caret ret6;
    start = Clamp(start);
    *caret = Clamp(*caret);

    if (uPtr(_carets)->Count() == 0)
        return _source;

    int deletionStart = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(start), &ret5), ret5).Cluster;
    int deletionEnd = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(*caret), &ret6), ret6).Cluster;

    if (deletionStart == deletionEnd)
        return _source;

    if (deletionStart > deletionEnd)
    {
        int tmp = deletionStart;
        deletionStart = deletionEnd;
        deletionEnd = tmp;
    }

    deletionEnd = ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(_source, deletionEnd);
    *caret = ::g::Uno::Math::Min8(start, *caret);
    return ::g::Fuse::Text::SubstringExtensions::DeleteSpan(_source, deletionStart, deletionEnd);
}

// public Fuse.Text.Edit.CaretIndex GetClosest(float2 pos, float lineHeight) [instance] :358
int CaretContext::GetClosest(::g::Uno::Float2 pos, float lineHeight)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "GetClosest(float2,float)");
    ::g::Fuse::Text::Edit::Caret ret7;
    pos = ::g::Uno::Float2__op_Subtraction2(pos, ::g::Uno::Float2__New2(0.0f, lineHeight / 2.0f));
    float minSquaredDist = FLT_INF;
    int minIndex = 0;

    for (int i = 0; i < uPtr(_carets)->Count(); ++i)
    {
        float squaredDist = CaretContext__WeightedSquaredDist(pos, (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i), &ret7), ret7).VisualPos, 1000.0f);

        if (squaredDist < minSquaredDist)
        {
            minSquaredDist = squaredDist;
            minIndex = i;
        }
    }

    return minIndex;
}

// public float2 GetVisualPosition(Fuse.Text.Edit.CaretIndex i) [instance] :349
::g::Uno::Float2 CaretContext::GetVisualPosition(int i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "GetVisualPosition(Fuse.Text.Edit.CaretIndex)");
    ::g::Fuse::Text::Edit::Caret ret8;
    i = Clamp(i);

    if (uPtr(_carets)->Count() == 0)
        return uDefault< ::g::Uno::Float2>();

    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i), &ret8), ret8).VisualPos;
}

// public Uno.Collections.List<Uno.Rect> GetVisualRects(Fuse.Text.Edit.CaretIndex i1, Fuse.Text.Edit.CaretIndex i2, float lineHeight) [instance] :436
::g::Uno::Collections::List* CaretContext::GetVisualRects(int i1, int i2, float lineHeight)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "GetVisualRects(Fuse.Text.Edit.CaretIndex,Fuse.Text.Edit.CaretIndex,float)");
    ::g::Fuse::Text::Edit::Caret ret9;
    ::g::Fuse::Text::Edit::Caret ret10;
    ::g::Fuse::Text::Edit::Caret ret11;
    ::g::Fuse::Text::Edit::Caret ret12;
    ::g::Uno::Collections::List* ret13;
    ::g::Fuse::Text::PositionedRun* ret14;

    if (uPtr(_carets)->Count() == 0)
        return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Rect>*/]);

    i1 = Clamp(i1);
    i2 = Clamp(i2);

    if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i1), &ret9), ret9).Cluster > (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i2), &ret10), ret10).Cluster)
    {
        int tmp = i1;
        i1 = i2;
        i2 = tmp;
    }

    ::g::Fuse::Text::Edit::Caret caret1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i1), &ret11), ret11);
    ::g::Fuse::Text::Edit::Caret caret2 = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i2), &ret12), ret12);
    int cluster1 = caret1.Cluster;
    int cluster2 = caret2.Cluster;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Rect>*/]);
    ::g::Uno::Float2 lh = ::g::Uno::Float2__New2(0.0f, lineHeight);

    for (int lineIndex = 0; lineIndex < uPtr(_runs)->Count(); ++lineIndex)
    {
        ::g::Uno::Collections::List* pruns = (::g::Uno::Collections::List__get_Item_fn(uPtr(_runs), uCRef<int>(lineIndex), &ret13), ret13);

        for (int runIndex = 0; runIndex < uPtr(pruns)->Count(); ++runIndex)
        {
            bool contains1 = (lineIndex == caret1.LineIndex) && (runIndex == caret1.RunIndex);
            bool contains2 = (lineIndex == caret2.LineIndex) && (runIndex == caret2.RunIndex);
            ::g::Fuse::Text::PositionedRun* prun = (::g::Uno::Collections::List__get_Item_fn(uPtr(pruns), uCRef<int>(runIndex), &ret14), ret14);

            if (contains1 && contains2)
            {
                if (i1 < i2)
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(caret1.VisualPos, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(caret2.VisualPos, caret1.VisualPos), lh))));
                else
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(caret2.VisualPos, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(caret1.VisualPos, caret2.VisualPos), lh))));
            }
            else if (contains1)
            {
                if ((i1 < i2) == uPtr(prun)->Run().IsLeftToRight())
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(caret1.VisualPos, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(uPtr(prun)->Measurements, ::g::Uno::Float2__op_Subtraction2(caret1.VisualPos, uPtr(prun)->Position)), lh))));
                else
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(uPtr(prun)->Position, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(caret1.VisualPos, uPtr(prun)->Position), lh))));
            }
            else if (contains2)
            {
                if ((i1 < i2) == uPtr(prun)->Run().IsLeftToRight())
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(uPtr(prun)->Position, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(caret2.VisualPos, uPtr(prun)->Position), lh))));
                else
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(caret2.VisualPos, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(uPtr(prun)->Measurements, ::g::Uno::Float2__op_Subtraction2(caret2.VisualPos, uPtr(prun)->Position)), lh))));
            }
            else if ((cluster1 <= uPtr(prun)->Run().LogicalStart()) && (uPtr(prun)->Run().LogicalEnd() < cluster2))
                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(uPtr(prun)->Position, ::g::Uno::Float2__op_Addition2(uPtr(prun)->Measurements, lh))));
        }
    }

    return result;
}

// public string Insert(char c, Fuse.Text.Edit.CaretIndex& i) [instance] :512
uString* CaretContext::Insert(uChar c, int* i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "Insert(char,Fuse.Text.Edit.CaretIndex&)");
    ::g::Fuse::Text::Edit::Caret ret15;
    *i = Clamp(*i);
    int insertionPos = (uPtr(_carets)->Count() > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(*i), &ret15), ret15).Cluster : 0;

    if ((uPtr(_carets)->Count() == 0) || LeftToRight(*i))
        *i = *i + 1;

    return ::g::Uno::String::Insert(uPtr(_source), insertionPos, ::g::Uno::Char::ToString(c, ::TYPES[1/*char*/]));
}

// public Fuse.Text.Edit.CaretIndex LeftMost() [instance] :338
int CaretContext::LeftMost()
{
    return 0;
}

// private bool LeftToRight(Fuse.Text.Edit.CaretIndex i) [instance] :506
bool CaretContext::LeftToRight(int i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "LeftToRight(Fuse.Text.Edit.CaretIndex)");
    ::g::Fuse::Text::Edit::Caret ret16;
    ::g::Fuse::Text::PositionedRun* ret17;
    ::g::Uno::Collections::List* ret18;
    ::g::Fuse::Text::Edit::Caret caret = (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(i), &ret16), ret16);
    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_runs), uCRef<int>(caret.LineIndex), &ret18), ret18)), uCRef<int>(caret.RunIndex), &ret17), ret17))->Run().IsLeftToRight();
}

// public Fuse.Text.Edit.CaretIndex MoveDown(Fuse.Text.Edit.CaretIndex currentIndex) [instance] :403
int CaretContext::MoveDown(int currentIndex)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "MoveDown(Fuse.Text.Edit.CaretIndex)");
    ::g::Fuse::Text::Edit::Caret ret19;
    ::g::Fuse::Text::Edit::Caret ret20;
    currentIndex = Clamp(currentIndex);

    if (uPtr(_carets)->Count() == 0)
        return LeftMost();

    return ClosestCaretOnLine((::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(currentIndex), &ret19), ret19).VisualPos, (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(currentIndex), &ret20), ret20).LineIndex + 1, RightMost());
}

// public Fuse.Text.Edit.CaretIndex MoveLeft(Fuse.Text.Edit.CaretIndex i) [instance] :342
int CaretContext::MoveLeft(int i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "MoveLeft(Fuse.Text.Edit.CaretIndex)");
    return Clamp(i - 1);
}

// public Fuse.Text.Edit.CaretIndex MoveRight(Fuse.Text.Edit.CaretIndex i) [instance] :341
int CaretContext::MoveRight(int i)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "MoveRight(Fuse.Text.Edit.CaretIndex)");
    return Clamp(i + 1);
}

// public Fuse.Text.Edit.CaretIndex MoveUp(Fuse.Text.Edit.CaretIndex currentIndex) [instance] :391
int CaretContext::MoveUp(int currentIndex)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "MoveUp(Fuse.Text.Edit.CaretIndex)");
    ::g::Fuse::Text::Edit::Caret ret21;
    ::g::Fuse::Text::Edit::Caret ret22;
    currentIndex = Clamp(currentIndex);

    if (uPtr(_carets)->Count() == 0)
        return LeftMost();

    return ClosestCaretOnLine((::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(currentIndex), &ret21), ret21).VisualPos, (::g::Uno::Collections::List__get_Item_fn(uPtr(_carets), uCRef<int>(currentIndex), &ret22), ret22).LineIndex - 1, LeftMost());
}

// public Fuse.Text.Edit.CaretIndex RightMost() [instance] :339
int CaretContext::RightMost()
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "RightMost()");
    return (uPtr(_carets)->Count() > 0) ? uPtr(_carets)->Count() - 1 : LeftMost();
}

// private static Uno.Collections.List<Fuse.Text.Edit.Caret> PossibleCaretPositions(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> lines, string source) [static] :214
::g::Uno::Collections::List* CaretContext::PossibleCaretPositions(::g::Uno::Collections::List* lines, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "PossibleCaretPositions(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>>,string)");
    ::g::Uno::Collections::List* ret23;
    ::g::Fuse::Text::PositionedRun* ret24;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Text.Edit.Caret>*/]);

    for (int lineIndex = 0; lineIndex < uPtr(lines)->Count(); ++lineIndex)
    {
        ::g::Uno::Collections::List* pruns = (::g::Uno::Collections::List__get_Item_fn(uPtr(lines), uCRef<int>(lineIndex), &ret23), ret23);

        for (int runIndex = 0; runIndex < uPtr(pruns)->Count(); ++runIndex)
        {
            ::g::Fuse::Text::PositionedRun* prun = (::g::Uno::Collections::List__get_Item_fn(uPtr(pruns), uCRef<int>(runIndex), &ret24), ret24);
            ::g::Fuse::Text::ShapedRun* srun = uPtr(prun)->ShapedRun;
            ::g::Uno::Float2 position = prun->Position;
            int logicalStart = prun->Run().LogicalStart();
            int glyphIndex = 0;

            if (prun->Run().IsLeftToRight())
            {
                while (glyphIndex < uPtr(srun)->Count)
                {
                    int startIndex = glyphIndex;
                    int startCluster = logicalStart + uPtr(srun)->Item(startIndex).Cluster;
                    ::g::Uno::Float2 startPosition = position;

                    while ((glyphIndex < srun->Count) && (srun->Item(glyphIndex).Cluster == srun->Item(startIndex).Cluster))
                    {
                        position = ::g::Uno::Float2__op_Addition2(position, uPtr(srun)->Item(glyphIndex).Advance());
                        ++glyphIndex;
                    }

                    int cluster = (glyphIndex < srun->Count) ? logicalStart + srun->Item(glyphIndex).Cluster : uPtr(prun)->Run().VisualRight();
                    CaretContext__LerpClustersLTR(source, startCluster, startPosition, cluster, position, lineIndex, runIndex, result);
                }

                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Edit::Caret__New1(uPtr(prun)->Run().VisualRight(), lineIndex, runIndex, position)));
            }
            else
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Edit::Caret__New1(uPtr(prun)->Run().VisualLeft(), lineIndex, runIndex, position)));

                while (glyphIndex < uPtr(srun)->Count)
                {
                    int startIndex1 = glyphIndex;
                    int startCluster1 = logicalStart + uPtr(srun)->Item(startIndex1).Cluster;
                    ::g::Uno::Float2 startPosition1 = position;

                    while ((glyphIndex < srun->Count) && (srun->Item(glyphIndex).Cluster == srun->Item(startIndex1).Cluster))
                    {
                        position = ::g::Uno::Float2__op_Addition2(position, uPtr(srun)->Item(glyphIndex).Advance());
                        ++glyphIndex;
                    }

                    int cluster1 = (glyphIndex < srun->Count) ? logicalStart + srun->Item(glyphIndex).Cluster : ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, uPtr(prun)->Run().VisualRight());
                    CaretContext__LerpClustersRTL(source, startCluster1, startPosition1, cluster1, position, lineIndex, runIndex, result);
                }
            }
        }
    }

    return result;
}

// private static int StringRangeLength(string source, int cluster1, int cluster2) [static] :329
int CaretContext::StringRangeLength(uString* source, int cluster1, int cluster2)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "StringRangeLength(string,int,int)");
    int len = 0;
    int end = ::g::Uno::Math::Min8(uPtr(source)->Length(), cluster2);

    for (int i = cluster1; i < end; i = ::g::Fuse::Text::SubstringExtensions::NextCharIndex(source, i))
        ++len;

    return len;
}

// private static void LerpClustersLTR(string source, int cluster1, float2 pos1, int cluster2, float2 pos2, int lineIndex, int runIndex, Uno.Collections.List<Fuse.Text.Edit.Caret> result) [static] :292
void CaretContext__LerpClustersLTR(uString* source, int cluster1, ::g::Uno::Float2 pos1, int cluster2, ::g::Uno::Float2 pos2, int lineIndex, int runIndex, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "LerpClustersLTR(string,int,float2,int,float2,int,int,Uno.Collections.List<Fuse.Text.Edit.Caret>)");
    ::g::Uno::Float2 diff = ::g::Uno::Math::Abs2(::g::Uno::Float2__op_Subtraction2(pos2, pos1));
    int len = CaretContext::StringRangeLength(source, cluster1, cluster2);
    int i = 0;
    int end = ::g::Uno::Math::Min8(uPtr(source)->Length(), cluster2);

    for (int c = cluster1; c < end; c = ::g::Fuse::Text::SubstringExtensions::NextCharIndex(source, c))
    {
        ::g::Uno::Float2 pos = ::g::Uno::Float2__op_Addition2(pos1, ::g::Uno::Float2__op_Multiply((float)i / (float)len, diff));
        ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Edit::Caret__New1(c, lineIndex, runIndex, pos)));
        ++i;
    }
}

// private static void LerpClustersRTL(string source, int cluster1, float2 pos1, int cluster2, float2 pos2, int lineIndex, int runIndex, Uno.Collections.List<Fuse.Text.Edit.Caret> result) [static] :311
void CaretContext__LerpClustersRTL(uString* source, int cluster1, ::g::Uno::Float2 pos1, int cluster2, ::g::Uno::Float2 pos2, int lineIndex, int runIndex, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Text.Edit.CaretContext", "LerpClustersRTL(string,int,float2,int,float2,int,int,Uno.Collections.List<Fuse.Text.Edit.Caret>)");
    ::g::Uno::Float2 diff = ::g::Uno::Math::Abs2(::g::Uno::Float2__op_Subtraction2(pos2, pos1));
    int len = CaretContext::StringRangeLength(source, cluster2, cluster1);
    int i = 0;

    for (int c = cluster1; c > cluster2; c = ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, c))
    {
        ::g::Uno::Float2 pos = ::g::Uno::Float2__op_Addition2(pos1, ::g::Uno::Float2__op_Multiply((float)(i + 1) / (float)len, diff));
        ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Edit::Caret__New1(c, lineIndex, runIndex, pos)));
        ++i;
    }
}

// public CaretContext New(Uno.Collections.List<Uno.Collections.List<Fuse.Text.PositionedRun>> pruns, string source) [static] :206
CaretContext CaretContext__New1(::g::Uno::Collections::List* pruns, uString* source)
{
    CaretContext obj1;
    obj1.ctor_(pruns, source);
    return obj1;
}

// private static float SquaredDist(float2 p, float2 q) [static] :384
float CaretContext__SquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q)
{
    float x = p.X - q.X;
    float y = p.Y - q.Y;
    return (x * x) + (y * y);
}

// private static float WeightedSquaredDist(float2 p, float2 q, float yweight) [static] :377
float CaretContext__WeightedSquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q, float yweight)
{
    float x = p.X - q.X;
    float y = p.Y - q.Y;
    return (x * x) + ((yweight * y) * y);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/0.47.7/$.uno
// ------------------------------------------------------------------------------------

// public enum CaretIndex :181
uEnumType* CaretIndex_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Text.Edit.CaretIndex", ::g::Uno::Int_typeof(), 0);
    return type;
}

}}}} // ::g::Fuse::Text::Edit
