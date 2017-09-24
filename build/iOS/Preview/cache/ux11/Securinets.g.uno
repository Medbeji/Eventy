[Uno.Compiler.UxGenerated]
public partial class Securinets: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Fuse.Elements.Element> headerPanel_LayoutElement_inst;
    global::Uno.UX.Property<float> bottomText_Opacity_inst;
    global::Uno.UX.Property<Fuse.Platform.StatusBarStyle> statusBarConfig_Style_inst;
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
    static Securinets()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Securinets(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("goToHome");
        headerPanel = new global::Fuse.Controls.MultiLayoutPanel();
        headerPanel_LayoutElement_inst = new EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property(headerPanel, __selector0);
        bottomText = new global::TitleText();
        bottomText_Opacity_inst = new EventApp_FuseElementsElement_Opacity_Property(bottomText, __selector1);
        statusBarConfig = new global::Fuse.iOS.StatusBarConfig();
        statusBarConfig_Style_inst = new EventApp_FuseiOSStatusBarConfig_Style_Property(statusBarConfig, __selector2);
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Button();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp, __g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        overBackgroundLayout = new global::Fuse.Controls.Placeholder();
        facePicture = new global::Fuse.Controls.Image();
        textPanel = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::Fuse.Controls.StatusBarBackground();
        topText = new global::TitleText();
        backgroundPicture = new global::Fuse.Controls.Panel();
        var temp5 = new global::Fuse.Controls.Image();
        underBackgroundLayout = new global::Fuse.Controls.Placeholder();
        var temp6 = new global::Fuse.Controls.ScrollView();
        var temp7 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp8 = new global::Fuse.Animations.Scale();
        var temp9 = new global::Fuse.Animations.Move();
        var temp10 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp11 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(headerPanel_LayoutElement_inst);
        var temp12 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp13 = new global::Fuse.Triggers.Actions.Set<Fuse.Elements.Element>(headerPanel_LayoutElement_inst);
        var temp14 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp15 = new global::Fuse.Animations.Move();
        var temp16 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp17 = new global::Fuse.Animations.Move();
        var temp18 = new global::Fuse.Animations.Move();
        var temp19 = new global::Fuse.Animations.Move();
        var temp20 = new global::Fuse.Animations.Change<float>(bottomText_Opacity_inst);
        var temp21 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp22 = new global::Fuse.Animations.Change<Fuse.Platform.StatusBarStyle>(statusBarConfig_Style_inst);
        var temp23 = new global::Fuse.Triggers.ScrollingAnimation();
        var temp24 = new global::Fuse.Animations.Scale();
        var temp25 = new global::Fuse.Animations.Move();
        var temp26 = new global::Fuse.Controls.StackPanel();
        var temp27 = new global::BodyText();
        var temp28 = new global::Fuse.Controls.Rectangle();
        var temp29 = new global::BodyText();
        var temp30 = new global::BodyText();
        var temp31 = new global::BodyText();
        temp1.LineNumber = 3;
        temp1.FileName = "Securinets.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../MainView.js"));
        temp2.Text = "Back";
        temp2.Alignment = Fuse.Elements.Alignment.Left;
        temp2.Margin = float4(0f, 80f, 0f, 0f);
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb8.OnEvent);
        temp2.Bindings.Add(temp_eb8);
        statusBarConfig.Style = Fuse.Platform.StatusBarStyle.Dark;
        statusBarConfig.Name = __selector3;
        temp3.Children.Add(headerPanel);
        temp3.Children.Add(temp6);
        headerPanel.HitTestMode = Fuse.Elements.HitTestMode.None;
        headerPanel.Height = new Uno.UX.Size(260f, Uno.UX.Unit.Unspecified);
        headerPanel.Alignment = Fuse.Elements.Alignment.Top;
        headerPanel.Name = __selector4;
        headerPanel.Children.Add(overBackgroundLayout);
        headerPanel.Children.Add(textPanel);
        headerPanel.Children.Add(backgroundPicture);
        headerPanel.Children.Add(underBackgroundLayout);
        overBackgroundLayout.Name = __selector5;
        overBackgroundLayout.PlaceholderContent = facePicture;
        facePicture.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        facePicture.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        facePicture.Alignment = Fuse.Elements.Alignment.BottomCenter;
        facePicture.Offset = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(75f, Uno.UX.Unit.Unspecified));
        facePicture.Name = __selector6;
        facePicture.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/securinets.png"));
        textPanel.Alignment = Fuse.Elements.Alignment.Center;
        textPanel.Name = __selector7;
        textPanel.Children.Add(temp4);
        textPanel.Children.Add(topText);
        textPanel.Children.Add(bottomText);
        temp4.Margin = float4(0f, 0f, 0f, 15f);
        topText.Value = "SECURINETS";
        topText.FontSize = 35f;
        topText.Margin = float4(5f, 5f, 5f, 5f);
        topText.Name = __selector8;
        bottomText.Value = "Think Security";
        bottomText.FontSize = 14f;
        bottomText.Name = __selector9;
        backgroundPicture.Alignment = Fuse.Elements.Alignment.Top;
        backgroundPicture.Anchor = new Uno.UX.Size2(new Uno.UX.Size(50f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Percent));
        backgroundPicture.Name = __selector10;
        backgroundPicture.Background = Fuse.Drawing.Brushes.Black;
        backgroundPicture.TransformOrigin = Fuse.Elements.TransformOrigins.Anchor;
        backgroundPicture.Children.Add(temp5);
        temp5.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/background.png"));
        temp5.Background = Fuse.Drawing.Brushes.Black;
        underBackgroundLayout.Name = __selector11;
        underBackgroundLayout.Target = facePicture;
        temp6.Children.Add(temp7);
        temp6.Children.Add(temp10);
        temp6.Children.Add(temp12);
        temp6.Children.Add(temp14);
        temp6.Children.Add(temp16);
        temp6.Children.Add(temp21);
        temp6.Children.Add(temp23);
        temp6.Children.Add(temp26);
        temp7.From = 0f;
        temp7.To = 150f;
        temp7.Animators.Add(temp8);
        temp7.Animators.Add(temp9);
        temp8.Factor = 0.6f;
        temp8.Target = facePicture;
        temp8.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp9.Y = -0.8f;
        temp9.RelativeTo = Fuse.TranslationModes.Size;
        temp9.Target = facePicture;
        temp9.Easing = Fuse.Animations.Easing.QuadraticIn;
        temp10.From = 125f;
        temp10.To = 0f;
        temp10.Actions.Add(temp11);
        temp11.Value = overBackgroundLayout;
        temp12.From = 125f;
        temp12.To = 170f;
        temp12.Actions.Add(temp13);
        temp13.Value = underBackgroundLayout;
        temp14.From = 150f;
        temp14.To = 1000f;
        temp14.Animators.Add(temp15);
        temp15.Y = -850f;
        temp15.Target = facePicture;
        temp15.Easing = Fuse.Animations.Easing.Linear;
        temp16.From = 0f;
        temp16.To = 260f;
        temp16.Animators.Add(temp17);
        temp16.Animators.Add(temp18);
        temp16.Animators.Add(temp19);
        temp16.Animators.Add(temp20);
        temp17.Y = -0.7f;
        temp17.RelativeTo = Fuse.TranslationModes.Size;
        temp17.Target = backgroundPicture;
        temp17.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp18.Y = -0.35f;
        temp18.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp18.Target = textPanel;
        temp18.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp19.Y = -0.3f;
        temp19.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp19.Target = bottomText;
        temp19.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp20.Value = 0f;
        temp20.Easing = Fuse.Animations.Easing.QuadraticOut;
        temp21.From = 50f;
        temp21.To = 250f;
        temp21.Animators.Add(temp22);
        temp22.Value = Fuse.Platform.StatusBarStyle.Light;
        temp23.From = 0f;
        temp23.To = -1000f;
        temp23.Animators.Add(temp24);
        temp23.Animators.Add(temp25);
        temp24.Factor = 4f;
        temp24.Target = backgroundPicture;
        temp25.Y = 800f;
        temp25.Target = facePicture;
        temp26.Padding = float4(0f, 370f, 0f, 0f);
        temp26.Children.Add(temp27);
        temp26.Children.Add(temp28);
        temp26.Children.Add(temp29);
        temp26.Children.Add(temp30);
        temp26.Children.Add(temp31);
        temp27.Value = "SecuriNets est le 1er club de sécurité informatique en Tunisie";
        temp27.FontSize = 20f;
        temp27.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp27.Margin = float4(70f, 0f, 70f, 40f);
        temp28.Color = float4(0.8823529f, 0.8823529f, 0.8823529f, 1f);
        temp28.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp28.Margin = float4(50f, 0f, 50f, 0f);
        temp29.Value = "Il a été fondé en 2004 à l’INSAT (Institut National des Sciences Appliquées et de Technologie) par quatre étudiants de ce même établissement Et depuis, tous les mercredi, la SecuriHebdo (Réunion hebdomadaire organisé par SecuriNets) est la destination d’une centaine de jeunes étudiants passionnés par la sécurité informatique venant non seulement de l’INSAT mais aussi des autres écoles d’ingénieurs.";
        temp29.FontSize = 16f;
        temp29.Margin = float4(50f, 40f, 50f, 0f);
        temp30.Value = "Hormis cette réunion hebdomadaire, nous organisons différentes formations et deux journées chaque année SecuriLight et SecuriDay. Nous participons aussi à de grands événements tels que le SFD et les TNWebDays…";
        temp30.FontSize = 16f;
        temp30.Margin = float4(50f, 20f, 50f, 0f);
        temp31.Value = "Notre objectif était dès le départ de répandre la culture de la sécurité informatique et de sensibiliser les gens à son importance d’où notre slogan SecuriNets Think Security!";
        temp31.FontSize = 16f;
        temp31.Margin = float4(50f, 20f, 50f, 50f);
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
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(statusBarConfig);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "LayoutElement";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Style";
    static global::Uno.UX.Selector __selector3 = "statusBarConfig";
    static global::Uno.UX.Selector __selector4 = "headerPanel";
    static global::Uno.UX.Selector __selector5 = "overBackgroundLayout";
    static global::Uno.UX.Selector __selector6 = "facePicture";
    static global::Uno.UX.Selector __selector7 = "textPanel";
    static global::Uno.UX.Selector __selector8 = "topText";
    static global::Uno.UX.Selector __selector9 = "bottomText";
    static global::Uno.UX.Selector __selector10 = "backgroundPicture";
    static global::Uno.UX.Selector __selector11 = "underBackgroundLayout";
}
