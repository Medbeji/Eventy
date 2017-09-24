[Uno.Compiler.UxGenerated]
public partial class NewsItem: Fuse.Controls.StackPanel
{
    global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> temp5_File_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<string> temp7_Value_inst;
    global::Uno.UX.Property<string> temp8_Value_inst;
    global::Uno.UX.Property<string> temp9_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static NewsItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NewsItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Drawing.ImageFill();
        temp_File_inst = new EventApp_FuseDrawingImageFill_File_Property(temp, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("portrait");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Name();
        temp1_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp11 = new global::Fuse.Reactive.Data("author");
        var temp2 = new global::SubText();
        temp2_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp12 = new global::Fuse.Reactive.Data("postAge");
        var temp3 = new global::SubText();
        temp3_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp3, __selector1);
        var temp13 = new global::Fuse.Reactive.Data("source");
        var temp4 = new global::SubText();
        temp4_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp4, __selector1);
        var temp14 = new global::Fuse.Reactive.Data("location");
        var temp5 = new global::Fuse.Controls.Image();
        temp5_File_inst = new EventApp_FuseControlsImage_File_Property(temp5, __selector0);
        var temp15 = new global::Fuse.Reactive.Data("imageUrl");
        var temp6 = new global::Header();
        temp6_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp6, __selector1);
        var temp16 = new global::Fuse.Reactive.Data("headline");
        var temp7 = new global::Article();
        temp7_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp7, __selector1);
        var temp17 = new global::Fuse.Reactive.Data("body");
        var temp8 = new global::Stat();
        temp8_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp8, __selector1);
        var temp18 = new global::Fuse.Reactive.Data("numLikes");
        var temp9 = new global::Stat();
        temp9_Value_inst = new EventApp_FuseControlsTextControl_Value_Property(temp9, __selector1);
        var temp19 = new global::Fuse.Reactive.Data("numComments");
        var temp20 = new global::Fuse.Controls.DockPanel();
        var temp21 = new global::Fuse.Controls.Circle();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Controls.DockPanel();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp11, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Controls.StackPanel();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::VerticalBar();
        var temp29 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp13, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::VerticalBar();
        var temp31 = new global::Fuse.Controls.Image();
        var temp32 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Reactive.DataBinding(temp5_File_inst, temp15, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp34 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp16, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp35 = new global::Fuse.Reactive.DataBinding(temp7_Value_inst, temp17, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp36 = new global::Fuse.Controls.StackPanel();
        var temp37 = new global::ActionIcon();
        var temp38 = new global::Fuse.Reactive.DataBinding(temp8_Value_inst, temp18, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp39 = new global::ActionIcon();
        var temp40 = new global::Fuse.Reactive.DataBinding(temp9_Value_inst, temp19, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp41 = new global::ActionIcon();
        var temp42 = new global::HorizontalBar();
        this.Margin = float4(0f, 14f, 0f, 10f);
        temp20.Margin = float4(10f, 0f, 0f, 15f);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp23);
        temp21.Width = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp21.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp21, Fuse.Layouts.Dock.Left);
        temp21.Fills.Add(temp);
        temp21.Bindings.Add(temp22);
        temp.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
        temp23.Margin = float4(10f, 4f, 10f, 0f);
        temp23.Children.Add(temp24);
        temp23.Children.Add(temp26);
        temp24.Orientation = Fuse.Layouts.Orientation.Horizontal;
        global::Fuse.Controls.DockPanel.SetDock(temp24, Fuse.Layouts.Dock.Top);
        temp24.Children.Add(temp1);
        temp1.Bindings.Add(temp25);
        temp26.Orientation = Fuse.Layouts.Orientation.Horizontal;
        global::Fuse.Controls.DockPanel.SetDock(temp26, Fuse.Layouts.Dock.Bottom);
        temp26.Children.Add(temp2);
        temp26.Children.Add(temp28);
        temp26.Children.Add(temp3);
        temp26.Children.Add(temp30);
        temp26.Children.Add(temp31);
        temp26.Children.Add(temp4);
        temp2.Bindings.Add(temp27);
        temp3.Bindings.Add(temp29);
        temp31.Color = float4(0.2f, 0.2352941f, 0.282353f, 1f);
        temp31.Width = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
        temp31.Height = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
        temp31.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp31.Margin = float4(0f, 0f, 2f, 2f);
        temp31.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Location.png"));
        temp4.Bindings.Add(temp32);
        temp5.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp5.Height = new Uno.UX.Size(270f, Uno.UX.Unit.Unspecified);
        temp5.Bindings.Add(temp33);
        temp6.Bindings.Add(temp34);
        temp7.Bindings.Add(temp35);
        temp36.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp36.Margin = float4(14f, 10f, 14f, 8f);
        temp36.Children.Add(temp37);
        temp36.Children.Add(temp8);
        temp36.Children.Add(temp39);
        temp36.Children.Add(temp9);
        temp36.Children.Add(temp41);
        temp37.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Like.png"));
        temp8.Bindings.Add(temp38);
        temp39.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Comment.png"));
        temp9.Bindings.Add(temp40);
        temp41.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Share.png"));
        __g_nametable.This = this;
        this.Children.Add(temp20);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp36);
        this.Children.Add(temp42);
    }
    static global::Uno.UX.Selector __selector0 = "File";
    static global::Uno.UX.Selector __selector1 = "Value";
}
