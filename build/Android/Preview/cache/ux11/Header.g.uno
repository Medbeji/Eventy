[Uno.Compiler.UxGenerated]
public partial class Header: Fuse.Controls.Text
{
    static Header()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Header()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/AlegreyaSans-Bold.otf")));
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 22f;
        this.Margin = float4(14f, 10f, 14f, 5f);
        this.Font = temp;
    }
}
