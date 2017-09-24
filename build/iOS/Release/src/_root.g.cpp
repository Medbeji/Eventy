// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsButtonBase_Text_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextControl_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingStroke_Width_Property.h>
#include <_root.FuseBasicTheme_FuseEffectsDropShadow_Color_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_Height_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_Opacity_Property.h>
#include <_root.FuseBasicTheme_FuseElementsElement_Width_Property.h>
#include <_root.FuseBasicTheme_FuseTranslation_X_Property.h>
#include <_root.FuseBasicTheme_FuseVisual_IsEnabled_Property.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNative_bundle.h>
#include <_root.FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property.h>
#include <_root.FuseControlsNavigation_FuseControlsShape_Color_Property.h>
#include <_root.FuseControlsPanels_bundle.h>
#include <_root.FuseControlsPrimitives_bundle.h>
#include <_root.FuseControlsPrimitives_FuseControlsButtonBase_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsShape_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsTextControl_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsToggleControl_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h>
#include <_root.FuseControlsPrimitives_FuseElementsElement_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewBase_KeepFoc-1ad9c37f.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewBase_UserScr-80f342de.h>
#include <_root.FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property.h>
#include <_root.FuseControlsScrollView_FuseTriggersWhileBool_Value_Property.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[149];
static uType* TYPES[1];

namespace g{

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\package
// ----------------------------------------------------------------------------------

// public static generated class FuseBasicTheme_bundle :0
// {
// static FuseBasicTheme_bundle() :0
static void FuseBasicTheme_bundle__cctor__fn(uType* __type)
{
    FuseBasicTheme_bundle::RobotoLight1bb26421_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[1/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMediumfdf281c0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[2/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegular9e4b01b5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[3/*"roboto-regu...*/]);
}

static void FuseBasicTheme_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Fuse.BasicTheme");
    ::STRINGS[1] = uString::Const("roboto-light-f7d7928c.ttf");
    ::STRINGS[2] = uString::Const("roboto-medium-56c78dbb.ttf");
    ::STRINGS[3] = uString::Const("roboto-regular-355447e0.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoLight1bb26421_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoMediumfdf281c0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoRegular9e4b01b5_, uFieldFlagsStatic);
}

uClassType* FuseBasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseBasicTheme_bundle", options);
    type->fp_build_ = FuseBasicTheme_bundle_build;
    type->fp_cctor_ = FuseBasicTheme_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoLight1bb26421_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoMediumfdf281c0_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoRegular9e4b01b5_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property :726
// {
static void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :729
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__ctor_2_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :731
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :729
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :730
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :732
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(__this->_obj), uCRef(v_));
}

// public override sealed bool get_SupportsOriginSetter() :733
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [instance] :729
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::ctor_2(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [static] :729
FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* obj1 = (FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*)uNew(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsButtonBase_Text_Property :735
// {
static void FuseBasicTheme_FuseControlsButtonBase_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ButtonBase_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsButtonBase_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsButtonBase_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsButtonBase_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsButtonBase_Text_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsButtonBase_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsButtonBase_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsButtonBase_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsButtonBase_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :740
void FuseBasicTheme_FuseControlsButtonBase_Text_Property__Get_fn(FuseBasicTheme_FuseControlsButtonBase_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :739
void FuseBasicTheme_FuseControlsButtonBase_Text_Property__get_Object_fn(FuseBasicTheme_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :741
void FuseBasicTheme_FuseControlsButtonBase_Text_Property__Set_fn(FuseBasicTheme_FuseControlsButtonBase_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :742
void FuseBasicTheme_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsButtonBase_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_TextColor_Property :699
// {
static void FuseBasicTheme_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :704
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :703
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :705
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :706
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_Value_Property :690
// {
static void FuseBasicTheme_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :695
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Get_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :694
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :696
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Set_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :697
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property :789
// {
static void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextInputControl_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :792
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__ctor_2_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :794
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :792
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :793
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :795
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :796
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :792
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::ctor_2(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :792
FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :708
// {
static void FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :711
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :713
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :711
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :712
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :714
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :715
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :711
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :711
FuseBasicTheme_FuseDrawingSolidColor_Color_Property* FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseDrawingSolidColor_Color_Property* obj1 = (FuseBasicTheme_FuseDrawingSolidColor_Color_Property*)uNew(FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :780
// {
static void FuseBasicTheme_FuseDrawingStroke_Width_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingStroke_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingStroke_Width_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseDrawingStroke_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseDrawingStroke_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :785
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :784
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :786
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :787
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :717
// {
static void FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseEffectsDropShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :722
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :721
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :723
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public override sealed bool get_SupportsOriginSetter() :724
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :798
// {
static void FuseBasicTheme_FuseElementsElement_Height_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Height_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Height_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseElementsElement_Height_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Height_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseElementsElement_Height_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :801
void FuseBasicTheme_FuseElementsElement_Height_Property__ctor_2_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :803
void FuseBasicTheme_FuseElementsElement_Height_Property__Get_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :801
void FuseBasicTheme_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Height_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :802
void FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :804
void FuseBasicTheme_FuseElementsElement_Height_Property__Set_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public override sealed bool get_SupportsOriginSetter() :805
void FuseBasicTheme_FuseElementsElement_Height_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :801
void FuseBasicTheme_FuseElementsElement_Height_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :801
FuseBasicTheme_FuseElementsElement_Height_Property* FuseBasicTheme_FuseElementsElement_Height_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseElementsElement_Height_Property* obj1 = (FuseBasicTheme_FuseElementsElement_Height_Property*)uNew(FuseBasicTheme_FuseElementsElement_Height_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Opacity_Property :753
// {
static void FuseBasicTheme_FuseElementsElement_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseElementsElement_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :758
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Get_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :757
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :759
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Set_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :760
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Width_Property :762
// {
static void FuseBasicTheme_FuseElementsElement_Width_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseBasicTheme_FuseElementsElement_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Width_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseElementsElement_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseElementsElement_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Uno.UX.Size Get() :767
void FuseBasicTheme_FuseElementsElement_Width_Property__Get_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :766
void FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :768
void FuseBasicTheme_FuseElementsElement_Width_Property__Set_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :769
void FuseBasicTheme_FuseElementsElement_Width_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :771
// {
static void FuseBasicTheme_FuseTranslation_X_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Translation_typeof(), offsetof(::g::FuseBasicTheme_FuseTranslation_X_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseTranslation_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTranslation_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseTranslation_X_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseTranslation_X_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseTranslation_X_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseTranslation_X_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseTranslation_X_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :776
void FuseBasicTheme_FuseTranslation_X_Property__Get_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->X(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :775
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :777
void FuseBasicTheme_FuseTranslation_X_Property__Set_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->X(v_);
}

// public override sealed bool get_SupportsOriginSetter() :778
void FuseBasicTheme_FuseTranslation_X_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\0.46.1\.uno\ux11\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseVisual_IsEnabled_Property :744
// {
static void FuseBasicTheme_FuseVisual_IsEnabled_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Visual_typeof(), offsetof(::g::FuseBasicTheme_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseVisual_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseVisual_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseVisual_IsEnabled_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseVisual_IsEnabled_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseVisual_IsEnabled_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseVisual_IsEnabled_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseVisual_IsEnabled_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get() :749
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Get_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :748
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :750
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Set_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public override sealed bool get_SupportsOriginSetter() :751
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls\0.46.1\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[4/*"uniform mat...*/], ::STRINGS[5/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[23/*"t"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[17/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform mat...*/], ::STRINGS[29/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[4] = uString::Const("uniform mat4 q,d;uniform vec2 e,f,g,h,i,k,j;attribute vec2 a;varying vec2 r,s;void main(){vec2 u=((((e*(false?vec2(a.x,float(1)-a.y):a))-f)/g)*h)+i;r=k+(u*j);s=u;gl_Position=d*(q*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[5] = uString::Const("uniform vec2 m,l;uniform vec4 n;uniform float o,p;uniform sampler2D t;varying vec2 r,s;void main(){vec4 u=(c?vec4(float(0)):texture2D(t,b?(m+(fract(r)*l)):s))*n;gl_FragColor=vec4((u.xyz*u.w)*o,u.w*o)*p;}");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[16] = uString::Const("k");
    ::STRINGS[17] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[24] = uString::Const("uniform mat4 h,b;uniform vec2 c,d,e,i;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,i,j);gl_Position=b*(h*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[25] = uString::Const("uniform float f,g;uniform sampler2D l;varying float k;void main(){vec4 n=texture2D(l,vec2(k,.5));gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f)*g;}");
    ::STRINGS[26] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[27] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[28] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[29] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportd3ce851b_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.46.1\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::iOSBlitter0a63f4bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform vec...*/], ::STRINGS[31/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[11/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[30] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;varying vec2 e;void main(){e=vec2(a.x,1.-a.y);gl_Position=d*vec4(c+(a*b),0.,1.);}");
    ::STRINGS[31] = uString::Const("uniform sampler2D f;varying vec2 e;void main(){gl_FragColor=texture2D(f,e);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[11] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb_, uFieldFlagsStatic);
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::iOSBlitter0a63f4bb_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :297
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :302
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsFrozen(), void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :301
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :303
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsFrozen(v_);
}

// public override sealed bool get_SupportsOriginSetter() :304
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_2(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :300
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :288
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Shape_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :293
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :292
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :294
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :295
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :291
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :291
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.46.1\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseControlsPanels_bundle :0
// {
// static FuseControlsPanels_bundle() :0
static void FuseControlsPanels_bundle__cctor__fn(uType* __type)
{
    FuseControlsPanels_bundle::FreezeDrawable1e2faccf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[32/*"uniform mat...*/], ::STRINGS[33/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[11/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[32] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[33] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);gl_FragColor=vec4(g.xyz,g.w*c);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[11] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPanels_bundle::FreezeDrawable1e2faccf_, uFieldFlagsStatic);
}

uClassType* FuseControlsPanels_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPanels_bundle", options);
    type->fp_build_ = FuseControlsPanels_bundle_build;
    type->fp_cctor_ = FuseControlsPanels_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPanels_bundle::FreezeDrawable1e2faccf_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\package
// -------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform mat...*/], ::STRINGS[35/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[13/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("uniform mat4 f,b;uniform vec2 c,d;attribute vec2 a;varying vec2 g;void main(){g=(a*c)+d;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[35] = uString::Const("uniform vec4 e;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=texture2D(h,g)*e;}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[13] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw7660063a_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsButtonBase_Text_Property :623
// {
static void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ButtonBase_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsButtonBase_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsButtonBase_Text_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :628
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButtonBase_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :627
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :629
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :630
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [instance] :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::ctor_2(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [static] :626
FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsButtonBase_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :659
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Shape_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :664
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :663
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :665
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :666
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :641
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :646
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :645
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :647
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :648
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :644
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :605
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :610
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :609
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :611
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :612
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :608
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsToggleControl_Value_Property :632
// {
static void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ToggleControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsToggleControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsToggleControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get() :637
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :636
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :638
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :639
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :704
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :709
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :708
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :710
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :711
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :668
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :673
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :672
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :674
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Brush(v);
}

// public override sealed bool get_SupportsOriginSetter() :675
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :695
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :700
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :699
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :701
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :702
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :677
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :682
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :681
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :683
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :684
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :686
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :691
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Size(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :690
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :692
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Size(v_);
}

// public override sealed bool get_SupportsOriginSetter() :693
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :650
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :655
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :654
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :656
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :657
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :653
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :614
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get() :619
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :618
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :620
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :621
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property :141
// {
static void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :146
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :147
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public override sealed bool get_SupportsOriginSetter() :148
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::ctor_2(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :144
FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property :132
// {
static void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :137
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :138
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :139
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :135
FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property :114
// {
static void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :119
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :118
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :120
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :121
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [instance] :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::ctor_2(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [static] :117
FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.46.1\.uno\ux11\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :123
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_2_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :128
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :127
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :129
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :130
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :126
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.46.1\.uno\package
// --------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"uniform flo...*/], ::STRINGS[37/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[22/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform mat...*/], ::STRINGS[39/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[6/*"b"*/], ::STRINGS[8/*"a"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[13/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[36] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[37] = uString::Const("uniform sampler2D q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[16] = uString::Const("k");
    ::STRINGS[17] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[38] = uString::Const("uniform mat4 f,c;uniform vec2 d,e;attribute vec2 a;varying vec2 g;vec2 i(vec2 j){vec2 k=j.xy;if(b==1)return vec2(k.y,1.-k.x);else if(b==2)return vec2(1.-k.x,1.-k.y);else if(b==3)return vec2(1.-k.y,k.x);else return k;}void main(){g=i((a*d)+e);gl_Position=c*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[39] = uString::Const("uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(texture2D(h,g).xyz,1.);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement5c829975_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\FuseCore\0.46.1\.uno\package
// ---------------------------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform vec...*/], ::STRINGS[41/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/]));
}

static void FuseCore_bundle_build(uType* type)
{
    ::STRINGS[40] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[41] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_build_ = FuseCore_bundle_build;
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers4c5c39ae_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.46.1\.uno\package
// -------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"attribute v...*/], ::STRINGS[43/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[42] = uString::Const("attribute vec2 a;varying vec2 g;void main(){g=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[43] = uString::Const("uniform float d[b],e;uniform vec4 f[c];varying vec2 g;vec4 h(vec2 i){float j=d[0]+(e*i.x);vec4 k=f[0];for(int l=0;l<(b-1);l++){float m=d[l];float n=d[l+1];vec4 o=f[l+1];k=mix(k,o,smoothstep(m,n,j));}return k;}void main(){gl_FragColor=h(g);}");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.46.1\.uno\package
// ------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[45/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[47/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform vec...*/], ::STRINGS[49/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[53/*"x"*/], ::STRINGS[54/*"y"*/], ::STRINGS[55/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[50/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[21/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[50/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[47/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[46/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[65/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[66/*"uniform vec...*/], ::STRINGS[67/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform vec...*/], ::STRINGS[68/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[53/*"x"*/], ::STRINGS[54/*"y"*/], ::STRINGS[55/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[74/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[75/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[77/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[78/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[53/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[81/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[8/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[78/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[84/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[66/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[90/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[23/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform flo...*/], ::STRINGS[95/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[23/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[97/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[98/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[101/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[102/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[101/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[103/*"uniform flo...*/], ::STRINGS[104/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[106/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[105/*"uniform flo...*/], ::STRINGS[107/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[103/*"uniform flo...*/], ::STRINGS[108/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[53/*"x"*/], ::STRINGS[111/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[112/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[46/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[47/*"u"*/], ::STRINGS[51/*"v"*/], ::STRINGS[52/*"w"*/], ::STRINGS[53/*"x"*/], ::STRINGS[111/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[113/*"uniform flo...*/], ::STRINGS[114/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[113/*"uniform flo...*/], ::STRINGS[115/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[117/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[51/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[118/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[51/*"v"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[44] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float s;varying vec2 t;float v(vec2 w,vec2 x,float y){vec2 z=(w*e)-f;float A=dot(z,x)/y;return (A-g.x)/g.y;}void main(){vec2 w=a*b;vec2 x=w+c;s=v(x/e,n,o);t=w;gl_Position=d*vec4(x,0.,1.);}");
    ::STRINGS[45] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 w=texture2D(u,vec2(s,.5));vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[16] = uString::Const("k");
    ::STRINGS[17] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[46] = uString::Const("r");
    ::STRINGS[47] = uString::Const("u");
    ::STRINGS[48] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 z,A,B;void main(){vec2 D=a*d;vec2 E=D+e;vec2 F=((((g*(E/g))-h)/i)*j)+k;z=m+(F*l);A=F;B=D;gl_Position=f*vec4(E,0.,1.);}");
    ::STRINGS[49] = uString::Const("uniform vec2 o,n,w,x,y;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D C;varying vec2 z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(z)*n)):A))*p;vec4 E=vec4(D.xyz,D.w*(clamp(.5-(((abs((length(B)-q)-r)-s)*t)*u),float(0),float(1))*clamp(.5-((min(dot(B,w),min(dot(B,x),dot(B,y)))*t)*u),float(0),float(1))));gl_FragColor=vec4((E.xyz*E.w)*v,E.w*v);}");
    ::STRINGS[50] = uString::Const("s");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[51] = uString::Const("v");
    ::STRINGS[52] = uString::Const("w");
    ::STRINGS[53] = uString::Const("x");
    ::STRINGS[54] = uString::Const("y");
    ::STRINGS[55] = uString::Const("C");
    ::STRINGS[56] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float q;varying vec2 r;float t(vec2 u,vec2 v,float w){vec2 x=(u*e)-f;float y=dot(x,v)/w;return (y-g.x)/g.y;}void main(){vec2 u=a*b;vec2 v=u+c;q=t(v/e,l,m);r=u;gl_Position=d*vec4(v,0.,1.);}");
    ::STRINGS[57] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 u=texture2D(s,vec2(q,.5));vec4 v=vec4(u.xyz,u.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(r,n),max(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((v.xyz*v.w)*k,v.w*k);}");
    ::STRINGS[58] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float n;varying vec2 o;float q(vec2 r,vec2 s,float t){vec2 u=(r*e)-f;float v=dot(u,s)/t;return (v-g.x)/g.y;}void main(){vec2 r=a*b;vec2 s=r+c;n=q(s/e,l,m);o=r;gl_Position=d*vec4(s,0.,1.);}");
    ::STRINGS[59] = uString::Const("uniform float h,i,j,k;uniform sampler2D p;varying float n;varying vec2 o;void main(){vec4 r=texture2D(p,vec2(n,.5));vec4 s=vec4(r.xyz,r.w*(clamp(.5-(((length(o)-h)*i)*j),float(0),float(1))*float(1)));gl_FragColor=vec4((s.xyz*s.w)*k,s.w*k);}");
    ::STRINGS[60] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 u=texture2D(s,vec2(q,.5));vec4 v=vec4(u.xyz,u.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(r,n),min(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((v.xyz*v.w)*k,v.w*k);}");
    ::STRINGS[61] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 w=texture2D(u,vec2(s,.5));vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[62] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float p;varying vec2 q;float s(vec2 t,vec2 u,float v){vec2 w=(t*e)-f;float x=dot(w,u)/v;return (x-g.x)/g.y;}void main(){vec2 t=a*b;vec2 u=t+c;p=s(u/e,n,o);q=t;gl_Position=d*vec4(u,0.,1.);}");
    ::STRINGS[63] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D r;varying float p;varying vec2 q;void main(){vec4 t=texture2D(r,vec2(p,.5));vec4 u=vec4(t.xyz,t.w*(clamp(.5-(((abs((length(q)-h)-i)-j)*k)*l),float(0),float(1))*float(1)));gl_FragColor=vec4((u.xyz*u.w)*m,u.w*m);}");
    ::STRINGS[64] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 l;void main(){vec2 m=a*b;l=m;gl_Position=d*vec4(m+c,0.,1.);}");
    ::STRINGS[65] = uString::Const("uniform float e,f,g,h,i,j;uniform vec3 k;varying vec2 l;void main(){vec4 m=vec4(k,j*(clamp(.5-(((abs((length(l)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((m.xyz*m.w)*1.,m.w);}");
    ::STRINGS[66] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 p;void main(){vec2 q=a*b;p=q;gl_Position=d*vec4(q+c,0.,1.);}");
    ::STRINGS[67] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(p,m),min(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[68] = uString::Const("uniform vec2 o,n,w,x,y;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D C;varying vec2 z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(z)*n)):A))*p;vec4 E=vec4(D.xyz,D.w*(clamp(.5-(((abs((length(B)-q)-r)-s)*t)*u),float(0),float(1))*clamp(.5-((max(dot(B,w),max(dot(B,x),dot(B,y)))*t)*u),float(0),float(1))));gl_FragColor=vec4((E.xyz*E.w)*v,E.w*v);}");
    ::STRINGS[69] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 o;void main(){vec2 p=a*b;o=p;gl_Position=d*vec4(p+c,0.,1.);}");
    ::STRINGS[70] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 p=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(o,l),min(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::STRINGS[71] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 m;void main(){vec2 n=a*b;m=n;gl_Position=d*vec4(n+c,0.,1.);}");
    ::STRINGS[72] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec3 k;varying vec2 m;void main(){vec4 n=vec4(k,j*(clamp(.5-(((abs((length(m)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((n.xyz*n.w)*l,n.w*l);}");
    ::STRINGS[73] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 w,x,y;void main(){vec2 A=a*d;vec2 B=A+e;vec2 C=((((g*(B/g))-h)/i)*j)+k;w=m+(C*l);x=C;y=A;gl_Position=f*vec4(B,0.,1.);}");
    ::STRINGS[74] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float q,r,s,t,u,v;uniform sampler2D z;varying vec2 w,x,y;void main(){vec4 A=(c?vec4(float(0)):texture2D(z,b?(o+(fract(w)*n)):x))*p;vec4 B=vec4(A.xyz,A.w*(clamp(.5-(((abs((length(y)-q)-r)-s)*t)*u),float(0),float(1))*float(1)));gl_FragColor=vec4((B.xyz*B.w)*v,B.w*v);}");
    ::STRINGS[75] = uString::Const("z");
    ::STRINGS[76] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 x,y,z;void main(){vec2 B=a*d;vec2 C=B+e;vec2 D=((((g*(C/g))-h)/i)*j)+k;x=m+(D*l);y=D;z=B;gl_Position=f*vec4(C,0.,1.);}");
    ::STRINGS[77] = uString::Const("uniform vec2 o,n,u,v,w;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D A;varying vec2 x,y,z;void main(){vec4 B=(c?vec4(float(0)):texture2D(A,b?(o+(fract(x)*n)):y))*p;vec4 C=vec4(B.xyz,B.w*(clamp(.5-(((length(z)-q)*r)*s),float(0),float(1))*clamp(.5-((min(dot(z,u),min(dot(z,v),dot(z,w)))*r)*s),float(0),float(1))));gl_FragColor=vec4((C.xyz*C.w)*t,C.w*t);}");
    ::STRINGS[78] = uString::Const("A");
    ::STRINGS[79] = uString::Const("uniform vec2 d,e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 u,v,w;void main(){vec2 y=a*d;vec2 z=y+e;vec2 A=((((g*(z/g))-h)/i)*j)+k;u=m+(A*l);v=A;w=y;gl_Position=f*vec4(z,0.,1.);}");
    ::STRINGS[80] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D x;varying vec2 u,v,w;void main(){vec4 y=(c?vec4(float(0)):texture2D(x,b?(o+(fract(u)*n)):v))*p;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((length(w)-q)*r)*s),float(0),float(1))*float(1)));gl_FragColor=vec4((z.xyz*z.w)*t,z.w*t);}");
    ::STRINGS[81] = uString::Const("uniform vec2 o,n,u,v,w;uniform vec4 p;uniform float q,r,s,t;uniform sampler2D A;varying vec2 x,y,z;void main(){vec4 B=(c?vec4(float(0)):texture2D(A,b?(o+(fract(x)*n)):y))*p;vec4 C=vec4(B.xyz,B.w*(clamp(.5-(((length(z)-q)*r)*s),float(0),float(1))*clamp(.5-((max(dot(z,u),max(dot(z,v),dot(z,w)))*r)*s),float(0),float(1))));gl_FragColor=vec4((C.xyz*C.w)*t,C.w*t);}");
    ::STRINGS[82] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 k;void main(){vec2 l=a*b;k=l;gl_Position=d*vec4(l+c,0.,1.);}");
    ::STRINGS[83] = uString::Const("uniform float e,f,g,h,j;uniform vec3 i;varying vec2 k;void main(){vec4 l=vec4(i,h*(clamp(.5-(((length(k)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((l.xyz*l.w)*j,l.w*j);}");
    ::STRINGS[84] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 p=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(o,l),max(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::STRINGS[85] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 n;void main(){vec2 o=a*b;n=o;gl_Position=d*vec4(o+c,0.,1.);}");
    ::STRINGS[86] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(n,k),max(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j);}");
    ::STRINGS[87] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(n,k),min(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j);}");
    ::STRINGS[88] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(p,m),max(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[89] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 j;void main(){vec2 k=a*b;j=k;gl_Position=d*vec4(k+c,0.,1.);}");
    ::STRINGS[90] = uString::Const("uniform float e,f,g,h;uniform vec3 i;varying vec2 j;void main(){vec4 k=vec4(i,h*(clamp(.5-(((length(j)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((k.xyz*k.w)*1.,k.w);}");
    ::STRINGS[91] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 n=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(m,j),min(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((n.xyz*n.w)*1.,n.w);}");
    ::STRINGS[92] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 n=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(m,j),max(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((n.xyz*n.w)*1.,n.w);}");
    ::STRINGS[93] = uString::Const("uniform float e[d],o;uniform vec2 f,h,i,j,n;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p,q;varying vec2 r,s;float u(vec2 v,vec2 w,float x){vec2 y=(v*h)-i;float z=dot(y,w)/x;return (z-j.x)/j.y;}void main(){vec2 v=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=u(v/h,n,o);r=v;s=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(v,0.,1.);}");
    ::STRINGS[94] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){vec4 v=texture2D(t,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1)));gl_FragColor=vec4((w.xyz*w.w)*m,w.w*m);}");
    ::STRINGS[95] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){vec4 v=texture2D(t,vec2(q,.5));float w=clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1));vec4 x=vec4(v.xyz,v.w*(((w*w)*w)*((w*((w*float(6))-float(15)))+float(10))));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[96] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float l;varying vec2 m,n;void main(){vec2 o=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;l=e[int(c)];m=o;n=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(o,0.,1.);}");
    ::STRINGS[97] = uString::Const("uniform float h,i,j;uniform vec3 k;varying float l;varying vec2 m,n;void main(){vec4 o=vec4(k,j*clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1)));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[98] = uString::Const("uniform float h,i,j;uniform vec3 k;varying float l;varying vec2 m,n;void main(){float o=clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1));vec4 p=vec4(k,j*(((o*o)*o)*((o*((o*float(6))-float(15)))+float(10))));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::STRINGS[99] = uString::Const("uniform float g[d];uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float w;varying vec2 x,y,z,A;void main(){vec2 C=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 D=((((j*(C/j))-k)/l)*m)+n;w=g[int(c)];x=p+(D*o);y=D;z=C;A=vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h;gl_Position=i*vec4(C,0.,1.);}");
    ::STRINGS[100] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v;uniform sampler2D B;varying float w;varying vec2 x,y,z,A;void main(){vec4 C=(f?vec4(float(0)):texture2D(B,e?(r+(fract(x)*q)):y))*s;vec4 D=vec4(C.xyz,C.w*clamp(.5-(((distance(z,A)-w)*t)*u),float(0),float(1)));gl_FragColor=vec4((D.xyz*D.w)*v,D.w*v);}");
    ::STRINGS[101] = uString::Const("B");
    ::STRINGS[102] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v;uniform sampler2D B;varying float w;varying vec2 x,y,z,A;void main(){vec4 C=(f?vec4(float(0)):texture2D(B,e?(r+(fract(x)*q)):y))*s;float D=clamp(.5-(((distance(z,A)-w)*t)*u),float(0),float(1));vec4 E=vec4(C.xyz,C.w*(((D*D)*D)*((D*((D*float(6))-float(15)))+float(10))));gl_FragColor=vec4((E.xyz*E.w)*v,E.w*v);}");
    ::STRINGS[103] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=q;p=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(q,0.,1.);}");
    ::STRINGS[104] = uString::Const("uniform float h,i,j,k,l;uniform vec3 m;varying float n;varying vec2 o,p;void main(){vec4 q=vec4(m,l*clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[105] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=p;o=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(p,0.,1.);}");
    ::STRINGS[106] = uString::Const("uniform float h,i,j,l;uniform vec3 k;varying float m;varying vec2 n,o;void main(){vec4 p=vec4(k,j*clamp(.5-(((distance(n,o)-m)*h)*i),float(0),float(1)));gl_FragColor=vec4((p.xyz*p.w)*l,p.w*l);}");
    ::STRINGS[107] = uString::Const("uniform float h,i,j,l;uniform vec3 k;varying float m;varying vec2 n,o;void main(){float p=clamp(.5-(((distance(n,o)-m)*h)*i),float(0),float(1));vec4 q=vec4(k,j*(((p*p)*p)*((p*((p*float(6))-float(15)))+float(10))));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[108] = uString::Const("uniform float h,i,j,k,l;uniform vec3 m;varying float n;varying vec2 o,p;void main(){float q=clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1));vec4 r=vec4(m,l*(((q*q)*q)*((q*((q*float(6))-float(15)))+float(10))));gl_FragColor=vec4((r.xyz*r.w)*1.,r.w);}");
    ::STRINGS[109] = uString::Const("uniform float g[d];uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float y;varying vec2 z,A,B,C;void main(){vec2 E=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 F=((((j*(E/j))-k)/l)*m)+n;y=g[int(c)];z=p+(F*o);A=F;B=E;C=vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h;gl_Position=i*vec4(E,0.,1.);}");
    ::STRINGS[110] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;float F=clamp(.5-(((abs((distance(B,C)-y)-t)-u)*v)*w),float(0),float(1));vec4 G=vec4(E.xyz,E.w*(((F*F)*F)*((F*((F*float(6))-float(15)))+float(10))));gl_FragColor=vec4((G.xyz*G.w)*x,G.w*x);}");
    ::STRINGS[111] = uString::Const("D");
    ::STRINGS[112] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float t,u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;vec4 F=vec4(E.xyz,E.w*clamp(.5-(((abs((distance(B,C)-y)-t)-u)*v)*w),float(0),float(1)));gl_FragColor=vec4((F.xyz*F.w)*x,F.w*x);}");
    ::STRINGS[113] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float o;varying vec2 p,q;void main(){vec2 r=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;o=e[int(c)];p=r;q=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(r,0.,1.);}");
    ::STRINGS[114] = uString::Const("uniform float h,i,j,k,l,n;uniform vec3 m;varying float o;varying vec2 p,q;void main(){float r=clamp(.5-(((abs((distance(p,q)-o)-h)-i)*j)*k),float(0),float(1));vec4 s=vec4(m,l*(((r*r)*r)*((r*((r*float(6))-float(15)))+float(10))));gl_FragColor=vec4((s.xyz*s.w)*n,s.w*n);}");
    ::STRINGS[115] = uString::Const("uniform float h,i,j,k,l,n;uniform vec3 m;varying float o;varying vec2 p,q;void main(){vec4 r=vec4(m,l*clamp(.5-(((abs((distance(p,q)-o)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((r.xyz*r.w)*n,r.w*n);}");
    ::STRINGS[116] = uString::Const("uniform float e[d],q;uniform vec2 f,h,i,j,p;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;float w(vec2 x,vec2 y,float z){vec2 A=(x*h)-i;float B=dot(A,y)/z;return (B-j.x)/j.y;}void main(){vec2 x=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=w(x/h,p,q);t=x;u=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=g*vec4(x,0.,1.);}");
    ::STRINGS[117] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){vec4 x=texture2D(v,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1)));gl_FragColor=vec4((y.xyz*y.w)*o,y.w*o);}");
    ::STRINGS[118] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){vec4 x=texture2D(v,vec2(s,.5));float y=clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1));vec4 z=vec4(x.xyz,x.w*(((y*y)*y)*((y*((y*float(6))-float(15)))+float(10))));gl_FragColor=vec4((z.xyz*z.w)*o,z.w*o);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647386_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647387_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647389_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305ca_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e74ba4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0edda_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647386_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647387_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647389_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305ca_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e74ba4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0edda_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0eddb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Effects\0.46.1\.uno\package
// -------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform mat...*/], ::STRINGS[120/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform mat...*/], ::STRINGS[29/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[32/*"uniform mat...*/], ::STRINGS[121/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[11/*"f"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"attribute v...*/], ::STRINGS[123/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[8/*"a"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"attribute v...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[8/*"a"*/], ::STRINGS[7/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform vec...*/], ::STRINGS[127/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[23/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform vec...*/], ::STRINGS[129/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[18/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"uniform mat...*/], ::STRINGS[131/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[22/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform mat...*/], ::STRINGS[133/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform mat...*/], ::STRINGS[134/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform mat...*/], ::STRINGS[135/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[119] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[120] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[28] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[29] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::STRINGS[32] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[121] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/max(g.w,1e-05),g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[122] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[123] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[124] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[125] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[126] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[127] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[128] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[129] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[130] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[131] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[16] = uString::Const("k");
    ::STRINGS[17] = uString::Const("l");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[132] = uString::Const("uniform mat4 e,b;uniform vec2 c,d;attribute vec2 a;varying vec2 f,g;void main(){vec2 j=true?vec2(a.x,float(1)-a.y):a;f=j;g=(vec2(j.x,float(1)-j.y)*c)+d;gl_Position=b*(e*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[133] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).x;}");
    ::STRINGS[134] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){vec4 j=texture2D(i,g);gl_FragColor=texture2D(h,f)*vec4(j.xyz*j.w,j.w);}");
    ::STRINGS[135] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).w;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur115443aa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur115443aa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Elements\0.46.1\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform vec...*/], ::STRINGS[137/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[12/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform mat...*/], ::STRINGS[139/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[11/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform vec...*/], ::STRINGS[141/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[10/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"uniform flo...*/], ::STRINGS[143/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[8/*"a"*/], ::STRINGS[6/*"b"*/], ::STRINGS[7/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"e"*/], ::STRINGS[11/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"k"*/], ::STRINGS[17/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[46/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[136] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[137] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[8] = uString::Const("a");
    ::STRINGS[6] = uString::Const("b");
    ::STRINGS[7] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("e");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[138] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[139] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[11] = uString::Const("f");
    ::STRINGS[26] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[27] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[140] = uString::Const("uniform vec2 b,c;attribute vec2 a;varying vec2 d;void main(){d=(a*b)/c;gl_Position=vec4((a*float(2))-float(1),float(0),float(1));}");
    ::STRINGS[141] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,fract(d));}");
    ::STRINGS[142] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[143] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[16] = uString::Const("k");
    ::STRINGS[17] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[46] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementDraw1f583284_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementDraw1f583284_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker447c61dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// C:\Users\nour\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.46.1\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::Diagnostics484578f6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[144/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[145/*"diagnostics...*/]);
    FuseReactive_bundle::es6promisemin6ba0da57_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[144/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[146/*"es6-promise...*/]);
    FuseReactive_bundle::Observablebbc09e97_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[144/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[147/*"observable-...*/]);
    FuseReactive_bundle::setTimeoutb87c3ddf_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[144/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[148/*"settimeout-...*/]);
}

static void FuseReactive_bundle_build(uType* type)
{
    ::STRINGS[144] = uString::Const("Fuse.Reactive");
    ::STRINGS[145] = uString::Const("diagnostics-c1dc0a33.js");
    ::STRINGS[146] = uString::Const("es6-promise.min-2da2c24c.js");
    ::STRINGS[147] = uString::Const("observable-48e1b932.js");
    ::STRINGS[148] = uString::Const("settimeout-a74449a4.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Diagnostics484578f6_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promisemin6ba0da57_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observablebbc09e97_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::setTimeoutb87c3ddf_, uFieldFlagsStatic);
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_build_ = FuseReactive_bundle_build;
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Diagnostics484578f6_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promisemin6ba0da57_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observablebbc09e97_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::setTimeoutb87c3ddf_;
// }

} // ::g
