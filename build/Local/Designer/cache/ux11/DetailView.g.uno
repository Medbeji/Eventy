[Uno.Compiler.UxGenerated]
public partial class DetailView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> facePicture_Url_inst;
    global::Uno.UX.Property<string> topText_Value_inst;
    global::Uno.UX.Property<string> temp_Url_inst;
    global::Uno.UX.Property<Fuse.Elements.Element> headerPanel_LayoutElement_inst;
    global::Uno.UX.Property<float> bottomText_Opacity_inst;
    global::Uno.UX.Property<Fuse.Platform.StatusBarStyle> statusBarConfig_Style_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.iOS.StatusBarConfig statusBarConfig;
    internal global::Fuse.Controls.MultiLayoutPanel headerPanel;
    internal global::Fuse.Controls.Placeholder overBackgroundLayout;
    internal global::Fuse.Controls.Image facePicture;
    internal global::Fuse.Controls.StackPanel textPanel;
    internal global::TitleText topText;
    internal global::TitleText bottomText;
    internal global::Fuse.Controls.Panel backgroundPicture;
    internal global::Fuse.Controls.Placeholder underBackgroundLayout;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb8",
        "statusBarConfig",
        "headerPanel",
        "overBackgroundLayout",
        "facePicture",
        "textPanel",
        "topText",
        "bottomText",
        "backgroundPicture",
        "underBackgroundLayout"
    };
    static DetailView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public DetailView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("goToHome");
        facePicture = new global::Fuse.Controls.Image();
        facePicture_Url_inst = new EventApp_FuseControlsImage_Url_Property(facePicture, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("image");
        topText = new global::TitleText();
        topText_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(topText, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("name");
        var temp = new global::Fuse.Controls.Image();
        temp_Url_inst = new EventApp_FuseControlsImage_Url_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("cover");
        headerPanel = new global::Fuse.Controls.MultiLayoutPanel();
        headerPanel_LayoutElement_inst = new EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property(headerPanel, __selector2);
        bottomText = new global::TitleText();
        bottomText_Opacity_inst = new EventApp_FuseElementsElement_Opacity_Property(bottomText, __selector3);
        statusBarConfig = new global::Fuse.iOS.StatusBarConfig();
        statusBarConfig_Style_inst = new EventApp_FuseiOSStatusBarConfig_Style_Property(statusBarConfig, __selector4);
        var temp1 = new global::BodyText();
        temp1_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp7 = new global::Fuse.Reactive.Data("description");
        var temp2 = new global::BodyText();
        temp2_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp8 = new global::Fuse.Reactive.Data("fullDescription");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.Panel();
        var temp11 = new global::Fuse.Controls.Image();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
        var temp12 = new global::Fuse.Controls.Panel();
        overBackgroundLayout = new global::Fuse.Controls.Placeholder();
        var temp13 = new global::Fuse.Reactive.DataBinding(facePicture_Url_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        textPanel = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::Fuse.Controls.StatusBarBackground();
        var temp15 = new global::Fuse.Reactive.DataBinding(topText_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        backgroundPicture = new global::Fuse.Controls.Panel();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Url_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        underBackgroundLayout = new global::Fuse.Controls.Placeholder();
        var temp17 = new global::Fuse.Controls.ScrollView();
        var temp18 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp19 = new global::Fuse.Animations.Scale();
        var temp20 = new global::Fuse.Animations.Move();
        var temp21 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp22 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(headerPanel_LayoutElement_inst);
        var temp23 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp24 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(headerPanel_LayoutElement_inst);
        var temp25 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp26 = new global::Fuse.Animations.Move();
        var temp27 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp28 = new global::Fuse.Animations.Move();
        var temp29 = new global::Fuse.Animations.Move();
        var temp30 = new global::Fuse.Animations.Move();
        var temp31 = new global::Fuse.Animations.Change<float>(bottomText_Opacity_inst);
        var temp32 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp33 = new global::Fuse.Animations.Change<Fuse.Platform.StatusBarStyle>(statusBarConfig_Style_inst);
        var temp34 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp35 = new global::Fuse.Animations.Scale();
        var temp36 = new global::Fuse.Animations.Move();
        var temp37 = new global::Fuse.Controls.StackPanel();
        var temp38 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp39 = new global::Fuse.Controls.Rectangle();
        var temp40 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp9.LineNumber = 3;
        temp9.FileName = "DetailView.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../detail.js"));
        temp10.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp10.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp10.Margin = float4(5f, 25f, 5f, 5f);
        temp10.Children.Add(temp11);
        temp11.Opacity = 1f;
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb8.OnEvent);
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/previous.png"));
        temp11.Bindings.Add(temp_eb8);
        statusBarConfig.Style = Fuse.Platform.StatusBarStyle.Dark;
        statusBarConfig.Name = __selector5;
        temp12.Children.Add(headerPanel);
        temp12.Children.Add(temp17);
        headerPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        headerPanel.Height = new Uno.UX.Size(260f, Uno.UX.Unit.Unspecified);
        headerPanel.Alignment = Fuse.Elements.Alignment.Top;
        headerPanel.Name = __selector6;
        headerPanel.Children.Add(overBackgroundLayout);
        headerPanel.Children.Add(textPanel);
        headerPanel.Children.Add(backgroundPicture);
        headerPanel.Children.Add(underBackgroundLayout);
        overBackgroundLayout.Name = __selector7;
        overBackgroundLayout.PlaceholderContent = facePicture;
        facePicture.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        facePicture.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        facePicture.Alignment = Fuse.Elements.Alignment.BottomCenter;
        facePicture.Offset = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(75f, Uno.UX.Unit.Unspecified));
        facePicture.Name = __selector8;
        facePicture.Bindings.Add(temp13);
        textPanel.Alignment = Fuse.Elements.Alignment.Center;
        textPanel.Name = __selector9;
        textPanel.Children.Add(temp14);
        textPanel.Children.Add(topText);
        textPanel.Children.Add(bottomText);
        temp14.Margin = float4(0f, 0f, 0f, 15f);
        topText.FontSize = 35f;
        topText.Margin = float4(5f, 5f, 5f, 5f);
        topText.Name = __selector10;
        topText.Bindings.Add(temp15);
        bottomText.Value = "Think Security";
        bottomText.FontSize = 14f;
        bottomText.Name = __selector11;
        backgroundPicture.Alignment = Fuse.Elements.Alignment.Top;
        backgroundPicture.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Percent));
        backgroundPicture.Name = __selector12;
        backgroundPicture.Background = Fuse.Drawing.Brushes.Black;
        backgroundPicture.TransformOrigin = Fuse.Elements.TransformOrigins.Anchor;
        backgroundPicture.Children.Add(temp);
        temp.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp.Background = Fuse.Drawing.Brushes.Black;
        temp.Bindings.Add(temp16);
        underBackgroundLayout.Name = __selector13;
        underBackgroundLayout.Target = facePicture;
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp21);
        temp17.Children.Add(temp23);
        temp17.Children.Add(temp25);
        temp17.Children.Add(temp27);
        temp17.Children.Add(temp32);
        temp17.Children.Add(temp34);
        temp17.Children.Add(temp37);
        temp18.From = 0f;
        temp18.To = 150f;
        temp18.Animators.Add(temp19);
        temp18.Animators.Add(temp20);
        temp19.Factor = 0.6f;
        temp19.Target = facePicture;
        temp19.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp20.Y = -0.8f;
        temp20.RelativeTo = Fuse.TranslationModes.Size;
        temp20.Target = facePicture;
        temp20.Easing = Fuse.Animations.Easing.QuadraticIn;
        temp21.From = 125f;
        temp21.To = 0f;
        temp21.Actions.Add(temp22);
        temp22.Value = overBackgroundLayout;
        temp23.From = 125f;
        temp23.To = 170f;
        temp23.Actions.Add(temp24);
        temp24.Value = underBackgroundLayout;
        temp25.From = 150f;
        temp25.To = 1000f;
        temp25.Animators.Add(temp26);
        temp26.Y = -850f;
        temp26.Target = facePicture;
        temp26.Easing = Fuse.Animations.Easing.Linear;
        temp27.From = 0f;
        temp27.To = 260f;
        temp27.Animators.Add(temp28);
        temp27.Animators.Add(temp29);
        temp27.Animators.Add(temp30);
        temp27.Animators.Add(temp31);
        temp28.Y = -0.7f;
        temp28.RelativeTo = Fuse.TranslationModes.Size;
        temp28.Target = backgroundPicture;
        temp28.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp29.Y = -0.35f;
        temp29.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp29.Target = textPanel;
        temp29.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp30.Y = -0.3f;
        temp30.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp30.Target = bottomText;
        temp30.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp31.Value = 0f;
        temp31.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp32.From = 50f;
        temp32.To = 250f;
        temp32.Animators.Add(temp33);
        temp33.Value = Fuse.Platform.StatusBarStyle.Light;
        temp34.From = 0f;
        temp34.To = -1000f;
        temp34.Animators.Add(temp35);
        temp34.Animators.Add(temp36);
        temp35.Factor = 4f;
        temp35.Target = backgroundPicture;
        temp36.Y = 800f;
        temp36.Target = facePicture;
        temp37.Padding = float4(0f, 370f, 0f, 0f);
        temp37.Children.Add(temp1);
        temp37.Children.Add(temp39);
        temp37.Children.Add(temp2);
        temp1.FontSize = 20f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.Margin = float4(70f, 0f, 70f, 40f);
        temp1.Bindings.Add(temp38);
        temp39.Color = float4(0.8823529f, 0.8823529f, 0.8823529f, 1f);
        temp39.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp39.Margin = float4(50f, 0f, 50f, 0f);
        temp2.FontSize = 16f;
        temp2.Margin = float4(50f, 40f, 50f, 0f);
        temp2.Bindings.Add(temp40);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(statusBarConfig);
        __g_nametable.Objects.Add(headerPanel);
        __g_nametable.Objects.Add(overBackgroundLayout);
        __g_nametable.Objects.Add(facePicture);
        __g_nametable.Objects.Add(textPanel);
        __g_nametable.Objects.Add(topText);
        __g_nametable.Objects.Add(bottomText);
        __g_nametable.Objects.Add(backgroundPicture);
        __g_nametable.Objects.Add(underBackgroundLayout);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
        this.Children.Add(statusBarConfig);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "LayoutElement";
    static global::Uno.UX.Selector __selector3 = "Opacity";
    static global::Uno.UX.Selector __selector4 = "Style";
    static global::Uno.UX.Selector __selector5 = "statusBarConfig";
    static global::Uno.UX.Selector __selector6 = "headerPanel";
    static global::Uno.UX.Selector __selector7 = "overBackgroundLayout";
    static global::Uno.UX.Selector __selector8 = "facePicture";
    static global::Uno.UX.Selector __selector9 = "textPanel";
    static global::Uno.UX.Selector __selector10 = "topText";
    static global::Uno.UX.Selector __selector11 = "bottomText";
    static global::Uno.UX.Selector __selector12 = "backgroundPicture";
    static global::Uno.UX.Selector __selector13 = "underBackgroundLayout";
}
