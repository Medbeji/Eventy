[Uno.Compiler.UxGenerated]
public partial class Search: Fuse.Controls.Panel
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> text_Value_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Controls.StackPanel topBar;
    internal global::Fuse.Reactive.EventBinding temp_eb15;
    internal global::Fuse.Controls.TextInput text;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "topBar",
        "temp_eb15",
        "text"
    };
    static Search()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Search(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("goToHome");
        text = new global::Fuse.Controls.TextInput();
        text_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(text, __selector0);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new EventApp_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("inDetailsMode");
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        topBar = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::Fuse.Controls.Panel();
        var temp5 = new global::Fuse.Controls.StatusBarBackground();
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Fuse.Controls.Image();
        temp_eb15 = new global::Fuse.Reactive.EventBinding(temp1, __g_nametable);
        var temp8 = new global::Fuse.Controls.Button();
        var temp9 = new global::Fuse.Gestures.Clicked();
        var temp10 = new global::Fuse.Triggers.Actions.Set<string>(text_Value_inst);
        var temp11 = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Drawing.Stroke();
        var temp13 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
        var temp14 = new global::Fuse.Animations.Move();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Drawing.LinearGradient();
        var temp17 = new global::Fuse.Drawing.GradientStop();
        var temp18 = new global::Fuse.Drawing.GradientStop();
        var temp19 = new global::Fuse.Controls.Shadow();
        var temp20 = new global::Fuse.Controls.Shadow();
        var temp21 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9686275f, 0.9607843f, 0.9607843f, 0.1215686f));
        temp3.LineNumber = 3;
        temp3.FileName = "Search.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../MainView.js"));
        topBar.Color = float4(0.9960784f, 0.9960784f, 0.9960784f, 0.1490196f);
        topBar.Visibility = Fuse.Elements.Visibility.Visible;
        topBar.Opacity = 1f;
        topBar.Name = __selector1;
        global::Fuse.Controls.Grid.SetRow(topBar, 0);
        topBar.Background = temp16;
        topBar.Children.Add(temp4);
        topBar.Children.Add(temp6);
        topBar.Children.Add(temp);
        topBar.Children.Add(temp19);
        topBar.Children.Add(temp20);
        temp4.Color = float4(0.145098f, 0.1647059f, 0.2156863f, 1f);
        temp4.Children.Add(temp5);
        temp6.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp8);
        temp6.Children.Add(text);
        temp7.Alignment = Fuse.Elements.Alignment.Left;
        temp7.Margin = float4(1f, 1f, 1f, 1f);
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb15.OnEvent);
        temp7.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Images/back.png"));
        temp7.Bindings.Add(temp_eb15);
        temp8.Text = "Clear";
        temp8.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp8.Margin = float4(5f, 0f, 50f, 0f);
        temp8.Children.Add(temp9);
        temp9.Actions.Add(temp10);
        temp10.Value = "";
        text.PlaceholderText = "Entrer nom d evenement";
        text.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
        text.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        text.Alignment = Fuse.Elements.Alignment.TopCenter;
        text.Padding = float4(5f, 5f, 5f, 5f);
        text.Name = __selector2;
        text.Children.Add(temp11);
        temp11.Layer = Fuse.Layer.Background;
        temp11.Strokes.Add(temp12);
        temp12.Width = 2f;
        temp12.Brush = temp13;
        temp.Animators.Add(temp14);
        temp.Bindings.Add(temp15);
        temp14.Y = -1f;
        temp14.Duration = 0.3;
        temp14.RelativeTo = Fuse.TranslationModes.Size;
        temp16.Stops.Add(temp17);
        temp16.Stops.Add(temp18);
        temp17.Offset = 0f;
        temp17.Color = float4(0.9568627f, 0.972549f, 0.9568627f, 1f);
        temp18.Offset = 1f;
        temp18.Color = float4(0.6862745f, 0.8509804f, 0.8862745f, 1f);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(topBar);
        __g_nametable.Objects.Add(temp_eb15);
        __g_nametable.Objects.Add(text);
        this.Children.Add(temp3);
        this.Children.Add(topBar);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "topBar";
    static global::Uno.UX.Selector __selector2 = "text";
}
