[Uno.Compiler.UxGenerated]
public partial class Name: Fuse.Controls.Text
{
    static Name()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Name()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/fonts/Roboto-Bold.ttf")));
        this.FontSize = 15f;
        this.Font = temp;
    }
}
