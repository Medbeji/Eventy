// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct RegularPolygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class RegularPolygon :1531
// {
::g::Fuse::Controls::Shape_type* RegularPolygon_typeof();
void RegularPolygon__ctor_7_fn(RegularPolygon* __this);
void RegularPolygon__CreateSurfacePath_fn(RegularPolygon* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void RegularPolygon__get_NeedSurface_fn(RegularPolygon* __this, bool* __retval);
void RegularPolygon__New3_fn(RegularPolygon** __retval);
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval);
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value);

struct RegularPolygon : ::g::Fuse::Controls::Shape
{
    int _sides;

    void ctor_7();
    int Sides();
    void Sides(int value);
    static RegularPolygon* New3();
};
// }

}}} // ::g::Fuse::Controls
