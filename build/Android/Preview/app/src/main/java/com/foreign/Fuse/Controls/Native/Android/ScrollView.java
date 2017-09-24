package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class ScrollView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }

    public static Object AddCallback157(final UnoObject _this, final Object handle)
    {
        com.fuse.android.views.IScroll iscroll = new com.fuse.android.views.IScroll() {
        	public void OnScrollChanged(int x, int y, int oldX, int oldY) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged158((UnoObject)_this,(int)x,(int)y,(int)oldX,(int)oldY);
        	}
        };
        ((com.fuse.android.views.VerticalScrollView)handle).SetIScroll(iscroll);
        return iscroll;
    }
    
    public static Object Create159()
    {
        return new com.fuse.android.views.VerticalScrollView(com.fuse.Activity.getRootActivity());
    }
    
    public static void SetClipToBounds1160(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        viewGroup.setClipChildren(clipToBounds);
        viewGroup.setClipToPadding(clipToBounds);
    }
    
    public static void SetScrollPosition161(final Object handle,final int x,final int y)
    {
        android.widget.ScrollView sv = (android.widget.ScrollView)handle;
        sv.setScrollX(x);
        sv.setScrollY(y);
    }
    
}
