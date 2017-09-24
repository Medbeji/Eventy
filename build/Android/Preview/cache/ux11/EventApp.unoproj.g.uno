sealed class EventApp_accessor_ExploreItem_CardAlignment: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new EventApp_accessor_ExploreItem_CardAlignment();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "CardAlignment";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Elements.Alignment); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).CardAlignment; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetCardAlignment((Fuse.Elements.Alignment)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_accessor_ExploreItem_ImageName: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new EventApp_accessor_ExploreItem_ImageName();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ImageName";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).ImageName; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetImageName((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_accessor_ExploreItem_Country: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new EventApp_accessor_ExploreItem_Country();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Country";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).Country; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetCountry((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_accessor_ExploreItem_ForegroundColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new EventApp_accessor_ExploreItem_ForegroundColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ForegroundColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).ForegroundColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetForegroundColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_accessor_ExploreItem_InDetailsMode: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new EventApp_accessor_ExploreItem_InDetailsMode();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "InDetailsMode";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).InDetailsMode; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetInDetailsMode((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseDrawingImageFill_File_Property: Uno.UX.Property<Uno.UX.FileSource>
{
    [Uno.WeakReference] readonly Fuse.Drawing.ImageFill _obj;
    public EventApp_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.FileSource Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Drawing.ImageFill)obj).File; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.FileSource v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Drawing.ImageFill)obj).File = v; }
}
sealed class EventApp_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public EventApp_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseControlsImage_File_Property: Uno.UX.Property<Uno.UX.FileSource>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public EventApp_FuseControlsImage_File_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.FileSource Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Image)obj).File; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.FileSource v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Image)obj).File = v; }
}
sealed class EventApp_FuseElementsElement_Alignment_Property: Uno.UX.Property<Fuse.Elements.Alignment>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public EventApp_FuseElementsElement_Alignment_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Alignment Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Alignment; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Alignment v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Alignment = v; }
}
sealed class EventApp_FuseControlsTextControl_FontSize_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public EventApp_FuseControlsTextControl_FontSize_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).FontSize; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).FontSize = v; }
}
sealed class EventApp_FuseControlsShape_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public EventApp_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public EventApp_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.Each)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.Each)obj).Items = v; }
}
sealed class EventApp_FuseTriggersWhileBool_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.WhileBool _obj;
    public EventApp_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.WhileBool)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.WhileBool)obj).Value = v; }
}
sealed class EventApp_FuseElementsElement_ElementLayoutMaster_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public EventApp_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get(global::Uno.UX.PropertyObject obj) { return global::Fuse.Controls.LayoutControl.GetLayoutMaster((Fuse.Elements.Element)obj); }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { global::Fuse.Controls.LayoutControl.SetLayoutMaster((Fuse.Elements.Element)obj, v); }
}
sealed class EventApp_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public EventApp_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Opacity; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseTranslation_Y_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Translation _obj;
    public EventApp_FuseTranslation_Y_Property(Fuse.Translation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Translation)obj).Y; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Translation)obj).Y = v; }
}
sealed class EventApp_FuseElementsElement_HitTestMode_Property: Uno.UX.Property<Fuse.Elements.HitTestMode>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public EventApp_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.HitTestMode Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).HitTestMode; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.HitTestMode v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetHitTestMode(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseDrawingSolidColor_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Drawing.SolidColor _obj;
    public EventApp_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Drawing.SolidColor)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Drawing.SolidColor)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseControlsScrollViewBase_UserScroll_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Controls.ScrollViewBase _obj;
    public EventApp_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.ScrollViewBase)obj).UserScroll; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.ScrollViewBase)obj).UserScroll = v; }
}
sealed class EventApp_FuseSelectionSelection_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Selection.Selection _obj;
    public EventApp_FuseSelectionSelection_Value_Property(Fuse.Selection.Selection obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Selection.Selection)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Selection.Selection)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_ExploreItem_ImageName_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ExploreItem _obj;
    public EventApp_ExploreItem_ImageName_Property(ExploreItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).ImageName; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetImageName(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_ExploreItem_Country_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly ExploreItem _obj;
    public EventApp_ExploreItem_Country_Property(ExploreItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).Country; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetCountry(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_ExploreItem_ForegroundColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly ExploreItem _obj;
    public EventApp_ExploreItem_ForegroundColor_Property(ExploreItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).ForegroundColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetForegroundColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_ExploreItem_CardAlignment_Property: Uno.UX.Property<Fuse.Elements.Alignment>
{
    [Uno.WeakReference] readonly ExploreItem _obj;
    public EventApp_ExploreItem_CardAlignment_Property(ExploreItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Alignment Get(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).CardAlignment; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Alignment v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetCardAlignment(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseSelectionSelectable_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Selection.Selectable _obj;
    public EventApp_FuseSelectionSelectable_Value_Property(Fuse.Selection.Selectable obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Selection.Selectable)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Selection.Selectable)obj).Value = v; }
}
sealed class EventApp_ExploreItem_InDetailsMode_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly ExploreItem _obj;
    public EventApp_ExploreItem_InDetailsMode_Property(ExploreItem obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((ExploreItem)obj).InDetailsMode; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((ExploreItem)obj).SetInDetailsMode(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseTranslation_X_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Translation _obj;
    public EventApp_FuseTranslation_X_Property(Fuse.Translation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Translation)obj).X; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Translation)obj).X = v; }
}
sealed class EventApp_FuseRotation_Degrees_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Rotation _obj;
    public EventApp_FuseRotation_Degrees_Property(Fuse.Rotation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Rotation)obj).Degrees; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Rotation)obj).Degrees = v; }
}
sealed class EventApp_FuseElementsElement_Width_Property: Uno.UX.Property<Uno.UX.Size>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public EventApp_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Uno.UX.Size Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Width; }
    public override void Set(global::Uno.UX.PropertyObject obj, Uno.UX.Size v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).Width = v; }
}
sealed class EventApp_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public EventApp_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextInputControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextInputControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property: Uno.UX.Property<Fuse.Elements.Element>
{
    [Uno.WeakReference] readonly Fuse.Controls.MultiLayoutPanel _obj;
    public EventApp_FuseControlsMultiLayoutPanel_LayoutElement_Property(Fuse.Controls.MultiLayoutPanel obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Elements.Element Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.MultiLayoutPanel)obj).LayoutElement; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Elements.Element v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.MultiLayoutPanel)obj).LayoutElement = v; }
}
sealed class EventApp_FuseiOSStatusBarConfig_Style_Property: Uno.UX.Property<Fuse.Platform.StatusBarStyle>
{
    [Uno.WeakReference] readonly Fuse.iOS.StatusBarConfig _obj;
    public EventApp_FuseiOSStatusBarConfig_Style_Property(Fuse.iOS.StatusBarConfig obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Platform.StatusBarStyle Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.iOS.StatusBarConfig)obj).Style; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Platform.StatusBarStyle v, global::Uno.UX.IPropertyListener origin) { ((Fuse.iOS.StatusBarConfig)obj).Style = v; }
}
