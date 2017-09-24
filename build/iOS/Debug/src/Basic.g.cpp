// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseBasicTheme_-4bfcf6e8.h>
#include <_root.FuseBasicTheme_-ae1fe842.h>
#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_-cdff12e0.h>
#include <_root.FuseBasicTheme_-d24b53f1.h>
#include <Basic.Resources.h>
#include <Basic.TextInput.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[213];
static uType* TYPES[8];

namespace g{
namespace Basic{

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/$.uno
// -----------------------------------------------------------------------------------------

// public partial sealed class Resources :36
// {
// static Resources() :250
static void Resources__cctor_4_fn(uType* __type)
{
    Resources::_colorScheme_ = ::g::Fuse::Properties::CreateHandle();
    Resources::ColorCodes_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"Basic.C50"*/], ::STRINGS[1/*"Basic.C100"*/], ::STRINGS[2/*"Basic.C200"*/], ::STRINGS[3/*"Basic.C300"*/], ::STRINGS[4/*"Basic.C400"*/], ::STRINGS[5/*"Basic.C500"*/], ::STRINGS[6/*"Basic.C600"*/], ::STRINGS[7/*"Basic.C700"*/], ::STRINGS[8/*"Basic.C800"*/], ::STRINGS[9/*"Basic.C900"*/]);
    Resources::Red_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[10/*"#FFEBEE"*/], ::STRINGS[11/*"#FFCDD2"*/], ::STRINGS[12/*"#EF9A9A"*/], ::STRINGS[13/*"#E57373"*/], ::STRINGS[14/*"#EF5350"*/], ::STRINGS[15/*"#F44336"*/], ::STRINGS[16/*"#E53935"*/], ::STRINGS[17/*"#D32F2F"*/], ::STRINGS[18/*"#C62828"*/], ::STRINGS[19/*"#B71C1C"*/]);
    Resources::Pink_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[20/*"#FCE4EC"*/], ::STRINGS[21/*"#F8BBD0"*/], ::STRINGS[22/*"#F48FB1"*/], ::STRINGS[23/*"#F06292"*/], ::STRINGS[24/*"#EC407A"*/], ::STRINGS[25/*"#E91E63"*/], ::STRINGS[26/*"#D81B60"*/], ::STRINGS[27/*"#C2185B"*/], ::STRINGS[28/*"#AD1457"*/], ::STRINGS[29/*"#880E4F"*/]);
    Resources::Purple_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[30/*"#F3E5F5"*/], ::STRINGS[31/*"#E1BEE7"*/], ::STRINGS[32/*"#CE93D8"*/], ::STRINGS[33/*"#BA68C8"*/], ::STRINGS[34/*"#AB47BC"*/], ::STRINGS[35/*"#9C27B0"*/], ::STRINGS[36/*"#8E24AA"*/], ::STRINGS[37/*"#7B1FA2"*/], ::STRINGS[38/*"#6A1B9A"*/], ::STRINGS[39/*"#4A148C"*/]);
    Resources::DeepPurple_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[40/*"#EDE7F6"*/], ::STRINGS[41/*"#D1C4E9"*/], ::STRINGS[42/*"#B39DDB"*/], ::STRINGS[43/*"#9575CD"*/], ::STRINGS[44/*"#7E57C2"*/], ::STRINGS[45/*"#673AB7"*/], ::STRINGS[46/*"#5E35B1"*/], ::STRINGS[47/*"#512DA8"*/], ::STRINGS[48/*"#4527A0"*/], ::STRINGS[49/*"#311B92"*/]);
    Resources::Indigo_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[50/*"#E8EAF6"*/], ::STRINGS[51/*"#C5CAE9"*/], ::STRINGS[52/*"#9FA8DA"*/], ::STRINGS[53/*"#7986CB"*/], ::STRINGS[54/*"#5C6BC0"*/], ::STRINGS[55/*"#3F51B5"*/], ::STRINGS[56/*"#3949AB"*/], ::STRINGS[57/*"#303F9F"*/], ::STRINGS[58/*"#283593"*/], ::STRINGS[59/*"#1A237E"*/]);
    Resources::Blue_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[60/*"#E3F2FD"*/], ::STRINGS[61/*"#BBDEFB"*/], ::STRINGS[62/*"#90CAF9"*/], ::STRINGS[63/*"#64B5F6"*/], ::STRINGS[64/*"#42A5F5"*/], ::STRINGS[65/*"#2196F3"*/], ::STRINGS[66/*"#1E88E5"*/], ::STRINGS[67/*"#1976D2"*/], ::STRINGS[68/*"#1565C0"*/], ::STRINGS[69/*"#0D47A1"*/]);
    Resources::LightBlue_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[70/*"#E1F5FE"*/], ::STRINGS[71/*"#B3E5FC"*/], ::STRINGS[72/*"#81D4FA"*/], ::STRINGS[73/*"#4FC3F7"*/], ::STRINGS[74/*"#29B6F6"*/], ::STRINGS[75/*"#03A9F4"*/], ::STRINGS[76/*"#039BE5"*/], ::STRINGS[77/*"#0288D1"*/], ::STRINGS[78/*"#0277BD"*/], ::STRINGS[79/*"#01579B"*/]);
    Resources::Cyan_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[80/*"#E0F7FA"*/], ::STRINGS[81/*"#B2EBF2"*/], ::STRINGS[82/*"#80DEEA"*/], ::STRINGS[83/*"#4DD0E1"*/], ::STRINGS[84/*"#26C6DA"*/], ::STRINGS[85/*"#00BCD4"*/], ::STRINGS[86/*"#00ACC1"*/], ::STRINGS[87/*"#0097A7"*/], ::STRINGS[88/*"#00838F"*/], ::STRINGS[89/*"#006064"*/]);
    Resources::Teal_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[90/*"#E0F2F1"*/], ::STRINGS[91/*"#B2DFDB"*/], ::STRINGS[92/*"#80CBC4"*/], ::STRINGS[93/*"#4DB6AC"*/], ::STRINGS[94/*"#26A69A"*/], ::STRINGS[95/*"#009688"*/], ::STRINGS[96/*"#00897B"*/], ::STRINGS[97/*"#00796B"*/], ::STRINGS[98/*"#00695C"*/], ::STRINGS[99/*"#004D40"*/]);
    Resources::Green_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[100/*"#E8F5E9"*/], ::STRINGS[101/*"#C8E6C9"*/], ::STRINGS[102/*"#A5D6A7"*/], ::STRINGS[103/*"#81C784"*/], ::STRINGS[104/*"#66BB6A"*/], ::STRINGS[105/*"#4CAF50"*/], ::STRINGS[106/*"#43A047"*/], ::STRINGS[107/*"#388E3C"*/], ::STRINGS[108/*"#2E7D32"*/], ::STRINGS[109/*"#1B5E20"*/]);
    Resources::LightGreen_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[110/*"#F1F8E9"*/], ::STRINGS[111/*"#DCEDC8"*/], ::STRINGS[112/*"#C5E1A5"*/], ::STRINGS[113/*"#AED581"*/], ::STRINGS[114/*"#9CCC65"*/], ::STRINGS[115/*"#8BC34A"*/], ::STRINGS[116/*"#7CB342"*/], ::STRINGS[117/*"#689F38"*/], ::STRINGS[118/*"#558B2F"*/], ::STRINGS[119/*"#33691E"*/]);
    Resources::Lime_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[120/*"#F9FBE7"*/], ::STRINGS[121/*"#F0F4C3"*/], ::STRINGS[122/*"#E6EE9C"*/], ::STRINGS[123/*"#DCE775"*/], ::STRINGS[124/*"#D4E157"*/], ::STRINGS[125/*"#CDDC39"*/], ::STRINGS[126/*"#C0CA33"*/], ::STRINGS[127/*"#AFB42B"*/], ::STRINGS[128/*"#9E9D24"*/], ::STRINGS[129/*"#827717"*/]);
    Resources::Yellow_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[130/*"#FFFDE7"*/], ::STRINGS[131/*"#FFF9C4"*/], ::STRINGS[132/*"#FFF59D"*/], ::STRINGS[133/*"#FFF176"*/], ::STRINGS[134/*"#FFEE58"*/], ::STRINGS[135/*"#FFEB3B"*/], ::STRINGS[136/*"#FDD835"*/], ::STRINGS[137/*"#FBC02D"*/], ::STRINGS[138/*"#F9A825"*/], ::STRINGS[139/*"#F57F17"*/]);
    Resources::Amber_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[140/*"#FFF8E1"*/], ::STRINGS[141/*"#FFECB3"*/], ::STRINGS[142/*"#FFE082"*/], ::STRINGS[143/*"#FFD54F"*/], ::STRINGS[144/*"#FFCA28"*/], ::STRINGS[145/*"#FFC107"*/], ::STRINGS[146/*"#FFB300"*/], ::STRINGS[147/*"#FFA000"*/], ::STRINGS[148/*"#FF8F00"*/], ::STRINGS[149/*"#FF6F00"*/]);
    Resources::Orange_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[150/*"#FFF3E0"*/], ::STRINGS[151/*"#FFE0B2"*/], ::STRINGS[152/*"#FFCC80"*/], ::STRINGS[153/*"#FFB74D"*/], ::STRINGS[154/*"#FFA726"*/], ::STRINGS[155/*"#FF9800"*/], ::STRINGS[156/*"#FB8C00"*/], ::STRINGS[157/*"#F57C00"*/], ::STRINGS[158/*"#EF6C00"*/], ::STRINGS[159/*"#E65100"*/]);
    Resources::DeepOrange_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[160/*"#FBE9E7"*/], ::STRINGS[161/*"#FFCCBC"*/], ::STRINGS[162/*"#FFAB91"*/], ::STRINGS[163/*"#FF8A65"*/], ::STRINGS[164/*"#FF7043"*/], ::STRINGS[165/*"#FF5722"*/], ::STRINGS[166/*"#F4511E"*/], ::STRINGS[167/*"#E64A19"*/], ::STRINGS[168/*"#D84315"*/], ::STRINGS[169/*"#BF360C"*/]);
    Resources::Brown_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[170/*"#EFEBE9"*/], ::STRINGS[171/*"#D7CCC8"*/], ::STRINGS[172/*"#BCAAA4"*/], ::STRINGS[173/*"#A1887F"*/], ::STRINGS[174/*"#8D6E63"*/], ::STRINGS[175/*"#795548"*/], ::STRINGS[176/*"#6D4C41"*/], ::STRINGS[177/*"#5D4037"*/], ::STRINGS[178/*"#4E342E"*/], ::STRINGS[179/*"#3E2723"*/]);
    Resources::Grey_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[180/*"#FAFAFA"*/], ::STRINGS[181/*"#F5F5F5"*/], ::STRINGS[182/*"#EEEEEE"*/], ::STRINGS[183/*"#E0E0E0"*/], ::STRINGS[184/*"#BDBDBD"*/], ::STRINGS[185/*"#9E9E9E"*/], ::STRINGS[186/*"#757575"*/], ::STRINGS[187/*"#616161"*/], ::STRINGS[188/*"#424242"*/], ::STRINGS[189/*"#212121"*/]);
    Resources::BlueGrey_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[190/*"#ECEFF1"*/], ::STRINGS[191/*"#CFD8DC"*/], ::STRINGS[192/*"#B0BEC5"*/], ::STRINGS[193/*"#90A4AE"*/], ::STRINGS[194/*"#78909C"*/], ::STRINGS[195/*"#607D8B"*/], ::STRINGS[196/*"#546E7A"*/], ::STRINGS[197/*"#455A64"*/], ::STRINGS[198/*"#37474F"*/], ::STRINGS[199/*"#263238"*/]);
    Resources::RobotoRegular_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::FuseBasicTheme_bundle::RobotoRegulare37e16fe()));
    Resources::RobotoLight_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::FuseBasicTheme_bundle::RobotoLight088d7a12()));
    Resources::RobotoMedium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::FuseBasicTheme_bundle::RobotoMedium6924b553()));
    Resources::BasicCLine_ = ::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f);
    Resources::BasicCFillFore_ = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    Resources::BasicCEmptyFore_ = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    Resources::BasicCShadow_ = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2f);
    Resources::BasicC50_ = ::g::Uno::Float4__New2(0.8901961f, 0.9490196f, 0.9921569f, 1.0f);
    Resources::BasicC100_ = ::g::Uno::Float4__New2(0.7333333f, 0.8705882f, 0.9843137f, 1.0f);
    Resources::BasicC200_ = ::g::Uno::Float4__New2(0.5647059f, 0.7921569f, 0.9764706f, 1.0f);
    Resources::BasicC300_ = ::g::Uno::Float4__New2(0.3921569f, 0.7098039f, 0.9647059f, 1.0f);
    Resources::BasicC400_ = ::g::Uno::Float4__New2(0.2588235f, 0.6470588f, 0.9607843f, 1.0f);
    Resources::BasicC500_ = ::g::Uno::Float4__New2(0.1294118f, 0.5882353f, 0.9529412f, 1.0f);
    Resources::BasicC600_ = ::g::Uno::Float4__New2(0.1176471f, 0.5333334f, 0.8980392f, 1.0f);
    Resources::BasicC700_ = ::g::Uno::Float4__New2(0.09803922f, 0.4627451f, 0.8235294f, 1.0f);
    Resources::BasicC800_ = ::g::Uno::Float4__New2(0.08235294f, 0.3960784f, 0.7529412f, 1.0f);
    Resources::BasicC900_ = ::g::Uno::Float4__New2(0.05098039f, 0.2784314f, 0.6313726f, 1.0f);
    ::g::Uno::UX::Resource::SetGlobalKey(Resources::RobotoRegular_, ::STRINGS[200/*"RobotoRegular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(Resources::RobotoLight_, ::STRINGS[201/*"RobotoLight"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(Resources::RobotoMedium_, ::STRINGS[202/*"RobotoMedium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicCLine_), ::STRINGS[203/*"Basic.CLine"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicCFillFore_), ::STRINGS[204/*"Basic.CFill...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicCEmptyFore_), ::STRINGS[205/*"Basic.CEmpt...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicCShadow_), ::STRINGS[206/*"Basic.CShadow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC50_), ::STRINGS[0/*"Basic.C50"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC100_), ::STRINGS[1/*"Basic.C100"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC200_), ::STRINGS[2/*"Basic.C200"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC300_), ::STRINGS[3/*"Basic.C300"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC400_), ::STRINGS[4/*"Basic.C400"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC500_), ::STRINGS[5/*"Basic.C500"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC600_), ::STRINGS[6/*"Basic.C600"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC700_), ::STRINGS[7/*"Basic.C700"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC800_), ::STRINGS[8/*"Basic.C800"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), Resources::BasicC900_), ::STRINGS[9/*"Basic.C900"*/]);
}

static void Resources_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Basic.C50");
    ::STRINGS[1] = uString::Const("Basic.C100");
    ::STRINGS[2] = uString::Const("Basic.C200");
    ::STRINGS[3] = uString::Const("Basic.C300");
    ::STRINGS[4] = uString::Const("Basic.C400");
    ::STRINGS[5] = uString::Const("Basic.C500");
    ::STRINGS[6] = uString::Const("Basic.C600");
    ::STRINGS[7] = uString::Const("Basic.C700");
    ::STRINGS[8] = uString::Const("Basic.C800");
    ::STRINGS[9] = uString::Const("Basic.C900");
    ::STRINGS[10] = uString::Const("#FFEBEE");
    ::STRINGS[11] = uString::Const("#FFCDD2");
    ::STRINGS[12] = uString::Const("#EF9A9A");
    ::STRINGS[13] = uString::Const("#E57373");
    ::STRINGS[14] = uString::Const("#EF5350");
    ::STRINGS[15] = uString::Const("#F44336");
    ::STRINGS[16] = uString::Const("#E53935");
    ::STRINGS[17] = uString::Const("#D32F2F");
    ::STRINGS[18] = uString::Const("#C62828");
    ::STRINGS[19] = uString::Const("#B71C1C");
    ::STRINGS[20] = uString::Const("#FCE4EC");
    ::STRINGS[21] = uString::Const("#F8BBD0");
    ::STRINGS[22] = uString::Const("#F48FB1");
    ::STRINGS[23] = uString::Const("#F06292");
    ::STRINGS[24] = uString::Const("#EC407A");
    ::STRINGS[25] = uString::Const("#E91E63");
    ::STRINGS[26] = uString::Const("#D81B60");
    ::STRINGS[27] = uString::Const("#C2185B");
    ::STRINGS[28] = uString::Const("#AD1457");
    ::STRINGS[29] = uString::Const("#880E4F");
    ::STRINGS[30] = uString::Const("#F3E5F5");
    ::STRINGS[31] = uString::Const("#E1BEE7");
    ::STRINGS[32] = uString::Const("#CE93D8");
    ::STRINGS[33] = uString::Const("#BA68C8");
    ::STRINGS[34] = uString::Const("#AB47BC");
    ::STRINGS[35] = uString::Const("#9C27B0");
    ::STRINGS[36] = uString::Const("#8E24AA");
    ::STRINGS[37] = uString::Const("#7B1FA2");
    ::STRINGS[38] = uString::Const("#6A1B9A");
    ::STRINGS[39] = uString::Const("#4A148C");
    ::STRINGS[40] = uString::Const("#EDE7F6");
    ::STRINGS[41] = uString::Const("#D1C4E9");
    ::STRINGS[42] = uString::Const("#B39DDB");
    ::STRINGS[43] = uString::Const("#9575CD");
    ::STRINGS[44] = uString::Const("#7E57C2");
    ::STRINGS[45] = uString::Const("#673AB7");
    ::STRINGS[46] = uString::Const("#5E35B1");
    ::STRINGS[47] = uString::Const("#512DA8");
    ::STRINGS[48] = uString::Const("#4527A0");
    ::STRINGS[49] = uString::Const("#311B92");
    ::STRINGS[50] = uString::Const("#E8EAF6");
    ::STRINGS[51] = uString::Const("#C5CAE9");
    ::STRINGS[52] = uString::Const("#9FA8DA");
    ::STRINGS[53] = uString::Const("#7986CB");
    ::STRINGS[54] = uString::Const("#5C6BC0");
    ::STRINGS[55] = uString::Const("#3F51B5");
    ::STRINGS[56] = uString::Const("#3949AB");
    ::STRINGS[57] = uString::Const("#303F9F");
    ::STRINGS[58] = uString::Const("#283593");
    ::STRINGS[59] = uString::Const("#1A237E");
    ::STRINGS[60] = uString::Const("#E3F2FD");
    ::STRINGS[61] = uString::Const("#BBDEFB");
    ::STRINGS[62] = uString::Const("#90CAF9");
    ::STRINGS[63] = uString::Const("#64B5F6");
    ::STRINGS[64] = uString::Const("#42A5F5");
    ::STRINGS[65] = uString::Const("#2196F3");
    ::STRINGS[66] = uString::Const("#1E88E5");
    ::STRINGS[67] = uString::Const("#1976D2");
    ::STRINGS[68] = uString::Const("#1565C0");
    ::STRINGS[69] = uString::Const("#0D47A1");
    ::STRINGS[70] = uString::Const("#E1F5FE");
    ::STRINGS[71] = uString::Const("#B3E5FC");
    ::STRINGS[72] = uString::Const("#81D4FA");
    ::STRINGS[73] = uString::Const("#4FC3F7");
    ::STRINGS[74] = uString::Const("#29B6F6");
    ::STRINGS[75] = uString::Const("#03A9F4");
    ::STRINGS[76] = uString::Const("#039BE5");
    ::STRINGS[77] = uString::Const("#0288D1");
    ::STRINGS[78] = uString::Const("#0277BD");
    ::STRINGS[79] = uString::Const("#01579B");
    ::STRINGS[80] = uString::Const("#E0F7FA");
    ::STRINGS[81] = uString::Const("#B2EBF2");
    ::STRINGS[82] = uString::Const("#80DEEA");
    ::STRINGS[83] = uString::Const("#4DD0E1");
    ::STRINGS[84] = uString::Const("#26C6DA");
    ::STRINGS[85] = uString::Const("#00BCD4");
    ::STRINGS[86] = uString::Const("#00ACC1");
    ::STRINGS[87] = uString::Const("#0097A7");
    ::STRINGS[88] = uString::Const("#00838F");
    ::STRINGS[89] = uString::Const("#006064");
    ::STRINGS[90] = uString::Const("#E0F2F1");
    ::STRINGS[91] = uString::Const("#B2DFDB");
    ::STRINGS[92] = uString::Const("#80CBC4");
    ::STRINGS[93] = uString::Const("#4DB6AC");
    ::STRINGS[94] = uString::Const("#26A69A");
    ::STRINGS[95] = uString::Const("#009688");
    ::STRINGS[96] = uString::Const("#00897B");
    ::STRINGS[97] = uString::Const("#00796B");
    ::STRINGS[98] = uString::Const("#00695C");
    ::STRINGS[99] = uString::Const("#004D40");
    ::STRINGS[100] = uString::Const("#E8F5E9");
    ::STRINGS[101] = uString::Const("#C8E6C9");
    ::STRINGS[102] = uString::Const("#A5D6A7");
    ::STRINGS[103] = uString::Const("#81C784");
    ::STRINGS[104] = uString::Const("#66BB6A");
    ::STRINGS[105] = uString::Const("#4CAF50");
    ::STRINGS[106] = uString::Const("#43A047");
    ::STRINGS[107] = uString::Const("#388E3C");
    ::STRINGS[108] = uString::Const("#2E7D32");
    ::STRINGS[109] = uString::Const("#1B5E20");
    ::STRINGS[110] = uString::Const("#F1F8E9");
    ::STRINGS[111] = uString::Const("#DCEDC8");
    ::STRINGS[112] = uString::Const("#C5E1A5");
    ::STRINGS[113] = uString::Const("#AED581");
    ::STRINGS[114] = uString::Const("#9CCC65");
    ::STRINGS[115] = uString::Const("#8BC34A");
    ::STRINGS[116] = uString::Const("#7CB342");
    ::STRINGS[117] = uString::Const("#689F38");
    ::STRINGS[118] = uString::Const("#558B2F");
    ::STRINGS[119] = uString::Const("#33691E");
    ::STRINGS[120] = uString::Const("#F9FBE7");
    ::STRINGS[121] = uString::Const("#F0F4C3");
    ::STRINGS[122] = uString::Const("#E6EE9C");
    ::STRINGS[123] = uString::Const("#DCE775");
    ::STRINGS[124] = uString::Const("#D4E157");
    ::STRINGS[125] = uString::Const("#CDDC39");
    ::STRINGS[126] = uString::Const("#C0CA33");
    ::STRINGS[127] = uString::Const("#AFB42B");
    ::STRINGS[128] = uString::Const("#9E9D24");
    ::STRINGS[129] = uString::Const("#827717");
    ::STRINGS[130] = uString::Const("#FFFDE7");
    ::STRINGS[131] = uString::Const("#FFF9C4");
    ::STRINGS[132] = uString::Const("#FFF59D");
    ::STRINGS[133] = uString::Const("#FFF176");
    ::STRINGS[134] = uString::Const("#FFEE58");
    ::STRINGS[135] = uString::Const("#FFEB3B");
    ::STRINGS[136] = uString::Const("#FDD835");
    ::STRINGS[137] = uString::Const("#FBC02D");
    ::STRINGS[138] = uString::Const("#F9A825");
    ::STRINGS[139] = uString::Const("#F57F17");
    ::STRINGS[140] = uString::Const("#FFF8E1");
    ::STRINGS[141] = uString::Const("#FFECB3");
    ::STRINGS[142] = uString::Const("#FFE082");
    ::STRINGS[143] = uString::Const("#FFD54F");
    ::STRINGS[144] = uString::Const("#FFCA28");
    ::STRINGS[145] = uString::Const("#FFC107");
    ::STRINGS[146] = uString::Const("#FFB300");
    ::STRINGS[147] = uString::Const("#FFA000");
    ::STRINGS[148] = uString::Const("#FF8F00");
    ::STRINGS[149] = uString::Const("#FF6F00");
    ::STRINGS[150] = uString::Const("#FFF3E0");
    ::STRINGS[151] = uString::Const("#FFE0B2");
    ::STRINGS[152] = uString::Const("#FFCC80");
    ::STRINGS[153] = uString::Const("#FFB74D");
    ::STRINGS[154] = uString::Const("#FFA726");
    ::STRINGS[155] = uString::Const("#FF9800");
    ::STRINGS[156] = uString::Const("#FB8C00");
    ::STRINGS[157] = uString::Const("#F57C00");
    ::STRINGS[158] = uString::Const("#EF6C00");
    ::STRINGS[159] = uString::Const("#E65100");
    ::STRINGS[160] = uString::Const("#FBE9E7");
    ::STRINGS[161] = uString::Const("#FFCCBC");
    ::STRINGS[162] = uString::Const("#FFAB91");
    ::STRINGS[163] = uString::Const("#FF8A65");
    ::STRINGS[164] = uString::Const("#FF7043");
    ::STRINGS[165] = uString::Const("#FF5722");
    ::STRINGS[166] = uString::Const("#F4511E");
    ::STRINGS[167] = uString::Const("#E64A19");
    ::STRINGS[168] = uString::Const("#D84315");
    ::STRINGS[169] = uString::Const("#BF360C");
    ::STRINGS[170] = uString::Const("#EFEBE9");
    ::STRINGS[171] = uString::Const("#D7CCC8");
    ::STRINGS[172] = uString::Const("#BCAAA4");
    ::STRINGS[173] = uString::Const("#A1887F");
    ::STRINGS[174] = uString::Const("#8D6E63");
    ::STRINGS[175] = uString::Const("#795548");
    ::STRINGS[176] = uString::Const("#6D4C41");
    ::STRINGS[177] = uString::Const("#5D4037");
    ::STRINGS[178] = uString::Const("#4E342E");
    ::STRINGS[179] = uString::Const("#3E2723");
    ::STRINGS[180] = uString::Const("#FAFAFA");
    ::STRINGS[181] = uString::Const("#F5F5F5");
    ::STRINGS[182] = uString::Const("#EEEEEE");
    ::STRINGS[183] = uString::Const("#E0E0E0");
    ::STRINGS[184] = uString::Const("#BDBDBD");
    ::STRINGS[185] = uString::Const("#9E9E9E");
    ::STRINGS[186] = uString::Const("#757575");
    ::STRINGS[187] = uString::Const("#616161");
    ::STRINGS[188] = uString::Const("#424242");
    ::STRINGS[189] = uString::Const("#212121");
    ::STRINGS[190] = uString::Const("#ECEFF1");
    ::STRINGS[191] = uString::Const("#CFD8DC");
    ::STRINGS[192] = uString::Const("#B0BEC5");
    ::STRINGS[193] = uString::Const("#90A4AE");
    ::STRINGS[194] = uString::Const("#78909C");
    ::STRINGS[195] = uString::Const("#607D8B");
    ::STRINGS[196] = uString::Const("#546E7A");
    ::STRINGS[197] = uString::Const("#455A64");
    ::STRINGS[198] = uString::Const("#37474F");
    ::STRINGS[199] = uString::Const("#263238");
    ::STRINGS[200] = uString::Const("RobotoRegular");
    ::STRINGS[201] = uString::Const("RobotoLight");
    ::STRINGS[202] = uString::Const("RobotoMedium");
    ::STRINGS[203] = uString::Const("Basic.CLine");
    ::STRINGS[204] = uString::Const("Basic.CFillFore");
    ::STRINGS[205] = uString::Const("Basic.CEmptyFore");
    ::STRINGS[206] = uString::Const("Basic.CShadow");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(101,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Basic::Resources::_colorScheme_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Amber_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC100_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC200_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC300_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC400_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC50_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC500_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC600_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC700_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC800_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicC900_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicCEmptyFore_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicCFillFore_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicCLine_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Basic::Resources::BasicCShadow_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Blue_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::BlueGrey_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Brown_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::ColorCodes_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Cyan_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::DeepOrange_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::DeepPurple_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Green_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Grey_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Indigo_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::LightBlue_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::LightGreen_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Lime_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Orange_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Pink_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Purple_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Red_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Basic::Resources::RobotoLight_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Basic::Resources::RobotoMedium_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Basic::Resources::RobotoRegular_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Teal_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::Resources::Yellow_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Resources_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 139;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(Resources);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Basic.Resources", options);
    type->fp_build_ = Resources_build;
    type->fp_cctor_ = Resources__cctor_4_fn;
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

uSStrong< ::g::Fuse::PropertyHandle*> Resources::_colorScheme_;
uSStrong<uArray*> Resources::Amber_;
::g::Uno::Float4 Resources::BasicC100_;
::g::Uno::Float4 Resources::BasicC200_;
::g::Uno::Float4 Resources::BasicC300_;
::g::Uno::Float4 Resources::BasicC400_;
::g::Uno::Float4 Resources::BasicC50_;
::g::Uno::Float4 Resources::BasicC500_;
::g::Uno::Float4 Resources::BasicC600_;
::g::Uno::Float4 Resources::BasicC700_;
::g::Uno::Float4 Resources::BasicC800_;
::g::Uno::Float4 Resources::BasicC900_;
::g::Uno::Float4 Resources::BasicCEmptyFore_;
::g::Uno::Float4 Resources::BasicCFillFore_;
::g::Uno::Float4 Resources::BasicCLine_;
::g::Uno::Float4 Resources::BasicCShadow_;
uSStrong<uArray*> Resources::Blue_;
uSStrong<uArray*> Resources::BlueGrey_;
uSStrong<uArray*> Resources::Brown_;
uSStrong<uArray*> Resources::ColorCodes_;
uSStrong<uArray*> Resources::Cyan_;
uSStrong<uArray*> Resources::DeepOrange_;
uSStrong<uArray*> Resources::DeepPurple_;
uSStrong<uArray*> Resources::Green_;
uSStrong<uArray*> Resources::Grey_;
uSStrong<uArray*> Resources::Indigo_;
uSStrong<uArray*> Resources::LightBlue_;
uSStrong<uArray*> Resources::LightGreen_;
uSStrong<uArray*> Resources::Lime_;
uSStrong<uArray*> Resources::Orange_;
uSStrong<uArray*> Resources::Pink_;
uSStrong<uArray*> Resources::Purple_;
uSStrong<uArray*> Resources::Red_;
uSStrong< ::g::Fuse::Font*> Resources::RobotoLight_;
uSStrong< ::g::Fuse::Font*> Resources::RobotoMedium_;
uSStrong< ::g::Fuse::Font*> Resources::RobotoRegular_;
uSStrong<uArray*> Resources::Teal_;
uSStrong<uArray*> Resources::Yellow_;
// }

// /Users/medbeji/Library/Application Support/Fusetools/Packages/Fuse.BasicTheme/1.0.2/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------------------------

// public partial sealed class TextInput :664
// {
// static TextInput() :679
static void TextInput__cctor_3_fn(uType* __type)
{
    TextInput::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[207/*"_dividerRect"*/], ::STRINGS[208/*"thisDivider"*/]);
    TextInput::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[209/*"Color"*/]);
    TextInput::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[210/*"TextColor"*/]);
    TextInput::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[211/*"Value"*/]);
    TextInput::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[212/*"Height"*/]);
    TextInput::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[207/*"_dividerRect"*/]);
}

static void TextInput_build(uType* type)
{
    ::STRINGS[207] = uString::Const("_dividerRect");
    ::STRINGS[208] = uString::Const("thisDivider");
    ::STRINGS[209] = uString::Const("Color");
    ::STRINGS[210] = uString::Const("TextColor");
    ::STRINGS[211] = uString::Const("Value");
    ::STRINGS[212] = uString::Const("Height");
    ::STRINGS[203] = uString::Const("Basic.CLine");
    ::STRINGS[7] = uString::Const("Basic.C700");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface3),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::TextInputControl_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface7),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::TextInputControl_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextInputControl_type, interface14),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Controls::TextInputControl_type, interface15));
    type->SetFields(96,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Basic::TextInput, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::Basic::TextInput, _dividerRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::Basic::TextInput, _dividerRect_Height_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Basic::TextInput, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Basic::TextInput, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Basic::TextInput, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Basic::TextInput, this_TextColor_inst), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::Basic::TextInput, thisDivider), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::Basic::TextInput, thisDivider_Color_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Basic::TextInput::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Basic::TextInput::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Basic::TextInput::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Basic::TextInput::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Basic::TextInput::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Basic::TextInput::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::TextInputControl_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextInputControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::TextInput_typeof();
    options.FieldCount = 111;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextInputControl_type);
    type = (::g::Fuse::Controls::TextInputControl_type*)uClassType::New("Basic.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_ctor_ = (void*)TextInput__New4_fn;
    type->fp_cctor_ = TextInput__cctor_3_fn;
    type->interface15.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextInputControl__get_Value_fn;
    type->interface15.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextInputControl__set_Value_fn;
    type->interface15.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__add_ValueChanged_fn;
    type->interface15.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextInputControl__remove_ValueChanged_fn;
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
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::TextInputControl__OnPropertyChanged2_fn;
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

// public TextInput() :683
void TextInput__ctor_8_fn(TextInput* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :687
void TextInput__InitializeUX_fn(TextInput* __this)
{
    __this->InitializeUX();
}

// public TextInput New() :683
void TextInput__New4_fn(TextInput** __retval)
{
    *__retval = TextInput::New4();
}

uSStrong<uArray*> TextInput::__g_static_nametable1_;
::g::Uno::UX::Selector TextInput::__selector0_;
::g::Uno::UX::Selector TextInput::__selector1_;
::g::Uno::UX::Selector TextInput::__selector2_;
::g::Uno::UX::Selector TextInput::__selector3_;
::g::Uno::UX::Selector TextInput::__selector4_;

// public TextInput() [instance] :683
void TextInput::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :687
void TextInput::InitializeUX()
{
    thisDivider = ::g::Fuse::Drawing::SolidColor::New2();
    thisDivider_Color_inst = ::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(thisDivider, TextInput::__selector0());
    ::g::Fuse::Reactive::Resource* temp3 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[203/*"Basic.CLine"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, TextInput::__g_static_nametable1());
    this_TextColor_inst = ::g::FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(this, TextInput::__selector1());
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], this_TextColor_inst);
    temp_Value_inst = ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(temp, TextInput::__selector2());
    ::g::Fuse::Reactive::Resource* temp4 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[203/*"Basic.CLine"*/]);
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], thisDivider_Color_inst);
    temp1_Value_inst = ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(temp1, TextInput::__selector2());
    ::g::Fuse::Reactive::Resource* temp5 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[203/*"Basic.CLine"*/]);
    _dividerRect = ::g::Fuse::Controls::Rectangle::New3();
    _dividerRect_Height_inst = ::g::FuseBasicTheme_FuseElementsElement_Height_Property::New1(_dividerRect, TextInput::__selector3());
    ::g::Fuse::Animations::Change* temp2 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], thisDivider_Color_inst);
    temp2_Value_inst = ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(temp2, TextInput::__selector2());
    ::g::Fuse::Reactive::Resource* temp6 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[7/*"Basic.C700"*/]);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(thisDivider_Color_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Triggers::WhileDisabled* temp9 = ::g::Fuse::Triggers::WhileDisabled::New2();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Triggers::WhileFocusWithin* temp12 = ::g::Fuse::Triggers::WhileFocusWithin::New2();
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], _dividerRect_Height_inst);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp6, __g_nametable1, 3);
    FontSize(16.0f);
    TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 16.0f));
    temp7->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), _dividerRect);
    uPtr(_dividerRect)->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    uPtr(_dividerRect)->Alignment(12);
    uPtr(_dividerRect)->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 8.0f));
    uPtr(_dividerRect)->Name(TextInput::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_dividerRect)->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), thisDivider);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_dividerRect)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp->Duration(0.25);
    temp->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    temp1->Duration(0.25);
    temp1->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp1->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp2->Duration(0.25);
    temp2->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp2->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(::g::Uno::UX::Size__New1(2.0f, 1)));
    temp13->Duration(0.25);
    temp13->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp13->EasingBack(::g::Fuse::Animations::Easing::ExponentialIn());
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), _dividerRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), thisDivider);
    Font(::g::Basic::Resources::RobotoRegular());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public TextInput New() [static] :683
TextInput* TextInput::New4()
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::Basic
