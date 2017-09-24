// This file was generated based on '.uno/ux11/HomePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseElementsElement_Opacity_Property.h>
#include <_root.EventApp_FuseElementsElement_Width_Property.h>
#include <_root.EventApp_FuseReactiveEach_Items_Property.h>
#include <_root.EventApp_FuseRotation_Degrees_Property.h>
#include <_root.EventApp_FuseTranslation_X_Property.h>
#include <_root.EventApp_FuseTranslation_Y_Property.h>
#include <_root.EventApp_FuseTriggersWhileBool_Value_Property.h>
#include <_root.HomePage.h>
#include <_root.HomePage.Template.h>
#include <_root.Sidebar.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomFrameBackground.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Rotation.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[27];
static uType* TYPES[13];

namespace g{

// public partial sealed class HomePage :2
// {
// static HomePage() :63
static void HomePage__cctor_4_fn(uType* __type)
{
    HomePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"EdgeNavigator"*/], ::STRINGS[2/*"menu"*/], ::STRINGS[3/*"content"*/], ::STRINGS[4/*"mainAppTran...*/], ::STRINGS[5/*"topRectangle"*/], ::STRINGS[6/*"topMenuTran...*/], ::STRINGS[7/*"topMenuRota...*/], ::STRINGS[8/*"middleRecta...*/], ::STRINGS[9/*"bottomRecta...*/], ::STRINGS[10/*"bottomMenuT...*/], ::STRINGS[11/*"bottomMenuR...*/]);
    HomePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"X"*/]);
    HomePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Y"*/]);
    HomePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Opacity"*/]);
    HomePage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Degrees"*/]);
    HomePage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Width"*/]);
    HomePage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Value"*/]);
    HomePage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Items"*/]);
    HomePage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"EdgeNavigator"*/]);
    HomePage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"menu"*/]);
    HomePage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"content"*/]);
    HomePage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"mainAppTran...*/]);
    HomePage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"topRectangle"*/]);
    HomePage::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"topMenuTran...*/]);
    HomePage::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"topMenuRota...*/]);
    HomePage::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"middleRecta...*/]);
    HomePage::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"bottomRecta...*/]);
    HomePage::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"bottomMenuT...*/]);
    HomePage::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"bottomMenuR...*/]);
}

static void HomePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("EdgeNavigator");
    ::STRINGS[2] = uString::Const("menu");
    ::STRINGS[3] = uString::Const("content");
    ::STRINGS[4] = uString::Const("mainAppTranslation");
    ::STRINGS[5] = uString::Const("topRectangle");
    ::STRINGS[6] = uString::Const("topMenuTranslation");
    ::STRINGS[7] = uString::Const("topMenuRotation");
    ::STRINGS[8] = uString::Const("middleRectangle");
    ::STRINGS[9] = uString::Const("bottomRectangle");
    ::STRINGS[10] = uString::Const("bottomMenuTranslation");
    ::STRINGS[11] = uString::Const("bottomMenuRotation");
    ::STRINGS[12] = uString::Const("X");
    ::STRINGS[13] = uString::Const("Y");
    ::STRINGS[14] = uString::Const("Opacity");
    ::STRINGS[15] = uString::Const("Degrees");
    ::STRINGS[16] = uString::Const("Width");
    ::STRINGS[17] = uString::Const("Value");
    ::STRINGS[18] = uString::Const("Items");
    ::STRINGS[19] = uString::Const("setSidebarOpen");
    ::STRINGS[20] = uString::Const("setSidebarClosed");
    ::STRINGS[21] = uString::Const("sidebarOpen");
    ::STRINGS[22] = uString::Const("data.responseData");
    ::STRINGS[23] = uString::Const("HomePage.ux");
    ::STRINGS[24] = uString::Const("auto,1*,auto");
    ::STRINGS[25] = uString::Const("Events");
    ::STRINGS[26] = uString::Const("Search clicked");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::HomePage, __g_nametable1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::HomePage, bottomMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, bottomMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::HomePage, bottomMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, bottomMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::HomePage, bottomRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::HomePage, bottomRectangle_Width_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::HomePage, content), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(::g::HomePage, EdgeNavigator), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::HomePage, mainAppTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, mainAppTranslation_X_inst), 0,
        ::g::Sidebar_typeof(), offsetof(::g::HomePage, menu), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::HomePage, middleRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, middleRectangle_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::HomePage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::HomePage, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::HomePage, temp_eb5), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::HomePage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::HomePage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::HomePage, temp2_Items_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::HomePage, topMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, topMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::HomePage, topMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage, topMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::HomePage, topRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::HomePage, topRectangle_Width_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::HomePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* HomePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 147;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(HomePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("HomePage", options);
    type->fp_build_ = HomePage_build;
    type->fp_cctor_ = HomePage__cctor_4_fn;
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

// public HomePage(Fuse.Navigation.Router router) :67
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :73
void HomePage__InitializeUX_fn(HomePage* __this)
{
    __this->InitializeUX();
}

// public HomePage New(Fuse.Navigation.Router router) :67
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval)
{
    *__retval = HomePage::New5(router1);
}

uSStrong<uArray*> HomePage::__g_static_nametable1_;
::g::Uno::UX::Selector HomePage::__selector0_;
::g::Uno::UX::Selector HomePage::__selector1_;
::g::Uno::UX::Selector HomePage::__selector10_;
::g::Uno::UX::Selector HomePage::__selector11_;
::g::Uno::UX::Selector HomePage::__selector12_;
::g::Uno::UX::Selector HomePage::__selector13_;
::g::Uno::UX::Selector HomePage::__selector14_;
::g::Uno::UX::Selector HomePage::__selector15_;
::g::Uno::UX::Selector HomePage::__selector16_;
::g::Uno::UX::Selector HomePage::__selector17_;
::g::Uno::UX::Selector HomePage::__selector2_;
::g::Uno::UX::Selector HomePage::__selector3_;
::g::Uno::UX::Selector HomePage::__selector4_;
::g::Uno::UX::Selector HomePage::__selector5_;
::g::Uno::UX::Selector HomePage::__selector6_;
::g::Uno::UX::Selector HomePage::__selector7_;
::g::Uno::UX::Selector HomePage::__selector8_;
::g::Uno::UX::Selector HomePage::__selector9_;

// public HomePage(Fuse.Navigation.Router router) [instance] :67
void HomePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :73
void HomePage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, HomePage::__g_static_nametable1());
    mainAppTranslation = ::g::Fuse::Translation::New2();
    mainAppTranslation_X_inst = ::g::EventApp_FuseTranslation_X_Property::New1(mainAppTranslation, HomePage::__selector0());
    topMenuTranslation = ::g::Fuse::Translation::New2();
    topMenuTranslation_Y_inst = ::g::EventApp_FuseTranslation_Y_Property::New1(topMenuTranslation, HomePage::__selector1());
    bottomMenuTranslation = ::g::Fuse::Translation::New2();
    bottomMenuTranslation_Y_inst = ::g::EventApp_FuseTranslation_Y_Property::New1(bottomMenuTranslation, HomePage::__selector1());
    middleRectangle = ::g::Fuse::Controls::Rectangle::New3();
    middleRectangle_Opacity_inst = ::g::EventApp_FuseElementsElement_Opacity_Property::New1(middleRectangle, HomePage::__selector2());
    topMenuRotation = ::g::Fuse::Rotation::New2();
    topMenuRotation_Degrees_inst = ::g::EventApp_FuseRotation_Degrees_Property::New1(topMenuRotation, HomePage::__selector3());
    bottomMenuRotation = ::g::Fuse::Rotation::New2();
    bottomMenuRotation_Degrees_inst = ::g::EventApp_FuseRotation_Degrees_Property::New1(bottomMenuRotation, HomePage::__selector3());
    topRectangle = ::g::Fuse::Controls::Rectangle::New3();
    topRectangle_Width_inst = ::g::EventApp_FuseElementsElement_Width_Property::New1(topRectangle, HomePage::__selector4());
    bottomRectangle = ::g::Fuse::Controls::Rectangle::New3();
    bottomRectangle_Width_inst = ::g::EventApp_FuseElementsElement_Width_Property::New1(bottomRectangle, HomePage::__selector4());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp, HomePage::__selector5());
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp1, HomePage::__selector5());
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::EventApp_FuseReactiveEach_Items_Property::New1(temp2, HomePage::__selector6());
    ::g::Fuse::Reactive::JavaScript* temp3 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    EdgeNavigator = ::g::Fuse::Controls::EdgeNavigator::New4();
    menu = ::g::Sidebar::New5();
    ::g::Fuse::Navigation::ActivatingAnimation* temp4 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp5 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], mainAppTranslation_X_inst);
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp8 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], middleRectangle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], topRectangle_Width_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], bottomRectangle_Width_inst);
    ::g::Fuse::Navigation::WhileActive* temp13 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp14 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[19/*"setSidebarO...*/]);
    ::g::Fuse::Navigation::WhileInactive* temp15 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp16 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[20/*"setSidebarC...*/]);
    content = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp17 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomFrameBackground* temp18 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp20 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp21 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp22 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp23 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp24 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp_Value_inst, ::STRINGS[21/*"sidebarOpen"*/]);
    ::g::Fuse::Gestures::Clicked* temp25 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp26 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp27 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp1_Value_inst, ::STRINGS[21/*"sidebarOpen"*/]);
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Font* temp29 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::AlegreyaSansBoldc140fdd0()));
    ::g::Fuse::Controls::Panel* temp30 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp31 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp32 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Circle* temp33 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp34 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Translation* temp37 = ::g::Fuse::Translation::New2();
    ::g::Fuse::Rotation* temp38 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp40 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp42 = ::g::Fuse::Controls::Panel::New3();
    HomePage__Template* temp43 = HomePage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp44 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[4/*Fuse.Reactive.DataBinding<object>*/], temp2_Items_inst, ::STRINGS[22/*"data.respon...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp45 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->LineNumber(3);
    temp3->FileName(::STRINGS[23/*"HomePage.ux"*/]);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::MainView61aa31a6()));
    uPtr(EdgeNavigator)->Name(HomePage::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), content);
    uPtr(menu)->Width(::g::Uno::UX::Size__New1(180.0f, 1));
    uPtr(menu)->Name(HomePage::__selector8());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(menu, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Fuse::Animations::Change__set_Value_fn(temp5, uCRef(180.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp8, uCRef(0.0f));
    temp8->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(45.0f));
    temp9->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(-45.0f));
    temp10->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp14->add_Handler(uDelegate::New(::TYPES[9/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp16->add_Handler(uDelegate::New(::TYPES[9/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    uPtr(content)->Name(HomePage::__selector9());
    uPtr(content)->Background(temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    uPtr(mainAppTranslation)->Name(HomePage::__selector10());
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 3);
    ::g::Fuse::Controls::DockPanel::SetDock(temp19, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp20->Columns(::STRINGS[24/*"auto,1*,auto"*/]);
    temp20->Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp21->HitTestMode(2);
    temp21->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp21->Margin(::g::Uno::Float4__New2(7.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    temp23->Target(content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp26);
    temp26->Target(menu);
    uPtr(topRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(topRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(topRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(topRectangle)->Name(HomePage::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuRotation);
    uPtr(topMenuTranslation)->Y(-9.0f);
    uPtr(topMenuTranslation)->Name(HomePage::__selector12());
    uPtr(topMenuRotation)->Name(HomePage::__selector13());
    uPtr(middleRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(middleRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(middleRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(middleRectangle)->Name(HomePage::__selector14());
    uPtr(bottomRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(bottomRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(bottomRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(bottomRectangle)->Name(HomePage::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuRotation);
    uPtr(bottomMenuTranslation)->Y(9.0f);
    uPtr(bottomMenuTranslation)->Name(HomePage::__selector16());
    uPtr(bottomMenuRotation)->Name(HomePage::__selector17());
    temp28->Value(::STRINGS[25/*"Events"*/]);
    temp28->FontSize(22.0f);
    temp28->TextAlignment(1);
    temp28->Alignment(8);
    temp28->Padding(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp28->Font(temp29);
    temp30->HitTestMode(2);
    temp30->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp30->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 7.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    temp32->Message(::STRINGS[26/*"Search clic...*/]);
    temp33->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Strokes()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp34);
    temp34->Width(2.0f);
    temp34->Brush(temp35);
    temp36->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp36->Width(::g::Uno::UX::Size__New1(7.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp37->X(8.0f);
    temp37->Y(8.0f);
    temp38->Degrees(45.0f);
    temp39->Color(::g::Uno::Float4__New2(0.2f, 0.2352941f, 0.282353f, 1.0f));
    temp39->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp42->Height(::g::Uno::UX::Size__New1(7.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[11/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), EdgeNavigator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), topMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), bottomMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), EdgeNavigator);
}

// public HomePage New(Fuse.Navigation.Router router) [static] :67
HomePage* HomePage::New5(::g::Fuse::Navigation::Router* router1)
{
    HomePage* obj1 = (HomePage*)uNew(HomePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
