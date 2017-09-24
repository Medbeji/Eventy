// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/Sidebar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-eb648b08.h>
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
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
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
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[19];
static uType* TYPES[7];

namespace g{

// public partial sealed class Sidebar :2
// {
// static Sidebar() :28
static void Sidebar__cctor_4_fn(uType* __type)
{
    Sidebar::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[0/*"user"*/], ::STRINGS[1/*"stats"*/], ::STRINGS[2/*"browser"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"temp_eb1"*/], ::STRINGS[5/*"chat"*/], ::STRINGS[6/*"feed"*/], ::STRINGS[7/*"temp_eb2"*/], ::STRINGS[8/*"temp_eb3"*/]);
    Sidebar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Value"*/]);
    Sidebar::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"user"*/]);
    Sidebar::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"stats"*/]);
    Sidebar::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"browser"*/]);
    Sidebar::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"chat"*/]);
    Sidebar::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"feed"*/]);
}

static void Sidebar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("user");
    ::STRINGS[1] = uString::Const("stats");
    ::STRINGS[2] = uString::Const("browser");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("chat");
    ::STRINGS[6] = uString::Const("feed");
    ::STRINGS[7] = uString::Const("temp_eb2");
    ::STRINGS[8] = uString::Const("temp_eb3");
    ::STRINGS[9] = uString::Const("Value");
    ::STRINGS[10] = uString::Const("username");
    ::STRINGS[11] = uString::Const("numberOfEvents");
    ::STRINGS[12] = uString::Const("numberOfClubs");
    ::STRINGS[13] = uString::Const("goToClubs");
    ::STRINGS[14] = uString::Const("signedOut");
    ::STRINGS[15] = uString::Const("Events");
    ::STRINGS[16] = uString::Const("Clubs");
    ::STRINGS[17] = uString::Const("Preferences");
    ::STRINGS[18] = uString::Const("Sign Out");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Sidebar, __g_nametable1), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, browser), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, chat), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, feed), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::Sidebar, stats), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Sidebar, temp_eb3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Sidebar, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Sidebar, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Sidebar, temp2_Value_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::Sidebar, user), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Sidebar::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Sidebar::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Sidebar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 122;
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

// public Sidebar() :32
void Sidebar__ctor_8_fn(Sidebar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :36
void Sidebar__InitializeUX_fn(Sidebar* __this)
{
    __this->InitializeUX();
}

// public Sidebar New() :32
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
::g::Uno::UX::Selector Sidebar::__selector5_;

// public Sidebar() [instance] :32
void Sidebar::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :36
void Sidebar::InitializeUX()
{
    ::g::Username* temp = ::g::Username::New4();
    temp_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp, Sidebar::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"username"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Sidebar::__g_static_nametable1());
    ::g::Stats* temp1 = ::g::Stats::New4();
    temp1_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp1, Sidebar::__selector0());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"numberOfEve...*/]);
    ::g::Stats* temp2 = ::g::Stats::New4();
    temp2_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp2, Sidebar::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"numberOfClubs"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goToClubs"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goToClubs"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"signedOut"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"signedOut"*/]);
    ::g::Fuse::Navigation::WhileInactive* temp10 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Move* temp11 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp12 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp13 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp16 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5647059f, 0.5803922f, 0.5960785f, 1.0f));
    user = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp19 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp20 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable1, 3);
    stats = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Relations* temp24 = ::g::Relations::New4();
    ::g::Fuse::Controls::Rectangle* temp25 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp26 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Relations* temp29 = ::g::Relations::New4();
    ::g::Fuse::Controls::StackPanel* temp30 = ::g::Fuse::Controls::StackPanel::New4();
    browser = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp31 = ::g::SidebarIcon::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Controls::Button* temp32 = ::g::Fuse::Controls::Button::New5();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    chat = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp33 = ::g::SidebarIcon::New4();
    ::g::Fuse::Controls::Button* temp34 = ::g::Fuse::Controls::Button::New5();
    feed = ::g::Fuse::Controls::StackPanel::New4();
    ::g::SidebarIcon* temp35 = ::g::SidebarIcon::New4();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Controls::Button* temp36 = ::g::Fuse::Controls::Button::New5();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9, __g_nametable1);
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1294118f, 0.1568628f, 0.1921569f, 1.0f));
    temp10->Threshold(0.4f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    temp11->X(-180.0f);
    temp11->Duration(0.2);
    temp11->Delay(0.3);
    temp11->Target(user);
    temp11->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp12->X(-180.0f);
    temp12->Duration(0.2);
    temp12->Delay(0.2);
    temp12->Target(stats);
    temp12->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp13->X(-180.0f);
    temp13->Duration(0.2);
    temp13->Delay(0.15);
    temp13->Target(browser);
    temp13->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp14->X(-180.0f);
    temp14->Duration(0.2);
    temp14->Delay(0.1);
    temp14->Target(feed);
    temp14->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp15->X(-180.0f);
    temp15->Duration(0.2);
    temp15->Delay(0.05);
    temp15->Target(chat);
    temp15->Easing(::g::Fuse::Animations::Easing::CircularIn());
    temp16->Background(temp17);
    uPtr(user)->Name(Sidebar::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp18->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp19->Width(::g::Uno::UX::Size__New1(85.0f, 1));
    temp19->Height(::g::Uno::UX::Size__New1(85.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp20);
    temp20->WrapMode(1);
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::avatar94d45bd7()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    uPtr(stats)->ColumnCount(3);
    uPtr(stats)->Alignment(2);
    uPtr(stats)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 15.0f));
    uPtr(stats)->Name(Sidebar::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp22->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    temp24->Value(::STRINGS[15/*"Events"*/]);
    temp25->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp25->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp26);
    temp26->Color(::g::Uno::Float4__New2(0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    temp27->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->Value(::STRINGS[16/*"Clubs"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), chat);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), feed);
    uPtr(browser)->Name(Sidebar::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp31, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Browser2a447af0()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp32->Text(::STRINGS[16/*"Clubs"*/]);
    temp32->Margin(::g::Uno::Float4__New2(0.1f, 0.1f, 0.1f, 0.1f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp32, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    uPtr(chat)->Name(Sidebar::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp33->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Chata5ea6e80()));
    temp34->Text(::STRINGS[17/*"Preferences"*/]);
    temp34->Margin(::g::Uno::Float4__New2(0.1f, 0.1f, 0.1f, 0.1f));
    uPtr(feed)->Name(Sidebar::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp35, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Feed8fa7466a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp36->Text(::STRINGS[18/*"Sign Out"*/]);
    temp36->Margin(::g::Uno::Float4__New2(0.1f, 0.1f, 0.1f, 0.1f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp36, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), chat);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), feed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    Background(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
}

// public Sidebar New() [static] :32
Sidebar* Sidebar::New5()
{
    Sidebar* obj1 = (Sidebar*)uNew(Sidebar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
