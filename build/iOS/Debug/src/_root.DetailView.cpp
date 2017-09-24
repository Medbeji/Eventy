// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/DetailView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BodyText.h>
#include <_root.DetailView.h>
#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-a4e7b6b.h>
#include <_root.EventApp_FuseCo-c2c306e0.h>
#include <_root.EventApp_FuseCo-eb648b08.h>
#include <_root.EventApp_FuseEl-6233f539.h>
#include <_root.EventApp_FuseiO-29171250.h>
#include <_root.TitleText.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Placeholder.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
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
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Scrolli-20ed4bc5.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[24];
static uType* TYPES[10];

namespace g{

// public partial sealed class DetailView :2
// {
// static DetailView() :37
static void DetailView__cctor_4_fn(uType* __type)
{
    DetailView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb8"*/], ::STRINGS[2/*"statusBarCo...*/], ::STRINGS[3/*"headerPanel"*/], ::STRINGS[4/*"overBackgro...*/], ::STRINGS[5/*"facePicture"*/], ::STRINGS[6/*"textPanel"*/], ::STRINGS[7/*"topText"*/], ::STRINGS[8/*"bottomText"*/], ::STRINGS[9/*"backgroundP...*/], ::STRINGS[10/*"underBackgr...*/]);
    DetailView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Url"*/]);
    DetailView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Value"*/]);
    DetailView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"LayoutElement"*/]);
    DetailView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Opacity"*/]);
    DetailView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Style"*/]);
    DetailView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"statusBarCo...*/]);
    DetailView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"headerPanel"*/]);
    DetailView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"overBackgro...*/]);
    DetailView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"facePicture"*/]);
    DetailView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"textPanel"*/]);
    DetailView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"topText"*/]);
    DetailView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"bottomText"*/]);
    DetailView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"backgroundP...*/]);
    DetailView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"underBackgr...*/]);
}

static void DetailView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb8");
    ::STRINGS[2] = uString::Const("statusBarConfig");
    ::STRINGS[3] = uString::Const("headerPanel");
    ::STRINGS[4] = uString::Const("overBackgroundLayout");
    ::STRINGS[5] = uString::Const("facePicture");
    ::STRINGS[6] = uString::Const("textPanel");
    ::STRINGS[7] = uString::Const("topText");
    ::STRINGS[8] = uString::Const("bottomText");
    ::STRINGS[9] = uString::Const("backgroundPicture");
    ::STRINGS[10] = uString::Const("underBackgroundLayout");
    ::STRINGS[11] = uString::Const("Url");
    ::STRINGS[12] = uString::Const("Value");
    ::STRINGS[13] = uString::Const("LayoutElement");
    ::STRINGS[14] = uString::Const("Opacity");
    ::STRINGS[15] = uString::Const("Style");
    ::STRINGS[16] = uString::Const("goToHome");
    ::STRINGS[17] = uString::Const("image");
    ::STRINGS[18] = uString::Const("name");
    ::STRINGS[19] = uString::Const("cover");
    ::STRINGS[20] = uString::Const("description");
    ::STRINGS[21] = uString::Const("fullDescription");
    ::STRINGS[22] = uString::Const("DetailView.ux");
    ::STRINGS[23] = uString::Const("Think Security");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(107,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::DetailView, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::DetailView, backgroundPicture), 0,
        ::g::TitleText_typeof(), offsetof(::g::DetailView, bottomText), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DetailView, bottomText_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::DetailView, facePicture), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DetailView, facePicture_Url_inst), 0,
        ::g::Fuse::Controls::MultiLayoutPanel_typeof(), offsetof(::g::DetailView, headerPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(::g::DetailView, headerPanel_LayoutElement_inst), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::DetailView, overBackgroundLayout), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::DetailView, router), 0,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::DetailView, statusBarConfig), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Platform::StatusBarStyle_typeof(), NULL), offsetof(::g::DetailView, statusBarConfig_Style_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::DetailView, temp_eb8), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DetailView, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DetailView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DetailView, temp2_Value_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::DetailView, textPanel), 0,
        ::g::TitleText_typeof(), offsetof(::g::DetailView, topText), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DetailView, topText_Value_inst), 0,
        ::g::Fuse::Controls::Placeholder_typeof(), offsetof(::g::DetailView, underBackgroundLayout), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::DetailView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DetailView::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* DetailView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 142;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(DetailView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DetailView", options);
    type->fp_build_ = DetailView_build;
    type->fp_cctor_ = DetailView__cctor_4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DetailView(Fuse.Navigation.Router router) :41
void DetailView__ctor_8_fn(DetailView* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :47
void DetailView__InitializeUX_fn(DetailView* __this)
{
    __this->InitializeUX();
}

// public DetailView New(Fuse.Navigation.Router router) :41
void DetailView__New5_fn(::g::Fuse::Navigation::Router* router1, DetailView** __retval)
{
    *__retval = DetailView::New5(router1);
}

uSStrong<uArray*> DetailView::__g_static_nametable1_;
::g::Uno::UX::Selector DetailView::__selector0_;
::g::Uno::UX::Selector DetailView::__selector1_;
::g::Uno::UX::Selector DetailView::__selector10_;
::g::Uno::UX::Selector DetailView::__selector11_;
::g::Uno::UX::Selector DetailView::__selector12_;
::g::Uno::UX::Selector DetailView::__selector13_;
::g::Uno::UX::Selector DetailView::__selector2_;
::g::Uno::UX::Selector DetailView::__selector3_;
::g::Uno::UX::Selector DetailView::__selector4_;
::g::Uno::UX::Selector DetailView::__selector5_;
::g::Uno::UX::Selector DetailView::__selector6_;
::g::Uno::UX::Selector DetailView::__selector7_;
::g::Uno::UX::Selector DetailView::__selector8_;
::g::Uno::UX::Selector DetailView::__selector9_;

// public DetailView(Fuse.Navigation.Router router) [instance] :41
void DetailView::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :47
void DetailView::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DetailView::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"goToHome"*/]);
    facePicture = ::g::Fuse::Controls::Image::New3();
    facePicture_Url_inst = ::g::EventApp_FuseControlsImage_Url_Property::New1(facePicture, DetailView::__selector0());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"image"*/]);
    topText = ::g::TitleText::New4();
    topText_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(topText, DetailView::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"name"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_Url_inst = ::g::EventApp_FuseControlsImage_Url_Property::New1(temp, DetailView::__selector0());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"cover"*/]);
    headerPanel = ::g::Fuse::Controls::MultiLayoutPanel::New4();
    headerPanel_LayoutElement_inst = ::g::EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(headerPanel, DetailView::__selector2());
    bottomText = ::g::TitleText::New4();
    bottomText_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(bottomText, DetailView::__selector3());
    statusBarConfig = ::g::Fuse::iOS::StatusBarConfig::New2();
    statusBarConfig_Style_inst = ::g::EventApp_FuseiOSStatusBarConfig_Style_Property::New1(statusBarConfig, DetailView::__selector4());
    ::g::BodyText* temp1 = ::g::BodyText::New4();
    temp1_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp1, DetailView::__selector1());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"description"*/]);
    ::g::BodyText* temp2 = ::g::BodyText::New4();
    temp2_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp2, DetailView::__selector1());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"fullDescrip...*/]);
    ::g::Fuse::Reactive::JavaScript* temp9 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp11 = ::g::Fuse::Controls::Image::New3();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    overBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(facePicture_Url_inst, (uObject*)temp4, __g_nametable1, 3);
    textPanel = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp14 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(topText_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    backgroundPicture = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp_Url_inst, (uObject*)temp6, __g_nametable1, 3);
    underBackgroundLayout = ::g::Fuse::Controls::Placeholder::New3();
    ::g::Fuse::Controls::ScrollView* temp17 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Triggers::ScrollingAnimation* temp18 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp19 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp20 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp21 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp22 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp23 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp24 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], headerPanel_LayoutElement_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp25 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp26 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::ScrollingAnimation* temp27 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Move* temp28 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp29 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp30 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp31 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], bottomText_Opacity_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp32 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Platform.StatusBarStyle>*/], statusBarConfig_Style_inst);
    ::g::Fuse::Triggers::ScrollingAnimation* temp34 = ::g::Fuse::Triggers::ScrollingAnimation::New2();
    ::g::Fuse::Animations::Scale* temp35 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp36 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp8, __g_nametable1, 3);
    temp9->LineNumber(3);
    temp9->FileName(::STRINGS[22/*"DetailView.ux"*/]);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::detail6b60679c()));
    temp10->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp10->Alignment(5);
    temp10->Margin(::g::Uno::Float4__New2(5.0f, 25.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->Opacity(1.0f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::previous1c3b0c77()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    uPtr(statusBarConfig)->Style(0);
    uPtr(statusBarConfig)->Name(DetailView::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), headerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    uPtr(headerPanel)->HitTestMode(0);
    uPtr(headerPanel)->Height(::g::Uno::UX::Size__New1(260.0f, 1));
    uPtr(headerPanel)->Alignment(4);
    uPtr(headerPanel)->Name(DetailView::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), overBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), textPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), backgroundPicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(headerPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), underBackgroundLayout);
    uPtr(overBackgroundLayout)->Name(DetailView::__selector7());
    uPtr(overBackgroundLayout)->PlaceholderContent(facePicture);
    uPtr(facePicture)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(facePicture)->Alignment(14);
    uPtr(facePicture)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(75.0f, 1)));
    uPtr(facePicture)->Name(DetailView::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(facePicture)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    uPtr(textPanel)->Alignment(10);
    uPtr(textPanel)->Name(DetailView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), topText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(textPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomText);
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    uPtr(topText)->FontSize(35.0f);
    uPtr(topText)->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(topText)->Name(DetailView::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topText)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    uPtr(bottomText)->Value(::STRINGS[23/*"Think Secur...*/]);
    uPtr(bottomText)->FontSize(14.0f);
    uPtr(bottomText)->Name(DetailView::__selector11());
    uPtr(backgroundPicture)->Alignment(4);
    uPtr(backgroundPicture)->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(50.0f, 4), ::g::Uno::UX::Size__New1(0.0f, 4)));
    uPtr(backgroundPicture)->Name(DetailView::__selector12());
    uPtr(backgroundPicture)->Background(::g::Fuse::Drawing::Brushes::Black());
    uPtr(backgroundPicture)->TransformOrigin(::g::Fuse::Elements::TransformOrigins::Anchor());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(backgroundPicture)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->StretchMode(6);
    temp->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    uPtr(underBackgroundLayout)->Name(DetailView::__selector13());
    uPtr(underBackgroundLayout)->Target(facePicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp18->From(0.0f);
    temp18->To(150.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    temp19->Factor(0.6f);
    temp19->Target(facePicture);
    temp19->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp20->Y(-0.8f);
    temp20->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp20->Target(facePicture);
    temp20->Easing(::g::Fuse::Animations::Easing::QuadraticIn());
    temp21->From(125.0f);
    temp21->To(0.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp22, overBackgroundLayout);
    temp23->From(125.0f);
    temp23->To(170.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp24);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp24, underBackgroundLayout);
    temp25->From(150.0f);
    temp25->To(1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    temp26->Y(-850.0f);
    temp26->Target(facePicture);
    temp26->Easing(::g::Fuse::Animations::Easing::Linear());
    temp27->From(0.0f);
    temp27->To(260.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp31);
    temp28->Y(-0.7f);
    temp28->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp28->Target(backgroundPicture);
    temp28->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp29->Y(-0.35f);
    temp29->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp29->Target(textPanel);
    temp29->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp30->Y(-0.3f);
    temp30->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp30->Target(bottomText);
    temp30->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp31, uCRef(0.0f));
    temp31->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    temp32->From(50.0f);
    temp32->To(250.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef<int>(1));
    temp34->From(0.0f);
    temp34->To(-1000.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    temp35->Factor(4.0f);
    temp35->Target(backgroundPicture);
    temp36->Y(800.0f);
    temp36->Target(facePicture);
    temp37->Padding(::g::Uno::Float4__New2(0.0f, 370.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->FontSize(20.0f);
    temp1->TextAlignment(1);
    temp1->Margin(::g::Uno::Float4__New2(70.0f, 0.0f, 70.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp39->Color(::g::Uno::Float4__New2(0.8823529f, 0.8823529f, 0.8823529f, 1.0f));
    temp39->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp39->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    temp2->FontSize(16.0f);
    temp2->Margin(::g::Uno::Float4__New2(50.0f, 40.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), headerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), overBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), facePicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), textPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), backgroundPicture);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), underBackgroundLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), statusBarConfig);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public DetailView New(Fuse.Navigation.Router router) [static] :41
DetailView* DetailView::New5(::g::Fuse::Navigation::Router* router1)
{
    DetailView* obj1 = (DetailView*)uNew(DetailView_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
