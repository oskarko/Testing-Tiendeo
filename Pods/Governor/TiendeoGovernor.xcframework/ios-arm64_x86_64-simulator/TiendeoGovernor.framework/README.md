# Tiendeo Governor SDK for iOS

Tiendeo Governor SDK for iOS is a framework for user location tracking.

## Requirements
- iOS 9.0+

## Add SDK to project
### CocoaPods

CocoaPods is a dependency manager for Cocoa projects. You can install it with the following command:

```
$ gem install cocoapods
```

To integrate Tiendeo Governor into your Xcode using CocoaPods, specify it in you `Podfile`:

```
platform :ios, '9.0'
use_frameworks!

target '<Your Target Name>' do
    pod 'Governor', 'VERSION'
end
```

Then, run the following command:

`$ pod install`
