// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

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
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileStringTest.h>
#include <Fuse.Visual.h>
#include <Outracks.Simulator.Cl-1b215019.h>
#include <Outracks.Simulator.Cl-b47ea6ce.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[5];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{
namespace Dialogs{

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// public partial sealed class LoadingScreen :78
// {
// static LoadingScreen() :117
static void LoadingScreen__cctor_4_fn(uType* __type)
{
    LoadingScreen::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    LoadingScreen::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    LoadingScreen::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Header"*/]);
    LoadingScreen::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Message"*/]);
}

static void LoadingScreen_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Header");
    ::STRINGS[2] = uString::Const("Message");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(105,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, __g_nametable1), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, _field_Header), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, _field_Message), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, this_Header_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::LoadingScreen, this_Message_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Header", NULL, (void*)LoadingScreen__get_Header_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Header", NULL, (void*)LoadingScreen__set_Header_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Message", NULL, (void*)LoadingScreen__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Message", NULL, (void*)LoadingScreen__set_Message_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)LoadingScreen__New4_fn, 0, true, type, 0),
        new uFunction("SetHeader", NULL, (void*)LoadingScreen__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetMessage", NULL, (void*)LoadingScreen__SetMessage_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* LoadingScreen_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 116;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(LoadingScreen);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.Client.Dialogs.LoadingScreen", options);
    type->fp_build_ = LoadingScreen_build;
    type->fp_ctor_ = (void*)LoadingScreen__New4_fn;
    type->fp_cctor_ = LoadingScreen__cctor_4_fn;
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

// public LoadingScreen() :121
void LoadingScreen__ctor_7_fn(LoadingScreen* __this)
{
    __this->ctor_7();
}

// public string get_Header() :84
void LoadingScreen__get_Header_fn(LoadingScreen* __this, uString** __retval)
{
    *__retval = __this->Header();
}

// public void set_Header(string value) :85
void LoadingScreen__set_Header_fn(LoadingScreen* __this, uString* value)
{
    __this->Header(value);
}

// private void InitializeUX() :125
void LoadingScreen__InitializeUX_fn(LoadingScreen* __this)
{
    __this->InitializeUX();
}

// public string get_Message() :99
void LoadingScreen__get_Message_fn(LoadingScreen* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public void set_Message(string value) :100
void LoadingScreen__set_Message_fn(LoadingScreen* __this, uString* value)
{
    __this->Message(value);
}

// public LoadingScreen New() :121
void LoadingScreen__New4_fn(LoadingScreen** __retval)
{
    *__retval = LoadingScreen::New4();
}

// public void SetHeader(string value, Uno.UX.IPropertyListener origin) :87
void LoadingScreen__SetHeader_fn(LoadingScreen* __this, uString* value, uObject* origin)
{
    __this->SetHeader(value, origin);
}

// public void SetMessage(string value, Uno.UX.IPropertyListener origin) :102
void LoadingScreen__SetMessage_fn(LoadingScreen* __this, uString* value, uObject* origin)
{
    __this->SetMessage(value, origin);
}

uSStrong<uArray*> LoadingScreen::__g_static_nametable1_;
::g::Uno::UX::Selector LoadingScreen::__selector0_;
::g::Uno::UX::Selector LoadingScreen::__selector1_;
::g::Uno::UX::Selector LoadingScreen::__selector2_;

// public LoadingScreen() [instance] :121
void LoadingScreen::ctor_7()
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public string get_Header() [instance] :84
uString* LoadingScreen::Header()
{
    return _field_Header;
}

// public void set_Header(string value) [instance] :85
void LoadingScreen::Header(uString* value)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", "set_Header(string)");
    SetHeader(value, NULL);
}

// private void InitializeUX() [instance] :125
void LoadingScreen::InitializeUX()
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", "InitializeUX()");
    ::g::Fuse::Reactive::This* temp2 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(temp, LoadingScreen::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton());
    this_Header_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Header_Property::New1(this, LoadingScreen::__selector1());
    this_Message_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsLoadingScreen_Message_Property::New1(this, LoadingScreen::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, LoadingScreen::__g_static_nametable1());
    ::g::Fuse::Reactive::This* temp4 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(temp1, LoadingScreen::__selector0());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton());
    ::g::Fuse::Controls::StackPanel* temp6 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    temp6->Alignment(10);
    temp6->Padding(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->TextWrapping(1);
    temp->FontSize(40.0f);
    temp->TextAlignment(1);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp1->TextWrapping(1);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Header_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Message_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public string get_Message() [instance] :99
uString* LoadingScreen::Message()
{
    return _field_Message;
}

// public void set_Message(string value) [instance] :100
void LoadingScreen::Message(uString* value)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", "set_Message(string)");
    SetMessage(value, NULL);
}

// public void SetHeader(string value, Uno.UX.IPropertyListener origin) [instance] :87
void LoadingScreen::SetHeader(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", "SetHeader(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Header))
    {
        _field_Header = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Header"*/]), origin);
    }
}

// public void SetMessage(string value, Uno.UX.IPropertyListener origin) [instance] :102
void LoadingScreen::SetMessage(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.LoadingScreen", "SetMessage(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Message))
    {
        _field_Message = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Message"*/]), origin);
    }
}

// public LoadingScreen New() [static] :121
LoadingScreen* LoadingScreen::New4()
{
    LoadingScreen* obj1 = (LoadingScreen*)uNew(LoadingScreen_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// public partial sealed class ModalDialog :170
// {
// static ModalDialog() :229
static void ModalDialog__cctor_4_fn(uType* __type)
{
    ModalDialog::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[3/*"ButtonGrid"*/]);
    ModalDialog::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    ModalDialog::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Header"*/]);
    ModalDialog::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Body"*/]);
    ModalDialog::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Details"*/]);
    ModalDialog::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ButtonGrid"*/]);
}

static void ModalDialog_build(uType* type)
{
    ::STRINGS[3] = uString::Const("ButtonGrid");
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Header");
    ::STRINGS[4] = uString::Const("Body");
    ::STRINGS[5] = uString::Const("Details");
    ::STRINGS[6] = uString::Const("1*,auto");
    ::STRINGS[7] = uString::Const("1*,1*,2*");
    ::STRINGS[8] = uString::Const("auto");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(105,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, __g_nametable1), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, _field_Body), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, _field_Details), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, _field_Header), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, ButtonGrid), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, this_Body_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, this_Details_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Outracks::Simulator::Client::Dialogs::ModalDialog, this_Header_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Outracks::Simulator::Client::Dialogs::ModalDialog::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Body", NULL, (void*)ModalDialog__get_Body_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Body", NULL, (void*)ModalDialog__set_Body_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Details", NULL, (void*)ModalDialog__get_Details_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Details", NULL, (void*)ModalDialog__set_Details_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Header", NULL, (void*)ModalDialog__get_Header_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Header", NULL, (void*)ModalDialog__set_Header_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ModalDialog__New4_fn, 0, true, type, 0),
        new uFunction("SetBody", NULL, (void*)ModalDialog__SetBody_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetDetails", NULL, (void*)ModalDialog__SetDetails_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHeader", NULL, (void*)ModalDialog__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* ModalDialog_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(ModalDialog);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.Client.Dialogs.ModalDialog", options);
    type->fp_build_ = ModalDialog_build;
    type->fp_ctor_ = (void*)ModalDialog__New4_fn;
    type->fp_cctor_ = ModalDialog__cctor_4_fn;
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

// public ModalDialog() :233
void ModalDialog__ctor_7_fn(ModalDialog* __this)
{
    __this->ctor_7();
}

// public string get_Body() :191
void ModalDialog__get_Body_fn(ModalDialog* __this, uString** __retval)
{
    *__retval = __this->Body();
}

// public void set_Body(string value) :192
void ModalDialog__set_Body_fn(ModalDialog* __this, uString* value)
{
    __this->Body(value);
}

// public string get_Details() :206
void ModalDialog__get_Details_fn(ModalDialog* __this, uString** __retval)
{
    *__retval = __this->Details();
}

// public void set_Details(string value) :207
void ModalDialog__set_Details_fn(ModalDialog* __this, uString* value)
{
    __this->Details(value);
}

// public string get_Header() :176
void ModalDialog__get_Header_fn(ModalDialog* __this, uString** __retval)
{
    *__retval = __this->Header();
}

// public void set_Header(string value) :177
void ModalDialog__set_Header_fn(ModalDialog* __this, uString* value)
{
    __this->Header(value);
}

// private void InitializeUX() :237
void ModalDialog__InitializeUX_fn(ModalDialog* __this)
{
    __this->InitializeUX();
}

// public ModalDialog New() :233
void ModalDialog__New4_fn(ModalDialog** __retval)
{
    *__retval = ModalDialog::New4();
}

// public void SetBody(string value, Uno.UX.IPropertyListener origin) :194
void ModalDialog__SetBody_fn(ModalDialog* __this, uString* value, uObject* origin)
{
    __this->SetBody(value, origin);
}

// public void SetDetails(string value, Uno.UX.IPropertyListener origin) :209
void ModalDialog__SetDetails_fn(ModalDialog* __this, uString* value, uObject* origin)
{
    __this->SetDetails(value, origin);
}

// public void SetHeader(string value, Uno.UX.IPropertyListener origin) :179
void ModalDialog__SetHeader_fn(ModalDialog* __this, uString* value, uObject* origin)
{
    __this->SetHeader(value, origin);
}

uSStrong<uArray*> ModalDialog::__g_static_nametable1_;
::g::Uno::UX::Selector ModalDialog::__selector0_;
::g::Uno::UX::Selector ModalDialog::__selector1_;
::g::Uno::UX::Selector ModalDialog::__selector2_;
::g::Uno::UX::Selector ModalDialog::__selector3_;
::g::Uno::UX::Selector ModalDialog::__selector4_;

// public ModalDialog() [instance] :233
void ModalDialog::ctor_7()
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public string get_Body() [instance] :191
uString* ModalDialog::Body()
{
    return _field_Body;
}

// public void set_Body(string value) [instance] :192
void ModalDialog::Body(uString* value)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "set_Body(string)");
    SetBody(value, NULL);
}

// public string get_Details() [instance] :206
uString* ModalDialog::Details()
{
    return _field_Details;
}

// public void set_Details(string value) [instance] :207
void ModalDialog::Details(uString* value)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "set_Details(string)");
    SetDetails(value, NULL);
}

// public string get_Header() [instance] :176
uString* ModalDialog::Header()
{
    return _field_Header;
}

// public void set_Header(string value) [instance] :177
void ModalDialog::Header(uString* value)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "set_Header(string)");
    SetHeader(value, NULL);
}

// private void InitializeUX() [instance] :237
void ModalDialog::InitializeUX()
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "InitializeUX()");
    ::g::Fuse::Reactive::This* temp4 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(temp, ModalDialog::__selector0());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton());
    this_Header_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Header_Property::New1(this, ModalDialog::__selector1());
    this_Body_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Body_Property::New1(this, ModalDialog::__selector2());
    this_Details_inst = ::g::OutracksSimulatorClientUno_OutracksSimulatorClientDialogsModalDialog_Details_Property::New1(this, ModalDialog::__selector3());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ModalDialog::__g_static_nametable1());
    ::g::Fuse::Reactive::This* temp6 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(temp1, ModalDialog::__selector0());
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton());
    ::g::Fuse::Reactive::This* temp8 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(temp2, ModalDialog::__selector0());
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton());
    ::g::Fuse::Reactive::This* temp10 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Triggers::WhileString* temp3 = ::g::Fuse::Triggers::WhileString::New2();
    temp3_Value_inst = ::g::OutracksSimulatorClientUno_FuseTriggersWhileString_Value_Property::New1(temp3, ModalDialog::__selector0());
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp10, ::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton());
    ::g::Fuse::Controls::ClientPanel* temp12 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Grid* temp13 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp15 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp18 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp21 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::ScrollView* temp22 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp23 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp11, __g_nametable1, 3);
    ButtonGrid = ::g::Fuse::Controls::Grid::New4();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->Rows(::STRINGS[6/*"1*,auto"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), ButtonGrid);
    temp14->Rows(::STRINGS[7/*"1*,1*,2*"*/]);
    temp14->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::OutracksSimulatorClientUno_bundle::fight90e57290()));
    temp->TextWrapping(1);
    temp->FontSize(25.0f);
    temp->TextAlignment(1);
    temp->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp1->TextWrapping(1);
    temp1->FontSize(15.0f);
    temp1->TextAlignment(0);
    temp1->Alignment(2);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Test(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp22->AllowedScrollDirections(3);
    temp22->MaxHeight(::g::Uno::UX::Size__New1(200.0f, 1));
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->FontSize(10.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    uPtr(ButtonGrid)->DefaultRow(::STRINGS[8/*"auto"*/]);
    uPtr(ButtonGrid)->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    uPtr(ButtonGrid)->Name(ModalDialog::__selector4());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), ButtonGrid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Header_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Body_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Details_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public void SetBody(string value, Uno.UX.IPropertyListener origin) [instance] :194
void ModalDialog::SetBody(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "SetBody(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Body))
    {
        _field_Body = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Body"*/]), origin);
    }
}

// public void SetDetails(string value, Uno.UX.IPropertyListener origin) [instance] :209
void ModalDialog::SetDetails(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "SetDetails(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Details))
    {
        _field_Details = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Details"*/]), origin);
    }
}

// public void SetHeader(string value, Uno.UX.IPropertyListener origin) [instance] :179
void ModalDialog::SetHeader(uString* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Client.Dialogs.ModalDialog", "SetHeader(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Header))
    {
        _field_Header = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Header"*/]), origin);
    }
}

// public ModalDialog New() [static] :233
ModalDialog* ModalDialog::New4()
{
    ModalDialog* obj1 = (ModalDialog*)uNew(ModalDialog_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}}}} // ::g::Outracks::Simulator::Client::Dialogs
