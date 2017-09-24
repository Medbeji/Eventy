// This file was generated based on '.uno/ux11/NewsItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ActionIcon.h>
#include <_root.Article.h>
#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseControlsImage_File_Property.h>
#include <_root.EventApp_FuseControlsTextControl_Value_Property.h>
#include <_root.EventApp_FuseDrawingImageFill_File_Property.h>
#include <_root.Header.h>
#include <_root.HorizontalBar.h>
#include <_root.Name.h>
#include <_root.NewsItem.h>
#include <_root.Stat.h>
#include <_root.SubText.h>
#include <_root.VerticalBar.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[6];

namespace g{

// public partial sealed class NewsItem :2
// {
// static NewsItem() :15
static void NewsItem__cctor_4_fn(uType* __type)
{
    NewsItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
    NewsItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void NewsItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("portrait");
    ::STRINGS[3] = uString::Const("author");
    ::STRINGS[4] = uString::Const("postAge");
    ::STRINGS[5] = uString::Const("source");
    ::STRINGS[6] = uString::Const("location");
    ::STRINGS[7] = uString::Const("imageUrl");
    ::STRINGS[8] = uString::Const("goSecurinetsPage");
    ::STRINGS[9] = uString::Const("headline");
    ::STRINGS[10] = uString::Const("body");
    ::STRINGS[11] = uString::Const("numLikes");
    ::STRINGS[12] = uString::Const("numComments");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
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
    type->SetFields(101,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::NewsItem, temp_eb2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::NewsItem, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::NewsItem, temp5_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp9_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* NewsItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 114;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(NewsItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("NewsItem", options);
    type->fp_build_ = NewsItem_build;
    type->fp_ctor_ = (void*)NewsItem__New5_fn;
    type->fp_cctor_ = NewsItem__cctor_4_fn;
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

// public NewsItem() :19
void NewsItem__ctor_8_fn(NewsItem* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :23
void NewsItem__InitializeUX_fn(NewsItem* __this)
{
    __this->InitializeUX();
}

// public NewsItem New() :19
void NewsItem__New5_fn(NewsItem** __retval)
{
    *__retval = NewsItem::New5();
}

::g::Uno::UX::Selector NewsItem::__selector0_;
::g::Uno::UX::Selector NewsItem::__selector1_;

// public NewsItem() [instance] :19
void NewsItem::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void NewsItem::InitializeUX()
{
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    temp_File_inst = ::g::EventApp_FuseDrawingImageFill_File_Property::New1(temp, NewsItem::__selector0());
    ::g::Name* temp1 = ::g::Name::New4();
    temp1_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp1, NewsItem::__selector1());
    ::g::SubText* temp2 = ::g::SubText::New4();
    temp2_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp2, NewsItem::__selector1());
    ::g::SubText* temp3 = ::g::SubText::New4();
    temp3_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp3, NewsItem::__selector1());
    ::g::SubText* temp4 = ::g::SubText::New4();
    temp4_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp4, NewsItem::__selector1());
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    temp5_File_inst = ::g::EventApp_FuseControlsImage_File_Property::New1(temp5, NewsItem::__selector0());
    ::g::Header* temp6 = ::g::Header::New4();
    temp6_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp6, NewsItem::__selector1());
    ::g::Article* temp7 = ::g::Article::New4();
    temp7_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp7, NewsItem::__selector1());
    ::g::Stat* temp8 = ::g::Stat::New4();
    temp8_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp8, NewsItem::__selector1());
    ::g::Stat* temp9 = ::g::Stat::New4();
    temp9_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp9, NewsItem::__selector1());
    ::g::Fuse::Controls::DockPanel* temp10 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Circle* temp11 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<Uno.UX.FileSource>*/], temp_File_inst, ::STRINGS[2/*"portrait"*/]);
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp15 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[3/*"author"*/]);
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[4/*"postAge"*/]);
    ::g::VerticalBar* temp18 = ::g::VerticalBar::New4();
    ::g::Fuse::Reactive::DataBinding* temp19 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[5/*"source"*/]);
    ::g::VerticalBar* temp20 = ::g::VerticalBar::New4();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[6/*"location"*/]);
    ::g::Fuse::Reactive::DataBinding* temp23 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<Uno.UX.FileSource>*/], temp5_File_inst, ::STRINGS[7/*"imageUrl"*/]);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[8/*"goSecurinet...*/]);
    ::g::Fuse::Reactive::DataBinding* temp24 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp6_Value_inst, ::STRINGS[9/*"headline"*/]);
    ::g::Fuse::Reactive::DataBinding* temp25 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp7_Value_inst, ::STRINGS[10/*"body"*/]);
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::ActionIcon* temp27 = ::g::ActionIcon::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp8_Value_inst, ::STRINGS[11/*"numLikes"*/]);
    ::g::ActionIcon* temp29 = ::g::ActionIcon::New4();
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp9_Value_inst, ::STRINGS[12/*"numComments"*/]);
    ::g::ActionIcon* temp31 = ::g::ActionIcon::New4();
    ::g::HorizontalBar* temp32 = ::g::HorizontalBar::New4();
    Margin(::g::Uno::Float4__New2(0.0f, 14.0f, 0.0f, 10.0f));
    temp10->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp11->Width(::g::Uno::UX::Size__New1(45.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp->WrapMode(1);
    temp13->Margin(::g::Uno::Float4__New2(10.0f, 4.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp14->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp16->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp21->Color(::g::Uno::Float4__New2(0.2f, 0.2352941f, 0.282353f, 1.0f));
    temp21->Width(::g::Uno::UX::Size__New1(14.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(14.0f, 1));
    temp21->Alignment(8);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 2.0f, 2.0f));
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Location3ecc33cc()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp5->StretchMode(6);
    temp5->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp5, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Orientation(0);
    temp26->Margin(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Like0b209b70()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Comment552ee9ba()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Share209b0034()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
}

// public NewsItem New() [static] :19
NewsItem* NewsItem::New5()
{
    NewsItem* obj1 = (NewsItem*)uNew(NewsItem_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
