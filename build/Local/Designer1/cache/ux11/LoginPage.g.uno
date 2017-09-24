[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> userEmailLogin_Value_inst;
    global::Uno.UX.Property<string> passwordLogin_Value_inst;
    internal global::Basic.TextInput userEmailLogin;
    internal global::Basic.TextInput passwordLogin;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Reactive.EventBinding temp_eb14;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "userEmailLogin",
        "passwordLogin",
        "temp_eb12",
        "temp_eb13",
        "temp_eb14"
    };
    static LoginPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoginPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        userEmailLogin = new global::Basic.TextInput();
        userEmailLogin_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(userEmailLogin, __selector0);
        var temp = new global::Fuse.Reactive.Data("userEmail");
        passwordLogin = new global::Basic.TextInput();
        passwordLogin_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(passwordLogin, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("userPassword");
        var temp2 = new global::Fuse.Reactive.Data("Login");
        var temp3 = new global::Fuse.Reactive.Data("postData");
        var temp4 = new global::Fuse.Reactive.Data("goToSignUpPage");
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Fuse.Controls.Grid();
        var temp8 = new global::Fuse.Controls.StackPanel();
        var temp9 = new global::Fuse.Controls.Image();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::Fuse.Reactive.DataBinding(userEmailLogin_Value_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(passwordLogin_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.Button();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp2, __g_nametable);
        var temp14 = new global::Fuse.Controls.DockPanel();
        var temp15 = new global::Fuse.Controls.StackPanel();
        var temp16 = new global::Fuse.Controls.Grid();
        var temp17 = new global::Fuse.Controls.Button();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
        var temp18 = new global::Fuse.Controls.Button();
        temp_eb14 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        var temp19 = new global::Fuse.Controls.Rectangle();
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Drawing.StaticSolidColor(float4(0.1921569f, 0.1647059f, 0.1647059f, 1f));
        temp5.LineNumber = 3;
        temp5.FileName = "LoginPage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../login.js"));
        temp6.Background = temp22;
        temp6.Children.Add(temp7);
        temp7.Rows = "1*,1*,1*";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp10);
        temp7.Children.Add(temp14);
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Children.Add(temp9);
        temp9.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Pixels);
        temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/login/Logo.png"));
        temp10.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp10.Margin = float4(30f, 30f, 30f, 30f);
        temp10.Children.Add(userEmailLogin);
        temp10.Children.Add(passwordLogin);
        temp10.Children.Add(temp13);
        userEmailLogin.PlaceholderText = "Email Address";
        userEmailLogin.PlaceholderColor = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        userEmailLogin.TextColor = float4(1f, 1f, 1f, 0.5019608f);
        userEmailLogin.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        userEmailLogin.Alignment = Fuse.Elements.Alignment.Center;
        userEmailLogin.Name = __selector1;
        userEmailLogin.Bindings.Add(temp11);
        passwordLogin.IsPassword = true;
        passwordLogin.PlaceholderText = "Password";
        passwordLogin.PlaceholderColor = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        passwordLogin.TextColor = float4(1f, 1f, 1f, 0.5019608f);
        passwordLogin.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        passwordLogin.Alignment = Fuse.Elements.Alignment.Center;
        passwordLogin.Name = __selector2;
        passwordLogin.Bindings.Add(temp12);
        temp13.Text = "Login";
        temp13.Margin = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb12.OnEvent);
        temp13.Bindings.Add(temp_eb12);
        temp14.Children.Add(temp15);
        temp15.Alignment = Fuse.Elements.Alignment.Bottom;
        temp15.Padding = float4(0f, 0f, 0f, 0f);
        temp15.Children.Add(temp16);
        temp16.RowCount = 2;
        temp16.ColumnCount = 2;
        temp16.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.Padding = float4(0.2f, 0.2f, 0.2f, 0.2f);
        global::Fuse.Controls.Grid.SetRow(temp16, 1);
        global::Fuse.Controls.Grid.SetColumn(temp16, 2);
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp19);
        temp17.Text = "Sign in with Facebook |";
        temp17.Color = float4(0.1921569f, 0.1647059f, 0.1647059f, 1f);
        temp17.Alignment = Fuse.Elements.Alignment.Right;
        temp17.Margin = float4(100f, 40f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp17, 0);
        global::Fuse.Controls.Grid.SetColumn(temp17, 0);
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb13.OnEvent);
        temp17.Bindings.Add(temp_eb13);
        temp18.Text = " Sign Up";
        temp18.Color = float4(0.1921569f, 0.1647059f, 0.1647059f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.Left;
        temp18.Margin = float4(40f, 40f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp18, 0);
        global::Fuse.Controls.Grid.SetColumn(temp18, 1);
        global::Fuse.Gestures.Clicked.AddHandler(temp18, temp_eb14.OnEvent);
        temp18.Bindings.Add(temp_eb14);
        temp19.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp19.Margin = float4(17f, 0f, 0f, 0f);
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Value = "By using our app,you agree to the Terms,Cookie Policy and";
        temp20.LineSpacing = 0.5f;
        temp20.FontSize = 12f;
        temp20.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRow(temp20, 1);
        temp21.Value = "Privacy Policy";
        temp21.TextWrapping = Fuse.Controls.TextWrapping.NoWrap;
        temp21.LineSpacing = 0.5f;
        temp21.FontSize = 12f;
        temp21.Alignment = Fuse.Elements.Alignment.Center;
        temp21.Margin = float4(0f, 30f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp21, 2);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(userEmailLogin);
        __g_nametable.Objects.Add(passwordLogin);
        __g_nametable.Objects.Add(temp_eb12);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(temp_eb14);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "userEmailLogin";
    static global::Uno.UX.Selector __selector2 = "passwordLogin";
}
