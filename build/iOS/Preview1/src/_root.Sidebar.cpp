// This file was generated based on /Users/medbeji/Documents/event-app/event-app/build/iOS/Preview1/cache/ux11/Sidebar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.MenuLabel.h>
#include <_root.Relations.h>
#include <_root.Sidebar.h>
#include <_root.SidebarIcon.h>
#include <_root.Stats.h>
#include <_root.Username.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[16];
static uType* TYPES[7];

namespace g{

// public partial sealed class Sidebar :2
// {
// static Sidebar() :21
static void Sidebar__cctor_4_fn(uType* __type)
{
    Sidebar::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"user"*/], ::STRINGS[1/*"stats"*/], ::STRINGS[2/*"browser"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"feed"*/], ::STRINGS[5/*"temp_eb1"*/], ::STRINGS[6/*"chat"*/]);
    Sidebar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"user"*/]);
    Sidebar::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"stats"*/]);
    Sidebar::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"browser"*/]);
    Sidebar::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"feed"*/]);
    Sidebar::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"chat"*/]);
}

static void Sidebar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("user");
    ::STRINGS[1] = uString::Const("stats");
    ::STRINGS[2] = uString::Const("browser");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("feed");
    ::STRINGS[5] = uString::Const("temp_eb1");
    ::STRINGS[6] = uString::Const("chat");
    ::STRINGS[7] = uString::Const("goToClubs");
    ::STRINGS[8] = uString::Const("signedOut");
    ::STRINGS[9] = uString::Const("Nour Besbes");
    ::STRINGS[10] = uString::Const("70");
    ::STRINGS[11] = uString::Const("Events");
    ::STRINGS[12] = uString::Const("40");
    ::STRINGS[13] = uString::Const("Clubs");
    ::STRINGS[14] = uString::Const("SignOut");
    ::STRINGS[15] = uString::Const("Text");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Sidebar, __g_nametable1), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, browser), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, chat), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, feed), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::Sidebar, stats), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb1), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, user), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Sidebar::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sidebar__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* Sidebar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Sidebar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Sidebar", options);
    type->fp_build_ = Sidebar_build;
    type->fp_ctor_ = (void*)Sidebar__New5_fn;
    type->fp_cctor_ = Sidebar__cctor_4_fn;
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

// public Sidebar() :25
void Sidebar__ctor_8_fn(Sidebar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :29
void Sidebar__InitializeUX_fn(Sidebar* __this)
{
    __this->InitializeUX();
}

// public Sidebar New() :25
void Sidebar__New5_fn(Sidebar** __retval)
{
    *__retval = Sidebar::New5();
}

uSStrong<uArray*> Sidebar::__g_static_nametable1_;
::g::Uno::UX::Selector Sidebar::__selector0_;
::g::Uno::UX::Selector Sidebar::__selector1_;
::g::Uno::UX::Selector Sidebar::__selector2_;
::g::Uno::UX::Selector Sidebar::__selector3_;
::g::Uno::UX::Selector Sidebar::__selector4_;

// public Sidebar() [instance] :25
void Sidebar::ctor_8()
{
    uStackFrame __("Sidebar", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void Sidebar::InitializeUX()
{
    uStackFrame __("Sidebar", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"goToClubs"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Sidebar::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"signedOut"*/]);
    ::g::Fuse::Navigation::WhileInactive* temp2 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp4 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp5 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp6 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp7 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp8 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5647059f, 0.5803922f, 0.5960785f, 1.0f));
    user = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp11 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp12 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Username* temp13 = ::g::Username::New4();
    stats = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Stats* temp15 = ::g::Stats::New4();
    ::g::Relations* temp16 = ::g::Relations::New4();
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp18 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Stats* temp20 = ::g::Stats::New4();
    ::g::Relations* temp21 = ::g::Relations::New4();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    browser = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp23 = ::g::SidebarIcon::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp, __g_nametable1);
    ::g::MenuLabel* temp24 = ::g::MenuLabel::New4();
    feed = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp25 = ::g::SidebarIcon::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1, __g_nametable1);
    ::g::MenuLabel* temp26 = ::g::MenuLabel::New4();
    chat = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp27 = ::g::SidebarIcon::New4();
    ::g::MenuLabel* temp28 = ::g::MenuLabel::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp29 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1294118f, 0.1568628f, 0.1921569f, 1.0f));
    Orientation(1);
    Alignment(1);
    temp2->Threshold(0.4f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    temp3->X(-180.0f);
    temp3->Duration(0.2);
    temp3->Delay(0.3);
    temp3->Target(user);
    temp3->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp4->X(-180.0f);
    temp4->Duration(0.2);
    temp4->Delay(0.2);
    temp4->Target(stats);
    temp4->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp5->X(-180.0f);
    temp5->Duration(0.2);
    temp5->Delay(0.15);
    temp5->Target(browser);
    temp5->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp6->X(-180.0f);
    temp6->Duration(0.2);
    temp6->Delay(0.1);
    temp6->Target(feed);
    temp6->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp7->X(-180.0f);
    temp7->Duration(0.2);
    temp7->Delay(0.05);
    temp7->Target(chat);
    temp7->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp8->Background(temp9);
    uPtr(user)->Name(Sidebar::__selector0());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp10->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp11->Width(::g::Uno::UX::Size__New1(85.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(85.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp12);
    temp12->WrapMode(1);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::nourf4b6f3e6()));
    temp13->Value(::STRINGS[9/*"Nour Besbes"*/]);
    uPtr(stats)->ColumnCount(3);
    uPtr(stats)->Alignment(2);
    uPtr(stats)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 15.0f));
    uPtr(stats)->Name(Sidebar::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp14->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(::STRINGS[10/*"70"*/]);
    temp16->Value(::STRINGS[11/*"Events"*/]);
    temp17->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp17->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp18);
    temp18->Color(::g::Uno::Float4__New2(0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    temp19->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Value(::STRINGS[12/*"40"*/]);
    temp21->Value(::STRINGS[13/*"Clubs"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), feed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), chat);
    uPtr(browser)->Name(Sidebar::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp23, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Browser2a447af0()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp24->Value(::STRINGS[13/*"Clubs"*/]);
    uPtr(feed)->Name(Sidebar::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp25, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Feed8fa7466a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp26->Value(::STRINGS[14/*"SignOut"*/]);
    uPtr(chat)->Name(Sidebar::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Chata5ea6e80()));
    temp28->Value(::STRINGS[15/*"Text"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), feed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), chat);
    Background(temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
}

// public Sidebar New() [static] :25
Sidebar* Sidebar::New5()
{
    Sidebar* obj1 = (Sidebar*)uNew(Sidebar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
