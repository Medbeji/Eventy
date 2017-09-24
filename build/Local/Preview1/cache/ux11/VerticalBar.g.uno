[Uno.Compiler.UxGenerated]
public partial class VerticalBar: Fuse.Controls.Panel
{
    static VerticalBar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public VerticalBar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Rectangle();
        this.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        this.Margin = float4(8f, 0f, 8f, 2f);
        temp.Color = float4(0.8627451f, 0.8705882f, 0.8901961f, 1f);
        temp.Width = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp.Height = new Uno.UX.Size(12f, Uno.UX.Unit.Unspecified);
        this.Children.Add(temp);
    }
}
