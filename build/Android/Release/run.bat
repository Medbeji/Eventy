:: This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/targets/android/run.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    C:\ProgramData\nour\Fusetools\Fuse\App\app-0.35.0.10867\uno.exe open -a"Android Studio" "%~dp0EventApp"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.eventapp
    C:\ProgramData\nour\Fusetools\Fuse\App\app-0.35.0.10867\uno.exe adb uninstall com.apps.eventapp
    exit /b %ERRORLEVEL%
)

C:\ProgramData\nour\Fusetools\Fuse\App\app-0.35.0.10867\uno.exe launch-apk "%~dp0EventApp.apk" ^
    --package=com.apps.eventapp ^
    --activity=EventApp ^
    --sym-dir="%~dp0EventApp\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
