// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct ColumnLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class ColumnLayout :184
// {
::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();
void ColumnLayout__ctor_2_fn(ColumnLayout* __this);
void ColumnLayout__Arrange_fn(ColumnLayout* __this, uObject* visuals, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval);
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, uObject* visuals, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value);
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value);
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value);
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, uObject* visuals, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value);
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval);
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval);
void ColumnLayout__New2_fn(ColumnLayout** __retval);
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value);
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int* __retval);
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int* value);

struct ColumnLayout : ::g::Fuse::Layouts::Layout
{
    int _columnCount;
    float _columnSize;
    float _columnSpacing;
    bool _hasColumnCount;
    bool _hasColumnSize;
    float _itemSpacing;
    int _orientation;
    int _sizing;

    void ctor_2();
    ::g::Uno::Float2 Arrange(uObject* visuals, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding);
    int ColumnCount();
    void ColumnCount(int value);
    float ColumnSize();
    void ColumnSize(float value);
    float ColumnSpacing();
    void ColumnSpacing(float value);
    float ItemSpacing();
    void ItemSpacing(float value);
    int LeastAt(uArray* c);
    float Max(uArray* c);
    int Orientation();
    void Orientation(int value);
    int Sizing();
    void Sizing(int value);
    static ColumnLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
