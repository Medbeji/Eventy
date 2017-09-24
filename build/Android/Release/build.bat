:: This file was generated based on '../../AppData/Local/Fusetools/Packages/UnoCore/0.46.1/targets/android/build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0EventApp\app\src\main"
set ANT_DIR=C:\Users\nour\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_91

echo ## 1/2: libEventApp.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
echo ## 2/2: EventApp.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
C:\ProgramData\nour\Fusetools\Fuse\App\app-0.35.0.10867\uno.exe cp EventApp/app/src/main/bin/EventApp-debug.apk EventApp.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
