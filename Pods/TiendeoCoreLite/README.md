# Tiendeo Core SDK for iOS

Tiendeo Core SDK for iOS is a data and domain framework.

## Requirements
- iOS 10.0+

## Lite Dependencies
- 'Alamofire', '~> 5.2'
- 'ObjectMapper', '~> 3.0'
- 'RxSwift', '~> 4.2.0'
- 'AlamofireObjectMapper', '~> 5.0'
- 'Governor', '~> 0.2.5'

## Full Dependencies
- 'Alamofire', '~> 5.2'
- 'ObjectMapper', '~> 3.0'
- 'RxSwift', '~> 4.2.0'
- 'AlamofireObjectMapper', '~> 5.0'
- 'Governor', '~> 0.2.5'
- 'TiendeoAuth', '~> 0.0.6'
- 'FacebookCore', '~> 0.4.0'


## Add SDK to project
### CocoaPods

CocoaPods is a dependency manager for Cocoa projects. You can install it with the following command:

```
$ [sudo] gem install cocoapods
```

To integrate the Lite version of Tiendeo Core SDK into your Xcode using CocoaPods, specify it in you `Podfile`:

```
platform :ios, '10.0'
use_frameworks!

target '<Your Target Name>' do
pod 'TiendeoCore', '~> VERSION'
end
```

If you want the full version that enable login functionalities:

```
platform :ios, '10.0'
use_frameworks!

target '<Your Target Name>' do
pod 'TiendeoCore/Full', '~> VERSION'
end
```

Then, run the following command:

`$ pod install`
