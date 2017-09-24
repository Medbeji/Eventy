// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseBasicTheme_-4bfcf6e8.h>
#include <_root.FuseBasicTheme_-545f3ab0.h>
#include <_root.FuseBasicTheme_-6a3d03e2.h>
#include <_root.FuseBasicTheme_-712330e4.h>
#include <_root.FuseBasicTheme_-7dc64d4d.h>
#include <_root.FuseBasicTheme_-ae1fe842.h>
#include <_root.FuseBasicTheme_-b6cc75cc.h>
#include <_root.FuseBasicTheme_-bf75500b.h>
#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_-cdff12e0.h>
#include <_root.FuseBasicTheme_-d24b53f1.h>
#include <_root.FuseBasicTheme_-de8e1e6f.h>
#include <_root.FuseBasicTheme_-df476f2d.h>
#include <_root.FuseBasicTheme_-fefe1cf2.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNat-fa0facbc.h>
#include <_root.FuseControlsNav-a8c01cdb.h>
#include <_root.FuseControlsNav-bfeb1093.h>
#include <_root.FuseControlsPan-1146454c.h>
#include <_root.FuseControlsPri-3832896e.h>
#include <_root.FuseControlsPri-38e137c8.h>
#include <_root.FuseControlsPri-3bbae333.h>
#include <_root.FuseControlsPri-5e35c2db.h>
#include <_root.FuseControlsPri-6b573bdb.h>
#include <_root.FuseControlsPri-7b4ecfe6.h>
#include <_root.FuseControlsPri-8507d6ea.h>
#include <_root.FuseControlsPri-accbb5bd.h>
#include <_root.FuseControlsPri-ca138e33.h>
#include <_root.FuseControlsPri-ce42971.h>
#include <_root.FuseControlsPri-d52a5a11.h>
#include <_root.FuseControlsPri-d9ada289.h>
#include <_root.FuseControlsPri-e9d2ee5b.h>
#include <_root.FuseControlsScr-48813899.h>
#include <_root.FuseControlsScr-f1bcb258.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrim-c6713933.h>
#include <_root.FuseDrawingSurf-41037ecc.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseNodes_bundle.h>
#include <_root.FuseReactiveJav-1015c09d.h>
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
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[156];
static uType* TYPES[19];

namespace g{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text :765
// {
// static FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() :765
static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() :765
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :771
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :768
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name(), void();
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text New() :765
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :770
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :772
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :773
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() [instance] :765
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text New() [static] :765
FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/package
// ------------------------------------------------------------------------------------------------

// public static generated class FuseBasicTheme_bundle :0
// {
// static FuseBasicTheme_bundle() :0
static void FuseBasicTheme_bundle__cctor__fn(uType* __type)
{
    FuseBasicTheme_bundle::RobotoLight088d7a12_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[1/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[2/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMedium6924b553_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[1/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[3/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegulare37e16fe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[1/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[4/*"roboto-regu...*/]);
}

static void FuseBasicTheme_bundle_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Fuse.BasicTheme");
    ::STRINGS[2] = uString::Const("roboto-light-30e8892b.ttf");
    ::STRINGS[3] = uString::Const("roboto-medium-66b1e43c.ttf");
    ::STRINGS[4] = uString::Const("roboto-regular-4d92bebf.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoLight088d7a12_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoMedium6924b553_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoRegulare37e16fe_, uFieldFlagsStatic);
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

uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoLight088d7a12_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoMedium6924b553_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoRegulare37e16fe_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property :817
// {
static void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Animations.Change<float4>*/], offsetof(::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :820
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__ctor_3_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :822
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get1_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[3/*Fuse.Animations.Change<float4>*/])), &ret2), ret2), void();
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :820
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :821
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :823
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set1_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[3/*Fuse.Animations.Change<float4>*/])), uCRef(v_));
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [instance] :820
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [static] :820
FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* obj1 = (FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*)uNew(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_TextColor_Property :784
// {
static void FuseBasicTheme_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Controls.TextControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :789
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :788
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :790
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_Value_Property :775
// {
static void FuseBasicTheme_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Controls.TextControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :780
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :779
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :781
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :782
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property :858
// {
static void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextInputControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextInputControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :861
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__ctor_3_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :863
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[5/*Fuse.Controls.TextInputControl*/]))->TextColor(), void();
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :861
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :862
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :864
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[5/*Fuse.Controls.TextInputControl*/]))->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :861
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :861
FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :792
// {
static void FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[6/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :795
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__ctor_3_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :797
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :795
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :796
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :798
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :799
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :795
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :795
FuseBasicTheme_FuseDrawingSolidColor_Color_Property* FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseDrawingSolidColor_Color_Property* obj1 = (FuseBasicTheme_FuseDrawingSolidColor_Color_Property*)uNew(FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :850
// {
static void FuseBasicTheme_FuseDrawingStroke_Width_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseDrawingStroke_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_Width_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :855
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :854
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :856
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->Width(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :809
// {
static void FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :814
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :813
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :815
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Color(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :866
// {
static void FuseBasicTheme_FuseElementsElement_Height_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Height_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Height_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :869
void FuseBasicTheme_FuseElementsElement_Height_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :871
void FuseBasicTheme_FuseElementsElement_Height_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Height(), void();
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :869
void FuseBasicTheme_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Height_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :870
void FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :872
void FuseBasicTheme_FuseElementsElement_Height_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Height(v_);
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :869
void FuseBasicTheme_FuseElementsElement_Height_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :869
FuseBasicTheme_FuseElementsElement_Height_Property* FuseBasicTheme_FuseElementsElement_Height_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseElementsElement_Height_Property* obj1 = (FuseBasicTheme_FuseElementsElement_Height_Property*)uNew(FuseBasicTheme_FuseElementsElement_Height_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Opacity_Property :825
// {
static void FuseBasicTheme_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :830
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :829
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :831
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :832
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Width_Property :834
// {
static void FuseBasicTheme_FuseElementsElement_Width_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Width_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Width_Property__Set1_fn;
    return type;
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :839
void FuseBasicTheme_FuseElementsElement_Width_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :838
void FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :840
void FuseBasicTheme_FuseElementsElement_Width_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Width(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :842
// {
static void FuseBasicTheme_FuseTranslation_X_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Translation*/], offsetof(::g::FuseBasicTheme_FuseTranslation_X_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseTranslation_X_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseTranslation_X_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :847
void FuseBasicTheme_FuseTranslation_X_Property__Get1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[10/*Fuse.Translation*/]))->X(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :846
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :848
void FuseBasicTheme_FuseTranslation_X_Property__Set1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[10/*Fuse.Translation*/]))->X(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseVisual_IsEnabled_Property :801
// {
static void FuseBasicTheme_FuseVisual_IsEnabled_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Visual_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Visual*/], offsetof(::g::FuseBasicTheme_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :806
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[11/*Fuse.Visual*/]))->IsEnabled(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :805
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :807
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[11/*Fuse.Visual*/]))->IsEnabled(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[5/*"uniform mat...*/], ::STRINGS[6/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 18, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[24/*"t"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[25/*"uniform mat...*/], ::STRINGS[26/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[18/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[27/*"uniform mat...*/], ::STRINGS[28/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[5] = uString::Const("uniform mat4 q, d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = ((((e * (false ? vec2(a.x, float(1) - a.y) : a)) - f) / g) * h) + i;\n"
        "    r = k + (u * j);\n"
        "    s = u;\n"
        "    gl_Position = d * (q * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o, p;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = (c ? vec4(float(0)) : texture2D(t, b ? (m + (fract(r) * l)) : s)) * n;\n"
        "    gl_FragColor = (vec4(u.xyz * u.w, u.w) * o) * p;\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[13] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[15] = uString::Const("i");
    ::STRINGS[16] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[19] = uString::Const("m");
    ::STRINGS[20] = uString::Const("n");
    ::STRINGS[21] = uString::Const("o");
    ::STRINGS[22] = uString::Const("p");
    ::STRINGS[23] = uString::Const("q");
    ::STRINGS[24] = uString::Const("t");
    ::STRINGS[25] = uString::Const("uniform mat4 g, b;\n"
        "uniform vec2 c, d, i;\n"
        "uniform vec4 h;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, vec2 p, float q){\n"
        "    vec2 r = (n * c) - o;\n"
        "    float s = dot(r, p) / q;\n"
        "    return (s - d.x) / d.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, h.xy, i, j);\n"
        "    gl_Position = b * (g * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[26] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(l, vec2(k, 0.5)) * e) * f;\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[28] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[29] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::Blitter65ac1d08_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"uniform vec...*/], ::STRINGS[32/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 6, ::STRINGS[7/*"b"*/], ::STRINGS[9/*"a"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[14/*"h"*/]));
    FuseControlsNative_bundle::iOSBlitter0a63f4bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[33/*"uniform vec...*/], ::STRINGS[34/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 5, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[12/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[31] = uString::Const("uniform vec2 d, c;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    g = a;\n"
        "    gl_Position = e * vec4(d + (a * c), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[32] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b ? texture2D(h, f) : texture2D(h, g);\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[33] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * vec4(c + (a * b), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[34] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("f");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitter65ac1d08_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb_, uFieldFlagsStatic);
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitter65ac1d08_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::iOSBlitter0a63f4bb_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :297
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[13/*Fuse.Controls.Panel*/], offsetof(::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :302
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[13/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
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

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :303
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[13/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :300
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :288
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :293
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Color(), void();
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

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :294
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :295
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :291
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :291
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/1.0.2/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseControlsPanels_bundle :0
// {
// static FuseControlsPanels_bundle() :0
static void FuseControlsPanels_bundle__cctor__fn(uType* __type)
{
    FuseControlsPanels_bundle::FreezeDrawable1e2faccf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 5, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[12/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[35] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[36] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    gl_FragColor = vec4(g.xyz, g.w * c);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[12] = uString::Const("f");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text :751
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :757
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :754
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :756
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :758
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[0/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :759
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance] :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static] :751
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value :761
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[37] = uString::Const("Value");
    ::TYPES[15] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :767
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[15/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :764
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :766
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :768
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[15/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :769
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance] :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static] :761
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/package
// ---------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform mat...*/], ::STRINGS[39/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[14/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[39] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[14] = uString::Const("h");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :797
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :802
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :801
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :803
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(v);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :780
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :785
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :784
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :786
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :783
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :771
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :776
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :775
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :777
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[4/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :778
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :774
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :847
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[6/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :852
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :851
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :853
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :854
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :805
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :810
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :809
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :811
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->Brush(v);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :829
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :834
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :833
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :835
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[7/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :836
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :813
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :818
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :817
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :819
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :821
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :826
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :825
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :827
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[8/*Fuse.Effects.DropShadow*/]))->Size(v_);
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :788
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Elements.Element*/], offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :793
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :792
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :794
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[9/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :795
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :791
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :838
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Fuse.Gestures.SwipeGesture*/], offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :843
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :842
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :844
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :845
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView :142
// {
// static FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :142
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[40] = uString::Const("KeepFocusInView");
    ::TYPES[17] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :142
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :148
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[17/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name() :145
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name(), void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() :142
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType() :147
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :149
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[17/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance] :142
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static] :142
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :151
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[18/*Fuse.Triggers.WhileBool*/], offsetof(::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
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
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :154
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :156
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[18/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :154
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :155
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :157
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[18/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :154
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :154
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/1.0.2/.uno/package
// ----------------------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[41/*"uniform flo...*/], ::STRINGS[42/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[12/*string[]*/], 16, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[23/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[7/*"b"*/], ::STRINGS[9/*"a"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[14/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[41] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("uniform sampler2D q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[13] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[15] = uString::Const("i");
    ::STRINGS[16] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[19] = uString::Const("m");
    ::STRINGS[20] = uString::Const("n");
    ::STRINGS[21] = uString::Const("o");
    ::STRINGS[23] = uString::Const("q");
    ::STRINGS[43] = uString::Const("uniform mat4 f, c;\n"
        "uniform vec2 d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec2 i(vec2 j){\n"
        "    vec2 k = j.xy;\n"
        "\n"
        "    if (b == 1)\n"
        "        return vec2(k.y, 1.0 - k.x);\n"
        "    else if (b == 2)\n"
        "        return vec2(1.0 - k.x, 1.0 - k.y);\n"
        "    else if (b == 3)\n"
        "        return vec2(1.0 - k.y, k.x);\n"
        "    else\n"
        "        return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = i((a * d) + e);\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[44] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing/1.0.2/.uno/package
// ---------------------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[45/*"attribute v...*/], ::STRINGS[46/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[45] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    h = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[46] = uString::Const("uniform float e[b], f;\n"
        "uniform vec4 g[c];\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "float i(float k, float l, float m){\n"
        "    return clamp((m - k) / (l - k), 0.0, 1.0);\n"
        "}\n"
        "\n"
        "vec4 j(vec2 k){\n"
        "    float l = e[0] + (f * k.x);\n"
        "    vec4 m = vec4(g[0].xyz * g[0].w, g[0].w);\n"
        "\n"
        "    for (int n = 0; n < (b - 1); n++)\n"
        "    {\n"
        "        float o = e[n];\n"
        "        float p = e[n + 1];\n"
        "        vec4 q = g[n + 1];\n"
        "        m = mix(m, vec4(q.xyz * q.w, q.w), d ? smoothstep(o, p, l) : i(o, p, l));\n"
        "    }\n"
        "\n"
        "    return m;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j(h);\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[13] = uString::Const("g");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/1.0.2/.uno/package
// --------------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform vec...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 19, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[50/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform vec...*/], ::STRINGS[52/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 26, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[56/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[58/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 17, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[53/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[62/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 14, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[22/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 17, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[53/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform vec...*/], ::STRINGS[64/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 19, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[50/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform vec...*/], ::STRINGS[66/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 16, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[49/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform vec...*/], ::STRINGS[68/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 10, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 14, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform vec...*/], ::STRINGS[71/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 26, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[56/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[58/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[73/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 13, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[77/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 23, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[78/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 24, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[81/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 21, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[56/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[84/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 24, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[9/*"a"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[81/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[85/*"uniform vec...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 9, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 13, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[89/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 12, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[90/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 12, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 14, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 8, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[95/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[97/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 16, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[24/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[98/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 16, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[24/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 10, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[101/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 10, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[103/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 23, ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[104/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform flo...*/], ::STRINGS[105/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 23, ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[104/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[107/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 12, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[109/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 12, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 25, ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[56/*"x"*/], ::STRINGS[114/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[115/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 25, ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[49/*"r"*/], ::STRINGS[53/*"s"*/], ::STRINGS[24/*"t"*/], ::STRINGS[50/*"u"*/], ::STRINGS[54/*"v"*/], ::STRINGS[55/*"w"*/], ::STRINGS[56/*"x"*/], ::STRINGS[114/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[117/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 13, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[116/*"uniform flo...*/], ::STRINGS[118/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 13, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform flo...*/], ::STRINGS[120/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 18, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[54/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform flo...*/], ::STRINGS[121/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[12/*string[]*/], 18, ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[23/*"q"*/], ::STRINGS[54/*"v"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[47] = uString::Const("uniform vec2 b, c, e, f, n;\n"
        "uniform mat4 d;\n"
        "uniform vec4 m;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "float v(vec2 w, vec2 x, vec2 y, float z){\n"
        "    vec2 A = (w * e) - x;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    s = v(x / e, m.xy, n, o);\n"
        "    t = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[48] = uString::Const("uniform float g, h, i, j, k, l;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(s, 0.5)) * (clamp(0.5 - (((abs((length(t) - g) - h) - i) * j) * k), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * j) * k), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[13] = uString::Const("g");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[15] = uString::Const("i");
    ::STRINGS[16] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[19] = uString::Const("m");
    ::STRINGS[20] = uString::Const("n");
    ::STRINGS[21] = uString::Const("o");
    ::STRINGS[22] = uString::Const("p");
    ::STRINGS[23] = uString::Const("q");
    ::STRINGS[49] = uString::Const("r");
    ::STRINGS[50] = uString::Const("u");
    ::STRINGS[51] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 D = a * d;\n"
        "    vec2 E = D + e;\n"
        "    vec2 F = ((((g * (E / g)) - h) / i) * j) + k;\n"
        "    z = m + (F * l);\n"
        "    A = F;\n"
        "    B = D;\n"
        "    gl_Position = f * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((min(dot(B, w), min(dot(B, x), dot(B, y))) * t) * u), float(0), float(1)))) * v;\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("s");
    ::STRINGS[24] = uString::Const("t");
    ::STRINGS[54] = uString::Const("v");
    ::STRINGS[55] = uString::Const("w");
    ::STRINGS[56] = uString::Const("x");
    ::STRINGS[57] = uString::Const("y");
    ::STRINGS[58] = uString::Const("C");
    ::STRINGS[59] = uString::Const("uniform vec2 b, c, e, f, l;\n"
        "uniform mat4 d;\n"
        "uniform vec4 k;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "float t(vec2 u, vec2 v, vec2 w, float x){\n"
        "    vec2 y = (u * e) - v;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    q = t(v / e, k.xy, l, m);\n"
        "    r = u;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform float g, h, i, j;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((length(r) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * h) * i), float(0), float(1)))) * j;\n"
        "}\n"
        "");
    ::STRINGS[61] = uString::Const("uniform vec2 b, c, e, f, l;\n"
        "uniform mat4 d;\n"
        "uniform vec4 k;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "float q(vec2 r, vec2 s, vec2 t, float u){\n"
        "    vec2 v = (r * e) - s;\n"
        "    float w = dot(v, t) / u;\n"
        "    return (w - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    vec2 s = r + c;\n"
        "    n = q(s / e, k.xy, l, m);\n"
        "    o = r;\n"
        "    gl_Position = d * vec4(s, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform float g, h, i, j;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(p, vec2(n, 0.5)) * (clamp(0.5 - (((length(o) - g) * h) * i), float(0), float(1)) * float(1))) * j;\n"
        "}\n"
        "");
    ::STRINGS[63] = uString::Const("uniform float g, h, i, j;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((length(r) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * h) * i), float(0), float(1)))) * j;\n"
        "}\n"
        "");
    ::STRINGS[64] = uString::Const("uniform float g, h, i, j, k, l;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(s, 0.5)) * (clamp(0.5 - (((abs((length(t) - g) - h) - i) * j) * k), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * j) * k), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform vec2 b, c, e, f, n;\n"
        "uniform mat4 d;\n"
        "uniform vec4 m;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "float s(vec2 t, vec2 u, vec2 v, float w){\n"
        "    vec2 x = (t * e) - u;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * b;\n"
        "    vec2 u = t + c;\n"
        "    p = s(u / e, m.xy, n, o);\n"
        "    q = t;\n"
        "    gl_Position = d * vec4(u, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("uniform float g, h, i, j, k, l;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(r, vec2(p, 0.5)) * (clamp(0.5 - (((abs((length(q) - g) - h) - i) * j) * k), float(0), float(1)) * float(1))) * l;\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    k = l;\n"
        "    gl_Position = d * vec4(l + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[68] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(k) - e) - f) - g) * h) * i), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    o = p;\n"
        "    gl_Position = d * vec4(p + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((max(dot(B, w), max(dot(B, x), dot(B, y))) * t) * u), float(0), float(1)))) * v;\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    n = o;\n"
        "    gl_Position = d * vec4(o + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(n) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * h) * i), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    l = m;\n"
        "    gl_Position = d * vec4(m + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 A = a * d;\n"
        "    vec2 B = A + e;\n"
        "    vec2 C = ((((g * (B / g)) - h) / i) * j) + k;\n"
        "    w = m + (C * l);\n"
        "    x = C;\n"
        "    y = A;\n"
        "    gl_Position = f * vec4(B, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D z;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 A = (c ? vec4(float(0)) : texture2D(z, b ? (o + (fract(w) * n)) : x)) * p;\n"
        "    gl_FragColor = (vec4(A.xyz * A.w, A.w) * (clamp(0.5 - (((abs((length(y) - q) - r) - s) * t) * u), float(0), float(1)) * float(1))) * v;\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("z");
    ::STRINGS[79] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 B = a * d;\n"
        "    vec2 C = B + e;\n"
        "    vec2 D = ((((g * (C / g)) - h) / i) * j) + k;\n"
        "    x = m + (D * l);\n"
        "    y = D;\n"
        "    z = B;\n"
        "    gl_Position = f * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((min(dot(z, u), min(dot(z, v), dot(z, w))) * r) * s), float(0), float(1)))) * t;\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("A");
    ::STRINGS[82] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * d;\n"
        "    vec2 z = y + e;\n"
        "    vec2 A = ((((g * (z / g)) - h) / i) * j) + k;\n"
        "    u = m + (A * l);\n"
        "    v = A;\n"
        "    w = y;\n"
        "    gl_Position = f * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (c ? vec4(float(0)) : texture2D(x, b ? (o + (fract(u) * n)) : v)) * p;\n"
        "    gl_FragColor = (vec4(y.xyz * y.w, y.w) * (clamp(0.5 - (((length(w) - q) * r) * s), float(0), float(1)) * float(1))) * t;\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((max(dot(z, u), max(dot(z, v), dot(z, w))) * r) * s), float(0), float(1)))) * t;\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 k = a * b;\n"
        "    j = k;\n"
        "    gl_Position = d * vec4(k + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1))) * i;\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(n) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * h) * i), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    m = n;\n"
        "    gl_Position = d * vec4(n + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1)))) * i;\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1)))) * i;\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = a * b;\n"
        "    i = j;\n"
        "    gl_Position = d * vec4(j + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float e, f, g;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(i) - e) * f) * g), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float e, f, g;\n"
        "uniform vec2 i, j, k;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(l) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(l, i), min(dot(l, j), dot(l, k))) * f) * g), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform float e, f, g;\n"
        "uniform vec2 i, j, k;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(l) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(l, i), max(dot(l, j), dot(l, k))) * f) * g), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, n;\n"
        "uniform mat4 g;\n"
        "uniform vec4 m;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "float u(vec2 v, vec2 w, vec2 x, float y){\n"
        "    vec2 z = (v * h) - w;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - i.x) / i.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = u(v / h, m.xy, n, o);\n"
        "    r = v;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float j, k, l;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(t, vec2(q, 0.5)) * clamp(0.5 - (((distance(r, s) - p) * j) * k), float(0), float(1))) * l;\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float j, k, l;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float v = clamp(0.5 - (((distance(r, s) - p) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(t, vec2(q, 0.5)) * (((v * v) * v) * ((v * ((v * float(6)) - float(15))) + float(10)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    k = e[int(c)];\n"
        "    l = n;\n"
        "    m = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(n, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * clamp(0.5 - (((distance(l, m) - k) * h) * i), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float n = clamp(0.5 - (((distance(l, m) - k) * h) * i), float(0), float(1));\n"
        "    gl_FragColor = j * (((n * n) * n) * ((n * ((n * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 C = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 D = ((((j * (C / j)) - k) / l) * m) + n;\n"
        "    w = g[int(c)];\n"
        "    x = p + (D * o);\n"
        "    y = D;\n"
        "    z = C;\n"
        "    A = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    gl_FragColor = (vec4(C.xyz * C.w, C.w) * clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1))) * v;\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("B");
    ::STRINGS[105] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    float D = clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1));\n"
        "    gl_FragColor = (vec4(C.xyz * C.w, C.w) * (((D * D) * D) * ((D * ((D * float(6)) - float(15))) + float(10)))) * v;\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = p;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(p, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = l * clamp(0.5 - (((abs((distance(n, o) - m) - h) - i) * j) * k), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = o;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(o, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float o = clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1));\n"
        "    gl_FragColor = (j * (((o * o) * o) * ((o * ((o * float(6)) - float(15))) + float(10)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float p = clamp(0.5 - (((abs((distance(n, o) - m) - h) - i) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = l * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 E = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 F = ((((j * (E / j)) - k) / l) * m) + n;\n"
        "    y = g[int(c)];\n"
        "    z = p + (F * o);\n"
        "    A = F;\n"
        "    B = E;\n"
        "    C = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    float F = clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1));\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * (((F * F) * F) * ((F * ((F * float(6)) - float(15))) + float(10)))) * x;\n"
        "}\n"
        "");
    ::STRINGS[114] = uString::Const("D");
    ::STRINGS[115] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1))) * x;\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = q;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(q, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float h, i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float q = clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = (l * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform float h, i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, p;\n"
        "uniform mat4 g;\n"
        "uniform vec4 o;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "float w(vec2 x, vec2 y, vec2 z, float A){\n"
        "    vec2 B = (x * h) - y;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - i.x) / i.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = w(x / h, o.xy, p, q);\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("uniform float j, k, l, m, n;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * clamp(0.5 - (((abs((distance(t, u) - r) - j) - k) * l) * m), float(0), float(1))) * n;\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float j, k, l, m, n;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float x = clamp(0.5 - (((abs((distance(t, u) - r) - j) - k) * l) * m), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * n;\n"
        "}\n"
        "");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingSurface_bundle :0
// {
// static FuseDrawingSurface_bundle() :0
static void FuseDrawingSurface_bundle__cctor__fn(uType* __type)
{
    FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"attribute v...*/], ::STRINGS[123/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 2, ::STRINGS[9/*"a"*/], ::STRINGS[8/*"c"*/]));
    FuseDrawingSurface_bundle::Surface541b21c2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/]));
}

static void FuseDrawingSurface_bundle_build(uType* type)
{
    ::STRINGS[122] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    b = vec2(a.x, float(1) - a.y);\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[29] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[11] = uString::Const("e");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingSurface_bundle::Surface541b21c2_, uFieldFlagsStatic);
}

uClassType* FuseDrawingSurface_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingSurface_bundle", options);
    type->fp_build_ = FuseDrawingSurface_bundle_build;
    type->fp_cctor_ = FuseDrawingSurface_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingSurface_bundle::Surface541b21c2_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Effects/1.0.2/.uno/package
// ---------------------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform mat...*/], ::STRINGS[125/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[126/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 5, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[12/*"f"*/]));
    FuseEffects_bundle::Duotone26eb7e3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform mat...*/], ::STRINGS[127/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"attribute v...*/], ::STRINGS[129/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[9/*"a"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[14/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"attribute v...*/], ::STRINGS[123/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 2, ::STRINGS[9/*"a"*/], ::STRINGS[8/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[131/*"uniform vec...*/], ::STRINGS[132/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 11, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[24/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform vec...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 8, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[19/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform mat...*/], ::STRINGS[136/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 14, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[23/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[138/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[139/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[140/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 7, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[124] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[29] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[35] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform vec3 c, d;\n"
        "uniform float e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 i = texture2D(h, g);\n"
        "    vec4 j = vec4(i.xyz / max(i.w, 1e-05), i.w);\n"
        "    gl_FragColor = vec4(mix(j.xyz, mix(c, d, sqrt(dot(j.xyz * j.xyz, vec3(0.299, 0.587, 0.114)))).xyz, e), j.w);\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[132] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[13] = uString::Const("g");
    ::STRINGS[15] = uString::Const("i");
    ::STRINGS[16] = uString::Const("j");
    ::STRINGS[24] = uString::Const("t");
    ::STRINGS[133] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[134] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("m");
    ::STRINGS[135] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[136] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[23] = uString::Const("q");
    ::STRINGS[137] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[138] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[140] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur115443aa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Duotone26eb7e3c_, uFieldFlagsStatic,
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
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur115443aa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Duotone26eb7e3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Elements/1.0.2/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform vec...*/], ::STRINGS[142/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 6, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[13/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[143/*"uniform mat...*/], ::STRINGS[144/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[12/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[27/*"uniform mat...*/], ::STRINGS[28/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform vec...*/], ::STRINGS[146/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 4, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[11/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[147/*"uniform flo...*/], ::STRINGS[148/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[12/*string[]*/], 17, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[12/*"f"*/], ::STRINGS[13/*"g"*/], ::STRINGS[14/*"h"*/], ::STRINGS[15/*"i"*/], ::STRINGS[16/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[19/*"m"*/], ::STRINGS[20/*"n"*/], ::STRINGS[21/*"o"*/], ::STRINGS[22/*"p"*/], ::STRINGS[49/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[141] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[142] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[13] = uString::Const("g");
    ::STRINGS[143] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[144] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("f");
    ::STRINGS[27] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[28] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[145] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = (a * b) / c;\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[146] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, fract(d));\n"
        "}\n"
        "");
    ::STRINGS[147] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[14] = uString::Const("h");
    ::STRINGS[15] = uString::Const("i");
    ::STRINGS[16] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[19] = uString::Const("m");
    ::STRINGS[20] = uString::Const("n");
    ::STRINGS[21] = uString::Const("o");
    ::STRINGS[22] = uString::Const("p");
    ::STRINGS[49] = uString::Const("r");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Nodes/1.0.2/.uno/package
// -------------------------------------------------------------------------------------------

// public static generated class FuseNodes_bundle :0
// {
// static FuseNodes_bundle() :0
static void FuseNodes_bundle__cctor__fn(uType* __type)
{
    FuseNodes_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"uniform vec...*/], ::STRINGS[150/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[12/*string[]*/], 5, ::STRINGS[9/*"a"*/], ::STRINGS[7/*"b"*/], ::STRINGS[8/*"c"*/], ::STRINGS[10/*"d"*/], ::STRINGS[11/*"e"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[149] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[150] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("a");
    ::STRINGS[7] = uString::Const("b");
    ::STRINGS[8] = uString::Const("c");
    ::STRINGS[10] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::TYPES[12] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseNodes_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic);
}

uClassType* FuseNodes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseNodes_bundle", options);
    type->fp_build_ = FuseNodes_bundle_build;
    type->fp_cctor_ = FuseNodes_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawHelpers4c5c39ae_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Reactive.JavaScript/1.0.2/.uno/package
// ---------------------------------------------------------------------------------------------------------

// public static generated class FuseReactiveJavaScript_bundle :0
// {
// static FuseReactiveJavaScript_bundle() :0
static void FuseReactiveJavaScript_bundle__cctor__fn(uType* __type)
{
    FuseReactiveJavaScript_bundle::Diagnostics12479ee0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[151/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[152/*"diagnostics...*/]);
    FuseReactiveJavaScript_bundle::es6promisemin9f9c9883_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[151/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[153/*"es6-promise...*/]);
    FuseReactiveJavaScript_bundle::Observablec90d42c3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[151/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[154/*"observable-...*/]);
    FuseReactiveJavaScript_bundle::setTimeout4c29a9bb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[151/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[155/*"settimeout-...*/]);
}

static void FuseReactiveJavaScript_bundle_build(uType* type)
{
    ::STRINGS[151] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[152] = uString::Const("diagnostics-4c71cb84.js");
    ::STRINGS[153] = uString::Const("es6-promise.min-a3069df9.js");
    ::STRINGS[154] = uString::Const("observable-66183501.js");
    ::STRINGS[155] = uString::Const("settimeout-cb0e3491.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Diagnostics12479ee0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::es6promisemin9f9c9883_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Observablec90d42c3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::setTimeout4c29a9bb_, uFieldFlagsStatic);
}

uClassType* FuseReactiveJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactiveJavaScript_bundle", options);
    type->fp_build_ = FuseReactiveJavaScript_bundle_build;
    type->fp_cctor_ = FuseReactiveJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Diagnostics12479ee0_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::es6promisemin9f9c9883_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Observablec90d42c3_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::setTimeout4c29a9bb_;
// }

} // ::g
