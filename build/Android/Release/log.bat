:: This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/targets/android/log.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=C:\Users\nour\AppData\Local\Android\sdk
set ADB="%SDK_DIR%\platform-tools\adb.exe"

%ADB% logcat -s "Debug","dalvik","error","Error","BufferQueue","XliApp","Xli","DEBUG","System.err","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","EventApp"
