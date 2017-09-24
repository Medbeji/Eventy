#!/bin/sh
# This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/targets/ios/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"


case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    pod install
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "EventApp.xcodeproj"
##endif
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.eventapp"
    "/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/prebuilt/iOS/bin/ios-deploy" -9 -1 "com.apps.eventapp"
    exit $?
    ;;
esac

##if #(Cocoapods:Defined)
#pod install
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Release-iphoneos/EventApp.app" "$@"
##endif
