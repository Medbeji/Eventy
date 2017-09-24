[Uno.Compiler.UxGenerated]
public partial class Sidebar: Fuse.Controls.StackPanel
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Controls.StackPanel user;
    internal global::Fuse.Controls.Grid stats;
    internal global::Fuse.Controls.StackPanel browser;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Controls.StackPanel chat;
    internal global::Fuse.Controls.StackPanel feed;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "user",
        "stats",
        "browser",
        "temp_eb0",
        "temp_eb1",
        "chat",
        "feed",
        "temp_eb2",
        "temp_eb3"
    };
    static Sidebar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Sidebar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Username();
        temp_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("username");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Stats();
        temp1_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("numberOfEvents");
        var temp2 = new global::Stats();
        temp2_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("numberOfClubs");
        var temp6 = new global::Fuse.Reactive.Data("goToClubs");
        var temp7 = new global::Fuse.Reactive.Data("goToClubs");
        var temp8 = new global::Fuse.Reactive.Data("signedOut");
        var temp9 = new global::Fuse.Reactive.Data("signedOut");
        var temp10 = new global::Fuse.Navigation.WhileInactive();
        var temp11 = new global::Fuse.Animations.Move();
        var temp12 = new global::Fuse.Animations.Move();
        var temp13 = new global::Fuse.Animations.Move();
        var temp14 = new global::Fuse.Animations.Move();
        var temp15 = new global::Fuse.Animations.Move();
        var temp16 = new global::Fuse.Controls.StatusBarBackground();
        var temp17 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5647059f, 0.5803922f, 0.5960785f, 1f));
        user = new global::Fuse.Controls.StackPanel();
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Controls.Circle();
        var temp20 = new global::Fuse.Drawing.ImageFill();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
        stats = new global::Fuse.Controls.Grid();
        var temp22 = new global::Fuse.Controls.StackPanel();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Relations();
        var temp25 = new global::Fuse.Controls.Rectangle();
        var temp26 = new global::Fuse.Drawing.SolidColor();
        var temp27 = new global::Fuse.Controls.StackPanel();
        var temp28 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp29 = new global::Relations();
        var temp30 = new global::Fuse.Controls.StackPanel();
        browser = new global::Fuse.Controls.StackPanel();
        var temp31 = new global::SidebarIcon();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp6, __g_nametable);
        var temp32 = new global::Fuse.Controls.Button();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
        chat = new global::Fuse.Controls.StackPanel();
        var temp33 = new global::SidebarIcon();
        var temp34 = new global::Fuse.Controls.Button();
        feed = new global::Fuse.Controls.StackPanel();
        var temp35 = new global::SidebarIcon();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp8, __g_nametable);
        var temp36 = new global::Fuse.Controls.Button();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp9, __g_nametable);
        var temp37 = new global::Fuse.Drawing.StaticSolidColor(float4(0.1294118f, 0.1568628f, 0.1921569f, 1f));
        temp10.Threshold = 0.4f;
        temp10.Animators.Add(temp11);
        temp10.Animators.Add(temp12);
        temp10.Animators.Add(temp13);
        temp10.Animators.Add(temp14);
        temp10.Animators.Add(temp15);
        temp11.X = -180f;
        temp11.Duration = 0.2;
        temp11.Delay = 0.3;
        temp11.Target = user;
        temp11.Easing = Fuse.Animations.Easing.CircularIn;
        temp12.X = -180f;
        temp12.Duration = 0.2;
        temp12.Delay = 0.2;
        temp12.Target = stats;
        temp12.Easing = Fuse.Animations.Easing.CircularIn;
        temp13.X = -180f;
        temp13.Duration = 0.2;
        temp13.Delay = 0.15;
        temp13.Target = browser;
        temp13.Easing = Fuse.Animations.Easing.CircularIn;
        temp14.X = -180f;
        temp14.Duration = 0.2;
        temp14.Delay = 0.1;
        temp14.Target = feed;
        temp14.Easing = Fuse.Animations.Easing.CircularIn;
        temp15.X = -180f;
        temp15.Duration = 0.2;
        temp15.Delay = 0.05;
        temp15.Target = chat;
        temp15.Easing = Fuse.Animations.Easing.CircularIn;
        temp16.Background = temp17;
        user.Name = __selector1;
        user.Children.Add(temp18);
        user.Children.Add(temp19);
        user.Children.Add(temp);
        temp18.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp19.Width = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp19.Fills.Add(temp20);
        temp20.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
        temp20.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/avatar.png"));
        temp.Bindings.Add(temp21);
        stats.ColumnCount = 3;
        stats.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        stats.Margin = float4(0f, 10f, 0f, 15f);
        stats.Name = __selector2;
        stats.Children.Add(temp22);
        stats.Children.Add(temp25);
        stats.Children.Add(temp27);
        temp22.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp22.Children.Add(temp1);
        temp22.Children.Add(temp24);
        temp1.Bindings.Add(temp23);
        temp24.Value = "Events";
        temp25.Width = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp25.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp25.Fills.Add(temp26);
        temp26.Color = float4(0.254902f, 0.3098039f, 0.3686275f, 1f);
        temp27.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp27.Children.Add(temp2);
        temp27.Children.Add(temp29);
        temp2.Bindings.Add(temp28);
        temp29.Value = "Clubs";
        temp30.Children.Add(browser);
        temp30.Children.Add(chat);
        temp30.Children.Add(feed);
        browser.Name = __selector3;
        browser.Children.Add(temp31);
        browser.Children.Add(temp32);
        global::Fuse.Gestures.Clicked.AddHandler(temp31, temp_eb0.OnEvent);
        temp31.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Browser.png"));
        temp31.Bindings.Add(temp_eb0);
        temp32.Text = "Clubs";
        temp32.Margin = float4(0.1f, 0.1f, 0.1f, 0.1f);
        global::Fuse.Gestures.Clicked.AddHandler(temp32, temp_eb1.OnEvent);
        temp32.Bindings.Add(temp_eb1);
        chat.Name = __selector4;
        chat.Children.Add(temp33);
        chat.Children.Add(temp34);
        temp33.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Chat.png"));
        temp34.Text = "Preferences";
        temp34.Margin = float4(0.1f, 0.1f, 0.1f, 0.1f);
        feed.Name = __selector5;
        feed.Children.Add(temp35);
        feed.Children.Add(temp36);
        global::Fuse.Gestures.Clicked.AddHandler(temp35, temp_eb2.OnEvent);
        temp35.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Feed.png"));
        temp35.Bindings.Add(temp_eb2);
        temp36.Text = "Sign Out";
        temp36.Margin = float4(0.1f, 0.1f, 0.1f, 0.1f);
        global::Fuse.Gestures.Clicked.AddHandler(temp36, temp_eb3.OnEvent);
        temp36.Bindings.Add(temp_eb3);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(user);
        __g_nametable.Objects.Add(stats);
        __g_nametable.Objects.Add(browser);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(chat);
        __g_nametable.Objects.Add(feed);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(temp_eb3);
        this.Background = temp37;
        this.Children.Add(temp10);
        this.Children.Add(temp16);
        this.Children.Add(user);
        this.Children.Add(stats);
        this.Children.Add(temp30);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "user";
    static global::Uno.UX.Selector __selector2 = "stats";
    static global::Uno.UX.Selector __selector3 = "browser";
    static global::Uno.UX.Selector __selector4 = "chat";
    static global::Uno.UX.Selector __selector5 = "feed";
}
