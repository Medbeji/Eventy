[Uno.Compiler.UxGenerated]
public partial class MenuLabel: Fuse.Controls.Text
{
    static MenuLabel()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MenuLabel()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Lato-Bold.ttf")));
        this.FontSize = 18f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Color = float4(0.254902f, 0.3098039f, 0.3686275f, 1f);
        this.Margin = float4(0f, 0f, 0f, 0f);
        this.Font = temp;
    }
}
