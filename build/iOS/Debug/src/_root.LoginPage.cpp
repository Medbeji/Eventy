// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/LoginPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-c711eeba.h>
#include <_root.LoginPage.h>
#include <Basic.TextInput.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[5];

namespace g{

// public partial sealed class LoginPage :2
// {
// static LoginPage() :21
static void LoginPage__cctor_4_fn(uType* __type)
{
    LoginPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"userEmailLo...*/], ::STRINGS[2/*"passwordLogin"*/], ::STRINGS[3/*"temp_eb12"*/], ::STRINGS[4/*"temp_eb13"*/], ::STRINGS[5/*"temp_eb14"*/]);
    LoginPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    LoginPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"userEmailLo...*/]);
    LoginPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"passwordLogin"*/]);
}

static void LoginPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("userEmailLogin");
    ::STRINGS[2] = uString::Const("passwordLogin");
    ::STRINGS[3] = uString::Const("temp_eb12");
    ::STRINGS[4] = uString::Const("temp_eb13");
    ::STRINGS[5] = uString::Const("temp_eb14");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("userEmail");
    ::STRINGS[8] = uString::Const("userPassword");
    ::STRINGS[9] = uString::Const("Login");
    ::STRINGS[10] = uString::Const("postData");
    ::STRINGS[11] = uString::Const("goToSignUpPage");
    ::STRINGS[12] = uString::Const("LoginPage.ux");
    ::STRINGS[13] = uString::Const("1*,1*,1*");
    ::STRINGS[14] = uString::Const("Email Address");
    ::STRINGS[15] = uString::Const("Password");
    ::STRINGS[16] = uString::Const("Sign in with Facebook |");
    ::STRINGS[17] = uString::Const(" Sign Up");
    ::STRINGS[18] = uString::Const("By using our app,you agree to the Terms,Cookie Policy and");
    ::STRINGS[19] = uString::Const("Privacy Policy");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
    type->SetFields(107,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::LoginPage, __g_nametable1), 0,
        ::g::Basic::TextInput_typeof(), offsetof(::g::LoginPage, passwordLogin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, passwordLogin_Value_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::LoginPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb14), 0,
        ::g::Basic::TextInput_typeof(), offsetof(::g::LoginPage, userEmailLogin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, userEmailLogin_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::LoginPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* LoginPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(LoginPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("LoginPage", options);
    type->fp_build_ = LoginPage_build;
    type->fp_cctor_ = LoginPage__cctor_4_fn;
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

// public LoginPage(Fuse.Navigation.Router router) :25
void LoginPage__ctor_8_fn(LoginPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :31
void LoginPage__InitializeUX_fn(LoginPage* __this)
{
    __this->InitializeUX();
}

// public LoginPage New(Fuse.Navigation.Router router) :25
void LoginPage__New5_fn(::g::Fuse::Navigation::Router* router1, LoginPage** __retval)
{
    *__retval = LoginPage::New5(router1);
}

uSStrong<uArray*> LoginPage::__g_static_nametable1_;
::g::Uno::UX::Selector LoginPage::__selector0_;
::g::Uno::UX::Selector LoginPage::__selector1_;
::g::Uno::UX::Selector LoginPage::__selector2_;

// public LoginPage(Fuse.Navigation.Router router) [instance] :25
void LoginPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :31
void LoginPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, LoginPage::__g_static_nametable1());
    userEmailLogin = ::g::Basic::TextInput::New4();
    userEmailLogin_Value_inst = ::g::EventApp_FuseControlsTextInputControl_Value_Property::New1(userEmailLogin, LoginPage::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"userEmail"*/]);
    passwordLogin = ::g::Basic::TextInput::New4();
    passwordLogin_Value_inst = ::g::EventApp_FuseControlsTextInputControl_Value_Property::New1(passwordLogin, LoginPage::__selector0());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"userPassword"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"Login"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"postData"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"goToSignUpP...*/]);
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp7 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp9 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp10 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(userEmailLogin_Value_inst, (uObject*)temp, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(passwordLogin_Value_inst, (uObject*)temp1, __g_nametable1, 3);
    ::g::Fuse::Controls::Button* temp13 = ::g::Fuse::Controls::Button::New5();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2, __g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp14 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp15 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp16 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Button* temp17 = ::g::Fuse::Controls::Button::New5();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Controls::Button* temp18 = ::g::Fuse::Controls::Button::New5();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp19 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp5->LineNumber(3);
    temp5->FileName(::STRINGS[12/*"LoginPage.ux"*/]);
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::logine12b606c()));
    temp6->Background(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Rows(::STRINGS[13/*"1*,1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp8->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Height(::g::Uno::UX::Size__New1(150.0f, 3));
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Logoacb90244()));
    temp10->Alignment(8);
    temp10->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), userEmailLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), passwordLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    uPtr(userEmailLogin)->PlaceholderText(::STRINGS[14/*"Email Address"*/]);
    uPtr(userEmailLogin)->PlaceholderColor(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    uPtr(userEmailLogin)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.5019608f));
    uPtr(userEmailLogin)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(userEmailLogin)->Alignment(10);
    uPtr(userEmailLogin)->Name(LoginPage::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(userEmailLogin)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    uPtr(passwordLogin)->IsPassword(true);
    uPtr(passwordLogin)->PlaceholderText(::STRINGS[15/*"Password"*/]);
    uPtr(passwordLogin)->PlaceholderColor(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    uPtr(passwordLogin)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.5019608f));
    uPtr(passwordLogin)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(passwordLogin)->Alignment(10);
    uPtr(passwordLogin)->Name(LoginPage::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passwordLogin)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp13->Text(::STRINGS[9/*"Login"*/]);
    temp13->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp13, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->Alignment(12);
    temp15->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->RowCount(2);
    temp16->ColumnCount(2);
    temp16->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp16->Alignment(10);
    temp16->Padding(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 0.2f));
    ::g::Fuse::Controls::Grid::SetRow(temp16, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp16, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp17->Text(::STRINGS[16/*"Sign in wit...*/]);
    temp17->Color(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp17->Alignment(3);
    temp17->Margin(::g::Uno::Float4__New2(100.0f, 40.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp17, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp17, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp18->Text(::STRINGS[17/*" Sign Up"*/]);
    temp18->Color(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp18->Alignment(1);
    temp18->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp18, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp18, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp19->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp19->Margin(::g::Uno::Float4__New2(17.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Value(::STRINGS[18/*"By using ou...*/]);
    temp20->LineSpacing(0.5f);
    temp20->FontSize(12.0f);
    temp20->TextAlignment(1);
    temp20->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp20, 1);
    temp21->Value(::STRINGS[19/*"Privacy Pol...*/]);
    temp21->TextWrapping(0);
    temp21->LineSpacing(0.5f);
    temp21->FontSize(12.0f);
    temp21->Alignment(10);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp21, 2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), userEmailLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), passwordLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public LoginPage New(Fuse.Navigation.Router router) [static] :25
LoginPage* LoginPage::New5(::g::Fuse::Navigation::Router* router1)
{
    LoginPage* obj1 = (LoginPage*)uNew(LoginPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
