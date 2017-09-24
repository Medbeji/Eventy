[Uno.Compiler.UxGenerated]
public partial class SignUpPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> userName_Value_inst;
    global::Uno.UX.Property<string> userEmail_Value_inst;
    global::Uno.UX.Property<string> password_Value_inst;
    internal global::Basic.TextInput userName;
    internal global::Basic.TextInput userEmail;
    internal global::Basic.TextInput password;
    internal global::Fuse.Reactive.EventBinding temp_eb16;
    internal global::Fuse.Reactive.EventBinding temp_eb17;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "userName",
        "userEmail",
        "password",
        "temp_eb16",
        "temp_eb17"
    };
    static SignUpPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SignUpPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        userName = new global::Basic.TextInput();
        userName_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(userName, __selector0);
        var temp = new global::Fuse.Reactive.Data("userNameInput");
        userEmail = new global::Basic.TextInput();
        userEmail_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(userEmail, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("userEmailInput");
        password = new global::Basic.TextInput();
        password_Value_inst = new EventApp_FuseControlsTextInputControl_Value_Property(password, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("userPasswordInput");
        var temp3 = new global::Fuse.Reactive.Data("SignUp");
        var temp4 = new global::Fuse.Reactive.Data("goToLoginPage");
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Fuse.Controls.Grid();
        var temp8 = new global::Fuse.Controls.StackPanel();
        var temp9 = new global::Fuse.Controls.Image();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::Fuse.Reactive.DataBinding(userName_Value_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(userEmail_Value_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Reactive.DataBinding(password_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Controls.Button();
        temp_eb16 = new global::Fuse.Reactive.EventBinding(temp3, __g_nametable);
        var temp15 = new global::Fuse.Controls.DockPanel();
        var temp16 = new global::Fuse.Controls.StackPanel();
        var temp17 = new global::Fuse.Controls.Grid();
        var temp18 = new global::Fuse.Controls.Button();
        var temp19 = new global::Fuse.Controls.Button();
        temp_eb17 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
        var temp20 = new global::Fuse.Controls.Rectangle();
        var temp21 = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Drawing.StaticSolidColor(float4(0.1921569f, 0.1647059f, 0.1647059f, 1f));
        temp5.LineNumber = 3;
        temp5.FileName = "SignUpPage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../login.js"));
        temp6.Background = temp23;
        temp6.Children.Add(temp7);
        temp7.Rows = "1*,1*,1*";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp10);
        temp7.Children.Add(temp15);
        temp8.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp8.Children.Add(temp9);
        temp9.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Pixels);
        temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/login/Logo.png"));
        temp10.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp10.Margin = float4(30f, 30f, 30f, 30f);
        temp10.Children.Add(userName);
        temp10.Children.Add(userEmail);
        temp10.Children.Add(password);
        temp10.Children.Add(temp14);
        userName.PlaceholderText = "Full name";
        userName.PlaceholderColor = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        userName.TextColor = float4(1f, 1f, 1f, 0.5019608f);
        userName.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        userName.Alignment = Fuse.Elements.Alignment.Center;
        userName.Name = __selector1;
        userName.Bindings.Add(temp11);
        userEmail.PlaceholderText = "Email Address";
        userEmail.PlaceholderColor = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        userEmail.TextColor = float4(1f, 1f, 1f, 0.5019608f);
        userEmail.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        userEmail.Alignment = Fuse.Elements.Alignment.Center;
        userEmail.Name = __selector2;
        userEmail.Bindings.Add(temp12);
        password.IsPassword = true;
        password.PlaceholderText = "Password";
        password.PlaceholderColor = float4(0.7333333f, 0.7333333f, 0.7333333f, 1f);
        password.TextColor = float4(1f, 1f, 1f, 0.5019608f);
        password.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        password.Alignment = Fuse.Elements.Alignment.Center;
        password.Name = __selector3;
        password.Bindings.Add(temp13);
        temp14.Text = "Sign Up";
        temp14.Margin = float4(15f, 15f, 15f, 15f);
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb16.OnEvent);
        temp14.Bindings.Add(temp_eb16);
        temp15.Children.Add(temp16);
        temp16.Alignment = Fuse.Elements.Alignment.Bottom;
        temp16.Padding = float4(0f, 0f, 0f, 0f);
        temp16.Children.Add(temp17);
        temp17.RowCount = 2;
        temp17.ColumnCount = 2;
        temp17.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        temp17.Padding = float4(0.2f, 0.2f, 0.2f, 0.2f);
        global::Fuse.Controls.Grid.SetRow(temp17, 1);
        global::Fuse.Controls.Grid.SetColumn(temp17, 2);
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp17.Children.Add(temp20);
        temp18.Text = "Sign in with Facebook |";
        temp18.Color = float4(0.1921569f, 0.1647059f, 0.1647059f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.Right;
        temp18.Margin = float4(100f, 40f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp18, 0);
        global::Fuse.Controls.Grid.SetColumn(temp18, 0);
        temp19.Text = " Login";
        temp19.Color = float4(0.1921569f, 0.1647059f, 0.1647059f, 1f);
        temp19.Alignment = Fuse.Elements.Alignment.Left;
        temp19.Margin = float4(40f, 40f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp19, 0);
        global::Fuse.Controls.Grid.SetColumn(temp19, 1);
        global::Fuse.Gestures.Clicked.AddHandler(temp19, temp_eb17.OnEvent);
        temp19.Bindings.Add(temp_eb17);
        temp20.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp20.Margin = float4(17f, 0f, 0f, 0f);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp21.Value = "By using our app,you agree to the Terms,Cookie Policy and";
        temp21.LineSpacing = 0.5f;
        temp21.FontSize = 12f;
        temp21.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.Grid.SetRow(temp21, 1);
        temp22.Value = "Privacy Policy";
        temp22.LineSpacing = 0.5f;
        temp22.FontSize = 12f;
        temp22.Alignment = Fuse.Elements.Alignment.Center;
        temp22.Margin = float4(120f, 30f, 0f, 0f);
        global::Fuse.Controls.Grid.SetRow(temp22, 2);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(userName);
        __g_nametable.Objects.Add(userEmail);
        __g_nametable.Objects.Add(password);
        __g_nametable.Objects.Add(temp_eb16);
        __g_nametable.Objects.Add(temp_eb17);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "userName";
    static global::Uno.UX.Selector __selector2 = "userEmail";
    static global::Uno.UX.Selector __selector3 = "password";
}
