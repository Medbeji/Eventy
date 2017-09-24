[Uno.Compiler.UxGenerated]
public partial class Username: Fuse.Controls.Text
{
    static Username()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Username()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/AlegreyaSans-Bold.otf")));
        this.FontSize = 18f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Color = float4(1f, 1f, 1f, 1f);
        this.Margin = float4(0f, 8f, 0f, 0f);
        this.Font = temp;
    }
}
