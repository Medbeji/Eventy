package com.Bindings;

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
public class ExternedBlockHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("EventApp", (message==null ? "null" : message.toString()));
    }
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(final Object jarr,long jarrPtr);
    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.boolArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(final Object jarr,long jarrPtr);
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.byteArrayToUnoArrayPtr(arr);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(final UnoObject array);
    public static Object copyBoolArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyBoolArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(final UnoObject array);
    public static Object copyByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyByteArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(final UnoObject array);
    public static Object copyCharArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyCharArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(final UnoObject array);
    public static Object copyDoubleArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyDoubleArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(final UnoObject array);
    public static Object copyFloatArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyFloatArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(final UnoObject array);
    public static Object copyIntArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyIntArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(final UnoObject array);
    public static Object copyLongArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyLongArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(final UnoObject array);
    public static Object copyObjectArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyObjectArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(final UnoObject array);
    public static Object copyShortArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyShortArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(final UnoObject array);
    public static Object copyStringArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyStringArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(final UnoObject array);
    public static Object copyUByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyUByteArray(array);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(final Object jarr,long jarrPtr);
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.doubleArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(final Object jarr,long jarrPtr);
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.floatArrayToUnoArrayPtr(arr);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(final UnoObject array,final int index);
    public static boolean getBool(final UnoObject array,final int index)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getBool(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(final UnoObject array,final int index);
    public static byte getByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getByte(array,index);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(final UnoObject array,final int index);
    public static char getChar(final UnoObject array,final int index)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getChar(array,index);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(final UnoObject array,final int index);
    public static double getDouble(final UnoObject array,final int index)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getDouble(array,index);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(final UnoObject array,final int index);
    public static float getFloat(final UnoObject array,final int index)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getFloat(array,index);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(final UnoObject array,final int index);
    public static int getInt(final UnoObject array,final int index)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getInt(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(final UnoObject array,final int index);
    public static long getLong(final UnoObject array,final int index)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getLong(array,index);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(final UnoObject array,final int index);
    public static UnoObject getObject(final UnoObject array,final int index)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getObject(array,index);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(final UnoObject array,final int index);
    public static short getShort(final UnoObject array,final int index)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getShort(array,index);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(final UnoObject array,final int index);
    public static String getString(final UnoObject array,final int index)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getString(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(final UnoObject array,final int index);
    public static byte getUByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getUByte(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(final Object jarr,long jarrPtr);
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.intArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(final Object jarr,long jarrPtr);
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.longArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(final int length);
    public static long newBoolArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newBoolArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(final int length,final boolean unoIsUnsigned);
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newByteArrayPtr(length,unoIsUnsigned);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(final int length);
    public static long newCharArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newCharArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(final int length);
    public static long newDoubleArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newDoubleArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(final int length);
    public static long newFloatArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newFloatArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(final int length);
    public static long newIntArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newIntArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(final int length);
    public static long newLongArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newLongArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(final int length);
    public static long newObjectArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newObjectArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(final int length);
    public static long newShortArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newShortArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(final int length);
    public static long newStringArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newStringArrayPtr(length);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(final UnoObject array,final int index,final boolean val);
    public static boolean setBool(final UnoObject array,final int index,final boolean val)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setBool(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(final UnoObject array,final int index,final byte val);
    public static byte setByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setByte(array,index,val);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(final UnoObject array,final int index,final char val);
    public static char setChar(final UnoObject array,final int index,final char val)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setChar(array,index,val);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(final UnoObject array,final int index,final double val);
    public static double setDouble(final UnoObject array,final int index,final double val)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setDouble(array,index,val);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(final UnoObject array,final int index,final float val);
    public static float setFloat(final UnoObject array,final int index,final float val)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setFloat(array,index,val);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(final UnoObject array,final int index,final int val);
    public static int setInt(final UnoObject array,final int index,final int val)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setInt(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(final UnoObject array,final int index,final long val);
    public static long setLong(final UnoObject array,final int index,final long val)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setLong(array,index,val);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(final UnoObject array,final int index,final UnoObject val);
    public static UnoObject setObject(final UnoObject array,final int index,final UnoObject val)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setObject(array,index,val);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(final UnoObject array,final int index,final short val);
    public static short setShort(final UnoObject array,final int index,final short val)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setShort(array,index,val);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(final UnoObject array,final int index,final String val);
    public static String setString(final UnoObject array,final int index,final String val)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setString(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(final UnoObject array,final int index,final byte val);
    public static byte setUByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setUByte(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(final Object jarr,long jarrPtr);
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.shortArrayToUnoArrayPtr(arr);
    }
    
    public static Object CreateInnerJava50(final Object directBuffer,final UnoObject unoObj)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.ForeignDataView.CreateInnerJava50(directBuffer,unoObj);
    }
    
    public static float _getDensity51()
    {
        return (float) com.foreign.Uno.Platform.AndroidDisplay._getDensity51();
    }
    
    public static native boolean callUno_Uno_Platform_AndroidDisplay__initializedGet53();
    public static native void callUno_Uno_Platform_AndroidDisplay__initializedSet53(final boolean setVal);
    public static native void callUno_Uno_Platform_AndroidDisplay_OnFrameCallback54(final UnoObject jthis,final double currentTime,final double deltaTime);
    public static void JavaEnableTicks52(final UnoObject _this)
    {
        com.foreign.Uno.Platform.AndroidDisplay.JavaEnableTicks52(_this);
    }
    
    public static void Quit55()
    {
        com.foreign.Uno.Runtime.Implementation.Internal.Unsafe.Quit55();
    }
    
    public static native void callUno_Uno_Collections_List_lt_string_gt__Add57(final UnoObject jthis,final String item);
    public static boolean JavaGetLocalAddresses56(final UnoObject addresses)
    {
        return (boolean) com.foreign.Uno.Net.Dns.JavaGetLocalAddresses56(addresses);
    }
    
    public static Object GetActivityClassInner58()
    {
        return (Object) com.foreign.Android.Base.JNI.GetActivityClassInner58();
    }
    
    public static Object GetActivityObjectInner59()
    {
        return (Object) com.foreign.Android.Base.JNI.GetActivityObjectInner59();
    }
    
    public static int GetID60(final String path)
    {
        return (int) com.foreign.Android.Resources.GetID60(path);
    }
    
    public static native Object callUno_Fuse_Platform_SystemUI_layoutAttachedToGet62();
    public static native void callUno_Fuse_Platform_SystemUI_layoutAttachedToSet62(final Object setVal,long setValPtr);
    public static native Object callUno_Fuse_Platform_SystemUI__keyboardListenerGet63();
    public static void Attach61(final Object _layout)
    {
        com.foreign.Fuse.Platform.SystemUI.Attach61(_layout);
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_realWidthSet65(final int setVal);
    public static native void callUno_Fuse_Platform_SystemUI_realHeightSet66(final int setVal);
    public static native Object callUno_Fuse_Platform_SystemUI_SuperLayoutGet67();
    public static native int callUno_Fuse_Platform_SystemUI_realHeightGet66();
    public static native int callUno_Fuse_Platform_SystemUI_realWidthGet65();
    public static void CalcRealSizes64()
    {
        com.foreign.Fuse.Platform.SystemUI.CalcRealSizes64();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_SuperLayoutSet67(final Object setVal,long setValPtr);
    public static native void callUno_Fuse_Platform_SystemUI_RootLayoutSet69(final Object setVal,long setValPtr);
    public static native Object callUno_Fuse_Platform_SystemUI_RootLayoutGet69();
    public static native int callUno_Fuse_Platform_SystemUI_GetRealDisplayHeight72();
    public static native void callUno_Fuse_Platform_SystemUI_CompensateRootLayoutForSystemUI73();
    public static void CreateLayouts68()
    {
        com.foreign.Fuse.Platform.SystemUI.CreateLayouts68();
    }
    
    public static void Detach74()
    {
        com.foreign.Fuse.Platform.SystemUI.Detach74();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI__systemUIStateSet76(final int setVal);
    public static native void callUno_Fuse_Platform_SystemUI_cppOnTopFrameChanged79(final int height);
    public static void EnterFullscreen75()
    {
        com.foreign.Fuse.Platform.SystemUI.EnterFullscreen75();
    }
    
    public static float GetDensity80()
    {
        return (float) com.foreign.Fuse.Platform.SystemUI.GetDensity80();
    }
    
    public static Object GetDisplayMetrics81()
    {
        return (Object) com.foreign.Fuse.Platform.SystemUI.GetDisplayMetrics81();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI__systemUIStateGet76();
    public static native boolean callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeGet83();
    public static native int callUno_Fuse_Platform_SystemUI_cachedOpenSizeGet84();
    public static native void callUno_Fuse_Platform_SystemUI_hasCachedStatusBarSizeSet83(final boolean setVal);
    public static native void callUno_Fuse_Platform_SystemUI_cachedOpenSizeSet84(final int setVal);
    public static float GetStatusBarHeight82()
    {
        return (float) com.foreign.Fuse.Platform.SystemUI.GetStatusBarHeight82();
    }
    
    public static int GetSuperLayoutHeight85()
    {
        return (int) com.foreign.Fuse.Platform.SystemUI.GetSuperLayoutHeight85();
    }
    
    public static void HideActionBar78()
    {
        com.foreign.Fuse.Platform.SystemUI.HideActionBar78();
    }
    
    public static void HideStatusBar77()
    {
        com.foreign.Fuse.Platform.SystemUI.HideStatusBar77();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_OnDestroy89();
    public static native void callUno_Fuse_Platform_SystemUI_OnConfigChanged90();
    public static void HookOntoRawActivityEvents86()
    {
        com.foreign.Fuse.Platform.SystemUI.HookOntoRawActivityEvents86();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI_GetRealDisplayWidth91();
    public static native void callUno_Fuse_Platform_SystemUI_cppOnConfigChanged92();
    public static native void callUno_Fuse_Platform_SystemUI_ResendFrameSizes93();
    public static Object MakePostV11LayoutChangeListener70()
    {
        return (Object) com.foreign.Fuse.Platform.SystemUI.MakePostV11LayoutChangeListener70();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI__keyboardListenerSet63(final Object setVal,long setValPtr);
    public static void OnCreate94()
    {
        com.foreign.Fuse.Platform.SystemUI.OnCreate94();
    }
    
    public static void OnPause87()
    {
        com.foreign.Fuse.Platform.SystemUI.OnPause87();
    }
    
    public static native void callUno_Fuse_Platform_SystemUI_UpdateStatusBar96();
    public static void OnResume88()
    {
        com.foreign.Fuse.Platform.SystemUI.OnResume88();
    }
    
    public static void SetAsRootView97(final Object view)
    {
        com.foreign.Fuse.Platform.SystemUI.SetAsRootView97(view);
    }
    
    public static void SetFrame71(final Object view,final int originX,final int originY,final int height)
    {
        com.foreign.Fuse.Platform.SystemUI.SetFrame71(view,originX,originY,height);
    }
    
    public static void ShowStatusBar98()
    {
        com.foreign.Fuse.Platform.SystemUI.ShowStatusBar98();
    }
    
    public static native int callUno_Fuse_Platform_SystemUI_lastKeyboardHeightGet99();
    public static native boolean callUno_Fuse_Platform_SystemUI_firstSizingGet100();
    public static native void callUno_Fuse_Platform_SystemUI_onHideKeyboard101(final int keyboardHeight,final boolean force);
    public static native void callUno_Fuse_Platform_SystemUI_onShowKeyboard102(final int keyboardHeight,final boolean force);
    public static native void callUno_Fuse_Platform_SystemUI_firstSizingSet100(final boolean setVal);
    public static void unoOnGlobalLayout95()
    {
        com.foreign.Fuse.Platform.SystemUI.unoOnGlobalLayout95();
    }
    
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFamily104(final String name,final String language,final String variant);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFont105(final String path,final int index,final int weight,final boolean isItalic);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddAlias106(final String name,final String to,final int weight);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_ThrowUno107(final String message);
    public static void AddFonts103()
    {
        com.foreign.Fuse.Internal.AndroidSystemFont.AddFonts103();
    }
    
    public static Object Create108()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Button.Create108();
    }
    
    public static void SetText109(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.Button.SetText109(handle,text);
    }
    
    public static void UpdateShapeDrawable1110(final UnoObject _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        com.foreign.Fuse.Controls.Native.Android.Circle.UpdateShapeDrawable1110(_this, handle,useAngle,width,height,startAngle,endAngle);
    }
    
    public static void AddView111(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView111(parentHandle,childHandle);
    }
    
    public static void AddView1112(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView1112(parentHandle,childHandle,index);
    }
    
    public static Object Create113()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.Create113();
    }
    
    public static void HideOffscreenParent114(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.HideOffscreenParent114(handle);
    }
    
    public static void RemoveView115(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.RemoveView115(parentHandle,childHandle);
    }
    
    public static void SetClipToBounds116(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetClipToBounds116(handle,clipToBounds);
    }
    
    public static void UpdateChildRect117(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.UpdateChildRect117(handle,x,y,w,h);
    }
    
    public static void UpdateShapeDrawable1118(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Ellipse.UpdateShapeDrawable1118(_this, handle);
    }
    
    public static void ClearListener119(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.ClearListener119(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange121(final UnoObject jthis,final boolean hasFocus);
    public static Object Create120(final UnoObject _this)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.Create120(_this);
    }
    
    public static void SetListener122(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.SetListener122(viewHandle,listenerHandle);
    }
    
    public static Object GetContext123(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetContext123(viewHandle);
    }
    
    public static Object GetWindowToken124(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetWindowToken124(viewHandle);
    }
    
    public static boolean HasFocus125(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.FocusManager.HasFocus125(viewHandle);
    }
    
    public static void RequestRootViewFocus126(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusManager.RequestRootViewFocus126(viewHandle);
    }
    
    public static native void callUno_Action_Object(final com.foreign.Uno.Action_Object theDelegate,final Object arg,long argPtr);
    public static native void callUno_Action_String(final com.foreign.Uno.Action_String theDelegate,final String arg);
    public static void LoadAsync127(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        com.foreign.Fuse.Controls.Native.Android.HttpImageLoader.LoadAsync127(urlString,success,error);
    }
    
    public static void ClearBitmap128(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.ClearBitmap128(handle);
    }
    
    public static Object Create129(final Object container)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.Create129(container);
    }
    
    public static Object CreateContainer130()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.CreateContainer130();
    }
    
    public static void GetImageSize131(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.GetImageSize131(handle,wh);
    }
    
    public static void SetBitmap132(final Object handle,final Object bitmapHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetBitmap132(handle,bitmapHandle);
    }
    
    public static void SetImageMatrix133(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageMatrix133(handle,x,y,scaleX,scaleY);
    }
    
    public static void SetImageSize1134(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageSize1134(handle,wh);
    }
    
    public static void SetTint135(final Object handle,final int rgba)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetTint135(handle,rgba);
    }
    
    public static void ClearOnTouchListener136(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.ClearOnTouchListener136(viewHandle);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch138(final Object view,final Object motionEvent,long viewPtr,long motionEventPtr);
    public static Object CreateTouchListener137()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.InputDispatch.CreateTouchListener137();
    }
    
    public static void SetOnTouchListener139(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.SetOnTouchListener139(viewHandle,listenerHandle);
    }
    
    public static boolean ContainsKey1140(final Object handle,final Object key)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.JavaMap.ContainsKey1140(handle,key);
    }
    
    public static Object Create141()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.JavaMap.Create141();
    }
    
    public static UnoObject Get1142(final Object handle,final Object key)
    {
        return (UnoObject) com.foreign.Fuse.Controls.Native.Android.JavaMap.Get1142(handle,key);
    }
    
    public static void Put143(final Object handle,final Object key,final UnoObject value)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Put143(handle,key,value);
    }
    
    public static void Remove1144(final Object handle,final Object key)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Remove1144(handle,key);
    }
    
    public static int GetMeasuredHeight145(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredHeight145(handle);
    }
    
    public static int GetMeasuredWidth146(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredWidth146(handle);
    }
    
    public static void Measure147(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        com.foreign.Fuse.Controls.Native.Android.LeafView.Measure147(handle,w,h,hasX,hasY);
    }
    
    public static boolean Compare148(final Object handle1,final Object handle2)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.MotionEvent.Compare148(handle1,handle2);
    }
    
    public static int GetAction149(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetAction149(_this, handle);
    }
    
    public static int GetActionMasked150(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetActionMasked150(_this, handle);
    }
    
    public static long GetEventTime151(final UnoObject _this, final Object handle)
    {
        return (long) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetEventTime151(_this, handle);
    }
    
    public static int GetLocationOnScreenX152(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenX152(_this, viewHandle);
    }
    
    public static int GetLocationOnScreenY153(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenY153(_this, viewHandle);
    }
    
    public static int GetPointerCount154(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerCount154(_this, handle);
    }
    
    public static int GetPointerId1155(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerId1155(_this, handle,pointerIndex);
    }
    
    public static int GetPointerIndexMask156()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexMask156();
    }
    
    public static int GetPointerIndexShift157()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexShift157();
    }
    
    public static float GetX158(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetX158(_this, handle,pointerIndex);
    }
    
    public static float GetXPrecision159(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetXPrecision159(_this, handle);
    }
    
    public static float GetY160(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetY160(_this, handle,pointerIndex);
    }
    
    public static float GetYPrecision161(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetYPrecision161(_this, handle);
    }
    
    public static Object CreateBitmap162(final int w,final int h)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.CreateBitmap162(w,h);
    }
    
    public static void DisposeBitmap163(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.DisposeBitmap163(bitmap);
    }
    
    public static void Upload164(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.Upload164(viewHandle,bitmapHandle,reuse,w,h);
    }
    
    public static void UpdateShapeDrawable1165(final UnoObject _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        com.foreign.Fuse.Controls.Native.Android.Rectangle.UpdateShapeDrawable1165(_this, handle,x,y,z,w);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged167(final UnoObject jthis,final int x,final int y,final int oldx,final int oldy);
    public static Object AddCallback166(final UnoObject _this, final Object handle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.AddCallback166(_this, handle);
    }
    
    public static Object Create168()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.Create168();
    }
    
    public static void SetClipToBounds169(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetClipToBounds169(handle,clipToBounds);
    }
    
    public static void SetContent170(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetContent170(parentHandle,childHandle);
    }
    
    public static void SetScrollPosition171(final Object handle,final int x,final int y)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetScrollPosition171(handle,x,y);
    }
    
    public static void UpdateChildRect172(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.UpdateChildRect172(handle,x,y,w,h);
    }
    
    public static Object Create173()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.Create173();
    }
    
    public static Object CreateShapeDrawable174()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.CreateShapeDrawable174();
    }
    
    public static Object GetLayer175(final Object handle,final int layer)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.GetLayer175(handle,layer);
    }
    
    public static Object MakeLayerDrawable176(final Object handle,final int layerCount)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.MakeLayerDrawable176(handle,layerCount);
    }
    
    public static void SetShapeDrawableColor177(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableColor177(shapeDrawable,r,g,b,a,opacity);
    }
    
    public static void SetShapeDrawableLinearGradient178(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableLinearGradient178(shapeDrawable,startX,startY,endX,endY,colors,positions);
    }
    
    public static void SetShapeDrawableStrokeWidth179(final Object shapeDrawable,final float width)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableStrokeWidth179(shapeDrawable,width);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged181(final UnoObject jthis,final double newProgress);
    public static void AddChangedCallback180(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.AddChangedCallback180(_this, handle);
    }
    
    public static Object Create182()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Slider.Create182();
    }
    
    public static void SetProgress183(final Object handle,final double progress)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.SetProgress183(handle,progress);
    }
    
    public static void HideKeyboard184(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.HideKeyboard184(hideKeyboardContext,hideKeyboardWindowToken);
    }
    
    public static void ShowKeyboard185(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.ShowKeyboard185(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded187(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged188(final UnoObject jthis,final Object holder,final int f,final int w,final int h,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated189(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed190(final UnoObject jthis,final Object holder,long holderPtr);
    public static void AddCallback186(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.SurfaceView.AddCallback186(_this, handle);
    }
    
    public static Object Create191()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.Create191();
    }
    
    public static Object GetSurface192(final Object holder)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.GetSurface192(holder);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged194(final UnoObject jthis,final boolean value);
    public static void AddCallback193(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.AddCallback193(_this, handle);
    }
    
    public static Object Create195()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Switch.Create195();
    }
    
    public static void SetValue196(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.SetValue196(handle,value);
    }
    
    public static void MakeItPlain197(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEdit.MakeItPlain197(handle);
    }
    
    public static void CopyState198(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CopyState198(container,sourceHandle,targetHandle);
    }
    
    public static Object CreateContainer199()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateContainer199();
    }
    
    public static Object CreateTextEdit200()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateTextEdit200();
    }
    
    public static void AddView201(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.AddView201(parentHandle,childHandle);
    }
    
    public static Object Create202()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.Create202();
    }
    
    public static void RemoveView203(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.RemoveView203(parentHandle,childHandle);
    }
    
    public static void UpdateChildRect204(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.UpdateChildRect204(handle,x,y,w,h);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction206(final UnoObject jthis,final int actionCode);
    public static void AddEditorActionListener205(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddEditorActionListener205(_this, handle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged208(final UnoObject jthis,final String value);
    public static void AddTextChangedListener207(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddTextChangedListener207(_this, handle);
    }
    
    public static void ClearFocus209(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.ClearFocus209(handle);
    }
    
    public static Object Create1210()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextInput.Create1210();
    }
    
    public static boolean HasFocus211(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.TextInput.HasFocus211(viewHandle);
    }
    
    public static void RequestFocus212(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.RequestFocus212(viewHandle);
    }
    
    public static void SetCursorDrawableColor213(final UnoObject _this, final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetCursorDrawableColor213(_this, handle,color);
    }
    
    public static void SetImeOptions214(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetImeOptions214(handle,value);
    }
    
    public static void SetInputType215(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetInputType215(handle,value);
    }
    
    public static void SetPlaceholderColor216(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderColor216(handle,value);
    }
    
    public static void SetPlaceholderText217(final Object handle,final String value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderText217(handle,value);
    }
    
    public static void SetSelectionColor218(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetSelectionColor218(handle,color);
    }
    
    public static Object Create219()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextView.Create219();
    }
    
    public static void SetFont220(final Object handle,final Object fontHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFont220(handle,fontHandle);
    }
    
    public static void SetFontSize221(final Object handle,final float size)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFontSize221(handle,size);
    }
    
    public static void SetLineSpacing222(final Object handle,final float spacing)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetLineSpacing222(handle,spacing);
    }
    
    public static void SetMaxLength223(final Object handle,final int maxLength)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetMaxLength223(handle,maxLength);
    }
    
    public static void SetText224(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetText224(handle,text);
    }
    
    public static void SetTextAlignment225(final Object handle,final int alignment)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextAlignment225(handle,alignment);
    }
    
    public static void SetTextColor226(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextColor226(handle,color);
    }
    
    public static void SetTextWrapping227(final Object handle,final boolean wrap)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextWrapping227(handle,wrap);
    }
    
    public static Object CreateFromBundleFile228(final String bundlePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromBundleFile228(bundlePath);
    }
    
    public static Object CreateFromFileImpl229(final String path)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromFileImpl229(path);
    }
    
    public static Object GetDefault230()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.GetDefault230();
    }
    
    public static void BringToFront1231(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.View.BringToFront1231(handle);
    }
    
    public static void SetBackground232(final Object handle,final int argb)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetBackground232(handle,argb);
    }
    
    public static void SetEnabled233(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetEnabled233(handle,value);
    }
    
    public static void SetOpacity234(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetOpacity234(handle,value);
    }
    
    public static void SetPivotXY235(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetPivotXY235(handle,x,y);
    }
    
    public static void SetRotation236(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotation236(handle,value);
    }
    
    public static void SetRotationX237(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationX237(handle,value);
    }
    
    public static void SetRotationY238(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationY238(handle,value);
    }
    
    public static void SetScaleXY239(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetScaleXY239(handle,x,y);
    }
    
    public static void SetTranslation240(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetTranslation240(handle,x,y);
    }
    
    public static void SetVisible241(final Object handle,final boolean isVisible)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetVisible241(handle,isVisible);
    }
    
    public static void AddView242(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView242(parentHandle,childHandle);
    }
    
    public static void AddView1243(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView1243(parentHandle,childHandle,index);
    }
    
    public static Object Create244()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ViewGroup.Create244();
    }
    
    public static native boolean callUno_Func_Object(final com.foreign.Uno.Func_Object theDelegate,final Object arg,long argPtr);
    public static void InstallTouchInterceptCallback245(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.InstallTouchInterceptCallback245(handle,callback);
    }
    
    public static void RemoveView246(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.RemoveView246(parentHandle,childHandle);
    }
    
    public static void SetClipToBounds247(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetClipToBounds247(handle,clipToBounds);
    }
    
    public static void UpdateChildRect248(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.UpdateChildRect248(handle,x,y,w,h);
    }
    
    public static Object Download1249(final String url)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.ImageHandlePromise.Download1249(url);
    }
    
    public static Object LoadFile250(final String filePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadFile250(filePath);
    }
    
    public static Object LoadUri251(final String uri)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadUri251(uri);
    }
    
    public static void Release252(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.ImageLoader.Release252(bitmap);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared254(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion255(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError256(final UnoObject jthis,final int what,final int extra);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer257(final UnoObject jthis,final int percent);
    public static Object CreateMediaPlayer253(final UnoObject _this, final Object surfaceHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateMediaPlayer253(_this, surfaceHandle);
    }
    
    public static Object CreateSurface258(final UnoObject _this, final Object surfaceTexture)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurface258(_this, surfaceTexture);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable260(final UnoObject jthis);
    public static Object CreateSurfaceTexture259(final UnoObject _this, final int glHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurfaceTexture259(_this, glHandle);
    }
    
    public static void Dispose1261(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Dispose1261(mediaplayerHandle,surfaceHandle,surfaceTextureHandle);
    }
    
    public static int GetCurrentPosition262(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetCurrentPosition262(handle);
    }
    
    public static int GetDuration263(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetDuration263(handle);
    }
    
    public static int GetHeight264(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetHeight264(handle);
    }
    
    public static int GetOrientation265(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetOrientation265(handle);
    }
    
    public static int GetWidth266(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetWidth266(handle);
    }
    
    public static boolean IsHardwareAccelerated267()
    {
        return (boolean) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.IsHardwareAccelerated267();
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred269(final UnoObject jthis,final String msg);
    public static void LoadAsyncAsset268(final UnoObject _this, final Object handle,final String assetName)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncAsset268(_this, handle,assetName);
    }
    
    public static void LoadAsyncUrl270(final UnoObject _this, final Object handle,final String url)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncUrl270(_this, handle,url);
    }
    
    public static void Pause1271(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Pause1271(handle);
    }
    
    public static void Play1272(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Play1272(handle);
    }
    
    public static void SeekTo273(final Object handle,final int position)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SeekTo273(handle,position);
    }
    
    public static void SetVolume274(final Object handle,final float left,final float right)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SetVolume274(handle,left,right);
    }
    
    public static void UpdateTexture1275(final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.UpdateTexture1275(surfaceTextureHandle);
    }
    
    public static Object Create276(final String text)
    {
        return (Object) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.Create276(text);
    }
    
    public static int GetBaseLevel277(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetBaseLevel277(handle);
    }
    
    public static int GetRunCount278(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunCount278(handle);
    }
    
    public static int GetRunLevel279(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLevel279(handle,run);
    }
    
    public static int GetRunLimit280(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLimit280(handle,run);
    }
    
    public static int GetRunStart281(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunStart281(handle,run);
    }
    
    public static void CopyLineBreaks282(final String text,final Object outByteBufferHandle)
    {
        com.foreign.Fuse.Text.Implementation.JavaLineBreaks.CopyLineBreaks282(text,outByteBufferHandle);
    }
    
    public static Object LaunchIntent283(final String action,final String uri,final String packageName,final String className)
    {
        return (Object) com.foreign.Fuse.Android.Bindings.AndroidDeviceInterop.LaunchIntent283(action,uri,packageName,className);
    }
    
    public static Object MakeBufferInputStream1284(final Object buf)
    {
        return (Object) com.foreign.Fuse.Android.Bindings.AndroidDeviceInterop.MakeBufferInputStream1284(buf);
    }
    
    public static Object MakeMediaDataSource1285(final Object buf)
    {
        return (Object) com.foreign.Fuse.Android.Bindings.AndroidDeviceInterop.MakeMediaDataSource1285(buf);
    }
    
    public static native String callUno_Uno_IO_BundleFile_BundlePathGet287(final UnoObject jthis);
    public static Object OpenAssetFileDescriptor286(final UnoObject bundle)
    {
        return (Object) com.foreign.Fuse.Android.Bindings.AndroidDeviceInterop.OpenAssetFileDescriptor286(bundle);
    }
    
    public static void AddJavascriptInterface288(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.AddJavascriptInterface288(handle,name,resultHandler);
    }
    
    public static boolean CanGoBack289(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoBack289(handle);
    }
    
    public static boolean CanGoForward290(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoForward290(handle);
    }
    
    public static native void callUno_Action_int(final com.foreign.Uno.Action_int theDelegate,final int arg);
    public static Object CreateAndSetWebChromeClient291(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebChromeClient291(webViewHandle,onProgress);
    }
    
    public static native void callUno_Action(final com.foreign.Uno.Action theDelegate);
    public static Object CreateAndSetWebViewClient292(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed,final com.foreign.Uno.Action_String onCustomURI,final com.uno.StringArray customURIs)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebViewClient292(webViewHandle,loaded,started,changed,onCustomURI,customURIs);
    }
    
    public static Object CreateWebView293(final boolean zoomEnabled)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateWebView293(zoomEnabled);
    }
    
    public static double GetProgress294(final Object handle)
    {
        return (double) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetProgress294(handle);
    }
    
    public static String GetTitle295(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetTitle295(handle);
    }
    
    public static String GetUrl296(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetUrl296(handle);
    }
    
    public static void GoBack297(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoBack297(handle);
    }
    
    public static void GoForward298(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoForward298(handle);
    }
    
    public static void LoadHtml299(final Object handle,final String html,final String baseUrl)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadHtml299(handle,html,baseUrl);
    }
    
    public static void LoadUrl300(final Object handle,final String url)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadUrl300(handle,url);
    }
    
    public static void Reload301(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.Reload301(handle);
    }
    
    public static void StopLoading302(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.StopLoading302(handle);
    }
    
    public static void ClearRootView303(final Object handle)
    {
        com.foreign.Fuse.Android.AppRoot.ClearRootView303(handle);
    }
    
    public static native void callUno_Fuse_Android_AppRoot_OnTouchEvent__305(final Object motionEvent,long motionEventPtr);
    public static Object CreateRootView304()
    {
        return (Object) com.foreign.Fuse.Android.AppRoot.CreateRootView304();
    }
    
    public static void SetRootView306(final Object handle,final Object rootHandle)
    {
        com.foreign.Fuse.Android.AppRoot.SetRootView306(handle,rootHandle);
    }
    
    public static void UpdateChildRect1307(final Object handle,final int x,final int y,final int w,final int h)
    {
        com.foreign.Fuse.Android.AppRoot.UpdateChildRect1307(handle,x,y,w,h);
    }
    
    public static Object CreateBitmapARGB8888Impl308(final int width,final int height)
    {
        return (Object) com.foreign.Fuse.Android.Bitmap.CreateBitmapARGB8888Impl308(width,height);
    }
    
    public static void EraseColor1309(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.Bitmap.EraseColor1309(handle,color);
    }
    
    public static void Recycle1310(final Object handle)
    {
        com.foreign.Fuse.Android.Bitmap.Recycle1310(handle);
    }
    
    public static Object Create311(final Object bitmapHandle)
    {
        return (Object) com.foreign.Fuse.Android.Canvas.Create311(bitmapHandle);
    }
    
    public static void Translate1312(final Object handle,final float dx,final float dy)
    {
        com.foreign.Fuse.Android.Canvas.Translate1312(handle,dx,dy);
    }
    
    public static void TexImage2D313(final int target,final int level,final Object bitmap,final int border)
    {
        com.foreign.Fuse.Android.GLUtils.TexImage2D313(target,level,bitmap,border);
    }
    
    public static Object Create314(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create314(text,bufStart,bufEnd,paintHandle,outerWidth,align,spacingMult,spacingAdd,includePad,truncateAt,ellipsizedWith);
    }
    
    public static Object Create1315(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create1315(text,paintHandle,width,align,spacingMult,spacingAdd,includePad);
    }
    
    public static void Draw1316(final Object layoutHandle,final Object canvasHandle)
    {
        com.foreign.Fuse.Android.StaticLayout.Draw1316(layoutHandle,canvasHandle);
    }
    
    public static float GetDesiredWidthImpl317(final String text,final Object paintHandle)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetDesiredWidthImpl317(text,paintHandle);
    }
    
    public static int GetEllipsizedWidth318(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetEllipsizedWidth318(handle);
    }
    
    public static int GetHeight319(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetHeight319(handle);
    }
    
    public static int GetLineBaseline1320(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineBaseline1320(handle,line);
    }
    
    public static int GetLineCount321(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineCount321(handle);
    }
    
    public static int GetLineEnd1322(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineEnd1322(handle,line);
    }
    
    public static float GetLineLeft1323(final Object handle,final int line)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetLineLeft1323(handle,line);
    }
    
    public static int GetLineStart1324(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineStart1324(handle,line);
    }
    
    public static int GetWidth325(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetWidth325(handle);
    }
    
    public static int GetStatusBarColor326()
    {
        return (int) com.foreign.Fuse.Android.StatusBarHelper.GetStatusBarColor326();
    }
    
    public static native void callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar328();
    public static void InstallGlobalListener327()
    {
        com.foreign.Fuse.Android.StatusBarHelper.InstallGlobalListener327();
    }
    
    public static boolean SetStatusBarColor329(final int color)
    {
        return (boolean) com.foreign.Fuse.Android.StatusBarHelper.SetStatusBarColor329(color);
    }
    
    public static Object Create330()
    {
        return (Object) com.foreign.Fuse.Android.TextPaint.Create330();
    }
    
    public static void GetTextBounds331(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        com.foreign.Fuse.Android.TextPaint.GetTextBounds331(handle,text,start,end,r);
    }
    
    public static void SetAntiAlias332(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Android.TextPaint.SetAntiAlias332(handle,value);
    }
    
    public static void SetColor333(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.TextPaint.SetColor333(handle,color);
    }
    
    public static void SetTextSize334(final Object handle,final float textSize)
    {
        com.foreign.Fuse.Android.TextPaint.SetTextSize334(handle,textSize);
    }
    
    public static void SetTypeface335(final Object paintHandle,final Object typefaceHandle)
    {
        com.foreign.Fuse.Android.TextPaint.SetTypeface335(paintHandle,typefaceHandle);
    }
    
    public static String GetCacheDirectory336()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetCacheDirectory336();
    }
    
    public static String GetExternalCacheDirectory337()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalCacheDirectory337();
    }
    
    public static String GetExternalFilesDirectory338()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalFilesDirectory338();
    }
    
    public static String GetFilesDirectory339()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetFilesDirectory339();
    }
    
    public static String GetCacheDirectory340()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetCacheDirectory340();
    }
    
    public static String GetDataDirectory341()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetDataDirectory341();
    }
    
    public static int GetBuildVersion342()
    {
        return (int) com.foreign.Fuse.AndroidProperties.GetBuildVersion342();
    }
    
    public static String GetReleaseVersion343()
    {
        return (String) com.foreign.Fuse.AndroidProperties.GetReleaseVersion343();
    }
    
    public static native Object callUno_Neovisionaries_WebSocketClient__webSocketGet345(final UnoObject jthis);
    public static void Close344(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Close344(_this);
    }
    
    public static void Connect346(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Connect346(_this);
    }
    
    public static native void callUno_Action_ByteArray(final com.foreign.Uno.Action_ByteArray theDelegate,final com.uno.ByteArray arg);
    public static native void callUno_Neovisionaries_WebSocketClient__webSocketSet345(final UnoObject jthis,final Object setVal,long setValPtr);
    public static void Create347(final UnoObject _this, final String url,final com.uno.StringArray protocols,final com.foreign.Uno.Action open,final com.foreign.Uno.Action close,final com.foreign.Uno.Action_String error,final com.foreign.Uno.Action_String receiveMessageHandler,final com.foreign.Uno.Action_ByteArray receiveDataHandler)
    {
        com.foreign.Neovisionaries.WebSocketClient.Create347(_this, url,protocols,open,close,error,receiveMessageHandler,receiveDataHandler);
    }
    
    public static void Send348(final UnoObject _this, final com.uno.ByteArray data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send348(_this, data);
    }
    
    public static void Send1349(final UnoObject _this, final String data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send1349(_this, data);
    }
    
    public static void SetHeader350(final UnoObject _this, final String key,final String value)
    {
        com.foreign.Neovisionaries.WebSocketClient.SetHeader350(_this, key,value);
    }
    
}
