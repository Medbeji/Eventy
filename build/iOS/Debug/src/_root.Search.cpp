// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/Search.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-c711eeba.h>
#include <_root.EventApp_FuseTr-466e6874.h>
#include <_root.Search.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
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
#include <Uno.UX.Unit.h>
static uString* STRINGS[11];
static uType* TYPES[10];

namespace g{

// public partial sealed class Search :2
// {
// static Search() :17
static void Search__cctor_4_fn(uType* __type)
{
    Search::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"topBar"*/], ::STRINGS[2/*"temp_eb15"*/], ::STRINGS[3/*"text"*/]);
    Search::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    Search::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"topBar"*/]);
    Search::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"text"*/]);
}

static void Search_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("topBar");
    ::STRINGS[2] = uString::Const("temp_eb15");
    ::STRINGS[3] = uString::Const("text");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("goToHome");
    ::STRINGS[6] = uString::Const("inDetailsMode");
    ::STRINGS[7] = uString::Const("Search.ux");
    ::STRINGS[8] = uString::Const("Clear");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Entrer nom d evenement");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
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
    type->SetFields(101,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Search, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Search, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Search, temp_eb15), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::Search, temp_Value_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::Search, text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Search, text_Value_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Search, topBar), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Search::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Search::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Search::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Search::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Search_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 112;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Search);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Search", options);
    type->fp_build_ = Search_build;
    type->fp_cctor_ = Search__cctor_4_fn;
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

// public Search(Fuse.Navigation.Router router) :21
void Search__ctor_7_fn(Search* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :27
void Search__InitializeUX_fn(Search* __this)
{
    __this->InitializeUX();
}

// public Search New(Fuse.Navigation.Router router) :21
void Search__New4_fn(::g::Fuse::Navigation::Router* router1, Search** __retval)
{
    *__retval = Search::New4(router1);
}

uSStrong<uArray*> Search::__g_static_nametable1_;
::g::Uno::UX::Selector Search::__selector0_;
::g::Uno::UX::Selector Search::__selector1_;
::g::Uno::UX::Selector Search::__selector2_;

// public Search(Fuse.Navigation.Router router) [instance] :21
void Search::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :27
void Search::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Search::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"goToHome"*/]);
    text = ::g::Fuse::Controls::TextInput::New3();
    text_Value_inst = ::g::EventApp_FuseControlsTextInputControl_Value_Property::New1(text, Search::__selector0());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::EventApp_FuseTriggersWhileBool_Value_Property::New1(temp, Search::__selector0());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"inDetailsMode"*/]);
    ::g::Fuse::Reactive::JavaScript* temp3 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    topBar = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StatusBarBackground* temp5 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1, __g_nametable1);
    ::g::Fuse::Controls::Button* temp8 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp9 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp10 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<string>*/], text_Value_inst);
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp12 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, __g_nametable1, 3);
    ::g::Fuse::Drawing::LinearGradient* temp16 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp17 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp18 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::Shadow* temp19 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Controls::Shadow* temp20 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9686275f, 0.9607843f, 0.9607843f, 0.1215686f));
    temp3->LineNumber(3);
    temp3->FileName(::STRINGS[7/*"Search.ux"*/]);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::MainView30f4e31b()));
    uPtr(topBar)->Color(::g::Uno::Float4__New2(0.9960784f, 0.9960784f, 0.9960784f, 0.1490196f));
    uPtr(topBar)->Visibility(0);
    uPtr(topBar)->Opacity(1.0f);
    uPtr(topBar)->Name(Search::__selector1());
    ::g::Fuse::Controls::Grid::SetRow(topBar, 0);
    uPtr(topBar)->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topBar)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp4->Color(::g::Uno::Float4__New2(0.145098f, 0.1647059f, 0.2156863f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp6->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    temp7->Alignment(1);
    temp7->Margin(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp7, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::back3ac8b5fd()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp8->Text(::STRINGS[8/*"Clear"*/]);
    temp8->Alignment(11);
    temp8->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp10, ::STRINGS[9/*""*/]);
    uPtr(text)->PlaceholderText(::STRINGS[10/*"Entrer nom ...*/]);
    uPtr(text)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(text)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(text)->Alignment(6);
    uPtr(text)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(text)->Name(Search::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(text)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Strokes()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp12);
    temp12->Width(2.0f);
    temp12->Brush(temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp14->Y(-1.0f);
    temp14->Duration(0.3);
    temp14->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Stops()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Stops()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp18);
    temp17->Offset(0.0f);
    temp17->Color(::g::Uno::Float4__New2(0.9568627f, 0.972549f, 0.9568627f, 1.0f));
    temp18->Offset(1.0f);
    temp18->Color(::g::Uno::Float4__New2(0.6862745f, 0.8509804f, 0.8862745f, 1.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), topBar);
}

// public Search New(Fuse.Navigation.Router router) [static] :21
Search* Search::New4(::g::Fuse::Navigation::Router* router1)
{
    Search* obj1 = (Search*)uNew(Search_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
