// This file was generated based on /Users/medbeji/Documents/event-app/event-app/.uno/ux11/NewsItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Article.h>
#include <_root.EventApp_bundle.h>
#include <_root.EventApp_FuseCo-a4e7b6b.h>
#include <_root.EventApp_FuseCo-eb648b08.h>
#include <_root.EventApp_FuseCo-f281e402.h>
#include <_root.EventApp_FuseDr-d8c62640.h>
#include <_root.EventApp_FuseDr-fd8701c1.h>
#include <_root.Header.h>
#include <_root.HorizontalBar.h>
#include <_root.Name.h>
#include <_root.NewsItem.h>
#include <_root.Stat.h>
#include <_root.SubText.h>
#include <_root.VerticalBar.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[7];

namespace g{

// public partial sealed class NewsItem :2
// {
// static NewsItem() :24
static void NewsItem__cctor_4_fn(uType* __type)
{
    NewsItem::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"temp_eb4"*/], ::STRINGS[1/*"temp_eb5"*/], ::STRINGS[2/*"temp_eb6"*/]);
    NewsItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Url"*/]);
    NewsItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    NewsItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"File"*/]);
}

static void NewsItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb4");
    ::STRINGS[1] = uString::Const("temp_eb5");
    ::STRINGS[2] = uString::Const("temp_eb6");
    ::STRINGS[3] = uString::Const("Url");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("File");
    ::STRINGS[6] = uString::Const("club");
    ::STRINGS[7] = uString::Const("image");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("showDetails");
    ::STRINGS[10] = uString::Const("date");
    ::STRINGS[11] = uString::Const("heure");
    ::STRINGS[12] = uString::Const("location");
    ::STRINGS[13] = uString::Const("joinClub");
    ::STRINGS[14] = uString::Const("joinImage");
    ::STRINGS[15] = uString::Const("linkImage");
    ::STRINGS[16] = uString::Const("description");
    ::STRINGS[17] = uString::Const("likes");
    ::STRINGS[18] = uString::Const("buttonImage");
    ::STRINGS[19] = uString::Const("participateToEvent");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
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
    type->SetFields(102,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::NewsItem, __g_nametable1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::NewsItem, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::NewsItem, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::NewsItem, temp_eb6), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::NewsItem, temp10_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::NewsItem, temp5_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp6_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem, temp9_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::NewsItem::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NewsItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(NewsItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NewsItem", options);
    type->fp_build_ = NewsItem_build;
    type->fp_ctor_ = (void*)NewsItem__New5_fn;
    type->fp_cctor_ = NewsItem__cctor_4_fn;
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

// public NewsItem() :28
void NewsItem__ctor_8_fn(NewsItem* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :32
void NewsItem__InitializeUX_fn(NewsItem* __this)
{
    __this->InitializeUX();
}

// public NewsItem New() :28
void NewsItem__New5_fn(NewsItem** __retval)
{
    *__retval = NewsItem::New5();
}

uSStrong<uArray*> NewsItem::__g_static_nametable1_;
::g::Uno::UX::Selector NewsItem::__selector0_;
::g::Uno::UX::Selector NewsItem::__selector1_;
::g::Uno::UX::Selector NewsItem::__selector2_;

// public NewsItem() [instance] :28
void NewsItem::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :32
void NewsItem::InitializeUX()
{
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"club"*/]);
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    temp_Url_inst = ::g::EventApp_FuseDrawingImageFill_Url_Property::New1(temp, NewsItem::__selector0());
    ::g::Fuse::Reactive::Member* temp12 = ::g::Fuse::Reactive::Member::New1(temp11, ::STRINGS[7/*"image"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NewsItem::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"club"*/]);
    ::g::Name* temp1 = ::g::Name::New4();
    temp1_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp1, NewsItem::__selector1());
    ::g::Fuse::Reactive::Member* temp14 = ::g::Fuse::Reactive::Member::New1(temp13, ::STRINGS[8/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"showDetails"*/]);
    ::g::SubText* temp2 = ::g::SubText::New4();
    temp2_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp2, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"date"*/]);
    ::g::SubText* temp3 = ::g::SubText::New4();
    temp3_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp3, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"heure"*/]);
    ::g::SubText* temp4 = ::g::SubText::New4();
    temp4_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp4, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"location"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"joinClub"*/]);
    ::g::Fuse::Drawing::ImageFill* temp5 = ::g::Fuse::Drawing::ImageFill::New2();
    temp5_File_inst = ::g::EventApp_FuseDrawingImageFill_File_Property::New1(temp5, NewsItem::__selector2());
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"joinImage"*/]);
    ::g::Fuse::Controls::Image* temp6 = ::g::Fuse::Controls::Image::New3();
    temp6_Url_inst = ::g::EventApp_FuseControlsImage_Url_Property::New1(temp6, NewsItem::__selector0());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"linkImage"*/]);
    ::g::Header* temp7 = ::g::Header::New4();
    temp7_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp7, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"name"*/]);
    ::g::Article* temp8 = ::g::Article::New4();
    temp8_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp8, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"description"*/]);
    ::g::Stat* temp9 = ::g::Stat::New4();
    temp9_Value_inst = ::g::EventApp_FuseControlsTextControl_Value_Property::New1(temp9, NewsItem::__selector1());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"likes"*/]);
    ::g::Fuse::Controls::Image* temp10 = ::g::Fuse::Controls::Image::New3();
    temp10_File_inst = ::g::EventApp_FuseControlsImage_File_Property::New1(temp10, NewsItem::__selector2());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"buttonImage"*/]);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"participate...*/]);
    ::g::Fuse::Controls::DockPanel* temp27 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Circle* temp28 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp_Url_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Fuse::Controls::DockPanel* temp30 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp14, __g_nametable1, 3);
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp16, __g_nametable1, 3);
    ::g::VerticalBar* temp35 = ::g::VerticalBar::New4();
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp17, __g_nametable1, 3);
    ::g::VerticalBar* temp37 = ::g::VerticalBar::New4();
    ::g::Fuse::Controls::Image* temp38 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp18, __g_nametable1, 3);
    ::g::Fuse::Controls::Circle* temp40 = ::g::Fuse::Controls::Circle::New3();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp19, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(temp5_File_inst, (uObject*)temp20, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Url_inst, (uObject*)temp21, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp43 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp22, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp46 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Image* temp47 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Button* temp49 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(temp10_File_inst, (uObject*)temp25, __g_nametable1, 3);
    ::g::Fuse::Gestures::Tapped* temp51 = ::g::Fuse::Gestures::Tapped::New2();
    ::g::Fuse::Animations::Scale* temp52 = ::g::Fuse::Animations::Scale::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp26, __g_nametable1);
    ::g::HorizontalBar* temp53 = ::g::HorizontalBar::New4();
    Margin(::g::Uno::Float4__New2(0.0f, 14.0f, 0.0f, 10.0f));
    temp27->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp28->Width(::g::Uno::UX::Size__New1(45.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp28, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp->WrapMode(1);
    temp30->Margin(::g::Uno::Float4__New2(10.0f, 4.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp31->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp31, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp33->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp33, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp38->Color(::g::Uno::Float4__New2(0.2f, 0.2352941f, 0.282353f, 1.0f));
    temp38->Width(::g::Uno::UX::Size__New1(14.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(14.0f, 1));
    temp38->Alignment(8);
    temp38->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 2.0f, 2.0f));
    temp38->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::Location21ff1f57()));
    temp4->TextAlignment(1);
    temp4->Margin(::g::Uno::Float4__New2(3.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp40->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 15.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp40, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp40, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    temp5->WrapMode(1);
    temp6->StretchMode(6);
    temp6->Height(::g::Uno::UX::Size__New1(270.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp45->Orientation(0);
    temp45->Margin(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp46->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp46->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp47->Color(::g::Uno::Float4__New2(0.7686275f, 0.8235294f, 0.8823529f, 1.0f));
    temp47->File(::g::Uno::UX::BundleFileSource::New1(::g::EventApp_bundle::checkeda51f9c6d()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    temp49->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp49->Alignment(11);
    temp49->Margin(::g::Uno::Float4__New2(120.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp10->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp52);
    temp52->Factor(1.3f);
    temp52->Duration(0.3);
    temp52->Easing(::g::Fuse::Animations::Easing::BackOut());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
}

// public NewsItem New() [static] :28
NewsItem* NewsItem::New5()
{
    NewsItem* obj1 = (NewsItem*)uNew(NewsItem_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
