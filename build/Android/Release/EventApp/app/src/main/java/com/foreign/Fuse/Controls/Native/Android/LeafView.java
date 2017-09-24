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

public class LeafView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }

    public static int GetMeasuredHeight145(final Object handle)
    {
        return ((android.view.View)handle).getMeasuredHeight();
    }
    
    public static int GetMeasuredWidth146(final Object handle)
    {
        return ((android.view.View)handle).getMeasuredWidth();
    }
    
    public static void Measure147(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        int wSpec = hasX ? android.view.View.MeasureSpec.makeMeasureSpec(w, android.view.View.MeasureSpec.EXACTLY) : 0;
        int hSpec = hasY ? android.view.View.MeasureSpec.makeMeasureSpec(h, android.view.View.MeasureSpec.EXACTLY) : 0;
        android.view.View view = (android.view.View)handle;
        view.measure(wSpec, hSpec);
    }
    
}
