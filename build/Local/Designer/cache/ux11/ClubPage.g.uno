[Uno.Compiler.UxGenerated]
public partial class ClubPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly ClubPage __parent;
        [Uno.WeakReference] internal readonly ClubPage __parentInstance;
        public Template(ClubPage parent, ClubPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<bool> __self_InDetailsMode_inst;
        global::Uno.UX.Property<string> __self_ImageName_inst;
        global::Uno.UX.Property<string> __self_Country_inst;
        global::Uno.UX.Property<float4> __self_ForegroundColor_inst;
        global::Uno.UX.Property<Fuse.Elements.Alignment> __self_CardAlignment_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "topItem"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::ExploreItem(__parent.detailsImagePanel, __parent.detailsPlacesPanel, __parent.detailsInfoPanel, __parent.detailsFactsPanel);
            var temp = new global::Fuse.Selection.Selectable();
            temp_Value_inst = new EventApp_FuseSelectionSelectable_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("id");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_InDetailsMode_inst = new EventApp_ExploreItem_InDetailsMode_Property(__self, __selector1);
            __self_ImageName_inst = new EventApp_ExploreItem_ImageName_Property(__self, __selector2);
            var temp2 = new global::Fuse.Reactive.Data("name");
            __self_Country_inst = new EventApp_ExploreItem_Country_Property(__self, __selector3);
            var temp3 = new global::Fuse.Reactive.Data("country");
            __self_ForegroundColor_inst = new EventApp_ExploreItem_ForegroundColor_Property(__self, __selector4);
            var temp4 = new global::Fuse.Reactive.Data("color");
            __self_CardAlignment_inst = new EventApp_ExploreItem_CardAlignment_Property(__self, __selector5);
            var temp5 = new global::Fuse.Reactive.Data("alignment");
            var temp6 = new global::Fuse.Effects.DropShadow();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Selection.WhileSelected();
            var temp9 = new global::Fuse.Animations.Change<bool>(__self_InDetailsMode_inst);
            var temp10 = new global::Fuse.Gestures.Tapped();
            var temp11 = new global::Fuse.Selection.ToggleSelection();
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_ImageName_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Reactive.DataBinding(__self_Country_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Reactive.DataBinding(__self_ForegroundColor_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp15 = new global::Fuse.Reactive.DataBinding(__self_CardAlignment_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            __self.Name = __selector6;
            temp.Bindings.Add(temp7);
            temp8.Animators.Add(temp9);
            temp9.Value = true;
            temp10.Actions.Add(temp11);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp6);
            __self.Children.Add(temp);
            __self.Children.Add(temp8);
            __self.Children.Add(temp10);
            __self.Bindings.Add(temp12);
            __self.Bindings.Add(temp13);
            __self.Bindings.Add(temp14);
            __self.Bindings.Add(temp15);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "InDetailsMode";
        static global::Uno.UX.Selector __selector2 = "ImageName";
        static global::Uno.UX.Selector __selector3 = "Country";
        static global::Uno.UX.Selector __selector4 = "ForegroundColor";
        static global::Uno.UX.Selector __selector5 = "CardAlignment";
        static global::Uno.UX.Selector __selector6 = "topItem";
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> sw_UserScroll_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    internal global::Fuse.Controls.Panel detailsImagePanel;
    internal global::Fuse.Controls.Panel detailsPlacesPanel;
    internal global::Fuse.Controls.Panel detailsInfoPanel;
    internal global::Fuse.Controls.Panel detailsFactsPanel;
    internal global::Fuse.Controls.StackPanel topBar;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    internal global::Fuse.Controls.PageControl citiesPageControl;
    internal global::Fuse.Controls.ScrollView sw;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "detailsImagePanel",
        "detailsPlacesPanel",
        "detailsInfoPanel",
        "detailsFactsPanel",
        "topBar",
        "temp_eb7",
        "citiesPageControl",
        "sw"
    };
    static ClubPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ClubPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Data("goToHome");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new EventApp_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("inDetailsMode");
        sw = new global::Fuse.Controls.ScrollView();
        sw_UserScroll_inst = new EventApp_FuseControlsScrollViewBase_UserScroll_Property(sw, __selector1);
        var temp1 = new global::Fuse.Triggers.WhileFalse();
        temp1_Value_inst = new EventApp_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("inDetailsMode");
        var temp2 = new global::Fuse.Selection.Selection();
        temp2_Value_inst = new EventApp_FuseSelectionSelection_Value_Property(temp2, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("current");
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new EventApp_FuseReactiveEach_Items_Property(temp3, __selector2);
        var temp8 = new global::Fuse.Reactive.Data("places");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.Grid();
        var temp11 = new global::Fuse.iOS.StatusBarConfig();
        var temp12 = new global::Fuse.Drawing.LinearGradient();
        var temp13 = new global::Fuse.Drawing.GradientStop();
        var temp14 = new global::Fuse.Drawing.GradientStop();
        var temp15 = new global::Fuse.Controls.Panel();
        var temp16 = new global::Fuse.Controls.Grid();
        detailsImagePanel = new global::Fuse.Controls.Panel();
        detailsPlacesPanel = new global::Fuse.Controls.Panel();
        detailsInfoPanel = new global::Fuse.Controls.Panel();
        detailsFactsPanel = new global::Fuse.Controls.Panel();
        topBar = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Controls.StatusBarBackground();
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Controls.Image();
        var temp22 = new global::Fuse.Drawing.LinearGradient();
        var temp23 = new global::Fuse.Drawing.GradientStop();
        var temp24 = new global::Fuse.Drawing.GradientStop();
        var temp25 = new global::Fuse.Drawing.SolidColor();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        var temp26 = new global::Fuse.Animations.Move();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Panel();
        citiesPageControl = new global::Fuse.Controls.PageControl();
        var temp29 = new global::Fuse.Animations.Change<bool>(sw_UserScroll_inst);
        var temp30 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Controls.StackPanel();
        var temp32 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Write);
        var topItem = new Template(this, this);
        var temp33 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp9.LineNumber = 3;
        temp9.FileName = "ClubPage.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../MainView.js"));
        temp10.Rows = "auto,1*";
        temp10.Margin = float4(0f, 0f, 0f, 0f);
        temp10.Background = temp12;
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp15);
        temp10.Children.Add(topBar);
        temp10.Children.Add(temp28);
        temp11.Style = Fuse.Platform.StatusBarStyle.Light;
        temp12.StartPoint = float2(0f, 0f);
        temp12.EndPoint = float2(0f, 1f);
        temp12.Stops.Add(temp13);
        temp12.Stops.Add(temp14);
        temp13.Offset = 0f;
        temp13.Color = float4(0.6156863f, 0.6352941f, 0.6901961f, 1f);
        temp14.Offset = 1f;
        temp14.Color = float4(0.145098f, 0.1647059f, 0.2156863f, 1f);
        global::Fuse.Controls.Grid.SetRow(temp15, 0);
        global::Fuse.Controls.Grid.SetRowSpan(temp15, 3);
        temp15.Children.Add(temp16);
        temp16.Rows = "3*,180,3*";
        temp16.Columns = "1*,1*";
        temp16.Children.Add(detailsImagePanel);
        temp16.Children.Add(detailsPlacesPanel);
        temp16.Children.Add(detailsInfoPanel);
        temp16.Children.Add(detailsFactsPanel);
        detailsImagePanel.Name = __selector3;
        global::Fuse.Controls.Grid.SetRow(detailsImagePanel, 0);
        global::Fuse.Controls.Grid.SetColumn(detailsImagePanel, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(detailsImagePanel, 2);
        detailsPlacesPanel.Name = __selector4;
        global::Fuse.Controls.Grid.SetRow(detailsPlacesPanel, 1);
        global::Fuse.Controls.Grid.SetColumn(detailsPlacesPanel, 0);
        detailsInfoPanel.Name = __selector5;
        global::Fuse.Controls.Grid.SetRow(detailsInfoPanel, 1);
        global::Fuse.Controls.Grid.SetColumn(detailsInfoPanel, 1);
        detailsFactsPanel.Name = __selector6;
        global::Fuse.Controls.Grid.SetRow(detailsFactsPanel, 2);
        global::Fuse.Controls.Grid.SetColumn(detailsFactsPanel, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(detailsFactsPanel, 2);
        topBar.Color = float4(0.3647059f, 0.3882353f, 0.4509804f, 1f);
        topBar.Name = __selector7;
        global::Fuse.Controls.Grid.SetRow(topBar, 0);
        topBar.Children.Add(temp17);
        topBar.Children.Add(temp19);
        topBar.Children.Add(temp);
        temp17.Color = float4(0.3647059f, 0.3882353f, 0.4509804f, 1f);
        temp17.Children.Add(temp18);
        temp19.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Value = "Clubs";
        temp20.FontSize = 20f;
        temp20.TextColor = float4(1f, 1f, 1f, 1f);
        temp20.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp20.Margin = float4(0f, 13f, 0f, 0f);
        temp21.Color = Fuse.Drawing.Colors.White;
        temp21.Alignment = Fuse.Elements.Alignment.Left;
        temp21.Margin = float4(5f, 5f, 5f, 5f);
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb7.OnEvent);
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/back.png"));
        temp21.Background = temp25;
        temp21.Bindings.Add(temp_eb7);
        temp22.Stops.Add(temp23);
        temp22.Stops.Add(temp24);
        temp23.Offset = 0f;
        temp23.Color = float4(0.6784314f, 0.8666667f, 0.6705883f, 1f);
        temp24.Offset = 1f;
        temp24.Color = float4(0.427451f, 0.7529412f, 0.8235294f, 1f);
        temp.Animators.Add(temp26);
        temp.Bindings.Add(temp27);
        temp26.Y = -1f;
        temp26.Duration = 0.3;
        temp26.RelativeTo = Fuse.TranslationModes.Size;
        global::Fuse.Controls.Grid.SetRow(temp28, 1);
        temp28.Children.Add(citiesPageControl);
        citiesPageControl.ClipToBounds = false;
        citiesPageControl.Name = __selector8;
        citiesPageControl.Children.Add(temp1);
        citiesPageControl.Children.Add(sw);
        temp1.Animators.Add(temp29);
        temp1.Bindings.Add(temp30);
        temp29.Value = true;
        sw.UserScroll = false;
        sw.ClipToBounds = false;
        sw.Name = __selector9;
        sw.Children.Add(temp31);
        temp31.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp31.Opacity = 1f;
        temp31.Children.Add(temp2);
        temp31.Children.Add(temp3);
        temp2.MinCount = 0;
        temp2.MaxCount = 1;
        temp2.Bindings.Add(temp32);
        temp3.Templates.Add(topItem);
        temp3.Bindings.Add(temp33);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(detailsImagePanel);
        __g_nametable.Objects.Add(detailsPlacesPanel);
        __g_nametable.Objects.Add(detailsInfoPanel);
        __g_nametable.Objects.Add(detailsFactsPanel);
        __g_nametable.Objects.Add(topBar);
        __g_nametable.Objects.Add(temp_eb7);
        __g_nametable.Objects.Add(citiesPageControl);
        __g_nametable.Objects.Add(sw);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "UserScroll";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "detailsImagePanel";
    static global::Uno.UX.Selector __selector4 = "detailsPlacesPanel";
    static global::Uno.UX.Selector __selector5 = "detailsInfoPanel";
    static global::Uno.UX.Selector __selector6 = "detailsFactsPanel";
    static global::Uno.UX.Selector __selector7 = "topBar";
    static global::Uno.UX.Selector __selector8 = "citiesPageControl";
    static global::Uno.UX.Selector __selector9 = "sw";
}
