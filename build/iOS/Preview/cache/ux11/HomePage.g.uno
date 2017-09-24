[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly HomePage __parent;
        [Uno.WeakReference] internal readonly HomePage __parentInstance;
        public Template(HomePage parent, HomePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::NewsItem();
            return __self;
        }
    }
    global::Uno.UX.Property<float> mainAppTranslation_X_inst;
    global::Uno.UX.Property<float> topMenuTranslation_Y_inst;
    global::Uno.UX.Property<float> bottomMenuTranslation_Y_inst;
    global::Uno.UX.Property<float> middleRectangle_Opacity_inst;
    global::Uno.UX.Property<float> topMenuRotation_Degrees_inst;
    global::Uno.UX.Property<float> bottomMenuRotation_Degrees_inst;
    global::Uno.UX.Property<Uno.UX.Size> topRectangle_Width_inst;
    global::Uno.UX.Property<Uno.UX.Size> bottomRectangle_Width_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    internal global::Fuse.Controls.EdgeNavigator EdgeNavigator;
    internal global::Sidebar menu;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Controls.DockPanel content;
    internal global::Fuse.Translation mainAppTranslation;
    internal global::Fuse.Controls.Rectangle topRectangle;
    internal global::Fuse.Translation topMenuTranslation;
    internal global::Fuse.Rotation topMenuRotation;
    internal global::Fuse.Controls.Rectangle middleRectangle;
    internal global::Fuse.Controls.Rectangle bottomRectangle;
    internal global::Fuse.Translation bottomMenuTranslation;
    internal global::Fuse.Rotation bottomMenuRotation;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "EdgeNavigator",
        "menu",
        "temp_eb3",
        "temp_eb4",
        "content",
        "mainAppTranslation",
        "topRectangle",
        "topMenuTranslation",
        "topMenuRotation",
        "middleRectangle",
        "bottomRectangle",
        "bottomMenuTranslation",
        "bottomMenuRotation"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        mainAppTranslation = new global::Fuse.Translation();
        mainAppTranslation_X_inst = new EventApp_FuseTranslation_X_Property(mainAppTranslation, __selector0);
        topMenuTranslation = new global::Fuse.Translation();
        topMenuTranslation_Y_inst = new EventApp_FuseTranslation_Y_Property(topMenuTranslation, __selector1);
        bottomMenuTranslation = new global::Fuse.Translation();
        bottomMenuTranslation_Y_inst = new EventApp_FuseTranslation_Y_Property(bottomMenuTranslation, __selector1);
        middleRectangle = new global::Fuse.Controls.Rectangle();
        middleRectangle_Opacity_inst = new EventApp_FuseElementsElement_Opacity_Property(middleRectangle, __selector2);
        topMenuRotation = new global::Fuse.Rotation();
        topMenuRotation_Degrees_inst = new EventApp_FuseRotation_Degrees_Property(topMenuRotation, __selector3);
        bottomMenuRotation = new global::Fuse.Rotation();
        bottomMenuRotation_Degrees_inst = new EventApp_FuseRotation_Degrees_Property(bottomMenuRotation, __selector3);
        topRectangle = new global::Fuse.Controls.Rectangle();
        topRectangle_Width_inst = new EventApp_FuseElementsElement_Width_Property(topRectangle, __selector4);
        bottomRectangle = new global::Fuse.Controls.Rectangle();
        bottomRectangle_Width_inst = new EventApp_FuseElementsElement_Width_Property(bottomRectangle, __selector4);
        var temp3 = new global::Fuse.Reactive.Data("setSidebarOpen");
        var temp4 = new global::Fuse.Reactive.Data("setSidebarClosed");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new EventApp_FuseTriggersWhileBool_Value_Property(temp, __selector5);
        var temp5 = new global::Fuse.Reactive.Data("sidebarOpen");
        var temp1 = new global::Fuse.Triggers.WhileFalse();
        temp1_Value_inst = new EventApp_FuseTriggersWhileBool_Value_Property(temp1, __selector5);
        var temp6 = new global::Fuse.Reactive.Data("sidebarOpen");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new EventApp_FuseReactiveEach_Items_Property(temp2, __selector6);
        var temp7 = new global::Fuse.Reactive.Data("data");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        EdgeNavigator = new global::Fuse.Controls.EdgeNavigator();
        menu = new global::Sidebar();
        var temp9 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp10 = new global::Fuse.Animations.Change<float>(mainAppTranslation_X_inst);
        var temp11 = new global::Fuse.Animations.Change<float>(topMenuTranslation_Y_inst);
        var temp12 = new global::Fuse.Animations.Change<float>(bottomMenuTranslation_Y_inst);
        var temp13 = new global::Fuse.Animations.Change<float>(middleRectangle_Opacity_inst);
        var temp14 = new global::Fuse.Animations.Change<float>(topMenuRotation_Degrees_inst);
        var temp15 = new global::Fuse.Animations.Change<float>(bottomMenuRotation_Degrees_inst);
        var temp16 = new global::Fuse.Animations.Change<Uno.UX.Size>(topRectangle_Width_inst);
        var temp17 = new global::Fuse.Animations.Change<Uno.UX.Size>(bottomRectangle_Width_inst);
        var temp18 = new global::Fuse.Navigation.WhileActive();
        var temp19 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
        var temp20 = new global::Fuse.Navigation.WhileInactive();
        var temp21 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        content = new global::Fuse.Controls.DockPanel();
        var temp22 = new global::Fuse.Controls.StatusBarBackground();
        var temp23 = new global::Fuse.Controls.BottomFrameBackground();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::Fuse.Controls.Grid();
        var temp26 = new global::Fuse.Controls.Panel();
        var temp27 = new global::Fuse.Gestures.Clicked();
        var temp28 = new global::Fuse.Navigation.NavigateTo();
        var temp29 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Fuse.Gestures.Clicked();
        var temp31 = new global::Fuse.Navigation.NavigateTo();
        var temp32 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Controls.Text();
        var temp34 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../assets/fonts/AlegreyaSans-Bold.otf")));
        var temp35 = new global::Fuse.Controls.Panel();
        var temp36 = new global::Fuse.Gestures.Clicked();
        var temp37 = new global::Fuse.Triggers.Actions.DebugAction();
        var temp38 = new global::Fuse.Controls.Circle();
        var temp39 = new global::Fuse.Drawing.Stroke();
        var temp40 = new global::Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        var temp41 = new global::Fuse.Controls.Rectangle();
        var temp42 = new global::Fuse.Translation();
        var temp43 = new global::Fuse.Rotation();
        var temp44 = new global::Fuse.Controls.Rectangle();
        var temp45 = new global::Fuse.Controls.ScrollView();
        var temp46 = new global::Fuse.Controls.StackPanel();
        var temp47 = new global::Fuse.Controls.Panel();
        var temp48 = new Template(this, this);
        var temp49 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp50 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        temp8.LineNumber = 3;
        temp8.FileName = "HomePage.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../MainView.js"));
        EdgeNavigator.Name = __selector7;
        EdgeNavigator.Children.Add(menu);
        EdgeNavigator.Children.Add(content);
        menu.Width = new Uno.UX.Size(180f, Uno.UX.Unit.Unspecified);
        menu.Name = __selector8;
        global::Fuse.Navigation.EdgeNavigation.SetEdge(menu, Fuse.Navigation.NavigationEdge.Left);
        menu.Children.Add(temp9);
        menu.Children.Add(temp18);
        menu.Children.Add(temp20);
        temp9.Animators.Add(temp10);
        temp9.Animators.Add(temp11);
        temp9.Animators.Add(temp12);
        temp9.Animators.Add(temp13);
        temp9.Animators.Add(temp14);
        temp9.Animators.Add(temp15);
        temp9.Animators.Add(temp16);
        temp9.Animators.Add(temp17);
        temp10.Value = 180f;
        temp11.Value = 0f;
        temp12.Value = 0f;
        temp13.Value = 0f;
        temp13.Easing = Fuse.Animations.Easing.CircularOut;
        temp14.Value = 45f;
        temp14.Easing = Fuse.Animations.Easing.ExponentialIn;
        temp15.Value = -45f;
        temp15.Easing = Fuse.Animations.Easing.ExponentialIn;
        temp16.Value = new Uno.UX.Size(28f, Uno.UX.Unit.Unspecified);
        temp17.Value = new Uno.UX.Size(28f, Uno.UX.Unit.Unspecified);
        temp18.Actions.Add(temp19);
        temp18.Bindings.Add(temp_eb3);
        temp19.Handler += temp_eb3.OnEvent;
        temp20.Actions.Add(temp21);
        temp20.Bindings.Add(temp_eb4);
        temp21.Handler += temp_eb4.OnEvent;
        content.Name = __selector9;
        content.Background = temp50;
        content.Children.Add(mainAppTranslation);
        content.Children.Add(temp22);
        content.Children.Add(temp23);
        content.Children.Add(temp24);
        content.Children.Add(temp45);
        mainAppTranslation.Name = __selector10;
        global::Fuse.Controls.DockPanel.SetDock(temp22, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp23, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.DockPanel.SetDock(temp24, Fuse.Layouts.Dock.Top);
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp44);
        temp25.Columns = "auto,1*,auto";
        temp25.Background = Fuse.Drawing.Brushes.White;
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp33);
        temp25.Children.Add(temp35);
        temp26.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp26.Width = new Uno.UX.Size(32f, Uno.UX.Unit.Unspecified);
        temp26.Height = new Uno.UX.Size(32f, Uno.UX.Unit.Unspecified);
        temp26.Margin = float4(7f, 5f, 5f, 5f);
        temp26.Children.Add(temp);
        temp26.Children.Add(temp1);
        temp26.Children.Add(topRectangle);
        temp26.Children.Add(middleRectangle);
        temp26.Children.Add(bottomRectangle);
        temp.Nodes.Add(temp27);
        temp.Bindings.Add(temp29);
        temp27.Actions.Add(temp28);
        temp28.Target = content;
        temp1.Nodes.Add(temp30);
        temp1.Bindings.Add(temp32);
        temp30.Actions.Add(temp31);
        temp31.Target = menu;
        topRectangle.Color = float4(0f, 0f, 0f, 1f);
        topRectangle.Width = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        topRectangle.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        topRectangle.Name = __selector11;
        topRectangle.Children.Add(topMenuTranslation);
        topRectangle.Children.Add(topMenuRotation);
        topMenuTranslation.Y = -9f;
        topMenuTranslation.Name = __selector12;
        topMenuRotation.Name = __selector13;
        middleRectangle.Color = float4(0f, 0f, 0f, 1f);
        middleRectangle.Width = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        middleRectangle.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        middleRectangle.Name = __selector14;
        bottomRectangle.Color = float4(0f, 0f, 0f, 1f);
        bottomRectangle.Width = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        bottomRectangle.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        bottomRectangle.Name = __selector15;
        bottomRectangle.Children.Add(bottomMenuTranslation);
        bottomRectangle.Children.Add(bottomMenuRotation);
        bottomMenuTranslation.Y = 9f;
        bottomMenuTranslation.Name = __selector16;
        bottomMenuRotation.Name = __selector17;
        temp33.Value = "Events";
        temp33.FontSize = 22f;
        temp33.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp33.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp33.Padding = float4(2f, 2f, 2f, 2f);
        temp33.Font = temp34;
        temp35.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp35.Width = new Uno.UX.Size(32f, Uno.UX.Unit.Unspecified);
        temp35.Height = new Uno.UX.Size(32f, Uno.UX.Unit.Unspecified);
        temp35.Margin = float4(5f, 5f, 7f, 5f);
        temp35.Children.Add(temp36);
        temp35.Children.Add(temp38);
        temp35.Children.Add(temp41);
        temp36.Actions.Add(temp37);
        temp37.Message = "Search clicked";
        temp38.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp38.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp38.Strokes.Add(temp39);
        temp39.Width = 2f;
        temp39.Brush = temp40;
        temp41.Color = float4(0f, 0f, 0f, 1f);
        temp41.Width = new Uno.UX.Size(7f, Uno.UX.Unit.Unspecified);
        temp41.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
        temp41.Children.Add(temp42);
        temp41.Children.Add(temp43);
        temp42.X = 8f;
        temp42.Y = 8f;
        temp43.Degrees = 45f;
        temp44.Color = float4(0.2f, 0.2352941f, 0.282353f, 1f);
        temp44.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp44.Margin = float4(0f, 5f, 0f, 0f);
        temp45.Children.Add(temp46);
        temp46.Alignment = Fuse.Elements.Alignment.Top;
        temp46.Children.Add(temp47);
        temp46.Children.Add(temp2);
        temp47.Height = new Uno.UX.Size(7f, Uno.UX.Unit.Unspecified);
        temp2.Templates.Add(temp48);
        temp2.Bindings.Add(temp49);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(EdgeNavigator);
        __g_nametable.Objects.Add(menu);
        __g_nametable.Objects.Add(temp_eb3);
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(content);
        __g_nametable.Objects.Add(mainAppTranslation);
        __g_nametable.Objects.Add(topRectangle);
        __g_nametable.Objects.Add(topMenuTranslation);
        __g_nametable.Objects.Add(topMenuRotation);
        __g_nametable.Objects.Add(middleRectangle);
        __g_nametable.Objects.Add(bottomRectangle);
        __g_nametable.Objects.Add(bottomMenuTranslation);
        __g_nametable.Objects.Add(bottomMenuRotation);
        this.Children.Add(temp8);
        this.Children.Add(EdgeNavigator);
    }
    static global::Uno.UX.Selector __selector0 = "X";
    static global::Uno.UX.Selector __selector1 = "Y";
    static global::Uno.UX.Selector __selector2 = "Opacity";
    static global::Uno.UX.Selector __selector3 = "Degrees";
    static global::Uno.UX.Selector __selector4 = "Width";
    static global::Uno.UX.Selector __selector5 = "Value";
    static global::Uno.UX.Selector __selector6 = "Items";
    static global::Uno.UX.Selector __selector7 = "EdgeNavigator";
    static global::Uno.UX.Selector __selector8 = "menu";
    static global::Uno.UX.Selector __selector9 = "content";
    static global::Uno.UX.Selector __selector10 = "mainAppTranslation";
    static global::Uno.UX.Selector __selector11 = "topRectangle";
    static global::Uno.UX.Selector __selector12 = "topMenuTranslation";
    static global::Uno.UX.Selector __selector13 = "topMenuRotation";
    static global::Uno.UX.Selector __selector14 = "middleRectangle";
    static global::Uno.UX.Selector __selector15 = "bottomRectangle";
    static global::Uno.UX.Selector __selector16 = "bottomMenuTranslation";
    static global::Uno.UX.Selector __selector17 = "bottomMenuRotation";
}
