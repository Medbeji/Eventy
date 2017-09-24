package com.foreign.Fuse.Platform;

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

// user defined imports
import java.lang.reflect.Method;
import android.annotation.SuppressLint;
import android.os.Build;
import android.util.DisplayMetrics;
import android.app.Activity;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.View.OnLayoutChangeListener;
import android.widget.FrameLayout;
import android.view.Gravity;
import android.app.ActionBar;
import android.view.WindowManager;

public class SystemUI
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }

    public static void Attach61(final Object _layout)
    {
        FrameLayout layout = (FrameLayout)_layout;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet62()!=null) { return; }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet62(layout,UnoHelper.GetUnoObjectRef(layout));
        layout.getViewTreeObserver().addOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet63()));
    }
    
    public static void CalcRealSizes64()
    {
        //cache initialSize so we have something sane
        android.view.Display display = com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay();
        if (android.os.Build.VERSION.SDK_INT >= 17) {
        	//new pleasant way to get real metrics
        	DisplayMetrics realMetrics = new DisplayMetrics();
        	display.getRealMetrics(realMetrics);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet65(realMetrics.widthPixels);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet66(realMetrics.heightPixels);
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
        	//reflection for this weird in-between time
        	try {
        		Method mGetRawH = android.view.Display.class.getMethod("getRawHeight");
        		Method mGetRawW = android.view.Display.class.getMethod("getRawWidth");
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet65((Integer)mGetRawW.invoke(display));
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet66((Integer)mGetRawH.invoke(display));
        	} catch (Exception e) {
        		//this may not be 100% accurate, but it's all we've got
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet65(display.getWidth());
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet66(display.getHeight());
        	}
        } else {
        	//This should be close, as lower API devices should not have window navigation bars
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet65(display.getWidth());
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet66(display.getHeight());
        }
        
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()!=null) {
        	int tmp = ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()).getWidth();
        	if (tmp!=0 && tmp!= ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightGet66() && ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthGet65()!=tmp) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet65(tmp);
        	}
        }
    }
    
    public static void CreateLayouts68()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutSet67(new FrameLayout(activity),UnoHelper.GetUnoObjectRef(new FrameLayout(activity)));
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutSet69(new FrameLayout(activity),UnoHelper.GetUnoObjectRef(new FrameLayout(activity)));
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()).addOnLayoutChangeListener((OnLayoutChangeListener)com.foreign.Fuse.Platform.SystemUI.MakePostV11LayoutChangeListener70());
        
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()).addView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()));
        com.foreign.Fuse.Platform.SystemUI.SetFrame71(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69(), 0, 0, ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight72());
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI73();
    }
    
    public static void Detach74()
    {
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet62()!=null) {
        	if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).getViewTreeObserver().removeOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet63()));
        	} else {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).getViewTreeObserver().removeGlobalOnLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet63()));
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet62(null,UnoHelper.GetUnoObjectRef(null));
    }
    
    public static void EnterFullscreen75()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet76(2);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 19) {
        		com.foreign.Fuse.Platform.SystemUI.HideStatusBar77();
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(
        				View.SYSTEM_UI_FLAG_LAYOUT_STABLE
        				| View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
        				| View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
        				| View.SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
        				| View.SYSTEM_UI_FLAG_FULLSCREEN // hide status bar
        				| View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar78();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI73();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged79((int)0);
        }});
    }
    
    public static float GetDensity80()
    {
        DisplayMetrics m = (DisplayMetrics)com.foreign.Fuse.Platform.SystemUI.GetDisplayMetrics81();
        return m.density;
    }
    
    public static Object GetDisplayMetrics81()
    {
        DisplayMetrics metrics = new DisplayMetrics();
        if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN_MR1) {
        	com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getRealMetrics(metrics);
        	return metrics;
        } else {
        	com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getMetrics(metrics);
        	return metrics;
        }
    }
    
    public static float GetStatusBarHeight82()
    {
        int result = 0;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateGet76()==0)
        {
        	int resourceId = com.fuse.Activity.getRootActivity().getResources().getIdentifier("status_bar_height", "dimen", "android");
        	if (resourceId > 0)
        	{
        		result = com.fuse.Activity.getRootActivity().getResources().getDimensionPixelSize(resourceId);
        	}
        	if (result == 0)
        	{
        		if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet83())
        		{
        		result = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet84();
        		}
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet83(true);
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet84(result);
        	}
        }
        return (float)result;
    }
    
    public static int GetSuperLayoutHeight85()
    {
        return (int)((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()).getHeight();
    }
    
    public static void HideActionBar78()
    {
        // ActionBar is ugly, hide it
        // details: http://stackoverflow.com/a/14167949/574033
        ActionBar actionBar = com.fuse.Activity.getRootActivity().getActionBar();
        
        if (actionBar!=null)
        	actionBar.hide();
        
    }
    
    public static void HideStatusBar77()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet76(1);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16) {
        		com.fuse.Activity.getRootActivity().getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar78();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI73();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged79((int)0);
        }});
    }
    
    public static void HookOntoRawActivityEvents86()
    {
        com.fuse.Activity.SubscribeToLifecycleChange(new com.fuse.Activity.ActivityListener()
        {
        	@Override public void onStop() {}
        	@Override public void onStart() {}
        	@Override public void onWindowFocusChanged(boolean hasFocus) {}
        
        	@Override public void onPause() { com.foreign.Fuse.Platform.SystemUI.OnPause87(); }
        	@Override public void onResume() { com.foreign.Fuse.Platform.SystemUI.OnResume88(); }
        	@Override public void onDestroy() { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnDestroy89(); }
        	@Override public void onConfigurationChanged(android.content.res.Configuration config) { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnConfigChanged90(); }
        });
    }
    
    public static Object MakePostV11LayoutChangeListener70()
    {
        return new OnLayoutChangeListener() {
        
        	int lastWidth = (int)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth91();
        	int lastHeight = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight72();
        
        	@Override
        		public void onLayoutChange(View v, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
        		int newWidth = right - left;
        		int newHeight = bottom - top;
        		if (newWidth!=lastWidth || newHeight!=lastHeight) {
        			lastHeight = newHeight;
        			lastWidth = newWidth;
        			ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnConfigChanged92();
        			ViewTreeObserver.OnGlobalLayoutListener kl = ((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet63());
        			if (kl!=null) ExternedBlockHost.callUno_Fuse_Platform_SystemUI_ResendFrameSizes93();
        		}
        	}
        };
    }
    
    public static void OnCreate94()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        // status bar
        activity.getWindow().requestFeature(Window.FEATURE_ACTION_BAR);
        
        	com.foreign.Fuse.Platform.SystemUI.HideActionBar78();
        
        
        // layouts
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()==null) com.foreign.Fuse.Platform.SystemUI.CreateLayouts68();
        activity.getWindow().setContentView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()));
        ViewTreeObserver.OnGlobalLayoutListener kl = new ViewTreeObserver.OnGlobalLayoutListener() { public void onGlobalLayout() { com.foreign.Fuse.Platform.SystemUI.unoOnGlobalLayout95(); }};
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerSet63(kl,UnoHelper.GetUnoObjectRef(kl));
        com.foreign.Fuse.Platform.SystemUI.Attach61(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69());
        com.foreign.Fuse.Platform.SystemUI.HookOntoRawActivityEvents86();
    }
    
    public static void OnPause87()
    {
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).setVisibility(View.GONE);
    }
    
    public static void OnResume88()
    {
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_UpdateStatusBar96();
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).setVisibility(View.VISIBLE);
    }
    
    public static void SetAsRootView97(final Object view)
    {
        final View uview = (View)view;
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	if (uview==null)
        	{
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).removeAllViews();
        	}
        	else
        	{
        		if (((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).getChildCount()>0)
        		{
        			((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).removeAllViews();
        		}
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet69()).addView(uview, 0);
        	}
        }});
    }
    
    public static void SetFrame71(final Object view,final int originX,final int originY,final int height)
    {
        int width = FrameLayout.LayoutParams.MATCH_PARENT;
        	View uview = (View)view;
        	FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(width,height);
        	if (android.os.Build.VERSION.SDK_INT < 14) {
        		lp.gravity = Gravity.TOP;
        	}
        	lp.leftMargin = originX;
        	lp.topMargin = originY;
        	uview.setLayoutParams(lp);
    }
    
    public static void ShowStatusBar98()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet76(0);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16)
        	{
        		com.fuse.Activity.getRootActivity().getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_VISIBLE);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar78();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI73();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged79((int)(int)com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight82());
        }});
    }
    
    public static void unoOnGlobalLayout95()
    {
        int heightDiff = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight72()-((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet67()).getHeight();
        heightDiff -= com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight82();
        int contentViewTop = com.fuse.Activity.getRootActivity().getWindow().findViewById(Window.ID_ANDROID_CONTENT).getTop();
        boolean keyboardClosed = (heightDiff-contentViewTop)<(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight72()/4);
        if (heightDiff!=ExternedBlockHost.callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet99() || ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet100()) {
        	if (keyboardClosed) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onHideKeyboard101((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet100());
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onShowKeyboard102((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet100());
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingSet100(false);
    }
    
}
