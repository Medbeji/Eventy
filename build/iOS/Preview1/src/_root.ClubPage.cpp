// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/ClubPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ClubPage.h>
#include <_root.ClubPage.Template.h>
#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-1eb6907a.h>
#include <_root.EventApp_FuseRe-ead224b9.h>
#include <_root.EventApp_FuseSe-5c2f728e.h>
#include <_root.EventApp_FuseTr-466e6874.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[21];
static uType* TYPES[9];

namespace g{

// public partial sealed class ClubPage :2
// {
// static ClubPage() :104
static void ClubPage__cctor_4_fn(uType* __type)
{
    ClubPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"detailsImag...*/], ::STRINGS[2/*"detailsPlac...*/], ::STRINGS[3/*"detailsInfo...*/], ::STRINGS[4/*"detailsFact...*/], ::STRINGS[5/*"topBar"*/], ::STRINGS[6/*"temp_eb2"*/], ::STRINGS[7/*"citiesPageC...*/], ::STRINGS[8/*"sw"*/]);
    ClubPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Value"*/]);
    ClubPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"UserScroll"*/]);
    ClubPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Items"*/]);
    ClubPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"detailsImag...*/]);
    ClubPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"detailsPlac...*/]);
    ClubPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"detailsInfo...*/]);
    ClubPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"detailsFact...*/]);
    ClubPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"topBar"*/]);
    ClubPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"citiesPageC...*/]);
    ClubPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"sw"*/]);
}

static void ClubPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("detailsImagePanel");
    ::STRINGS[2] = uString::Const("detailsPlacesPanel");
    ::STRINGS[3] = uString::Const("detailsInfoPanel");
    ::STRINGS[4] = uString::Const("detailsFactsPanel");
    ::STRINGS[5] = uString::Const("topBar");
    ::STRINGS[6] = uString::Const("temp_eb2");
    ::STRINGS[7] = uString::Const("citiesPageControl");
    ::STRINGS[8] = uString::Const("sw");
    ::STRINGS[9] = uString::Const("Value");
    ::STRINGS[10] = uString::Const("UserScroll");
    ::STRINGS[11] = uString::Const("Items");
    ::STRINGS[12] = uString::Const("goToHome");
    ::STRINGS[13] = uString::Const("inDetailsMode");
    ::STRINGS[14] = uString::Const("current");
    ::STRINGS[15] = uString::Const("places");
    ::STRINGS[16] = uString::Const("ClubPage.ux");
    ::STRINGS[17] = uString::Const("auto,1*");
    ::STRINGS[18] = uString::Const("3*,180,3*");
    ::STRINGS[19] = uString::Const("1*,1*");
    ::STRINGS[20] = uString::Const("Clubs");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ClubPage, __g_nametable1), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::ClubPage, citiesPageControl), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ClubPage, detailsFactsPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ClubPage, detailsImagePanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ClubPage, detailsInfoPanel), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ClubPage, detailsPlacesPanel), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::ClubPage, router), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::ClubPage, sw), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ClubPage, sw_UserScroll_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ClubPage, temp_eb2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ClubPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::ClubPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ClubPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::ClubPage, temp3_Items_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::ClubPage, topBar), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ClubPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ClubPage::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClubPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* ClubPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 137;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(ClubPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ClubPage", options);
    type->fp_build_ = ClubPage_build;
    type->fp_cctor_ = ClubPage__cctor_4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public ClubPage(Fuse.Navigation.Router router) :108
void ClubPage__ctor_8_fn(ClubPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :114
void ClubPage__InitializeUX_fn(ClubPage* __this)
{
    __this->InitializeUX();
}

// public ClubPage New(Fuse.Navigation.Router router) :108
void ClubPage__New5_fn(::g::Fuse::Navigation::Router* router1, ClubPage** __retval)
{
    *__retval = ClubPage::New5(router1);
}

uSStrong<uArray*> ClubPage::__g_static_nametable1_;
::g::Uno::UX::Selector ClubPage::__selector0_;
::g::Uno::UX::Selector ClubPage::__selector1_;
::g::Uno::UX::Selector ClubPage::__selector2_;
::g::Uno::UX::Selector ClubPage::__selector3_;
::g::Uno::UX::Selector ClubPage::__selector4_;
::g::Uno::UX::Selector ClubPage::__selector5_;
::g::Uno::UX::Selector ClubPage::__selector6_;
::g::Uno::UX::Selector ClubPage::__selector7_;
::g::Uno::UX::Selector ClubPage::__selector8_;
::g::Uno::UX::Selector ClubPage::__selector9_;

// public ClubPage(Fuse.Navigation.Router router) [instance] :108
void ClubPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("ClubPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :114
void ClubPage::InitializeUX()
{
    uStackFrame __("ClubPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ClubPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"goToHome"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp, ClubPage::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"inDetailsMode"*/]);
    sw = ::g::Fuse::Controls::ScrollView::New4();
    sw_UserScroll_inst = ::g::EventApp_FuseControlsScrollViewBase_UserScroll_Property::New1(sw, ClubPage::__selector1());
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp1, ClubPage::__selector0());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"inDetailsMode"*/]);
    ::g::Fuse::Selection::Selection* temp2 = ::g::Fuse::Selection::Selection::New2();
    temp2_Value_inst = ::g::EventApp_FuseSelectionSelection_Value_Property::New1(temp2, ClubPage::__selector0());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"current"*/]);
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::EventApp_FuseReactiveEach_Items_Property::New1(temp3, ClubPage::__selector2());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"places"*/]);
    ::g::Fuse::Reactive::JavaScript* temp9 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp10 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::iOS::StatusBarConfig* temp11 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Drawing::LinearGradient* temp12 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp13 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp14 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp16 = ::g::Fuse::Controls::Grid::New4();
    detailsImagePanel = ::g::Fuse::Controls::Panel::New3();
    detailsPlacesPanel = ::g::Fuse::Controls::Panel::New3();
    detailsInfoPanel = ::g::Fuse::Controls::Panel::New3();
    detailsFactsPanel = ::g::Fuse::Controls::Panel::New3();
    topBar = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StatusBarBackground* temp18 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    ::g::Fuse::Animations::Move* temp22 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    citiesPageControl = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<bool>*/], sw_UserScroll_inst);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp7, __g_nametable1, 2);
    ClubPage__Template* topItem = ClubPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp8, __g_nametable1, 3);
    temp9->LineNumber(3);
    temp9->FileName(::STRINGS[16/*"ClubPage.ux"*/]);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::MainView30f4e31b()));
    temp10->Rows(::STRINGS[17/*"auto,1*"*/]);
    temp10->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), topBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp11->Style(1);
    temp12->StartPoint(::g::Uno::Float2__New2(0.0f, 0.0f));
    temp12->EndPoint(::g::Uno::Float2__New2(0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp14);
    temp13->Offset(0.0f);
    temp13->Color(::g::Uno::Float4__New2(0.6156863f, 0.6352941f, 0.6901961f, 1.0f));
    temp14->Offset(1.0f);
    temp14->Color(::g::Uno::Float4__New2(0.145098f, 0.1647059f, 0.2156863f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp15, 0);
    ::g::Fuse::Controls::Grid::SetRowSpan(temp15, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->Rows(::STRINGS[18/*"3*,180,3*"*/]);
    temp16->Columns(::STRINGS[19/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsImagePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsPlacesPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsInfoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsFactsPanel);
    uPtr(detailsImagePanel)->Name(ClubPage::__selector3());
    ::g::Fuse::Controls::Grid::SetRow(detailsImagePanel, 0);
    ::g::Fuse::Controls::Grid::SetColumn(detailsImagePanel, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(detailsImagePanel, 2);
    uPtr(detailsPlacesPanel)->Name(ClubPage::__selector4());
    ::g::Fuse::Controls::Grid::SetRow(detailsPlacesPanel, 1);
    ::g::Fuse::Controls::Grid::SetColumn(detailsPlacesPanel, 0);
    uPtr(detailsInfoPanel)->Name(ClubPage::__selector5());
    ::g::Fuse::Controls::Grid::SetRow(detailsInfoPanel, 1);
    ::g::Fuse::Controls::Grid::SetColumn(detailsInfoPanel, 1);
    uPtr(detailsFactsPanel)->Name(ClubPage::__selector6());
    ::g::Fuse::Controls::Grid::SetRow(detailsFactsPanel, 2);
    ::g::Fuse::Controls::Grid::SetColumn(detailsFactsPanel, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(detailsFactsPanel, 2);
    uPtr(topBar)->Color(::g::Uno::Float4__New2(0.3647059f, 0.3882353f, 0.4509804f, 1.0f));
    uPtr(topBar)->Name(ClubPage::__selector7());
    ::g::Fuse::Controls::Grid::SetRow(topBar, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp17->Color(::g::Uno::Float4__New2(0.3647059f, 0.3882353f, 0.4509804f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp19->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Value(::STRINGS[20/*"Clubs"*/]);
    temp20->FontSize(20.0f);
    temp20->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Alignment(8);
    temp20->Margin(::g::Uno::Float4__New2(35.0f, 0.0f, 35.0f, 0.0f));
    temp21->Alignment(1);
    temp21->Margin(::g::Uno::Float4__New2(5.0f, 30.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::back76704e09()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp22->Y(-1.0f);
    temp22->Duration(0.3);
    temp22->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Fuse::Controls::Grid::SetRow(temp24, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), citiesPageControl);
    uPtr(citiesPageControl)->ClipToBounds(false);
    uPtr(citiesPageControl)->Name(ClubPage::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(citiesPageControl)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(citiesPageControl)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), sw);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(true));
    uPtr(sw)->UserScroll(false);
    uPtr(sw)->ClipToBounds(false);
    uPtr(sw)->Name(ClubPage::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sw)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp27->HitTestMode(6);
    temp27->Opacity(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->MinCount(0);
    temp2->MaxCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Template>*/]), topItem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), detailsImagePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), detailsPlacesPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), detailsInfoPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), detailsFactsPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), topBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), citiesPageControl);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), sw);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public ClubPage New(Fuse.Navigation.Router router) [static] :108
ClubPage* ClubPage::New5(::g::Fuse::Navigation::Router* router1)
{
    ClubPage* obj1 = (ClubPage*)uNew(ClubPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
