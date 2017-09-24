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

public class ViewGroup
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }

    public static void AddView242(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView);
    }
    
    public static void AddView1243(final Object parentHandle,final Object childHandle,final int index)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView, index);
    }
    
    public static Object Create244()
    {
        android.widget.FrameLayout frameLayout = new com.fuse.android.views.ViewGroup(com.fuse.Activity.getRootActivity());
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        return frameLayout;
    }
    
    public static void InstallTouchInterceptCallback245(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        ((com.fuse.android.views.ViewGroup)handle).SetIntercept(new com.fuse.android.views.IInterceptTouchEvent() {
        	public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
        		return callback.run(ev);
        	}
        });
    }
    
    public static void RemoveView246(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.removeView(childView);
    }
    
    public static void SetClipToBounds247(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        viewGroup.setClipChildren(clipToBounds);
        viewGroup.setClipToPadding(clipToBounds);
    }
    
    public static void UpdateChildRect248(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.fuse.android.views.ViewGroup.UpdateChildRect((android.view.View)handle, x, y, w, h);
    }
    
}
