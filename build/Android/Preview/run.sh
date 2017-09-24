#!/bin/sh
# This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/0.47.13/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "./"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.eventapp"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.eventapp"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "EventApp.apk" \
    --package=com.apps.eventapp \
    --activity=EventApp \
    --sym-dir="app/src/main/.uno" \
    "$@"
