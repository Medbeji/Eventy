[Uno.Compiler.UxGenerated]
public partial class Stat: Fuse.Controls.Text
{
    static Stat()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Stat()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Lato-Bold.ttf")));
        this.FontSize = 15f;
        this.Color = float4(0.4784314f, 0.5882353f, 0.6980392f, 1f);
        this.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        this.Margin = float4(5f, 0f, 17f, 0f);
        this.Font = temp;
    }
}
