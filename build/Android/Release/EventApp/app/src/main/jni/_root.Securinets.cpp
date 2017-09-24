// This file was generated based on '.uno/ux11/Securinets.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BodyText.h>
#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property.h>
#include <_root.EventApp_FuseElementsElement_Opacity_Property.h>
#include <_root.EventApp_FuseiOSStatusBarConfig_Style_Property.h>
#include <_root.Securinets.h>
#include <_root.TitleText.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Placeholder.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[22];
static uType* TYPES[10];

namespace g{

// public partial sealed class Securinets :2
// {
// static Securinets() :31
static void Securinets__cctor_4_fn(uType* __type)
{
    Securinets::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"statusBarCo...*/], ::STRINGS[2/*"headerPanel"*/], ::STRINGS[3/*"overBackgro...*/], ::STRINGS[4/*"facePicture"*/], ::STRINGS[5/*"textPanel"*/], ::STRINGS[6/*"topText"*/], ::STRINGS[7/*"bottomText"*/], ::STRINGS[8/*"backgroundP...*/], ::STRINGS[9/*"underBackgr...*/]);
    Securinets::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"LayoutElement"*/]);
    Securinets::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Opacity"*/]);
    Securinets::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Style"*/]);
    Securinets::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"statusBarCo...*/]);
    Securinets::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"headerPanel"*/]);
    Securinets::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"overBackgro...*/]);
    Securinets::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"facePicture"*/]);
    Securinets::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"textPanel"*/]);
    Securinets::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"topText"*/]);
    Securinets::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"bottomText"*/]);
    Securinets::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"backgroundP...*/]);
    Securinets::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"underBackgr...*/]);
}

static void Securinets_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("statusBarConfig");
    ::STRINGS[2] = uString::Const("headerPanel");
    ::STRINGS[3] = uString::Const("overBackgroundLayout");
    ::STRINGS[4] = uString::Const("facePicture");
    ::STRINGS[5] = uString::Const("textPanel");
    ::STRINGS[6] = uString::Const("topText");
    ::STRINGS[7] = uString::Const("bottomText");
    ::STRINGS[8] = uString::Const("backgroundPicture");
    ::STRINGS[9] = uString::Const("underBackgroundLayout");
    ::STRINGS[10] = uString::Const("LayoutElement");
    ::STRINGS[11] = uString::Const("Opacity");
    ::STRINGS[12] = uString::Const("Style");
    ::STRINGS[13] = uString::Const("goToHome");
    ::STRINGS[14] = uString::Const("Securinets.ux");
    ::STRINGS[15] = uString::Const("Back");
    ::STRINGS[16] = uString::Const("SECURINETS");
    ::STRINGS[17] = uString::Const("Think Security");
    ::STRINGS[18] = uString::Const("SecuriNets est le 1er club de s\303\251curit\303\251 informatique en Tunisie");
    ::STRINGS[19] = uString::Const("Il a \303\251t\303\251 fond\303\251 en 2004 \303\240 l\342\200\231INSAT (Institut National des Sciences Appliqu\303\251es et de Technologie) par quatre \303\251tudiants de ce m\303\252me \303\251tablissement Et depuis, tous les mercredi, la SecuriHebdo (R\303\251union hebdomadaire organis\303\251 par SecuriNets) est la destination d\342\200\231une centaine de jeunes \303\251tudiants passionn\303\251s par la s\303\251curit\303\251 informatique venant non seulement de l\342\200\231INSAT mais aussi des autres \303\251coles d\342\200\231ing\303\251nieurs.");
    ::STRINGS[20] = uString::Const("Hormis cette r\303\251union hebdomadaire, nous organisons diff\303\251rentes formations et deux journ\303\251es chaque ann\303\251e SecuriLight et SecuriDay. Nous participons aussi \303\240 de grands \303\251v\303\251nements tels que le SFD et les TNWebDays\342\200\246");
    ::STRINGS[21] = uString::Const("Notre objectif \303\251tait d\303\250s le d\303\251part de r\303\251pandre la culture de la s\303\251curit\303\251 informatique et de sensibiliser les gens \303\240 son importance d\342\200\231o\303\271 notre slogan SecuriNets Think Security!");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Securinets, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Securinets, backgroundPicture), 0,
        ::g::TitleText_typeof(), offsetof(::g::Securinets, bottomText), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Securinets, bottomText_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::Securinets, facePicture), 0,
        ::g::Fuse::Controls::MultiLayoutPanel_typeof(), offsetof(::g::Securinets, headerPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::Securinets, headerPanel_LayoutElement_inst), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::Securinets, overBackgroundLayout), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Securinets, router), 0,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::Securinets, statusBarConfig), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL), offsetof(::g::Securinets, statusBarConfig_Style_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Securinets, temp_eb9), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Securinets, textPanel), 0,
        ::g::TitleText_typeof(), offsetof(::g::Securinets, topText), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::Securinets, underBackgroundLayout), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Securinets::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Securinets::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Securinets_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Securinets);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Securinets", options);
    type->fp_build_ = Securinets_build;
    type->fp_cctor_ = Securinets__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Securinets(Fuse.Navigation.Router router) :35
void Securinets__ctor_8_fn(Securinets* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :41
void Securinets__InitializeUX_fn(Securinets* __this)
{
    __this->InitializeUX();
}

// public Securinets New(Fuse.Navigation.Router router) :35
void Securinets__New5_fn(::g::Fuse::Navigation::Router* router1, Securinets** __retval)
{
    *__retval = Securinets::New5(router1);
}

uSStrong<uArray*> Securinets::__g_static_nametable1_;
::g::Uno::UX::Selector Securinets::__selector0_;
::g::Uno::UX::Selector Securinets::__selector1_;
::g::Uno::UX::Selector Securinets::__selector10_;
::g::Uno::UX::Selector Securinets::__selector11_;
::g::Uno::UX::Selector Securinets::__selector2_;
::g::Uno::UX::Selector Securinets::__selector3_;
::g::Uno::UX::Selector Securinets::__selector4_;
::g::Uno::UX::Selector Securinets::__selector5_;
::g::Uno::UX::Selector Securinets::__selector6_;
::g::Uno::UX::Selector Securinets::__selector7_;
::g::Uno::UX::Selector Securinets::__selector8_;
::g::Uno::UX::Selector Securinets::__selector9_;

// public Securinets(Fuse.Navigation.Router router) [instance] :35
void Securinets::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :41
void Securinets::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Securinets::__g_static_nametable1());
    headerPanel = ::g::Fuse::Controls::MultiLayoutPanel::New4();
    headerPanel_LayoutElement_inst = ::g::EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(headerPanel, Securinets::__selector0());
    bottomText = ::g::TitleText::New4();
    bottomText_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(bottomText, Securinets::__selector1());
    statusBarConfig = ::g::Fuse::iOS::StatusBarConfig::New2();
    statusBarConfig_Style_inst = ::g::EventApp_FuseiOSStatusBarConfig_Style_Property::New1(statusBarConfig, Securinets::__selector2());
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Button* temp1 = ::g::Fuse::Controls::Button::New5();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[13/*"goToHome"*/]);
    ::g::Fuse::Controls::Panel* temp2 = ::g::Fuse::Controls::Panel::New3();
    overBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    facePicture = ::g::Fuse::Controls::Image::New3();
    textPanel = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New3();
    topText = ::g::TitleText::New4();
    backgroundPicture = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    underBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    ::g::Fuse::Controls::ScrollView* temp5 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Triggers::ScrollingAnimation* temp6 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp9 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp11 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp13 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp15 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp16 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], bottomText_Opacity_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp20 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Platform.StatusBarStyle>*/], statusBarConfig_Style_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp22 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp23 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp24 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::BodyText* temp26 = ::g::BodyText::New4();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::BodyText* temp28 = ::g::BodyText::New4();
    ::g::BodyText* temp29 = ::g::BodyText::New4();
    ::g::BodyText* temp30 = ::g::BodyText::New4();
    temp->LineNumber(3);
    temp->FileName(::STRINGS[14/*"Securinets.ux"*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::MainView61aa31a6()));
    temp1->Text(::STRINGS[15/*"Back"*/]);
    temp1->Alignment(1);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    uPtr(statusBarConfig)->Style(0);
    uPtr(statusBarConfig)->Name(Securinets::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), headerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    uPtr(headerPanel)->HitTestMode(0);
    uPtr(headerPanel)->Height(::g::Uno::UX::Size__New1(260.0f, 1));
    uPtr(headerPanel)->Alignment(4);
    uPtr(headerPanel)->Name(Securinets::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), overBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), textPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), backgroundPicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), underBackgroundLayout);
    uPtr(overBackgroundLayout)->Name(Securinets::__selector5());
    uPtr(overBackgroundLayout)->PlaceholderContent(facePicture);
    uPtr(facePicture)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Alignment(14);
    uPtr(facePicture)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(75.0f, 1)));
    uPtr(facePicture)->Name(Securinets::__selector6());
    uPtr(facePicture)->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::securinets84692f44()));
    uPtr(textPanel)->Alignment(10);
    uPtr(textPanel)->Name(Securinets::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), topText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomText);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    uPtr(topText)->Value(::STRINGS[16/*"SECURINETS"*/]);
    uPtr(topText)->FontSize(35.0f);
    uPtr(topText)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(topText)->Name(Securinets::__selector8());
    uPtr(bottomText)->Value(::STRINGS[17/*"Think Secur...*/]);
    uPtr(bottomText)->FontSize(14.0f);
    uPtr(bottomText)->Name(Securinets::__selector9());
    uPtr(backgroundPicture)->Alignment(4);
    uPtr(backgroundPicture)->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(0.0f, 4)));
    uPtr(backgroundPicture)->Name(Securinets::__selector10());
    uPtr(backgroundPicture)->Background(::g::Fuse::Drawing::Brushes::Black());
    uPtr(backgroundPicture)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::Anchor());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backgroundPicture)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->StretchMode(6);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::background076fc905()));
    temp4->Background(::g::Fuse::Drawing::Brushes::Black());
    uPtr(underBackgroundLayout)->Name(Securinets::__selector11());
    uPtr(underBackgroundLayout)->Target(facePicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp6->From(0.0f);
    temp6->To(150.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp7->Factor(0.6f);
    temp7->Target(facePicture);
    temp7->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp8->Y(-0.8f);
    temp8->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp8->Target(facePicture);
    temp8->Easing(::g::Fuse::Animations::Easing::QuadraticIn());
    temp9->From(125.0f);
    temp9->To(0.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, overBackgroundLayout);
    temp11->From(125.0f);
    temp11->To(170.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, underBackgroundLayout);
    temp13->From(150.0f);
    temp13->To(1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    temp14->Y(-850.0f);
    temp14->Target(facePicture);
    temp14->Easing(::g::Fuse::Animations::Easing::Linear());
    temp15->From(0.0f);
    temp15->To(260.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    temp16->Y(-0.7f);
    temp16->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp16->Target(backgroundPicture);
    temp16->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp17->Y(-0.35f);
    temp17->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp17->Target(textPanel);
    temp17->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp18->Y(-0.3f);
    temp18->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp18->Target(bottomText);
    temp18->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef(0.0f));
    temp19->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp20->From(50.0f);
    temp20->To(250.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef<int>(1));
    temp22->From(0.0f);
    temp22->To(-1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    temp23->Factor(4.0f);
    temp23->Target(backgroundPicture);
    temp24->Y(800.0f);
    temp24->Target(facePicture);
    temp25->Padding(::g::Uno::Float4__New2(0.0f, 370.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp26->Value(::STRINGS[18/*"SecuriNets ...*/]);
    temp26->FontSize(20.0f);
    temp26->TextAlignment(1);
    temp26->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 70.0f, 40.0f));
    temp27->Color(::g::Uno::Float4__New2(0.8823529f, 0.8823529f, 0.8823529f, 1.0f));
    temp27->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp28->Value(::STRINGS[19/*"Il a été fo...*/]);
    temp28->FontSize(16.0f);
    temp28->Margin(::g::Uno::Float4__New2(50.0f, 40.0f, 50.0f, 0.0f));
    temp29->Value(::STRINGS[20/*"Hormis cett...*/]);
    temp29->FontSize(16.0f);
    temp29->Margin(::g::Uno::Float4__New2(50.0f, 20.0f, 50.0f, 0.0f));
    temp30->Value(::STRINGS[21/*"Notre objec...*/]);
    temp30->FontSize(16.0f);
    temp30->Margin(::g::Uno::Float4__New2(50.0f, 20.0f, 50.0f, 50.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), headerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), overBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), facePicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), textPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), backgroundPicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), underBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public Securinets New(Fuse.Navigation.Router router) [static] :35
Securinets* Securinets::New5(::g::Fuse::Navigation::Router* router1)
{
    Securinets* obj1 = (Securinets*)uNew(Securinets_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
