#!/bin/bash
# This file was generated based on '/Users/medbeji/Library/Application Support/Fusetools/Packages/UnoCore/1.0.11/targets/ios/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
set -o pipefail
cd "`dirname "$0"`"

mkdir -p data

function openXcode() {
    echo "Error: Xcode couldn't find a provisioning profile. Try building from the Xcode GUI and/or setting the 'iOS.DevelopmentTeam' variable in your '.unoproj' or '~/.unoconfig' to solve this problem. Pass the '--debug' flag to Uno to open the Xcode GUI. Pass the '-v' flag to Uno for more information about the error. Now opening Xcode."
#    #if #(Cocoapods:Defined)
#        open -aXcode "#(Project.Name).xcworkspace"
#    #else
        open -aXcode "EventApp.xcodeproj"
#    #endif
    exit 1
}

function checkForError() {
    grep "Xcode couldn't find a provisioning profile" | while read -r line; do openXcode; done
}

##if #(Cocoapods:Defined)
#    pod install
#    xcodebuild -workspace "#(Project.Name).xcworkspace" -scheme "#(Project.Name)" -derivedDataPath build "$#" | tee >(checkForError)
##else
    xcodebuild -project "EventApp.xcodeproj" "$@" | tee >(checkForError)
##endif
