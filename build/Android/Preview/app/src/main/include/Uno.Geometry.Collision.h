// This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.47.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Geometry{struct Collision;}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public static class Collision :42
// {
uClassType* Collision_typeof();
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval);

struct Collision : uObject
{
    static bool RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance);
};
// }

}}} // ::g::Uno::Geometry
