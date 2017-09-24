// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineSegment.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegments;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LineSegments :3513
// {
uType* LineSegments_typeof();
void LineSegments__ctor__fn(LineSegments* __this);
void LineSegments__ctor_1_fn(LineSegments* __this, uObject* segments);
void LineSegments__Add_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* seg);
void LineSegments__BezierCurveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB);
void LineSegments__BezierCurveToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB);
void LineSegments__Clear_fn(LineSegments* __this);
void LineSegments__ClosePath_fn(LineSegments* __this);
void LineSegments__get_Count_fn(LineSegments* __this, int* __retval);
void LineSegments__get_CurPos_fn(LineSegments* __this, ::g::Uno::Float2* __retval);
void LineSegments__EllipticArcTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep);
void LineSegments__EllipticArcToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep);
void LineSegments__HorizLineTo_fn(LineSegments* __this, float* x);
void LineSegments__HorizLineToRel_fn(LineSegments* __this, float* x);
void LineSegments__get_Last_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* __retval);
void LineSegments__LineTo_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__LineToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__MoveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__MoveToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__New1_fn(LineSegments** __retval);
void LineSegments__New2_fn(uObject* segments, LineSegments** __retval);
void LineSegments__get_Segments_fn(LineSegments* __this, uObject** __retval);
void LineSegments__set_Segments_fn(LineSegments* __this, uObject* value);
void LineSegments__VertLineTo_fn(LineSegments* __this, float* y);
void LineSegments__VertLineToRel_fn(LineSegments* __this, float* y);

struct LineSegments : uObject
{
    ::g::Uno::Float2 _curPos;
    uStrong<uObject*> _Segments;

    void ctor_();
    void ctor_1(uObject* segments);
    void Add(::g::Fuse::Drawing::LineSegment seg);
    void BezierCurveTo(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB);
    void BezierCurveToRel(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB);
    void Clear();
    void ClosePath();
    int Count();
    ::g::Uno::Float2 CurPos();
    void EllipticArcTo(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep);
    void EllipticArcToRel(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep);
    void HorizLineTo(float x);
    void HorizLineToRel(float x);
    ::g::Fuse::Drawing::LineSegment Last();
    void LineTo(::g::Uno::Float2 pt);
    void LineToRel(::g::Uno::Float2 pt);
    void MoveTo(::g::Uno::Float2 pt);
    void MoveToRel(::g::Uno::Float2 pt);
    uObject* Segments();
    void Segments(uObject* value);
    void VertLineTo(float y);
    void VertLineToRel(float y);
    static LineSegments* New1();
    static LineSegments* New2(uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
