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

    public static void Attach62(final Object _layout)
    {
        FrameLayout layout = (FrameLayout)_layout;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet63()!=null) { return; }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet63(layout,UnoHelper.GetUnoObjectRef(layout));
        layout.getViewTreeObserver().addOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet64()));
    }
    
    public static void CalcRealSizes65()
    {
        //cache initialSize so we have something sane
        android.view.Display display = com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay();
        if (android.os.Build.VERSION.SDK_INT >= 17) {
        	//new pleasant way to get real metrics
        	DisplayMetrics realMetrics = new DisplayMetrics();
        	display.getRealMetrics(realMetrics);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet66(realMetrics.widthPixels);
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet67(realMetrics.heightPixels);
        } else if (android.os.Build.VERSION.SDK_INT >= 14) {
        	//reflection for this weird in-between time
        	try {
        		Method mGetRawH = android.view.Display.class.getMethod("getRawHeight");
        		Method mGetRawW = android.view.Display.class.getMethod("getRawWidth");
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet66((Integer)mGetRawW.invoke(display));
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet67((Integer)mGetRawH.invoke(display));
        	} catch (Exception e) {
        		//this may not be 100% accurate, but it's all we've got
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet66(display.getWidth());
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet67(display.getHeight());
        	}
        } else {
        	//This should be close, as lower API devices should not have window navigation bars
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet66(display.getWidth());
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightSet67(display.getHeight());
        }
        
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()!=null) {
        	int tmp = ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()).getWidth();
        	if (tmp!=0 && tmp!= ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realHeightGet67() && ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthGet66()!=tmp) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_realWidthSet66(tmp);
        	}
        }
    }
    
    public static void CreateLayouts69()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutSet68(new FrameLayout(activity),UnoHelper.GetUnoObjectRef(new FrameLayout(activity)));
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutSet70(new FrameLayout(activity),UnoHelper.GetUnoObjectRef(new FrameLayout(activity)));
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()).addOnLayoutChangeListener((OnLayoutChangeListener)com.foreign.Fuse.Platform.SystemUI.MakePostV11LayoutChangeListener71());
        
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()).addView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()));
        com.foreign.Fuse.Platform.SystemUI.SetFrame72(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70(), 0, 0, ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight73());
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI74();
    }
    
    public static void Detach75()
    {
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToGet63()!=null) {
        	if (android.os.Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN) {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).getViewTreeObserver().removeOnGlobalLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet64()));
        	} else {
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).getViewTreeObserver().removeGlobalOnLayoutListener(((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet64()));
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_layoutAttachedToSet63(null,UnoHelper.GetUnoObjectRef(null));
    }
    
    public static void EnterFullscreen76()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet77(2);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 19) {
        		com.foreign.Fuse.Platform.SystemUI.HideStatusBar78();
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
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar79();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI74();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged80((int)0);
        }});
    }
    
    public static float GetDensity81()
    {
        DisplayMetrics m = (DisplayMetrics)com.foreign.Fuse.Platform.SystemUI.GetDisplayMetrics82();
        return m.density;
    }
    
    public static Object GetDisplayMetrics82()
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
    
    public static float GetStatusBarHeight83()
    {
        int result = 0;
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateGet77()==0)
        {
        	int resourceId = com.fuse.Activity.getRootActivity().getResources().getIdentifier("status_bar_height", "dimen", "android");
        	if (resourceId > 0)
        	{
        		result = com.fuse.Activity.getRootActivity().getResources().getDimensionPixelSize(resourceId);
        	}
        	if (result == 0)
        	{
        		if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet84())
        		{
        		result = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet85();
        		}
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet84(true);
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet85(result);
        	}
        }
        return (float)result;
    }
    
    public static int GetSuperLayoutHeight86()
    {
        return (int)((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()).getHeight();
    }
    
    public static void HideActionBar79()
    {
        // ActionBar is ugly, hide it
        // details: http://stackoverflow.com/a/14167949/574033
        ActionBar actionBar = com.fuse.Activity.getRootActivity().getActionBar();
        
        if (actionBar!=null)
        	actionBar.hide();
        
    }
    
    public static void HideStatusBar78()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet77(1);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16) {
        		com.fuse.Activity.getRootActivity().getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar79();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI74();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged80((int)0);
        }});
    }
    
    public static void HookOntoRawActivityEvents87()
    {
        com.fuse.Activity.SubscribeToLifecycleChange(new com.fuse.Activity.ActivityListener()
        {
        	@Override public void onStop() {}
        	@Override public void onStart() {}
        	@Override public void onWindowFocusChanged(boolean hasFocus) {}
        
        	@Override public void onPause() { com.foreign.Fuse.Platform.SystemUI.OnPause88(); }
        	@Override public void onResume() { com.foreign.Fuse.Platform.SystemUI.OnResume89(); }
        	@Override public void onDestroy() { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnDestroy90(); }
        	@Override public void onConfigurationChanged(android.content.res.Configuration config) { ExternedBlockHost.callUno_Fuse_Platform_SystemUI_OnConfigChanged91(); }
        });
    }
    
    public static Object MakePostV11LayoutChangeListener71()
    {
        return new OnLayoutChangeListener() {
        
        	int lastWidth = (int)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth92();
        	int lastHeight = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight73();
        
        	@Override
        		public void onLayoutChange(View v, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
        		int newWidth = right - left;
        		int newHeight = bottom - top;
        		if (newWidth!=lastWidth || newHeight!=lastHeight) {
        			lastHeight = newHeight;
        			lastWidth = newWidth;
        			ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnConfigChanged93();
        			ViewTreeObserver.OnGlobalLayoutListener kl = ((ViewTreeObserver.OnGlobalLayoutListener)ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerGet64());
        			if (kl!=null) ExternedBlockHost.callUno_Fuse_Platform_SystemUI_ResendFrameSizes94();
        		}
        	}
        };
    }
    
    public static void OnCreate95()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        
        // status bar
        activity.getWindow().requestFeature(Window.FEATURE_ACTION_BAR);
        
        	com.foreign.Fuse.Platform.SystemUI.HideActionBar79();
        
        
        // layouts
        if (ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()==null) com.foreign.Fuse.Platform.SystemUI.CreateLayouts69();
        activity.getWindow().setContentView(((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()));
        ViewTreeObserver.OnGlobalLayoutListener kl = new ViewTreeObserver.OnGlobalLayoutListener() { public void onGlobalLayout() { com.foreign.Fuse.Platform.SystemUI.unoOnGlobalLayout96(); }};
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI__keyboardListenerSet64(kl,UnoHelper.GetUnoObjectRef(kl));
        com.foreign.Fuse.Platform.SystemUI.Attach62(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70());
        com.foreign.Fuse.Platform.SystemUI.HookOntoRawActivityEvents87();
    }
    
    public static void OnPause88()
    {
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).setVisibility(View.GONE);
    }
    
    public static void OnResume89()
    {
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_UpdateStatusBar97();
        ((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).setVisibility(View.VISIBLE);
    }
    
    public static void SetAsRootView98(final Object view)
    {
        final View uview = (View)view;
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run() {
        	if (uview==null)
        	{
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).removeAllViews();
        	}
        	else
        	{
        		if (((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).getChildCount()>0)
        		{
        			((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).removeAllViews();
        		}
        		((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_RootLayoutGet70()).addView(uview, 0);
        	}
        }});
    }
    
    public static void SetFrame72(final Object view,final int originX,final int originY,final int height)
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
    
    public static void ShowStatusBar99()
    {
        com.fuse.Activity.getRootActivity().runOnUiThread(new Runnable() { public void run()
        {
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI__systemUIStateSet77(0);
        	// If the Android version is lower than Jellybean, use this call to hide
        	// the status bar.
        	if (android.os.Build.VERSION.SDK_INT < 16)
        	{
        		com.fuse.Activity.getRootActivity().getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
        	} else {
        		View decorView = com.fuse.Activity.getRootActivity().getWindow().getDecorView();
        		// Hide the status bar.
        		decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_VISIBLE);
        		com.foreign.Fuse.Platform.SystemUI.HideActionBar79();
        	}
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI74();
        	ExternedBlockHost.callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged80((int)(int)com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight83());
        }});
    }
    
    public static void unoOnGlobalLayout96()
    {
        int heightDiff = ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight73()-((FrameLayout)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_SuperLayoutGet68()).getHeight();
        heightDiff -= com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight83();
        int contentViewTop = com.fuse.Activity.getRootActivity().getWindow().findViewById(Window.ID_ANDROID_CONTENT).getTop();
        boolean keyboardClosed = (heightDiff-contentViewTop)<(ExternedBlockHost.callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight73()/4);
        if (heightDiff!=ExternedBlockHost.callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet100() || ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet101()) {
        	if (keyboardClosed) {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onHideKeyboard102((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet101());
        	} else {
        		ExternedBlockHost.callUno_Fuse_Platform_SystemUI_onShowKeyboard103((int)heightDiff,(boolean)ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingGet101());
        	}
        }
        ExternedBlockHost.callUno_Fuse_Platform_SystemUI_firstSizingSet101(false);
    }
    
}
