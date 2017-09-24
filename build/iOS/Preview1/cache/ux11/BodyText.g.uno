[Uno.Compiler.UxGenerated]
public partial class BodyText: Fuse.Controls.Text
{
    static BodyText()
    {
    }
    [global::Uno.UX.UXConstructor]
    public BodyText()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.Color = float4(0.2078431f, 0.3333333f, 0.4f, 1f);
    }
}
