// This file was generated based on '.uno/ux11/LoginPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseControlsTextInputControl_Value_Property.h>
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
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
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
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[17];
static uType* TYPES[6];

namespace g{

// public partial sealed class LoginPage :2
// {
// static LoginPage() :18
static void LoginPage__cctor_4_fn(uType* __type)
{
    LoginPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"userEmailLo...*/], ::STRINGS[2/*"passwordLogin"*/]);
    LoginPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    LoginPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"userEmailLo...*/]);
    LoginPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"passwordLogin"*/]);
}

static void LoginPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("userEmailLogin");
    ::STRINGS[2] = uString::Const("passwordLogin");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("userEmail");
    ::STRINGS[5] = uString::Const("userPassword");
    ::STRINGS[6] = uString::Const("Login");
    ::STRINGS[7] = uString::Const("postData");
    ::STRINGS[8] = uString::Const("goToSignUpPage");
    ::STRINGS[9] = uString::Const("LoginPage.ux");
    ::STRINGS[10] = uString::Const("1*,1*,1*");
    ::STRINGS[11] = uString::Const("Email Address");
    ::STRINGS[12] = uString::Const("Password");
    ::STRINGS[13] = uString::Const("Sign in with Facebook |");
    ::STRINGS[14] = uString::Const(" Sign Up");
    ::STRINGS[15] = uString::Const("By using our app,you agree to the Terms,Cookie Policy and");
    ::STRINGS[16] = uString::Const("Privacy Policy");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::LoginPage, __g_nametable1), 0,
        ::g::Basic::TextInput_typeof(), offsetof(::g::LoginPage, passwordLogin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, passwordLogin_Value_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::LoginPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb8), 0,
        ::g::Basic::TextInput_typeof(), offsetof(::g::LoginPage, userEmailLogin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, userEmailLogin_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::LoginPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* LoginPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 115;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(LoginPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("LoginPage", options);
    type->fp_build_ = LoginPage_build;
    type->fp_cctor_ = LoginPage__cctor_4_fn;
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

// public LoginPage(Fuse.Navigation.Router router) :22
void LoginPage__ctor_8_fn(LoginPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :28
void LoginPage__InitializeUX_fn(LoginPage* __this)
{
    __this->InitializeUX();
}

// public LoginPage New(Fuse.Navigation.Router router) :22
void LoginPage__New5_fn(::g::Fuse::Navigation::Router* router1, LoginPage** __retval)
{
    *__retval = LoginPage::New5(router1);
}

uSStrong<uArray*> LoginPage::__g_static_nametable1_;
::g::Uno::UX::Selector LoginPage::__selector0_;
::g::Uno::UX::Selector LoginPage::__selector1_;
::g::Uno::UX::Selector LoginPage::__selector2_;

// public LoginPage(Fuse.Navigation.Router router) [instance] :22
void LoginPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void LoginPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, LoginPage::__g_static_nametable1());
    userEmailLogin = ::g::Basic::TextInput::New4();
    userEmailLogin_Value_inst = ::g::EventApp_FuseControlsTextInputControl_Value_Property::New1(userEmailLogin, LoginPage::__selector0());
    passwordLogin = ::g::Basic::TextInput::New4();
    passwordLogin_Value_inst = ::g::EventApp_FuseControlsTextInputControl_Value_Property::New1(passwordLogin, LoginPage::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], userEmailLogin_Value_inst, ::STRINGS[4/*"userEmail"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], passwordLogin_Value_inst, ::STRINGS[5/*"userPassword"*/]);
    ::g::Fuse::Controls::Button* temp8 = ::g::Fuse::Controls::Button::New5();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"Login"*/]);
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp10 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp11 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Button* temp12 = ::g::Fuse::Controls::Button::New5();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"postData"*/]);
    ::g::Fuse::Controls::Button* temp13 = ::g::Fuse::Controls::Button::New5();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"goToSignUpP...*/]);
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp->LineNumber(3);
    temp->FileName(::STRINGS[9/*"LoginPage.ux"*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::MainView61aa31a6()));
    temp1->Background(temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->Rows(::STRINGS[10/*"1*,1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp3->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->Height(::g::Uno::UX::Size__New1(150.0f, 3));
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Logo953f7dab()));
    temp5->Alignment(8);
    temp5->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), userEmailLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), passwordLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    uPtr(userEmailLogin)->PlaceholderText(::STRINGS[11/*"Email Address"*/]);
    uPtr(userEmailLogin)->PlaceholderColor(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    uPtr(userEmailLogin)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.5019608f));
    uPtr(userEmailLogin)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(userEmailLogin)->Alignment(10);
    uPtr(userEmailLogin)->Name(LoginPage::__selector1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(userEmailLogin)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    uPtr(passwordLogin)->IsPassword(true);
    uPtr(passwordLogin)->PlaceholderText(::STRINGS[12/*"Password"*/]);
    uPtr(passwordLogin)->PlaceholderColor(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    uPtr(passwordLogin)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.5019608f));
    uPtr(passwordLogin)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(passwordLogin)->Alignment(10);
    uPtr(passwordLogin)->Name(LoginPage::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(passwordLogin)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp8->Text(::STRINGS[6/*"Login"*/]);
    temp8->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp8, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->Alignment(12);
    temp10->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->RowCount(2);
    temp11->ColumnCount(2);
    temp11->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp11->Alignment(10);
    temp11->Padding(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 0.2f));
    ::g::Fuse::Controls::Grid::SetRow(temp11, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp11, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp12->Text(::STRINGS[13/*"Sign in wit...*/]);
    temp12->Color(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp12->Alignment(3);
    temp12->Margin(::g::Uno::Float4__New2(100.0f, 40.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp12, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp12, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp13->Text(::STRINGS[14/*" Sign Up"*/]);
    temp13->Color(::g::Uno::Float4__New2(0.1921569f, 0.1647059f, 0.1647059f, 1.0f));
    temp13->Alignment(1);
    temp13->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp13, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp13, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp13, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp14->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp14->Margin(::g::Uno::Float4__New2(17.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(::STRINGS[15/*"By using ou...*/]);
    temp15->LineSpacing(0.5f);
    temp15->FontSize(12.0f);
    temp15->Alignment(10);
    ::g::Fuse::Controls::Grid::SetRow(temp15, 1);
    temp16->Value(::STRINGS[16/*"Privacy Pol...*/]);
    temp16->LineSpacing(0.5f);
    temp16->FontSize(12.0f);
    temp16->Alignment(10);
    temp16->Margin(::g::Uno::Float4__New2(120.0f, 30.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp16, 2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), userEmailLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), passwordLogin);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public LoginPage New(Fuse.Navigation.Router router) [static] :22
LoginPage* LoginPage::New5(::g::Fuse::Navigation::Router* router1)
{
    LoginPage* obj1 = (LoginPage*)uNew(LoginPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
