// This file was generated based on '.uno/ux11/ExploreItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_ExploreItem_CardAlignment_Property.h>
#include <_root.EventApp_ExploreItem_Country_Property.h>
#include <_root.EventApp_ExploreItem_ForegroundColor_Property.h>
#include <_root.EventApp_ExploreItem_ImageName_Property.h>
#include <_root.EventApp_ExploreItem_InDetailsMode_Property.h>
#include <_root.EventApp_FuseControlsImage_File_Property.h>
#include <_root.EventApp_FuseControlsShape_Color_Property.h>
#include <_root.EventApp_FuseControlsTextControl_FontSize_Property.h>
#include <_root.EventApp_FuseControlsTextControl_Value_Property.h>
#include <_root.EventApp_FuseElementsElement_Alignment_Property.h>
#include <_root.EventApp_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.EventApp_FuseElementsElement_HitTestMode_Property.h>
#include <_root.EventApp_FuseElementsElement_Opacity_Property.h>
#include <_root.EventApp_FuseReactiveEach_Items_Property.h>
#include <_root.EventApp_FuseTranslation_Y_Property.h>
#include <_root.EventApp_FuseTriggersWhileBool_Value_Property.h>
#include <_root.EventApp_UnoUXBinaryOperator_Left_Property.h>
#include <_root.EventApp_UnoUXBinaryOperator_Right_Property.h>
#include <_root.ExploreItem.h>
#include <_root.ExploreItem.Template.h>
#include <_root.ExploreItem.Template1.h>
#include <_root.ExploreItem.Template2.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.PageIndicator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.UX.LayoutFunction.h>
#include <Fuse.Elements.UX.WidthFunction.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.ReadDataBinding-1.h>
#include <Fuse.Reactive.ReadPropertyBinding.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BinaryOperator.h>
#include <Uno.UX.DivideOperator.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.LogicalAndOperator.h>
#include <Uno.UX.MultiplyOperator.h>
#include <Uno.UX.NotEqualOperator.h>
#include <Uno.UX.Operator.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.Value.h>
static uString* STRINGS[38];
static uType* TYPES[12];

namespace g{

// public partial sealed class ExploreItem :2
// {
// static ExploreItem() :256
static void ExploreItem__cctor_4_fn(uType* __type)
{
    ExploreItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
    ExploreItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Right"*/]);
    ExploreItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Left"*/]);
    ExploreItem::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    ExploreItem::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ImageName"*/]);
    ExploreItem::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Country"*/]);
    ExploreItem::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Color"*/]);
    ExploreItem::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"ForegroundC...*/]);
    ExploreItem::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Alignment"*/]);
    ExploreItem::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"CardAlignment"*/]);
    ExploreItem::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Items"*/]);
    ExploreItem::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"File"*/]);
    ExploreItem::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Element.Lay...*/]);
    ExploreItem::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Opacity"*/]);
    ExploreItem::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Y"*/]);
    ExploreItem::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"HitTestMode"*/]);
    ExploreItem::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"InDetailsMode"*/]);
    ExploreItem::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"placeContai...*/]);
    ExploreItem::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"placeRect"*/]);
    ExploreItem::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"__gen0"*/]);
    ExploreItem::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"__gen4"*/]);
    ExploreItem::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"infoRect"*/]);
    ExploreItem::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"infoRectCon...*/]);
    ExploreItem::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"infoRectCon...*/]);
    ExploreItem::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"imgMaster"*/]);
    ExploreItem::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"img"*/]);
    ExploreItem::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"factsPanel"*/]);
    ExploreItem::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"factsPanelT...*/]);
    ExploreItem::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"factsPageCo...*/]);
    ExploreItem::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"__gen8"*/]);
}

static void ExploreItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::STRINGS[1] = uString::Const("Right");
    ::STRINGS[2] = uString::Const("Left");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("ImageName");
    ::STRINGS[5] = uString::Const("Country");
    ::STRINGS[6] = uString::Const("Color");
    ::STRINGS[7] = uString::Const("ForegroundColor");
    ::STRINGS[8] = uString::Const("Alignment");
    ::STRINGS[9] = uString::Const("CardAlignment");
    ::STRINGS[10] = uString::Const("Items");
    ::STRINGS[11] = uString::Const("File");
    ::STRINGS[12] = uString::Const("Element.LayoutMaster");
    ::STRINGS[13] = uString::Const("Opacity");
    ::STRINGS[14] = uString::Const("Y");
    ::STRINGS[15] = uString::Const("HitTestMode");
    ::STRINGS[16] = uString::Const("InDetailsMode");
    ::STRINGS[17] = uString::Const("placeContainer");
    ::STRINGS[18] = uString::Const("placeRect");
    ::STRINGS[19] = uString::Const("__gen0");
    ::STRINGS[20] = uString::Const("__gen4");
    ::STRINGS[21] = uString::Const("infoRect");
    ::STRINGS[22] = uString::Const("infoRectContent");
    ::STRINGS[23] = uString::Const("infoRectContentTrans");
    ::STRINGS[24] = uString::Const("imgMaster");
    ::STRINGS[25] = uString::Const("img");
    ::STRINGS[26] = uString::Const("factsPanel");
    ::STRINGS[27] = uString::Const("factsPanelTrans");
    ::STRINGS[28] = uString::Const("factsPageControl");
    ::STRINGS[29] = uString::Const("__gen8");
    ::STRINGS[30] = uString::Const("numbers");
    ::STRINGS[31] = uString::Const("image");
    ::STRINGS[32] = uString::Const("facts");
    ::STRINGS[33] = uString::Const("inDetailsMode");
    ::STRINGS[34] = uString::Const("current");
    ::STRINGS[35] = uString::Const("id");
    ::STRINGS[36] = uString::Const("1*,1*");
    ::STRINGS[37] = uString::Const("1*,50");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Reactive::ReadDataBinding_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(100,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::ExploreItem, __gen0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, __gen0_FontSize_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem, __gen0_Value_inst1), 0,
        ::g::Uno::UX::MultiplyOperator_typeof(), offsetof(::g::ExploreItem, __gen1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen1_Right_inst1), 0,
        ::g::Uno::UX::NotEqualOperator_typeof(), offsetof(::g::ExploreItem, __gen10), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen10_Left_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen10_Right_inst1), 0,
        ::g::Uno::UX::DivideOperator_typeof(), offsetof(::g::ExploreItem, __gen2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen2_Left_inst1), 0,
        ::g::Fuse::Elements::UX::WidthFunction_typeof(), offsetof(::g::ExploreItem, __gen3), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::ExploreItem, __gen4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, __gen4_FontSize_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem, __gen4_Value_inst1), 0,
        ::g::Uno::UX::MultiplyOperator_typeof(), offsetof(::g::ExploreItem, __gen5), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen5_Right_inst1), 0,
        ::g::Uno::UX::DivideOperator_typeof(), offsetof(::g::ExploreItem, __gen6), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen6_Left_inst1), 0,
        ::g::Fuse::Elements::UX::WidthFunction_typeof(), offsetof(::g::ExploreItem, __gen7), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::ExploreItem, __gen8), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ExploreItem, __gen8_Value_inst1), 0,
        ::g::Uno::UX::LogicalAndOperator_typeof(), offsetof(::g::ExploreItem, __gen9), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen9_Left_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Value_typeof(), NULL), offsetof(::g::ExploreItem, __gen9_Right_inst1), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::ExploreItem, _field_CardAlignment), 0,
        ::g::Uno::String_typeof(), offsetof(::g::ExploreItem, _field_Country), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::ExploreItem, _field_ForegroundColor), 0,
        ::g::Uno::String_typeof(), offsetof(::g::ExploreItem, _field_ImageName), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::ExploreItem, _field_InDetailsMode), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, detailsFactsPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, detailsImagePanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, detailsInfoPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, detailsPlacesPanel), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::ExploreItem, factsPageControl), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::ExploreItem, factsPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(::g::ExploreItem, factsPanel_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, factsPanel_Opacity_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::ExploreItem, factsPanelTrans), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, factsPanelTrans_Y_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::ExploreItem, img), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::ExploreItem, img_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::ExploreItem, img_File_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, imgMaster), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, infoRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::ExploreItem, infoRect_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, infoRect_Opacity_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::ExploreItem, infoRectContent), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, infoRectContent_Opacity_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::ExploreItem, infoRectContentTrans), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, infoRectContentTrans_Y_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, placeContainer), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::ExploreItem, placeContainer_Alignment_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ExploreItem, placeRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::ExploreItem, placeRect_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ExploreItem, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::ExploreItem, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::ExploreItem, temp2_Alignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ExploreItem, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::ExploreItem, temp4_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::ExploreItem, this_CardAlignment_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem, this_Country_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ExploreItem, this_ForegroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(::g::ExploreItem, this_HitTestMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ExploreItem, this_ImageName_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ExploreItem, this_InDetailsMode_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::ExploreItem, this_Opacity_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ExploreItem::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* ExploreItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 196;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(ExploreItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("ExploreItem", options);
    type->fp_build_ = ExploreItem_build;
    type->fp_cctor_ = ExploreItem__cctor_4_fn;
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

// public ExploreItem(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) :260
void ExploreItem__ctor_7_fn(ExploreItem* __this, ::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    __this->ctor_7(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
}

// public Fuse.Elements.Alignment get_CardAlignment() :68
void ExploreItem__get_CardAlignment_fn(ExploreItem* __this, int* __retval)
{
    *__retval = __this->CardAlignment();
}

// public void set_CardAlignment(Fuse.Elements.Alignment value) :69
void ExploreItem__set_CardAlignment_fn(ExploreItem* __this, int* value)
{
    __this->CardAlignment(*value);
}

// public string get_Country() :38
void ExploreItem__get_Country_fn(ExploreItem* __this, uString** __retval)
{
    *__retval = __this->Country();
}

// public void set_Country(string value) :39
void ExploreItem__set_Country_fn(ExploreItem* __this, uString* value)
{
    __this->Country(value);
}

// public float4 get_ForegroundColor() :53
void ExploreItem__get_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ForegroundColor();
}

// public void set_ForegroundColor(float4 value) :54
void ExploreItem__set_ForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value)
{
    __this->ForegroundColor(*value);
}

// public string get_ImageName() :23
void ExploreItem__get_ImageName_fn(ExploreItem* __this, uString** __retval)
{
    *__retval = __this->ImageName();
}

// public void set_ImageName(string value) :24
void ExploreItem__set_ImageName_fn(ExploreItem* __this, uString* value)
{
    __this->ImageName(value);
}

// public bool get_InDetailsMode() :8
void ExploreItem__get_InDetailsMode_fn(ExploreItem* __this, bool* __retval)
{
    *__retval = __this->InDetailsMode();
}

// public void set_InDetailsMode(bool value) :9
void ExploreItem__set_InDetailsMode_fn(ExploreItem* __this, bool* value)
{
    __this->InDetailsMode(*value);
}

// private void InitializeUX() :272
void ExploreItem__InitializeUX_fn(ExploreItem* __this)
{
    __this->InitializeUX();
}

// public ExploreItem New(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) :260
void ExploreItem__New4_fn(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1, ExploreItem** __retval)
{
    *__retval = ExploreItem::New4(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
}

// public void SetCardAlignment(Fuse.Elements.Alignment value, Uno.UX.IPropertyListener origin) :71
void ExploreItem__SetCardAlignment_fn(ExploreItem* __this, int* value, uObject* origin)
{
    __this->SetCardAlignment(*value, origin);
}

// public void SetCountry(string value, Uno.UX.IPropertyListener origin) :41
void ExploreItem__SetCountry_fn(ExploreItem* __this, uString* value, uObject* origin)
{
    __this->SetCountry(value, origin);
}

// public void SetForegroundColor(float4 value, Uno.UX.IPropertyListener origin) :56
void ExploreItem__SetForegroundColor_fn(ExploreItem* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetForegroundColor(*value, origin);
}

// public void SetImageName(string value, Uno.UX.IPropertyListener origin) :26
void ExploreItem__SetImageName_fn(ExploreItem* __this, uString* value, uObject* origin)
{
    __this->SetImageName(value, origin);
}

// public void SetInDetailsMode(bool value, Uno.UX.IPropertyListener origin) :11
void ExploreItem__SetInDetailsMode_fn(ExploreItem* __this, bool* value, uObject* origin)
{
    __this->SetInDetailsMode(*value, origin);
}

::g::Uno::UX::Selector ExploreItem::__selector0_;
::g::Uno::UX::Selector ExploreItem::__selector1_;
::g::Uno::UX::Selector ExploreItem::__selector10_;
::g::Uno::UX::Selector ExploreItem::__selector11_;
::g::Uno::UX::Selector ExploreItem::__selector12_;
::g::Uno::UX::Selector ExploreItem::__selector13_;
::g::Uno::UX::Selector ExploreItem::__selector14_;
::g::Uno::UX::Selector ExploreItem::__selector15_;
::g::Uno::UX::Selector ExploreItem::__selector16_;
::g::Uno::UX::Selector ExploreItem::__selector17_;
::g::Uno::UX::Selector ExploreItem::__selector18_;
::g::Uno::UX::Selector ExploreItem::__selector19_;
::g::Uno::UX::Selector ExploreItem::__selector2_;
::g::Uno::UX::Selector ExploreItem::__selector20_;
::g::Uno::UX::Selector ExploreItem::__selector21_;
::g::Uno::UX::Selector ExploreItem::__selector22_;
::g::Uno::UX::Selector ExploreItem::__selector23_;
::g::Uno::UX::Selector ExploreItem::__selector24_;
::g::Uno::UX::Selector ExploreItem::__selector25_;
::g::Uno::UX::Selector ExploreItem::__selector26_;
::g::Uno::UX::Selector ExploreItem::__selector27_;
::g::Uno::UX::Selector ExploreItem::__selector28_;
::g::Uno::UX::Selector ExploreItem::__selector29_;
::g::Uno::UX::Selector ExploreItem::__selector3_;
::g::Uno::UX::Selector ExploreItem::__selector4_;
::g::Uno::UX::Selector ExploreItem::__selector5_;
::g::Uno::UX::Selector ExploreItem::__selector6_;
::g::Uno::UX::Selector ExploreItem::__selector7_;
::g::Uno::UX::Selector ExploreItem::__selector8_;
::g::Uno::UX::Selector ExploreItem::__selector9_;

// public ExploreItem(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) [instance] :260
void ExploreItem::ctor_7(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    ctor_6();
    detailsImagePanel = detailsImagePanel1;
    detailsPlacesPanel = detailsPlacesPanel1;
    detailsInfoPanel = detailsInfoPanel1;
    detailsFactsPanel = detailsFactsPanel1;
    InitializeUX();
}

// public Fuse.Elements.Alignment get_CardAlignment() [instance] :68
int ExploreItem::CardAlignment()
{
    return _field_CardAlignment;
}

// public void set_CardAlignment(Fuse.Elements.Alignment value) [instance] :69
void ExploreItem::CardAlignment(int value)
{
    SetCardAlignment(value, NULL);
}

// public string get_Country() [instance] :38
uString* ExploreItem::Country()
{
    return _field_Country;
}

// public void set_Country(string value) [instance] :39
void ExploreItem::Country(uString* value)
{
    SetCountry(value, NULL);
}

// public float4 get_ForegroundColor() [instance] :53
::g::Uno::Float4 ExploreItem::ForegroundColor()
{
    return _field_ForegroundColor;
}

// public void set_ForegroundColor(float4 value) [instance] :54
void ExploreItem::ForegroundColor(::g::Uno::Float4 value)
{
    SetForegroundColor(value, NULL);
}

// public string get_ImageName() [instance] :23
uString* ExploreItem::ImageName()
{
    return _field_ImageName;
}

// public void set_ImageName(string value) [instance] :24
void ExploreItem::ImageName(uString* value)
{
    SetImageName(value, NULL);
}

// public bool get_InDetailsMode() [instance] :8
bool ExploreItem::InDetailsMode()
{
    return _field_InDetailsMode;
}

// public void set_InDetailsMode(bool value) [instance] :9
void ExploreItem::InDetailsMode(bool value)
{
    SetInDetailsMode(value, NULL);
}

// private void InitializeUX() [instance] :272
void ExploreItem::InitializeUX()
{
    __gen0 = ::g::Fuse::Controls::Text::New3();
    __gen0_FontSize_inst1 = ::g::EventApp_FuseControlsTextControl_FontSize_Property::New1(__gen0, ExploreItem::__selector0());
    __gen1 = ::g::Uno::UX::MultiplyOperator::New2();
    __gen1_Right_inst1 = ::g::EventApp_UnoUXBinaryOperator_Right_Property::New1(__gen1, ExploreItem::__selector1());
    __gen2 = ::g::Uno::UX::DivideOperator::New2();
    __gen2_Left_inst1 = ::g::EventApp_UnoUXBinaryOperator_Left_Property::New1(__gen2, ExploreItem::__selector2());
    __gen0_Value_inst1 = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(__gen0, ExploreItem::__selector3());
    this_ImageName_inst = ::g::EventApp_ExploreItem_ImageName_Property::New1(this, ExploreItem::__selector4());
    __gen4 = ::g::Fuse::Controls::Text::New3();
    __gen4_FontSize_inst1 = ::g::EventApp_FuseControlsTextControl_FontSize_Property::New1(__gen4, ExploreItem::__selector0());
    __gen5 = ::g::Uno::UX::MultiplyOperator::New2();
    __gen5_Right_inst1 = ::g::EventApp_UnoUXBinaryOperator_Right_Property::New1(__gen5, ExploreItem::__selector1());
    __gen6 = ::g::Uno::UX::DivideOperator::New2();
    __gen6_Left_inst1 = ::g::EventApp_UnoUXBinaryOperator_Left_Property::New1(__gen6, ExploreItem::__selector2());
    __gen4_Value_inst1 = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(__gen4, ExploreItem::__selector3());
    this_Country_inst = ::g::EventApp_ExploreItem_Country_Property::New1(this, ExploreItem::__selector5());
    ::g::Fuse::Controls::Rectangle* temp = ::g::Fuse::Controls::Rectangle::New3();
    temp_Color_inst = ::g::EventApp_FuseControlsShape_Color_Property::New1(temp, ExploreItem::__selector6());
    this_ForegroundColor_inst = ::g::EventApp_ExploreItem_ForegroundColor_Property::New1(this, ExploreItem::__selector7());
    placeContainer = ::g::Fuse::Controls::Panel::New3();
    placeContainer_Alignment_inst = ::g::EventApp_FuseElementsElement_Alignment_Property::New1(placeContainer, ExploreItem::__selector8());
    this_CardAlignment_inst = ::g::EventApp_ExploreItem_CardAlignment_Property::New1(this, ExploreItem::__selector9());
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::EventApp_FuseReactiveEach_Items_Property::New1(temp1, ExploreItem::__selector10());
    ::g::Fuse::Controls::Panel* temp2 = ::g::Fuse::Controls::Panel::New3();
    temp2_Alignment_inst = ::g::EventApp_FuseElementsElement_Alignment_Property::New1(temp2, ExploreItem::__selector8());
    img = ::g::Fuse::Controls::Image::New3();
    img_File_inst = ::g::EventApp_FuseControlsImage_File_Property::New1(img, ExploreItem::__selector11());
    img_Element_LayoutMaster_inst = ::g::EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(img, ExploreItem::__selector12());
    placeRect = ::g::Fuse::Controls::Panel::New3();
    placeRect_Element_LayoutMaster_inst = ::g::EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(placeRect, ExploreItem::__selector12());
    infoRect = ::g::Fuse::Controls::Panel::New3();
    infoRect_Element_LayoutMaster_inst = ::g::EventApp_FuseElementsElement_ElementLayoutMaster_Property::New1(infoRect, ExploreItem::__selector12());
    infoRect_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(infoRect, ExploreItem::__selector13());
    infoRectContent = ::g::Fuse::Controls::Grid::New4();
    infoRectContent_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(infoRectContent, ExploreItem::__selector13());
    infoRectContentTrans = ::g::Fuse::Translation::New2();
    infoRectContentTrans_Y_inst = ::g::EventApp_FuseTranslation_Y_Property::New1(infoRectContentTrans, ExploreItem::__selector14());
    factsPanel = ::g::Fuse::Controls::Grid::New4();
    factsPanel_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(factsPanel, ExploreItem::__selector13());
    factsPanelTrans = ::g::Fuse::Translation::New2();
    factsPanelTrans_Y_inst = ::g::EventApp_FuseTranslation_Y_Property::New1(factsPanelTrans, ExploreItem::__selector14());
    factsPanel_HitTestMode_inst = ::g::EventApp_FuseElementsElement_HitTestMode_Property::New1(factsPanel, ExploreItem::__selector15());
    ::g::Fuse::Triggers::WhileTrue* temp3 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp3_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp3, ExploreItem::__selector3());
    this_InDetailsMode_inst = ::g::EventApp_ExploreItem_InDetailsMode_Property::New1(this, ExploreItem::__selector16());
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::EventApp_FuseReactiveEach_Items_Property::New1(temp4, ExploreItem::__selector10());
    factsPageControl = ::g::Fuse::Controls::PageControl::New4();
    this_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(this, ExploreItem::__selector13());
    this_HitTestMode_inst = ::g::EventApp_FuseElementsElement_HitTestMode_Property::New1(this, ExploreItem::__selector15());
    __gen8 = ::g::Fuse::Triggers::WhileTrue::New2();
    __gen8_Value_inst1 = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(__gen8, ExploreItem::__selector3());
    __gen9 = ::g::Uno::UX::LogicalAndOperator::New2();
    __gen9_Left_inst1 = ::g::EventApp_UnoUXBinaryOperator_Left_Property::New1(__gen9, ExploreItem::__selector2());
    __gen9_Right_inst1 = ::g::EventApp_UnoUXBinaryOperator_Right_Property::New1(__gen9, ExploreItem::__selector1());
    __gen10 = ::g::Uno::UX::NotEqualOperator::New2();
    __gen10_Left_inst1 = ::g::EventApp_UnoUXBinaryOperator_Left_Property::New1(__gen10, ExploreItem::__selector2());
    __gen10_Right_inst1 = ::g::EventApp_UnoUXBinaryOperator_Right_Property::New1(__gen10, ExploreItem::__selector1());
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    __gen3 = ::g::Fuse::Elements::UX::WidthFunction::New1();
    ::g::Fuse::Reactive::ReadPropertyBinding* temp6 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(__gen0_Value_inst1, this_ImageName_inst);
    __gen7 = ::g::Fuse::Elements::UX::WidthFunction::New1();
    ::g::Fuse::Reactive::ReadPropertyBinding* temp7 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(__gen4_Value_inst1, this_Country_inst);
    ::g::Fuse::Reactive::ReadPropertyBinding* temp8 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(temp_Color_inst, this_ForegroundColor_inst);
    ::g::Fuse::Reactive::ReadPropertyBinding* temp9 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(placeContainer_Alignment_inst, this_CardAlignment_inst);
    ExploreItem__Template* temp10 = ExploreItem__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], temp1_Items_inst, ::STRINGS[30/*"numbers"*/]);
    ::g::Fuse::Reactive::ReadPropertyBinding* temp12 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(temp2_Alignment_inst, this_CardAlignment_inst);
    imgMaster = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<Uno.UX.FileSource>*/], img_File_inst, ::STRINGS[31/*"image"*/]);
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp15 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp16 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp17 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Resize* temp19 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Change* temp20 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Element>*/], img_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Element>*/], placeRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Element>*/], infoRect_Element_LayoutMaster_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], infoRect_Opacity_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], infoRectContent_Opacity_inst);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], infoRectContentTrans_Y_inst);
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], factsPanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp27 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], factsPanelTrans_Y_inst);
    ::g::Fuse::Animations::Change* temp28 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], factsPanel_HitTestMode_inst);
    ::g::Fuse::Triggers::Actions::BringToFront* temp29 = ::g::Fuse::Triggers::Actions::BringToFront::New2();
    ::g::Fuse::Reactive::ReadPropertyBinding* temp30 = ::g::Fuse::Reactive::ReadPropertyBinding::New3(temp3_Value_inst, this_InDetailsMode_inst);
    ExploreItem__Template1* temp31 = ExploreItem__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp32 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], temp4_Items_inst, ::STRINGS[32/*"facts"*/]);
    ::g::Fuse::Controls::PageIndicator* temp33 = ::g::Fuse::Controls::PageIndicator::New5((uObject*)factsPageControl);
    ExploreItem__Template2* Dot = ExploreItem__Template2::New2(this, this);
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], this_HitTestMode_inst);
    ::g::Fuse::Animations::Move* temp36 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp37 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<Uno.UX.Value>*/], __gen9_Right_inst1, ::STRINGS[33/*"inDetailsMode"*/]);
    ::g::Fuse::Reactive::ReadDataBinding* temp38 = (::g::Fuse::Reactive::ReadDataBinding*)::g::Fuse::Reactive::ReadDataBinding::New2(::TYPES[6/*Fuse.Reactive.ReadDataBinding<Uno.UX.Value>*/], __gen10_Left_inst1, ::STRINGS[34/*"current"*/]);
    ::g::Fuse::Reactive::DataBinding* temp39 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[5/*Fuse.Reactive.DataBinding<Uno.UX.Value>*/], __gen10_Right_inst1, ::STRINGS[35/*"id"*/]);
    Aspect(1.85f);
    Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    BoxSizing(4);
    InDetailsMode(false);
    CardAlignment(1);
    uPtr(placeContainer)->Width(::g::Uno::UX::Size__New1(55.0f, 4));
    uPtr(placeContainer)->Name(ExploreItem::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeContainer)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), placeRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeContainer)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    uPtr(placeRect)->Name(ExploreItem::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeRect)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(placeRect)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp5->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp5->Alignment(9);
    temp5->Margin(::g::Uno::Float4__New2(32.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen4);
    uPtr(__gen0)->TextWrapping(1);
    uPtr(__gen0)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(__gen0)->Name(ExploreItem::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen0)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen0)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), __gen3);
    uPtr(__gen1)->Left(::g::Uno::UX::Value::op_Implicit2(26.0f));
    uPtr(__gen1)->Target(__gen0_FontSize_inst1);
    uPtr(__gen2)->Right(::g::Uno::UX::Value::op_Implicit2(230.0f));
    uPtr(__gen2)->Target(__gen1_Right_inst1);
    uPtr(__gen3)->Target(__gen2_Left_inst1);
    uPtr(__gen3)->Element(placeContainer);
    uPtr(__gen4)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(__gen4)->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    uPtr(__gen4)->Name(ExploreItem::__selector20());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen4)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen4)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), __gen7);
    uPtr(__gen5)->Left(::g::Uno::UX::Value::op_Implicit2(12.0f));
    uPtr(__gen5)->Target(__gen4_FontSize_inst1);
    uPtr(__gen6)->Right(::g::Uno::UX::Value::op_Implicit2(230.0f));
    uPtr(__gen6)->Target(__gen5_Right_inst1);
    uPtr(__gen7)->Target(__gen6_Left_inst1);
    uPtr(__gen7)->Element(placeContainer);
    temp->Opacity(0.9f);
    temp->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp2->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    uPtr(infoRect)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(infoRect)->Opacity(0.0f);
    uPtr(infoRect)->Name(ExploreItem::__selector21());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRect)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoRectContent);
    uPtr(infoRectContent)->Rows(::STRINGS[36/*"1*,1*"*/]);
    uPtr(infoRectContent)->Padding(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(infoRectContent)->Opacity(0.0f);
    uPtr(infoRectContent)->Name(ExploreItem::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRectContent)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), infoRectContentTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(infoRectContent)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    uPtr(infoRectContentTrans)->Y(0.15f);
    uPtr(infoRectContentTrans)->Name(ExploreItem::__selector23());
    uPtr(infoRectContentTrans)->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    uPtr(imgMaster)->Height(::g::Uno::UX::Size__New1(85.0f, 4));
    uPtr(imgMaster)->Name(ExploreItem::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(imgMaster)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), img);
    uPtr(img)->StretchMode(6);
    uPtr(img)->Name(ExploreItem::__selector25());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(img, imgMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(img)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Actions()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp14->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp14->Duration(0.6);
    temp14->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp14->RelativeNode(detailsImagePanel);
    temp14->Target(img);
    temp14->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp15->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp15->Duration(0.6);
    temp15->Target(img);
    temp15->RelativeNode(detailsImagePanel);
    temp15->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    temp15->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp16->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp16->Duration(0.6);
    temp16->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp16->RelativeNode(detailsPlacesPanel);
    temp16->Target(placeRect);
    temp16->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp17->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp17->Duration(0.6);
    temp17->Target(placeRect);
    temp17->RelativeNode(detailsPlacesPanel);
    temp17->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    temp17->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp18->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp18->Duration(0.6);
    temp18->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp18->RelativeNode(detailsInfoPanel);
    temp18->Target(infoRect);
    temp18->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    temp19->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp19->Duration(0.6);
    temp19->Target(infoRect);
    temp19->RelativeNode(detailsInfoPanel);
    temp19->RelativeTo(::g::Fuse::Elements::TranslationModes::Size());
    temp19->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp20, detailsImagePanel);
    temp20->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, detailsPlacesPanel);
    temp21->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, detailsInfoPanel);
    temp22->Delay(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(1.0f));
    temp23->Duration(0.6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(1.0f));
    temp24->Duration(0.35);
    temp24->Delay(0.45);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(0.0f));
    temp25->Duration(0.35);
    temp25->Delay(0.4);
    temp25->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(1.0f));
    temp26->Duration(0.35);
    temp26->Delay(0.55);
    ::g::Fuse::Animations::Change__set_Value_fn(temp27, uCRef(0.0f));
    temp27->Duration(0.35);
    temp27->Delay(0.55);
    temp27->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp28, uCRef<int>(6));
    uPtr(factsPanel)->Rows(::STRINGS[37/*"1*,50"*/]);
    uPtr(factsPanel)->HitTestMode(0);
    uPtr(factsPanel)->Opacity(0.0f);
    uPtr(factsPanel)->Name(ExploreItem::__selector26());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(factsPanel, detailsFactsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), factsPanelTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), factsPageControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPanel)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    uPtr(factsPanelTrans)->Y(0.2f);
    uPtr(factsPanelTrans)->Name(ExploreItem::__selector27());
    uPtr(factsPanelTrans)->RelativeTo(::g::Fuse::TranslationModes::Size());
    uPtr(factsPageControl)->Name(ExploreItem::__selector28());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(factsPageControl)->Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp33->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), Dot);
    uPtr(__gen8)->Name(ExploreItem::__selector29());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__gen8)->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(0.0f));
    temp34->Duration(0.4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef<int>(0));
    temp36->Y(100.0f);
    temp36->Duration(0.4);
    uPtr(__gen9)->Target(__gen8_Value_inst1);
    uPtr(__gen10)->Target(__gen9_Left_inst1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), placeContainer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), imgMaster);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), factsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), __gen8);
}

// public void SetCardAlignment(Fuse.Elements.Alignment value, Uno.UX.IPropertyListener origin) [instance] :71
void ExploreItem::SetCardAlignment(int value, uObject* origin)
{
    if (value != _field_CardAlignment)
    {
        _field_CardAlignment = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"CardAlignment"*/]), origin);
    }
}

// public void SetCountry(string value, Uno.UX.IPropertyListener origin) [instance] :41
void ExploreItem::SetCountry(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Country))
    {
        _field_Country = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Country"*/]), origin);
    }
}

// public void SetForegroundColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :56
void ExploreItem::SetForegroundColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_ForegroundColor))
    {
        _field_ForegroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"ForegroundC...*/]), origin);
    }
}

// public void SetImageName(string value, Uno.UX.IPropertyListener origin) [instance] :26
void ExploreItem::SetImageName(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_ImageName))
    {
        _field_ImageName = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ImageName"*/]), origin);
    }
}

// public void SetInDetailsMode(bool value, Uno.UX.IPropertyListener origin) [instance] :11
void ExploreItem::SetInDetailsMode(bool value, uObject* origin)
{
    if (value != _field_InDetailsMode)
    {
        _field_InDetailsMode = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"InDetailsMode"*/]), origin);
    }
}

// public ExploreItem New(Fuse.Controls.Panel detailsImagePanel, Fuse.Controls.Panel detailsPlacesPanel, Fuse.Controls.Panel detailsInfoPanel, Fuse.Controls.Panel detailsFactsPanel) [static] :260
ExploreItem* ExploreItem::New4(::g::Fuse::Controls::Panel* detailsImagePanel1, ::g::Fuse::Controls::Panel* detailsPlacesPanel1, ::g::Fuse::Controls::Panel* detailsInfoPanel1, ::g::Fuse::Controls::Panel* detailsFactsPanel1)
{
    ExploreItem* obj1 = (ExploreItem*)uNew(ExploreItem_typeof());
    obj1->ctor_7(detailsImagePanel1, detailsPlacesPanel1, detailsInfoPanel1, detailsFactsPanel1);
    return obj1;
}
// }

} // ::g
