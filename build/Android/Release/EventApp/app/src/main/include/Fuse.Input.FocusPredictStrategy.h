// This file was generated based on '../../AppData/Local/Fusetools/Packages/FuseCore/0.46.1/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPredictStrategy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPredictStrategy :70
// {
uClassType* FocusPredictStrategy_typeof();
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int* direction, ::g::Fuse::Visual** __retval);

struct FocusPredictStrategy : uObject
{
    static ::g::Fuse::Visual* Predict(::g::Fuse::Visual* n, int direction);
};
// }

}}} // ::g::Fuse::Input
