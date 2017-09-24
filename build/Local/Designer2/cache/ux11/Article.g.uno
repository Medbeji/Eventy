[Uno.Compiler.UxGenerated]
public partial class Article: Fuse.Controls.Text
{
    static Article()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Article()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Lato-Regular.ttf")));
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 13f;
        this.Margin = float4(14f, 0f, 14f, 0f);
        this.Font = temp;
    }
}
