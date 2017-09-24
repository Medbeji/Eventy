package com.foreign.Fuse.Controls.Native;

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

public class ViewFactory
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }

    public static Object InstantiateViewGroupImpl224()
    {
        android.widget.FrameLayout frameLayout = new com.fuse.android.views.ViewGroup(com.apps.eventapp.EventApp.GetRootActivity());
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setClipChildren(false);
        frameLayout.setClipToPadding(false);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        return frameLayout;
    }
    
}
