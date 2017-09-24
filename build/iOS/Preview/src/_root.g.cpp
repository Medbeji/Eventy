// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseAndroidText-9d82b652.h>
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
#include <_root.FuseText_bundle.h>
#include <_root.OutracksSimulat-28d0228.h>
#include <_root.OutracksSimulat-3176f451.h>
#include <_root.OutracksSimulat-41c33877.h>
#include <_root.OutracksSimulat-4a6a98a8.h>
#include <_root.OutracksSimulat-61b10ffd.h>
#include <_root.OutracksSimulat-72874f79.h>
#include <_root.OutracksSimulat-7329dae0.h>
#include <_root.OutracksSimulat-7f31d2ed.h>
#include <_root.OutracksSimulat-84973ed3.h>
#include <_root.OutracksSimulat-88868d11.h>
#include <_root.OutracksSimulat-afca775d.h>
#include <_root.OutracksSimulat-c5ccb7a7.h>
#include <_root.OutracksSimulat-d5b16023.h>
#include <_root.OutracksSimulat-eb4af30d.h>
#include <_root.UnoCore_bundle.h>
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
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Visual.h>
#include <Outracks.Simulator.Cl-1b215019.h>
#include <Outracks.Simulator.Cl-b47ea6ce.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
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
static uString* STRINGS[189];
static uType* TYPES[22];

namespace g{

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class DashedSolidColor :955
// {
// static DashedSolidColor() :955
static void DashedSolidColor__cctor_1_fn(uType* __type)
{
    DashedSolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
    DashedSolidColor::_dashSizeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DashSize"*/]);
}

static void DashedSolidColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("DashSize");
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::DashedSolidColor, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::DashedSolidColor, _dashSize), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DashedSolidColor::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DashedSolidColor::_dashSizeName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Color", NULL, (void*)DashedSolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)DashedSolidColor__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_DashSize", NULL, (void*)DashedSolidColor__get_DashSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DashSize", NULL, (void*)DashedSolidColor__set_DashSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)DashedSolidColor__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)DashedSolidColor__New3_fn, 0, true, type, 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetColor", NULL, (void*)DashedSolidColor__SetColor1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Drawing::Brush_type* DashedSolidColor_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(DashedSolidColor);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("DashedSolidColor", options);
    type->fp_build_ = DashedSolidColor_build;
    type->fp_ctor_ = (void*)DashedSolidColor__New2_fn;
    type->fp_cctor_ = DashedSolidColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DashedSolidColor__get_IsCompletelyTransparent_fn;
    return type;
}

// public DashedSolidColor() :1033
void DashedSolidColor__ctor_3_fn(DashedSolidColor* __this)
{
    __this->ctor_3();
}

// public DashedSolidColor(float4 color) :1038
void DashedSolidColor__ctor_4_fn(DashedSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color() :964
void DashedSolidColor__get_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :965
void DashedSolidColor__set_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_DashSize() :978
void DashedSolidColor__get_DashSize_fn(DashedSolidColor* __this, float* __retval)
{
    *__retval = __this->DashSize();
}

// public void set_DashSize(float value) :979
void DashedSolidColor__set_DashSize_fn(DashedSolidColor* __this, float* value)
{
    __this->DashSize(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :1004
void DashedSolidColor__get_IsCompletelyTransparent_fn(DashedSolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public DashedSolidColor New() :1033
void DashedSolidColor__New2_fn(DashedSolidColor** __retval)
{
    *__retval = DashedSolidColor::New2();
}

// public DashedSolidColor New(float4 color) :1038
void DashedSolidColor__New3_fn(::g::Uno::Float4* color, DashedSolidColor** __retval)
{
    *__retval = DashedSolidColor::New3(*color);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) :989
void DashedSolidColor__SetColor1_fn(DashedSolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector DashedSolidColor::_colorName_;
::g::Uno::UX::Selector DashedSolidColor::_dashSizeName_;

// public DashedSolidColor() [instance] :1033
void DashedSolidColor::ctor_3()
{
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public DashedSolidColor(float4 color) [instance] :1038
void DashedSolidColor::ctor_4(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :964
::g::Uno::Float4 DashedSolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :965
void DashedSolidColor::Color(::g::Uno::Float4 value)
{
    uStackFrame __("DashedSolidColor", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(DashedSolidColor::_colorName());
    }
}

// public float get_DashSize() [instance] :978
float DashedSolidColor::DashSize()
{
    return _dashSize;
}

// public void set_DashSize(float value) [instance] :979
void DashedSolidColor::DashSize(float value)
{
    uStackFrame __("DashedSolidColor", "set_DashSize(float)");

    if (_dashSize != value)
    {
        _dashSize = value;
        OnPropertyChanged(DashedSolidColor::_dashSizeName());
    }
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance] :989
void DashedSolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    uStackFrame __("DashedSolidColor", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(DashedSolidColor::_colorName(), origin);
    }
}

// public DashedSolidColor New() [static] :1033
DashedSolidColor* DashedSolidColor::New2()
{
    DashedSolidColor* obj1 = (DashedSolidColor*)uNew(DashedSolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public DashedSolidColor New(float4 color) [static] :1038
DashedSolidColor* DashedSolidColor::New3(::g::Uno::Float4 color)
{
    DashedSolidColor* obj2 = (DashedSolidColor*)uNew(DashedSolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Android.TextRenderer/1.0.2/.uno/package
// ----------------------------------------------------------------------------------------------------------

// public static generated class FuseAndroidTextRenderer_bundle :0
// {
// static FuseAndroidTextRenderer_bundle() :0
static void FuseAndroidTextRenderer_bundle__cctor__fn(uType* __type)
{
    FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[2/*"uniform vec...*/], ::STRINGS[3/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[8/*"f"*/]));
}

static void FuseAndroidTextRenderer_bundle_build(uType* type)
{
    ::STRINGS[2] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = d * vec4(c + (a * b), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[8] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitter83cfc6f0", 0));
}

uClassType* FuseAndroidTextRenderer_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseAndroidTextRenderer_bundle", options);
    type->fp_build_ = FuseAndroidTextRenderer_bundle_build;
    type->fp_cctor_ = FuseAndroidTextRenderer_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text :765
// {
// static FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() :765
static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Text"*/]);
}

static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Text");
    ::TYPES[1] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
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
    uStackFrame __("FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->Text(), void();
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
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :772
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
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
    FuseBasicTheme_bundle::RobotoLight088d7a12_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[10/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[11/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMedium6924b553_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[10/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[12/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegulare37e16fe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[10/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[13/*"roboto-regu...*/]);
}

static void FuseBasicTheme_bundle_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Fuse.BasicTheme");
    ::STRINGS[11] = uString::Const("roboto-light-30e8892b.ttf");
    ::STRINGS[12] = uString::Const("roboto-medium-66b1e43c.ttf");
    ::STRINGS[13] = uString::Const("roboto-regular-4d92bebf.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoLight088d7a12_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoMedium6924b553_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseBasicTheme_bundle::RobotoRegulare37e16fe_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("RobotoLight088d7a12", 0),
        new uField("RobotoMedium6924b553", 1),
        new uField("RobotoRegulare37e16fe", 2));
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
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Animations.Change<float4>*/], offsetof(::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", "Get(Uno.UX.PropertyObject)");
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[4/*Fuse.Animations.Change<float4>*/])), &ret2), ret2), void();
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
    uStackFrame __("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[4/*Fuse.Animations.Change<float4>*/])), uCRef(v_));
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
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :787
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :789
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public FuseBasicTheme_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :787
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :788
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :790
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :787
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :787
FuseBasicTheme_FuseControlsTextControl_TextColor_Property* FuseBasicTheme_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseControlsTextControl_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_Value_Property :775
// {
static void FuseBasicTheme_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :778
void FuseBasicTheme_FuseControlsTextControl_Value_Property__ctor_3_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :780
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FuseBasicTheme_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :778
void FuseBasicTheme_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :779
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :781
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :782
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseBasicTheme_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :778
void FuseBasicTheme_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :778
FuseBasicTheme_FuseControlsTextControl_Value_Property* FuseBasicTheme_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseControlsTextControl_Value_Property* obj1 = (FuseBasicTheme_FuseControlsTextControl_Value_Property*)uNew(FuseBasicTheme_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property :858
// {
static void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Controls::TextInputControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[6/*Fuse.Controls.TextInputControl*/], offsetof(::g::FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[6/*Fuse.Controls.TextInputControl*/]))->TextColor(), void();
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
    uStackFrame __("FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[6/*Fuse.Controls.TextInputControl*/]))->TextColor(v_);
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
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), void();
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
    uStackFrame __("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
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
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseDrawingStroke_Width_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :853
void FuseBasicTheme_FuseDrawingStroke_Width_Property__ctor_3_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :855
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingStroke_Width_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Width(), void();
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :853
void FuseBasicTheme_FuseDrawingStroke_Width_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingStroke_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingStroke_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :854
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :856
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseDrawingStroke_Width_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Width(v_);
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :853
void FuseBasicTheme_FuseDrawingStroke_Width_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingStroke_Width_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :853
FuseBasicTheme_FuseDrawingStroke_Width_Property* FuseBasicTheme_FuseDrawingStroke_Width_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseDrawingStroke_Width_Property* obj1 = (FuseBasicTheme_FuseDrawingStroke_Width_Property*)uNew(FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :809
// {
static void FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :812
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__ctor_3_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :814
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Color(), void();
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :812
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseEffectsDropShadow_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseEffectsDropShadow_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :813
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :815
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Color(v_);
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :812
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseEffectsDropShadow_Color_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :812
FuseBasicTheme_FuseEffectsDropShadow_Color_Property* FuseBasicTheme_FuseEffectsDropShadow_Color_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseEffectsDropShadow_Color_Property* obj1 = (FuseBasicTheme_FuseEffectsDropShadow_Color_Property*)uNew(FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :866
// {
static void FuseBasicTheme_FuseElementsElement_Height_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Height_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Height(), void();
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
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Height_Property", "Set(Uno.UX.PropertyObject,Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Height(v_);
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
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :828
void FuseBasicTheme_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :830
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FuseBasicTheme_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :828
void FuseBasicTheme_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :829
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :831
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :832
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseBasicTheme_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :828
void FuseBasicTheme_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :828
FuseBasicTheme_FuseElementsElement_Opacity_Property* FuseBasicTheme_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseElementsElement_Opacity_Property* obj1 = (FuseBasicTheme_FuseElementsElement_Opacity_Property*)uNew(FuseBasicTheme_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Width_Property :834
// {
static void FuseBasicTheme_FuseElementsElement_Width_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(::g::FuseBasicTheme_FuseElementsElement_Width_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :837
void FuseBasicTheme_FuseElementsElement_Width_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :839
void FuseBasicTheme_FuseElementsElement_Width_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Width_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Width(), void();
}

// public FuseBasicTheme_FuseElementsElement_Width_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :837
void FuseBasicTheme_FuseElementsElement_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Width_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :838
void FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :840
void FuseBasicTheme_FuseElementsElement_Width_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseElementsElement_Width_Property", "Set(Uno.UX.PropertyObject,Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Width(v_);
}

// public FuseBasicTheme_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :837
void FuseBasicTheme_FuseElementsElement_Width_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_Width_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :837
FuseBasicTheme_FuseElementsElement_Width_Property* FuseBasicTheme_FuseElementsElement_Width_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseElementsElement_Width_Property* obj1 = (FuseBasicTheme_FuseElementsElement_Width_Property*)uNew(FuseBasicTheme_FuseElementsElement_Width_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :842
// {
static void FuseBasicTheme_FuseTranslation_X_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Translation*/], offsetof(::g::FuseBasicTheme_FuseTranslation_X_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseTranslation_X_Property(Fuse.Translation obj, Uno.UX.Selector name) :845
void FuseBasicTheme_FuseTranslation_X_Property__ctor_3_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :847
void FuseBasicTheme_FuseTranslation_X_Property__Get1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseTranslation_X_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[11/*Fuse.Translation*/]))->X(), void();
}

// public FuseBasicTheme_FuseTranslation_X_Property New(Fuse.Translation obj, Uno.UX.Selector name) :845
void FuseBasicTheme_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseTranslation_X_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseTranslation_X_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :846
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :848
void FuseBasicTheme_FuseTranslation_X_Property__Set1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseTranslation_X_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[11/*Fuse.Translation*/]))->X(v_);
}

// public FuseBasicTheme_FuseTranslation_X_Property(Fuse.Translation obj, Uno.UX.Selector name) [instance] :845
void FuseBasicTheme_FuseTranslation_X_Property::ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseTranslation_X_Property New(Fuse.Translation obj, Uno.UX.Selector name) [static] :845
FuseBasicTheme_FuseTranslation_X_Property* FuseBasicTheme_FuseTranslation_X_Property::New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseTranslation_X_Property* obj1 = (FuseBasicTheme_FuseTranslation_X_Property*)uNew(FuseBasicTheme_FuseTranslation_X_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseVisual_IsEnabled_Property :801
// {
static void FuseBasicTheme_FuseVisual_IsEnabled_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Visual*/], offsetof(::g::FuseBasicTheme_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
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

// public FuseBasicTheme_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) :804
void FuseBasicTheme_FuseVisual_IsEnabled_Property__ctor_3_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :806
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseBasicTheme_FuseVisual_IsEnabled_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[12/*Fuse.Visual*/]))->IsEnabled(), void();
}

// public FuseBasicTheme_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) :804
void FuseBasicTheme_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseVisual_IsEnabled_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseVisual_IsEnabled_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :805
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :807
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseBasicTheme_FuseVisual_IsEnabled_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[12/*Fuse.Visual*/]))->IsEnabled(v_);
}

// public FuseBasicTheme_FuseVisual_IsEnabled_Property(Fuse.Visual obj, Uno.UX.Selector name) [instance] :804
void FuseBasicTheme_FuseVisual_IsEnabled_Property::ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseVisual_IsEnabled_Property New(Fuse.Visual obj, Uno.UX.Selector name) [static] :804
FuseBasicTheme_FuseVisual_IsEnabled_Property* FuseBasicTheme_FuseVisual_IsEnabled_Property::New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseVisual_IsEnabled_Property* obj1 = (FuseBasicTheme_FuseVisual_IsEnabled_Property*)uNew(FuseBasicTheme_FuseVisual_IsEnabled_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls/1.0.2/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle170ae5e6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[14/*"uniform mat...*/], ::STRINGS[15/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[21/*"l"*/]));
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[34/*"t"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[14] = uString::Const("uniform mat4 g, b;\n"
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
    ::STRINGS[15] = uString::Const("uniform float e, f;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[22] = uString::Const("uniform mat4 i, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    j = false ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (i * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[23] = uString::Const("uniform vec2 c, d;\n"
        "uniform float e, g, h;\n"
        "uniform vec4 f;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "float k(vec2 n, vec2 o){\n"
        "    vec2 p = abs(n) - o;\n"
        "    return min(max(p.x, p.y), 0.0) + length(max(p, 0.0));\n"
        "}\n"
        "\n"
        "vec2 l(vec2 n, vec2 o){\n"
        "    return mod(n, o) - (0.5 * o);\n"
        "}\n"
        "\n"
        "float m(vec2 n){\n"
        "    vec2 o = d.xy / e;\n"
        "    ivec2 p = ivec2(o);\n"
        "\n"
        "    if (mod(float(p.x), float(2)) == float(0))\n"
        "        ++p.x;\n"
        "\n"
        "    if (mod(float(p.y), float(2)) == float(0))\n"
        "        ++p.y;\n"
        "\n"
        "    o = d.xy / vec2(p);\n"
        "    float q = k(l(n, o * float(2)) + vec2(e), vec2(e));\n"
        "    return -floor(q);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), f, clamp(m(j.xy * c), 0.0, 1.0)) * g) * h;\n"
        "}\n"
        "");
    ::STRINGS[24] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[26] = uString::Const("uniform mat4 q, d;\n"
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
    ::STRINGS[27] = uString::Const("uniform vec2 m, l;\n"
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
    ::STRINGS[28] = uString::Const("k");
    ::STRINGS[29] = uString::Const("m");
    ::STRINGS[30] = uString::Const("n");
    ::STRINGS[31] = uString::Const("o");
    ::STRINGS[32] = uString::Const("p");
    ::STRINGS[33] = uString::Const("q");
    ::STRINGS[34] = uString::Const("t");
    ::STRINGS[35] = uString::Const("uniform mat4 c, b;\n"
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
    ::STRINGS[36] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle170ae5e6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("SolidRectangle170ae5e6", 0),
        new uField("SolidRectangle2f148815", 1),
        new uField("SolidRectangle7463714b", 2),
        new uField("SolidRectangled1bbfcb0", 3),
        new uField("Viewportd3ce851b", 4));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle170ae5e6_;
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
    FuseControlsNative_bundle::Blitter65ac1d08_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[37/*"uniform vec...*/], ::STRINGS[38/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[5/*"b"*/], ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[18/*"h"*/]));
    FuseControlsNative_bundle::iOSBlitter0a63f4bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform vec...*/], ::STRINGS[3/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[8/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[37] = uString::Const("uniform vec2 d, c;\n"
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
    ::STRINGS[38] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b ? texture2D(h, f) : texture2D(h, g);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[39] = uString::Const("uniform vec2 c, b;\n"
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
    ::STRINGS[3] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitter65ac1d08_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Blitter65ac1d08", 0),
        new uField("iOSBlitter0a63f4bb", 1));
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
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Get(Uno.UX.PropertyObject)");
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
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
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
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Get(Uno.UX.PropertyObject)");
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
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
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
    FuseControlsPanels_bundle::FreezeDrawable1e2faccf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[41/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[8/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[40] = uString::Const("uniform mat4 d, b;\n"
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
    ::STRINGS[41] = uString::Const("uniform float c;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[8] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPanels_bundle::FreezeDrawable1e2faccf_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("FreezeDrawable1e2faccf", 0));
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
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Text");
    ::TYPES[1] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
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
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->Text(), void();
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
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :758
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
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
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[42] = uString::Const("Value");
    ::TYPES[15] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
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
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "GetAsObject(Uno.UX.PropertyObject)");
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
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
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
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[18/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[43] = uString::Const("uniform mat4 f, b;\n"
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
    ::STRINGS[44] = uString::Const("uniform vec4 e;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[18] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ImageElementDraw7660063a", 0));
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

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :802
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsShape_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :801
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :803
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(v);
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :800
FuseControlsPrimitives_FuseControlsShape_Fill_Property* FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsShape_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsShape_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :780
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(), void();
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
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(v_);
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
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->Value(), void();
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
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
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
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
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

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :852
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :851
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :853
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :854
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :850
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :805
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
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

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :810
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :809
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :811
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Brush(v);
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :808
FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Brush_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :829
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
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

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :834
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :833
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :835
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :836
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :832
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :813
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
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

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :818
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :817
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :819
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :816
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :821
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
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

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :826
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :825
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :827
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Size(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :824
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/1.0.2/.uno/ux11/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :788
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
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
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Opacity(), void();
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
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
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

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :843
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :842
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :844
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :845
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :841
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
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
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[45] = uString::Const("KeepFocusInView");
    ::TYPES[17] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
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
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "GetAsObject(Uno.UX.PropertyObject)");
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
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
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
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
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
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
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
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform flo...*/], ::STRINGS[47/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[33/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform mat...*/], ::STRINGS[49/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[18/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[46] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
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
    ::STRINGS[47] = uString::Const("uniform sampler2D q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[28] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[29] = uString::Const("m");
    ::STRINGS[30] = uString::Const("n");
    ::STRINGS[31] = uString::Const("o");
    ::STRINGS[33] = uString::Const("q");
    ::STRINGS[48] = uString::Const("uniform mat4 f, c;\n"
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
    ::STRINGS[49] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangleda875692", 0),
        new uField("VideoDrawElement5c829975", 1));
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
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[50/*"attribute v...*/], ::STRINGS[51/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[50] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    h = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform float e[b], f;\n"
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
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawable479fd075", 0));
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
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform vec...*/], ::STRINGS[53/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[55/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/]));
    FuseDrawingPrimitives_bundle::Circle054832c3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle0962c76a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[62/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circle0962c76b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform vec...*/], ::STRINGS[64/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[68/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circle0962c76c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform vec...*/], ::STRINGS[69/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[68/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform vec...*/], ::STRINGS[70/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[60/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[76/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[62/*"x"*/], ::STRINGS[77/*"y"*/], ::STRINGS[78/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[79/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/]));
    FuseDrawingPrimitives_bundle::Circle62a0be28_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform vec...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[65/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle832ca9c8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[61/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle832ca9d6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[32/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle832ca9d7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[88/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[61/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform vec...*/], ::STRINGS[90/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[91/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlea7efa75e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform vec...*/], ::STRINGS[94/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circled0e59707_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform vec...*/], ::STRINGS[96/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[97/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[65/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlee8ef393e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform vec...*/], ::STRINGS[99/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlee8ef393f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform vec...*/], ::STRINGS[100/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform vec...*/], ::STRINGS[101/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[62/*"x"*/], ::STRINGS[77/*"y"*/], ::STRINGS[78/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circlef28d6b18_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform vec...*/], ::STRINGS[103/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circlef28d6b19_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform vec...*/], ::STRINGS[105/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef28d6b1a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform vec...*/], ::STRINGS[106/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef7c3f433_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform vec...*/], ::STRINGS[108/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/]));
    FuseDrawingPrimitives_bundle::Circlef7c3f434_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[109/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlef7c3f435_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[110/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[112/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[113/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle26472755_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[115/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle538c6e5c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[116/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle565a6cfd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[117/*"uniform flo...*/], ::STRINGS[118/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[34/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c9a26db_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform flo...*/], ::STRINGS[120/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[119/*"uniform flo...*/], ::STRINGS[121/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[66/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[124/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[66/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform flo...*/], ::STRINGS[126/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform flo...*/], ::STRINGS[127/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform flo...*/], ::STRINGS[129/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[62/*"x"*/], ::STRINGS[130/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform flo...*/], ::STRINGS[131/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[62/*"x"*/], ::STRINGS[130/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform flo...*/], ::STRINGS[133/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform flo...*/], ::STRINGS[134/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform flo...*/], ::STRINGS[136/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb3b2f694_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform flo...*/], ::STRINGS[137/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[117/*"uniform flo...*/], ::STRINGS[138/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[34/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangled46c7a4a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform flo...*/], ::STRINGS[140/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangleec761c79_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform flo...*/], ::STRINGS[141/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectanglef633e2b5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[142/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[33/*"q"*/], ::STRINGS[60/*"r"*/], ::STRINGS[61/*"s"*/], ::STRINGS[34/*"t"*/], ::STRINGS[65/*"u"*/], ::STRINGS[66/*"v"*/], ::STRINGS[113/*"B"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[52] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[53] = uString::Const("uniform float e, f, g, h, i, k;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[28] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[29] = uString::Const("m");
    ::STRINGS[30] = uString::Const("n");
    ::STRINGS[54] = uString::Const("uniform vec2 b, c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    r = x / e;\n"
        "    s = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform vec2 f, e, o, p, q;\n"
        "uniform float g, i, j, k, l, m, n;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "float t(vec2 w, vec2 x){\n"
        "    vec2 y = abs(w) - x;\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\n"
        "}\n"
        "\n"
        "vec2 u(vec2 w, vec2 x){\n"
        "    return mod(w, x) - (0.5 * x);\n"
        "}\n"
        "\n"
        "float v(vec2 w){\n"
        "    vec2 x = e.xy / g;\n"
        "    ivec2 y = ivec2(x);\n"
        "\n"
        "    if (mod(float(y.x), float(2)) == float(0))\n"
        "        ++y.x;\n"
        "\n"
        "    if (mod(float(y.y), float(2)) == float(0))\n"
        "        ++y.y;\n"
        "\n"
        "    x = e.xy / vec2(y);\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(r.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs((length(s) - i) - j) - k) * l) * m), float(0), float(1)) * clamp(0.5 - ((min(dot(s, o), min(dot(s, p), dot(s, q))) * l) * m), float(0), float(1)))) * n;\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("o");
    ::STRINGS[32] = uString::Const("p");
    ::STRINGS[33] = uString::Const("q");
    ::STRINGS[56] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[57] = uString::Const("uniform float e, f, g, h, i;\n"
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
    ::STRINGS[58] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
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
    ::STRINGS[59] = uString::Const("uniform vec2 o, n;\n"
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
    ::STRINGS[60] = uString::Const("r");
    ::STRINGS[61] = uString::Const("s");
    ::STRINGS[34] = uString::Const("t");
    ::STRINGS[62] = uString::Const("x");
    ::STRINGS[63] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
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
    ::STRINGS[64] = uString::Const("uniform vec2 o, n, u, v, w;\n"
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
    ::STRINGS[65] = uString::Const("u");
    ::STRINGS[66] = uString::Const("v");
    ::STRINGS[67] = uString::Const("w");
    ::STRINGS[68] = uString::Const("A");
    ::STRINGS[69] = uString::Const("uniform vec2 o, n, u, v, w;\n"
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
    ::STRINGS[70] = uString::Const("uniform float e, f, g, h, i, k;\n"
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
    ::STRINGS[71] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[72] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform vec2 b, c, e, f, n;\n"
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
    ::STRINGS[74] = uString::Const("uniform float g, h, i, j, k, l;\n"
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
    ::STRINGS[75] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
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
    ::STRINGS[76] = uString::Const("uniform vec2 o, n, w, x, y;\n"
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
    ::STRINGS[77] = uString::Const("y");
    ::STRINGS[78] = uString::Const("C");
    ::STRINGS[79] = uString::Const("uniform vec2 f, e, o, p, q;\n"
        "uniform float g, i, j, k, l, m, n;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "float t(vec2 w, vec2 x){\n"
        "    vec2 y = abs(w) - x;\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\n"
        "}\n"
        "\n"
        "vec2 u(vec2 w, vec2 x){\n"
        "    return mod(w, x) - (0.5 * x);\n"
        "}\n"
        "\n"
        "float v(vec2 w){\n"
        "    vec2 x = e.xy / g;\n"
        "    ivec2 y = ivec2(x);\n"
        "\n"
        "    if (mod(float(y.x), float(2)) == float(0))\n"
        "        ++y.x;\n"
        "\n"
        "    if (mod(float(y.y), float(2)) == float(0))\n"
        "        ++y.y;\n"
        "\n"
        "    x = e.xy / vec2(y);\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(r.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs((length(s) - i) - j) - k) * l) * m), float(0), float(1)) * clamp(0.5 - ((max(dot(s, o), max(dot(s, p), dot(s, q))) * l) * m), float(0), float(1)))) * n;\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[81] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(k) - e) - f) - g) * h) * i), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform vec2 b, c, e, f, n;\n"
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
    ::STRINGS[83] = uString::Const("uniform float g, h, i, j, k, l;\n"
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
    ::STRINGS[84] = uString::Const("uniform vec2 b, c, e, f, l;\n"
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
    ::STRINGS[85] = uString::Const("uniform float g, h, i, j;\n"
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
    ::STRINGS[86] = uString::Const("uniform vec2 b, c, e, f, l;\n"
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
    ::STRINGS[87] = uString::Const("uniform float g, h, i, j;\n"
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
    ::STRINGS[88] = uString::Const("uniform float g, h, i, j;\n"
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
    ::STRINGS[89] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
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
    ::STRINGS[90] = uString::Const("uniform vec2 o, n;\n"
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
    ::STRINGS[91] = uString::Const("z");
    ::STRINGS[92] = uString::Const("uniform float e, f, g, h, i;\n"
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
    ::STRINGS[93] = uString::Const("uniform vec2 b, c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * b;\n"
        "    vec2 u = t + c;\n"
        "    o = u / e;\n"
        "    p = t;\n"
        "    gl_Position = d * vec4(u, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform vec2 f, e;\n"
        "uniform float g, i, j, k, l, m, n;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 o, p;\n"
        "\n"
        "float q(vec2 t, vec2 u){\n"
        "    vec2 v = abs(t) - u;\n"
        "    return min(max(v.x, v.y), 0.0) + length(max(v, 0.0));\n"
        "}\n"
        "\n"
        "vec2 r(vec2 t, vec2 u){\n"
        "    return mod(t, u) - (0.5 * u);\n"
        "}\n"
        "\n"
        "float s(vec2 t){\n"
        "    vec2 u = e.xy / g;\n"
        "    ivec2 v = ivec2(u);\n"
        "\n"
        "    if (mod(float(v.x), float(2)) == float(0))\n"
        "        ++v.x;\n"
        "\n"
        "    if (mod(float(v.y), float(2)) == float(0))\n"
        "        ++v.y;\n"
        "\n"
        "    u = e.xy / vec2(v);\n"
        "    float w = q(r(t, u * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(w);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(s(o.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs((length(p) - i) - j) - k) * l) * m), float(0), float(1)) * float(1))) * n;\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform vec2 b, c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    vec2 s = r + c;\n"
        "    m = s / e;\n"
        "    n = r;\n"
        "    gl_Position = d * vec4(s, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform vec2 f, e;\n"
        "uniform float g, i, j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 m, n;\n"
        "\n"
        "float o(vec2 r, vec2 s){\n"
        "    vec2 t = abs(r) - s;\n"
        "    return min(max(t.x, t.y), 0.0) + length(max(t, 0.0));\n"
        "}\n"
        "\n"
        "vec2 p(vec2 r, vec2 s){\n"
        "    return mod(r, s) - (0.5 * s);\n"
        "}\n"
        "\n"
        "float q(vec2 r){\n"
        "    vec2 s = e.xy / g;\n"
        "    ivec2 t = ivec2(s);\n"
        "\n"
        "    if (mod(float(t.x), float(2)) == float(0))\n"
        "        ++t.x;\n"
        "\n"
        "    if (mod(float(t.y), float(2)) == float(0))\n"
        "        ++t.y;\n"
        "\n"
        "    s = e.xy / vec2(t);\n"
        "    float u = o(p(r, s * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(u);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(q(m.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((length(n) - i) * j) * k), float(0), float(1)) * float(1))) * l;\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float g, h, i, j, k, l;\n"
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
    ::STRINGS[98] = uString::Const("uniform vec2 b, c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = v / e;\n"
        "    q = u;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform vec2 f, e, m, n, o;\n"
        "uniform float g, i, j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "float r(vec2 u, vec2 v){\n"
        "    vec2 w = abs(u) - v;\n"
        "    return min(max(w.x, w.y), 0.0) + length(max(w, 0.0));\n"
        "}\n"
        "\n"
        "vec2 s(vec2 u, vec2 v){\n"
        "    return mod(u, v) - (0.5 * v);\n"
        "}\n"
        "\n"
        "float t(vec2 u){\n"
        "    vec2 v = e.xy / g;\n"
        "    ivec2 w = ivec2(v);\n"
        "\n"
        "    if (mod(float(w.x), float(2)) == float(0))\n"
        "        ++w.x;\n"
        "\n"
        "    if (mod(float(w.y), float(2)) == float(0))\n"
        "        ++w.y;\n"
        "\n"
        "    v = e.xy / vec2(w);\n"
        "    float x = r(s(u, v * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(x);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(t(p.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((length(q) - i) * j) * k), float(0), float(1)) * clamp(0.5 - ((min(dot(q, m), min(dot(q, n), dot(q, o))) * j) * k), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform vec2 f, e, m, n, o;\n"
        "uniform float g, i, j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "float r(vec2 u, vec2 v){\n"
        "    vec2 w = abs(u) - v;\n"
        "    return min(max(w.x, w.y), 0.0) + length(max(w, 0.0));\n"
        "}\n"
        "\n"
        "vec2 s(vec2 u, vec2 v){\n"
        "    return mod(u, v) - (0.5 * v);\n"
        "}\n"
        "\n"
        "float t(vec2 u){\n"
        "    vec2 v = e.xy / g;\n"
        "    ivec2 w = ivec2(v);\n"
        "\n"
        "    if (mod(float(w.x), float(2)) == float(0))\n"
        "        ++w.x;\n"
        "\n"
        "    if (mod(float(w.y), float(2)) == float(0))\n"
        "        ++w.y;\n"
        "\n"
        "    v = e.xy / vec2(w);\n"
        "    float x = r(s(u, v * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(x);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(t(p.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((length(q) - i) * j) * k), float(0), float(1)) * clamp(0.5 - ((max(dot(q, m), max(dot(q, n), dot(q, o))) * j) * k), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform vec2 o, n, w, x, y;\n"
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
    ::STRINGS[102] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[103] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1))) * i;\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[105] = uString::Const("uniform float e, f, g, i;\n"
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
    ::STRINGS[106] = uString::Const("uniform float e, f, g, i;\n"
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
    ::STRINGS[107] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[108] = uString::Const("uniform float e, f, g;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(i) - e) * f) * g), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float e, f, g;\n"
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
    ::STRINGS[110] = uString::Const("uniform float e, f, g;\n"
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
    ::STRINGS[111] = uString::Const("uniform float g[d];\n"
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
    ::STRINGS[112] = uString::Const("uniform vec2 r, q;\n"
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
    ::STRINGS[113] = uString::Const("B");
    ::STRINGS[114] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f, h;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = v / h;\n"
        "    q = v;\n"
        "    r = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, l, m, n;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q, r;\n"
        "\n"
        "float s(vec2 v, vec2 w){\n"
        "    vec2 x = abs(v) - w;\n"
        "    return min(max(x.x, x.y), 0.0) + length(max(x, 0.0));\n"
        "}\n"
        "\n"
        "vec2 t(vec2 v, vec2 w){\n"
        "    return mod(v, w) - (0.5 * w);\n"
        "}\n"
        "\n"
        "float u(vec2 v){\n"
        "    vec2 w = h.xy / j;\n"
        "    ivec2 x = ivec2(w);\n"
        "\n"
        "    if (mod(float(x.x), float(2)) == float(0))\n"
        "        ++x.x;\n"
        "\n"
        "    if (mod(float(x.y), float(2)) == float(0))\n"
        "        ++x.y;\n"
        "\n"
        "    w = h.xy / vec2(x);\n"
        "    float y = s(t(v, w * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(y);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float v = clamp(0.5 - (((distance(q, r) - o) * l) * m), float(0), float(1));\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(u(p.xy * i), 0.0, 1.0)) * (((v * v) * v) * ((v * ((v * float(6)) - float(15))) + float(10)))) * n;\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, l, m, n;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q, r;\n"
        "\n"
        "float s(vec2 v, vec2 w){\n"
        "    vec2 x = abs(v) - w;\n"
        "    return min(max(x.x, x.y), 0.0) + length(max(x, 0.0));\n"
        "}\n"
        "\n"
        "vec2 t(vec2 v, vec2 w){\n"
        "    return mod(v, w) - (0.5 * w);\n"
        "}\n"
        "\n"
        "float u(vec2 v){\n"
        "    vec2 w = h.xy / j;\n"
        "    ivec2 x = ivec2(w);\n"
        "\n"
        "    if (mod(float(x.x), float(2)) == float(0))\n"
        "        ++x.x;\n"
        "\n"
        "    if (mod(float(x.y), float(2)) == float(0))\n"
        "        ++x.y;\n"
        "\n"
        "    w = h.xy / vec2(x);\n"
        "    float y = s(t(v, w * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(y);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(u(p.xy * i), 0.0, 1.0)) * clamp(0.5 - (((distance(q, r) - o) * l) * m), float(0), float(1))) * n;\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float e[d], o;\n"
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
    ::STRINGS[118] = uString::Const("uniform float j, k, l;\n"
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
    ::STRINGS[119] = uString::Const("uniform float e[d];\n"
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
    ::STRINGS[120] = uString::Const("uniform float h, i, j, k;\n"
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
    ::STRINGS[121] = uString::Const("uniform float h, i, j, k;\n"
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
    ::STRINGS[122] = uString::Const("uniform float e[d], q;\n"
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
    ::STRINGS[123] = uString::Const("uniform float j, k, l, m, n;\n"
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
    ::STRINGS[124] = uString::Const("uniform float j, k, l, m, n;\n"
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
    ::STRINGS[125] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f, h;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    q = e[int(c)];\n"
        "    r = x / h;\n"
        "    s = x;\n"
        "    t = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, l, m, n, o, p;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "float u(vec2 x, vec2 y){\n"
        "    vec2 z = abs(x) - y;\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\n"
        "}\n"
        "\n"
        "vec2 v(vec2 x, vec2 y){\n"
        "    return mod(x, y) - (0.5 * y);\n"
        "}\n"
        "\n"
        "float w(vec2 x){\n"
        "    vec2 y = h.xy / j;\n"
        "    ivec2 z = ivec2(y);\n"
        "\n"
        "    if (mod(float(z.x), float(2)) == float(0))\n"
        "        ++z.x;\n"
        "\n"
        "    if (mod(float(z.y), float(2)) == float(0))\n"
        "        ++z.y;\n"
        "\n"
        "    y = h.xy / vec2(z);\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(A);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float x = clamp(0.5 - (((abs((distance(s, t) - q) - l) - m) * n) * o), float(0), float(1));\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * p;\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, l, m, n, o, p;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "float u(vec2 x, vec2 y){\n"
        "    vec2 z = abs(x) - y;\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\n"
        "}\n"
        "\n"
        "vec2 v(vec2 x, vec2 y){\n"
        "    return mod(x, y) - (0.5 * y);\n"
        "}\n"
        "\n"
        "float w(vec2 x){\n"
        "    vec2 y = h.xy / j;\n"
        "    ivec2 z = ivec2(y);\n"
        "\n"
        "    if (mod(float(z.x), float(2)) == float(0))\n"
        "        ++z.x;\n"
        "\n"
        "    if (mod(float(z.y), float(2)) == float(0))\n"
        "        ++z.y;\n"
        "\n"
        "    y = h.xy / vec2(z);\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(A);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * clamp(0.5 - (((abs((distance(s, t) - q) - l) - m) * n) * o), float(0), float(1))) * p;\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform float g[d];\n"
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
    ::STRINGS[129] = uString::Const("uniform vec2 r, q;\n"
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
    ::STRINGS[130] = uString::Const("D");
    ::STRINGS[131] = uString::Const("uniform vec2 r, q;\n"
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
    ::STRINGS[132] = uString::Const("uniform float e[d];\n"
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
    ::STRINGS[133] = uString::Const("uniform float h, i, j, k, m;\n"
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
    ::STRINGS[134] = uString::Const("uniform float h, i, j, k, m;\n"
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
    ::STRINGS[135] = uString::Const("uniform float e[d];\n"
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
    ::STRINGS[136] = uString::Const("uniform float h, i, k;\n"
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
    ::STRINGS[137] = uString::Const("uniform float h, i, k;\n"
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
    ::STRINGS[138] = uString::Const("uniform float j, k, l;\n"
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
    ::STRINGS[139] = uString::Const("uniform float e[d];\n"
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
    ::STRINGS[140] = uString::Const("uniform float h, i;\n"
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
    ::STRINGS[141] = uString::Const("uniform float h, i;\n"
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
    ::STRINGS[142] = uString::Const("uniform vec2 r, q;\n"
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
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle054832c3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle0962c76a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle0962c76b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle0962c76c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle62a0be28_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle832ca9c8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle832ca9d6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle832ca9d7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlea7efa75e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e59707_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8ef393e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8ef393f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28d6b18_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28d6b19_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28d6b1a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef7c3f433_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef7c3f434_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef7c3f435_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle26472755_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle538c6e5c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle565a6cfd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26db_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb3b2f694_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangled46c7a4a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleec761c79_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglef633e2b5_, uFieldFlagsStatic);
    type->Reflection.SetFields(50,
        new uField("Circle01247f96", 0),
        new uField("Circle038d0b56", 1),
        new uField("Circle054832c3", 2),
        new uField("Circle0962c76a", 3),
        new uField("Circle0962c76b", 4),
        new uField("Circle0962c76c", 5),
        new uField("Circle27c6b7fe", 6),
        new uField("Circle27c6b7ff", 7),
        new uField("Circle4a971b16", 8),
        new uField("Circle4c78c62c", 9),
        new uField("Circle60e596bb", 10),
        new uField("Circle62a0be28", 11),
        new uField("Circle7aaa5f74", 12),
        new uField("Circle832ca9c8", 13),
        new uField("Circle832ca9d6", 14),
        new uField("Circle832ca9d7", 15),
        new uField("Circle91c7af62", 16),
        new uField("Circlea7efa75e", 17),
        new uField("Circlebe3e2220", 18),
        new uField("Circled0e59707", 19),
        new uField("Circled802ead9", 20),
        new uField("Circlee8ef393e", 21),
        new uField("Circlee8ef393f", 22),
        new uField("Circleef203ac7", 23),
        new uField("Circlef28d6b18", 24),
        new uField("Circlef28d6b19", 25),
        new uField("Circlef28d6b1a", 26),
        new uField("Circlef7c3f433", 27),
        new uField("Circlef7c3f434", 28),
        new uField("Circlef7c3f435", 29),
        new uField("Rectangle0e3d84e4", 30),
        new uField("Rectangle26472755", 31),
        new uField("Rectangle538c6e5c", 32),
        new uField("Rectangle565a6cfd", 33),
        new uField("Rectangle7c9a26db", 34),
        new uField("Rectangle7c9a26dc", 35),
        new uField("Rectangle7fa93ce4", 36),
        new uField("Rectanglea858f3bc", 37),
        new uField("Rectanglea858f4fc", 38),
        new uField("Rectanglea858f503", 39),
        new uField("Rectanglea858f53c", 40),
        new uField("Rectanglea858f53f", 41),
        new uField("Rectanglea858f57b", 42),
        new uField("Rectanglea858f57c", 43),
        new uField("Rectangleb0e4f93d", 44),
        new uField("Rectangleb3b2f694", 45),
        new uField("Rectanglec8ee9d37", 46),
        new uField("Rectangled46c7a4a", 47),
        new uField("Rectangleec761c79", 48),
        new uField("Rectanglef633e2b5", 49));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 50;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle054832c3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0962c76a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0962c76b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0962c76c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle62a0be28_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle832ca9c8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle832ca9d6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle832ca9d7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlea7efa75e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e59707_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8ef393e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8ef393f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28d6b18_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28d6b19_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28d6b1a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7c3f433_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7c3f434_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7c3f435_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle26472755_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle538c6e5c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle565a6cfd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c9a26db_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb3b2f694_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangled46c7a4a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleec761c79_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglef633e2b5_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Surface/1.0.2/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingSurface_bundle :0
// {
// static FuseDrawingSurface_bundle() :0
static void FuseDrawingSurface_bundle__cctor__fn(uType* __type)
{
    FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[143/*"attribute v...*/], ::STRINGS[144/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/]));
    FuseDrawingSurface_bundle::Surface541b21c2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/]));
}

static void FuseDrawingSurface_bundle_build(uType* type)
{
    ::STRINGS[143] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    b = vec2(a.x, float(1) - a.y);\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[144] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[35] = uString::Const("uniform mat4 c, b;\n"
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
    ::STRINGS[36] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[16] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingSurface_bundle::Surface541b21c2_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("CoreGraphicsDrawHelpere074f602", 0),
        new uField("Surface541b21c2", 1));
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
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform mat...*/], ::STRINGS[146/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[18/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[147/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[8/*"f"*/]));
    FuseEffects_bundle::Duotone26eb7e3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform mat...*/], ::STRINGS[148/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[18/*"h"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"attribute v...*/], ::STRINGS[150/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[18/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[151/*"attribute v...*/], ::STRINGS[144/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform vec...*/], ::STRINGS[153/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[34/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform vec...*/], ::STRINGS[155/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[29/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[156/*"uniform mat...*/], ::STRINGS[157/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[33/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[158/*"uniform mat...*/], ::STRINGS[159/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[158/*"uniform mat...*/], ::STRINGS[160/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[158/*"uniform mat...*/], ::STRINGS[161/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[145] = uString::Const("uniform mat4 f, b;\n"
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
    ::STRINGS[146] = uString::Const("uniform vec3 e;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[35] = uString::Const("uniform mat4 c, b;\n"
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
    ::STRINGS[36] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[40] = uString::Const("uniform mat4 d, b;\n"
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
    ::STRINGS[147] = uString::Const("uniform float c;\n"
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
    ::STRINGS[148] = uString::Const("uniform vec3 c, d;\n"
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
    ::STRINGS[149] = uString::Const("attribute vec2 a;\n"
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
    ::STRINGS[150] = uString::Const("uniform float e[b];\n"
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
    ::STRINGS[151] = uString::Const("attribute vec2 a;\n"
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
    ::STRINGS[144] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[152] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
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
    ::STRINGS[153] = uString::Const("uniform float b, d, g;\n"
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
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[34] = uString::Const("t");
    ::STRINGS[154] = uString::Const("uniform vec2 c, e, f, g;\n"
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
    ::STRINGS[155] = uString::Const("uniform float b, d;\n"
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
    ::STRINGS[29] = uString::Const("m");
    ::STRINGS[156] = uString::Const("uniform mat4 m, b;\n"
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
    ::STRINGS[157] = uString::Const("uniform float c, d, e, f, k, l;\n"
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
    ::STRINGS[28] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[33] = uString::Const("q");
    ::STRINGS[158] = uString::Const("uniform mat4 e, b;\n"
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
    ::STRINGS[159] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[160] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[161] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
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
    type->Reflection.SetFields(12,
        new uField("Blitter6e650d31", 0),
        new uField("Blur115443aa", 1),
        new uField("Desaturate88bb7f94", 2),
        new uField("Duotone26eb7e3c", 3),
        new uField("EffectHelpers52052d40", 4),
        new uField("EffectHelpers9b892494", 5),
        new uField("EffectHelpersd8c2e3e5", 6),
        new uField("EffectHelperse7e608d1", 7),
        new uField("Halftone3c4c510c", 8),
        new uField("Mask0da73af7", 9),
        new uField("Mask6affc65c", 10),
        new uField("Maskb04eaf92", 11));
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
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[162/*"uniform vec...*/], ::STRINGS[163/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[17/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[164/*"uniform mat...*/], ::STRINGS[165/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[8/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[166/*"uniform vec...*/], ::STRINGS[167/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[16/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[168/*"uniform flo...*/], ::STRINGS[169/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[17/*"g"*/], ::STRINGS[18/*"h"*/], ::STRINGS[19/*"i"*/], ::STRINGS[20/*"j"*/], ::STRINGS[28/*"k"*/], ::STRINGS[21/*"l"*/], ::STRINGS[29/*"m"*/], ::STRINGS[30/*"n"*/], ::STRINGS[31/*"o"*/], ::STRINGS[32/*"p"*/], ::STRINGS[60/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[162] = uString::Const("uniform vec2 b;\n"
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
    ::STRINGS[163] = uString::Const("uniform float e;\n"
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
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[17] = uString::Const("g");
    ::STRINGS[164] = uString::Const("uniform mat4 c;\n"
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
    ::STRINGS[165] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[24] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[166] = uString::Const("uniform vec2 b, c;\n"
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
    ::STRINGS[167] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, fract(d));\n"
        "}\n"
        "");
    ::STRINGS[168] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
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
    ::STRINGS[169] = uString::Const("uniform vec4 p;\n"
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
    ::STRINGS[18] = uString::Const("h");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[20] = uString::Const("j");
    ::STRINGS[28] = uString::Const("k");
    ::STRINGS[21] = uString::Const("l");
    ::STRINGS[29] = uString::Const("m");
    ::STRINGS[30] = uString::Const("n");
    ::STRINGS[31] = uString::Const("o");
    ::STRINGS[32] = uString::Const("p");
    ::STRINGS[60] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementDraw1f583284_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("CacheHelper230c69b7", 0),
        new uField("ElementBatchd43eeb4e", 1),
        new uField("ElementDraw1f583284", 2),
        new uField("RepeatBaker447c61dc", 3),
        new uField("Scale9Rectangle720ad3ad", 4));
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
    FuseNodes_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[170/*"uniform vec...*/], ::STRINGS[171/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[170] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[171] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseNodes_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("DrawHelpers4c5c39ae", 0));
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
    FuseReactiveJavaScript_bundle::Diagnostics12479ee0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[172/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[173/*"diagnostics...*/]);
    FuseReactiveJavaScript_bundle::es6promisemin9f9c9883_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[172/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[174/*"es6-promise...*/]);
    FuseReactiveJavaScript_bundle::Observablec90d42c3_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[172/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[175/*"observable-...*/]);
    FuseReactiveJavaScript_bundle::setTimeout4c29a9bb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[172/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[176/*"settimeout-...*/]);
}

static void FuseReactiveJavaScript_bundle_build(uType* type)
{
    ::STRINGS[172] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[173] = uString::Const("diagnostics-4c71cb84.js");
    ::STRINGS[174] = uString::Const("es6-promise.min-a3069df9.js");
    ::STRINGS[175] = uString::Const("observable-66183501.js");
    ::STRINGS[176] = uString::Const("settimeout-cb0e3491.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Diagnostics12479ee0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::es6promisemin9f9c9883_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Observablec90d42c3_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::setTimeout4c29a9bb_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Diagnostics12479ee0", 0),
        new uField("es6promisemin9f9c9883", 1),
        new uField("Observablec90d42c3", 2),
        new uField("setTimeout4c29a9bb", 3));
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

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.Text/1.0.2/.uno/package
// ------------------------------------------------------------------------------------------

// public static generated class FuseText_bundle :0
// {
// static FuseText_bundle() :0
static void FuseText_bundle__cctor__fn(uType* __type)
{
    FuseText_bundle::Renderer0b7f7722_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[177/*"uniform mat...*/], ::STRINGS[178/*"uniform vec...*/], 1, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[17/*"g"*/]));
}

static void FuseText_bundle_build(uType* type)
{
    ::STRINGS[177] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[178] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = c ? (e * vec4(h.x)) : h;\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[17] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseText_bundle::Renderer0b7f7722_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Renderer0b7f7722", 0));
}

uClassType* FuseText_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseText_bundle", options);
    type->fp_build_ = FuseText_bundle_build;
    type->fp_cctor_ = FuseText_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseText_bundle::Renderer0b7f7722_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header :332
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() :332
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[179/*"Header"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_build(uType* type)
{
    ::STRINGS[179] = uString::Const("Header");
    ::TYPES[19] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() :332
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :338
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Header(), void();
}

// public override sealed Uno.UX.Selector get_Name() :335
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header New() :332
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1();
}

// public override sealed Uno.Type get_PropertyType() :337
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :339
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetHeader(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :340
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() [instance] :332
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header New() [static] :332
OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message :342
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() :342
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[180/*"Message"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_build(uType* type)
{
    ::STRINGS[180] = uString::Const("Message");
    ::TYPES[19] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() :342
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :348
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Message(), void();
}

// public override sealed Uno.UX.Selector get_Name() :345
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message New() :342
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1();
}

// public override sealed Uno.Type get_PropertyType() :347
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :349
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetMessage(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :350
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() [instance] :342
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message New() [static] :342
OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body :362
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() :362
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[181/*"Body"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_build(uType* type)
{
    ::STRINGS[181] = uString::Const("Body");
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() :362
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :368
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Body(), void();
}

// public override sealed Uno.UX.Selector get_Name() :365
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body New() :362
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1();
}

// public override sealed Uno.Type get_PropertyType() :367
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :369
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetBody(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :370
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() [instance] :362
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body New() [static] :362
OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details :372
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() :372
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[182/*"Details"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_build(uType* type)
{
    ::STRINGS[182] = uString::Const("Details");
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() :372
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :378
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Details(), void();
}

// public override sealed Uno.UX.Selector get_Name() :375
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details New() :372
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1();
}

// public override sealed Uno.Type get_PropertyType() :377
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :379
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetDetails(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :380
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() [instance] :372
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details New() [static] :372
OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header :352
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() :352
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[179/*"Header"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_build(uType* type)
{
    ::STRINGS[179] = uString::Const("Header");
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() :352
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :358
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Header(), void();
}

// public override sealed Uno.UX.Selector get_Name() :355
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header New() :352
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1();
}

// public override sealed Uno.Type get_PropertyType() :357
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :359
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetHeader(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :360
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() [instance] :352
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header New() [static] :352
OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/package
// ------------------------------------------------------------------------------

// public static generated class OutracksSimulatorClientUno_bundle :0
// {
// static OutracksSimulatorClientUno_bundle() :0
static void OutracksSimulatorClientUno_bundle__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_bundle::fight90e57290_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[183/*"Outracks.Si...*/]))->GetFile(::STRINGS[184/*"fight-15374...*/]);
}

static void OutracksSimulatorClientUno_bundle_build(uType* type)
{
    ::STRINGS[183] = uString::Const("Outracks.Simulator.Client.Uno");
    ::STRINGS[184] = uString::Const("fight-1537455b.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_bundle::fight90e57290_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fight90e57290", 0));
}

uClassType* OutracksSimulatorClientUno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OutracksSimulatorClientUno_bundle", options);
    type->fp_build_ = OutracksSimulatorClientUno_bundle_build;
    type->fp_cctor_ = OutracksSimulatorClientUno_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> OutracksSimulatorClientUno_bundle::fight90e57290_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property :391
// {
static void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :394
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :396
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get1_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :394
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :395
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :397
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set1_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :398
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :394
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :394
OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property*)uNew(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property :382
// {
static void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(::g::OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :385
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :387
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get1_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :385
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :386
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :388
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set1_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :389
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :385
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :385
OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* obj1 = (OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property*)uNew(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property :400
// {
static void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Triggers::WhileString_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[21/*Fuse.Triggers.WhileString*/], offsetof(::g::OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Set1_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :403
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :405
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Get1_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property", "Get(Uno.UX.PropertyObject)");
    uString* ret2;
    return *__retval = (::g::Fuse::Triggers::WhileValue__get_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[21/*Fuse.Triggers.WhileString*/])), &ret2), ret2), void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :403
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :404
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :406
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property__Set1_fn(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[21/*Fuse.Triggers.WhileString*/])), v);
}

// public OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [instance] :403
void OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property::ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [static] :403
OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property::New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property*)uNew(OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property :408
// {
static void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property_build(uType* type)
{
    ::TYPES[19] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) :411
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :413
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Header(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property New(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) :411
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :412
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :414
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetHeader(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :415
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) [instance] :411
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property::ctor_3(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property New(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) [static] :411
OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property::New1(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property :417
// {
static void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property_build(uType* type)
{
    ::TYPES[19] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) :420
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :422
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Message(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property New(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) :420
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :421
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :423
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[19/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetMessage(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :424
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) [instance] :420
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property::ctor_3(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property New(Outracks.Simulator.Client.Dialogs.LoadingScreen obj, Uno.UX.Selector name) [static] :420
OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property::New1(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property :435
// {
static void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property_build(uType* type)
{
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :438
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :440
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Body(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :438
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :439
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :441
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetBody(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :442
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [instance] :438
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property::ctor_3(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [static] :438
OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property::New1(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property :444
// {
static void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property_build(uType* type)
{
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :447
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :449
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Details(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :447
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :448
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :450
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetDetails(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :451
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [instance] :447
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property::ctor_3(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [static] :447
OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property::New1(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property :426
// {
static void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property_build(uType* type)
{
    ::TYPES[20] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :429
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :431
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Header(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) :429
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__New1_fn(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :430
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :432
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[20/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetHeader(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :433
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [instance] :429
void OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property::ctor_3(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property New(Outracks.Simulator.Client.Dialogs.ModalDialog obj, Uno.UX.Selector name) [static] :429
OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property::New1(::g::Outracks::Simulator::Client::Dialogs::ModalDialog* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/.uno/package
// -----------------------------------------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShaderc4d110ba_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[185/*"uniform mat...*/], ::STRINGS[186/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[16/*"e"*/], ::STRINGS[8/*"f"*/], ::STRINGS[19/*"i"*/]));
    UnoCore_bundle::SpriteFontShader901b6a86_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[187/*"uniform mat...*/], ::STRINGS[188/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[7/*"d"*/], ::STRINGS[17/*"g"*/]));
}

static void UnoCore_bundle_build(uType* type)
{
    ::STRINGS[185] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[186] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("d");
    ::STRINGS[16] = uString::Const("e");
    ::STRINGS[8] = uString::Const("f");
    ::STRINGS[19] = uString::Const("i");
    ::STRINGS[187] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[188] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShaderc4d110ba_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShader901b6a86_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShaderc4d110ba", 0),
        new uField("SpriteFontShader901b6a86", 1));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_build_ = UnoCore_bundle_build;
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShaderc4d110ba_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShader901b6a86_;
// }

} // ::g
