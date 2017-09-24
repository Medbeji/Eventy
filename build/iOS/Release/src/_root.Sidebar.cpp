// This file was generated based on '.uno/ux11/Sidebar.g.uno'.
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
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StatusBarBackground.h>
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
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[14];
static uType* TYPES[5];

namespace g{

// public partial sealed class Sidebar :2
// {
// static Sidebar() :11
static void Sidebar__cctor_4_fn(uType* __type)
{
    Sidebar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"user"*/]);
    Sidebar::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"stats"*/]);
    Sidebar::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"browser"*/]);
    Sidebar::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"feed"*/]);
    Sidebar::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"chat"*/]);
}

static void Sidebar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("user");
    ::STRINGS[1] = uString::Const("stats");
    ::STRINGS[2] = uString::Const("browser");
    ::STRINGS[3] = uString::Const("feed");
    ::STRINGS[4] = uString::Const("chat");
    ::STRINGS[5] = uString::Const("goToClubs");
    ::STRINGS[6] = uString::Const("signedOut");
    ::STRINGS[7] = uString::Const("Nour Besbes");
    ::STRINGS[8] = uString::Const("70");
    ::STRINGS[9] = uString::Const("Events");
    ::STRINGS[10] = uString::Const("40");
    ::STRINGS[11] = uString::Const("Clubs");
    ::STRINGS[12] = uString::Const("SignOut");
    ::STRINGS[13] = uString::Const("Text");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(101,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, browser), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, chat), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, feed), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::Sidebar, stats), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb1), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, user), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Sidebar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 113;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Sidebar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Sidebar", options);
    type->fp_build_ = Sidebar_build;
    type->fp_ctor_ = (void*)Sidebar__New5_fn;
    type->fp_cctor_ = Sidebar__cctor_4_fn;
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

// public Sidebar() :15
void Sidebar__ctor_8_fn(Sidebar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :19
void Sidebar__InitializeUX_fn(Sidebar* __this)
{
    __this->InitializeUX();
}

// public Sidebar New() :15
void Sidebar__New5_fn(Sidebar** __retval)
{
    *__retval = Sidebar::New5();
}

::g::Uno::UX::Selector Sidebar::__selector0_;
::g::Uno::UX::Selector Sidebar::__selector1_;
::g::Uno::UX::Selector Sidebar::__selector2_;
::g::Uno::UX::Selector Sidebar::__selector3_;
::g::Uno::UX::Selector Sidebar::__selector4_;

// public Sidebar() [instance] :15
void Sidebar::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :19
void Sidebar::InitializeUX()
{
    ::g::Fuse::Navigation::WhileInactive* temp = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Move* temp1 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp2 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp4 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp5 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp6 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5647059f, 0.5803922f, 0.5960785f, 1.0f));
    user = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp9 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp10 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Username* temp11 = ::g::Username::New4();
    stats = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp12 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Stats* temp13 = ::g::Stats::New4();
    ::g::Relations* temp14 = ::g::Relations::New4();
    ::g::Fuse::Controls::Rectangle* temp15 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp16 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Controls::StackPanel* temp17 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Stats* temp18 = ::g::Stats::New4();
    ::g::Relations* temp19 = ::g::Relations::New4();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    browser = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp21 = ::g::SidebarIcon::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"goToClubs"*/]);
    ::g::MenuLabel* temp22 = ::g::MenuLabel::New4();
    feed = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp23 = ::g::SidebarIcon::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"signedOut"*/]);
    ::g::MenuLabel* temp24 = ::g::MenuLabel::New4();
    chat = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp25 = ::g::SidebarIcon::New4();
    ::g::MenuLabel* temp26 = ::g::MenuLabel::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp27 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1294118f, 0.1568628f, 0.1921569f, 1.0f));
    temp->Threshold(0.4f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    temp1->X(-180.0f);
    temp1->Duration(0.2);
    temp1->Delay(0.3);
    temp1->Target(user);
    temp1->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp2->X(-180.0f);
    temp2->Duration(0.2);
    temp2->Delay(0.2);
    temp2->Target(stats);
    temp2->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp3->X(-180.0f);
    temp3->Duration(0.2);
    temp3->Delay(0.15);
    temp3->Target(browser);
    temp3->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp4->X(-180.0f);
    temp4->Duration(0.2);
    temp4->Delay(0.1);
    temp4->Target(feed);
    temp4->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp5->X(-180.0f);
    temp5->Duration(0.2);
    temp5->Delay(0.05);
    temp5->Target(chat);
    temp5->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp6->Background(temp7);
    uPtr(user)->Name(Sidebar::__selector0());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp8->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp9->Width(::g::Uno::UX::Size__New1(85.0f, 1));
    temp9->Height(::g::Uno::UX::Size__New1(85.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp10);
    temp10->WrapMode(1);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::nourda502f5d()));
    temp11->Value(::STRINGS[7/*"Nour Besbes"*/]);
    uPtr(stats)->ColumnCount(3);
    uPtr(stats)->Alignment(2);
    uPtr(stats)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 15.0f));
    uPtr(stats)->Name(Sidebar::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp12->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp13->Value(::STRINGS[8/*"70"*/]);
    temp14->Value(::STRINGS[9/*"Events"*/]);
    temp15->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp15->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp16);
    temp16->Color(::g::Uno::Float4__New2(0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    temp17->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp18->Value(::STRINGS[10/*"40"*/]);
    temp19->Value(::STRINGS[11/*"Clubs"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), feed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), chat);
    uPtr(browser)->Name(Sidebar::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Browsera07f5ab7()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp22->Value(::STRINGS[11/*"Clubs"*/]);
    uPtr(feed)->Name(Sidebar::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp23, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Feedc72b0039()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp24->Value(::STRINGS[12/*"SignOut"*/]);
    uPtr(chat)->Name(Sidebar::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Chatbc986799()));
    temp26->Value(::STRINGS[13/*"Text"*/]);
    Background(temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
}

// public Sidebar New() [static] :15
Sidebar* Sidebar::New5()
{
    Sidebar* obj1 = (Sidebar*)uNew(Sidebar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
