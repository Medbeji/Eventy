package com.fuse.android.views;

public class ViewGroup extends android.widget.FrameLayout {
	
	IInterceptTouchEvent _intercept;

	public ViewGroup(android.content.Context context)
	{
		super(context);	
	}

	public void SetIntercept(IInterceptTouchEvent intercept) {
		_intercept = intercept;
	}

	public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
		if (_intercept != null) {
			return _intercept.onInterceptTouchEvent(ev);
		} else {
			return super.onInterceptTouchEvent(ev);
		}
	}

	public static void UpdateChildRect(android.view.View view, int x, int y, int w, int h) {
		android.widget.FrameLayout.LayoutParams lp = new android.widget.FrameLayout.LayoutParams(w, h);
		lp.setMargins(x, y, 0, 0);
		view.setLayoutParams(lp);
	}

}
