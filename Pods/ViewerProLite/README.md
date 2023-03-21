# Tiendeo ViewerPro SDK for iOS

Tiendeo ViewerPro SDK for iOS is a catalogs viewer framework.

## Requirements
- iOS 12.0+
- Swift version 5.3

## Dependencies
  - Kingfisher (6.x.x)
  - Alamofire (5.x.x)
  - RxSwift (6.x.x)

## Add SDK to project
### CocoaPods

CocoaPods is a dependency manager for Cocoa projects. You can install it with the following command:

```
$ [sudo] gem install cocoapods
```

To integrate Tiendeo ViewerPro SDK into your Xcode using CocoaPods, specify it in you `Podfile`:

```
platform :ios, '12.0'
use_frameworks!

target '<Your Target Name>' do
    pod 'ViewerProLite', 'VERSION'
end
```

Then, run the following command:

`$ pod install`


## Integrate SDK in your app

Add provided file `tiendeo_key` in your app bundle.

## Customise Catalog UI

Add provided file `ViewerProService-Info.plist` in your app bundle. 
### Parameters setup:
- `action_clip_animation_image`: 
	- Set string `popup` to show product detail popup when user taps a product in catalog. If this is the desired configuration, add the key `text_button_popup_product` to your app's localizables to personalise the text in popup's button.
	- Set string `clip` to add product clip to sdk data base and notify this event when user taps a product in catalog.
	- Set string `url` to open product url when user taps a product in catalog.
- `enable_clip_animation_image`: Set `YES` to show clip animation when user taps a product in catalog.
- `enable_tag_icon`: Set `YES` to show tag button over products in catalogs.
- `show_navigation_bar`: Set `YES` to show navigation bar in catalogs. Set `NO` to hide it. By default, the navigation bar will be shown.

## Usage

First of all `import TiendeoViewerPro` and `import TiendeoCore`.

## Show a list of catalogs

Use `ViewerPro.sharedInstance.showCatalogsList` method to present a view controller with a list of catalogs or use `ViewerPro.sharedInstance.getCatalogsListViewController` method in order to get a `UIViewController` with the same list.

```
func showCatalogsList(from viewController: UIViewController, catalogListInput: CatalogListInputEntity, delegate: ViewerProDelegate?, inputStatsEntity: InputStatsEntity)
```

```
func getCatalogsListViewController(catalogListInput: CatalogListInputEntity, inputStatsEntity: InputStatsEntity, delegate: ViewerProDelegate?, completion: @escaping (UIViewController?) -> Void)
```

###Parameters
- `CatalogListInputEntity`: This object contains information related to the catalog
	- `public var latitude: Float?`
	ViewerPro use latitude to show offers in this location
	- `public var longitude: Float?`
	ViewerPro use longitude to show offers in this location
	- `public var countryCode: String`
	ViewerPro use countryCode to show offers in this location
	- `public var storeId: String?`
	ViewerPro use storeId to show offers from this store
	- `public var searchText: String?` 
	Key word used for catalog filtering. 
   - `public var retailerId: String?` 
   Retailer id used for catalog filtering.
   
   **NOTE1**: All optional fields has a default value in order to developer no needs to pass them as nil if they don't want to.
   
   **NOTE2**: If storeId and retailerId are not provided, ViewerPro use latitude and longitude. If latitude and longitude are not provided, a location selector view controller will be presented modally the first time users open ViewerPro. If searchWord is not provided the integration's default searchWord will be used instead.
  
### Common Parameters
- `ViewerProDelegate?`: Set delegate and implement its methods if you desire to receive any event generated from ViewerPro.

	**NOTE**: In order to know when there are not catalogs to show, set `ViewerProDelegate` and implement its method `noCatalogs()`.
	
- `InputStatsEntity`: This object contains all the information to provide insight on sdk usage and user engagement.
	
	- `public var searchWord: String?` 
	Key word used for catalog filtering. 
	- `public var pageType: String`
	Name of the view from where ViewerPro is called.
	- `public var userToken: String`
	An stable unique ID for the user.
	- `public var version: String`
	Client app CFBundleShortVersionString.
	- `public var realLatitude: Float?`
	Real user latitude coordinate.
	- `public var realLongitude: Float?`
	Real user longitude coordinate.
	- `public var selectedLatitude: Float?`
	Custom user latitude coordinate.
	- `public var selectedLongitude: Float?`
	Custom user longitude coordinate.	
	- `public var locationType: String?` 
    Set if location is "real" or "custom".
    - `public var retailerId: String?` 
    Retailer id used for catalog filtering.
    - `public var gdprEnabled: Bool`
	User has accept the GDPR in your app.   
	- `countryCode: String`
	The country code where the app is located.

	**NOTE 1**: All optional fields has a default value in order to developer no needs to pass them as nil if they don't want to.
	
    **NOTE 2**: If `gdprEnabled` is true and location permission is not denied viewerPro register statistics about real latitude/longitude and selected latitude/longitude and `locationType` is `Real`. If `gdprEnabled` is true but location permission is denied ViewerPro only register statistics about selected latitude/longitude and `locationType` is `Selected`. Finally if `gdprEnabled` is false selected latitude/longitude is registered with value = 0.0 and `locationType` is `Unknown`.

### Example
```
let inputStatsEntity: InputStatsEntity = InputStatsEntity(searchWord: searchWordInput, pageType: "Search", userToken: "123456", version: "2.0", realLatitude: latInput, realLongitude: lonInput, selectedLatitude: latInput, selectedLongitude: lonInput, locationType: "real", retailerId: retailerIdInput, gdprEnabled: gdprSwitch.isOn)

let catalogListEntity = CatalogListInputEntity(latitude: latInput, longitude: lonInput, countryCode: countryCodeInput, storeId: storeIdInput, retailerId: retailerIdInput, searchText: searchWordInput)

ViewerPro.sharedInstance.getCatalogsListViewController(catalogListInput: catalogListEntity, inputStatsEntity: inputStatsEntity, delegate: self) { [weak self] viewController in
	// Override point for customization
}
```
## Open a single catalog
Use `ViewerPro.sharedInstance.showCatalog` method to open a single catalog viewer or `ViewerPro.sharedInstance.getCatalog` if you want to get the UIViewController and to present the catalog viewer by yourself. This methods needs a `InputStatsEntity` as the previous defined methods and a `CatalogInputEntity`.

```
func showCatalog(from viewController: UIViewController, catalogInputEntity: CatalogInputEntity, inputStatsEntity: InputStatsEntity, delegate: ViewerProDelegate)

func getCatalog(with catalogInputEntity: CatalogInputEntity, inputStatsEntity: InputStatsEntity, delegate: ViewerProDelegate) -> UIViewController
```

### Parameters
- `CatalogInputEntity`: This object contains information related to the catalog
	- `public var catalogId: String` 
	Catalog id to open.
	- `public var latitude: Float?`
	ViewerPro use latitude to show offers in this location
	- `public var longitude: Float?`
	ViewerPro use longitude to show offers in this location
	- `public var countryCode: String`
	ViewerPro use countryCode to show offers in this location
   - `public var page: Int` 
   Page from where catalog will be open. (default value == 1)
   
   **NOTE**: All optional fields has a default value in order to developer no needs to pass them as nil if they don't want to.

### Example
```
let inputStatsEntity: InputStatsEntity = InputStatsEntity(searchWord: searchWordInput, pageType: "Search", userToken: "123456", version: "2.0", realLatitude: latInput, realLongitude: lonInput, selectedLatitude: latInput, selectedLongitude: lonInput, locationType: "real", retailerId: retailerIdInput, gdprEnabled: gdprSwitch.isOn)

let catalogInputEntity = CatalogInputEntity(catalogId: "123456", latitude: nil, longitude: nil, countryCode: countryCodeInput, page: 1)

ViewerPro.sharedInstance.showCatalog(from: self, catalogInputEntity: catalogInputEntity, inputStatsEntity: inputStatsEntity, delegate: self)
```
##Other methods available

* To get the number of catalogs available before show the catalog list, you can get it by implementing:

**`Deprecated`**

```
ViewerPro.sharedInstance.getNumberOfCatalogs(retailerId: retailerId, storeId: storeId, countryCode: countryCode) { number in
	// Override point for customization
}
```
**Use this method instead**:

```
ViewerPro.sharedInstance.getNumberOfCatalogs(catalogListInput: CatalogListInputEntity) { number in
	// Override point for customization
}
```

* To get an array of `CatalogViewEntity` structs use this method:

**`Deprecated`**

```
ViewerPro.sharedInstance.getCatalogs(retailerId: retailerId, storeId: storeId, countryCode: countryCode) { catalogs in
    // Override point for customization
}
```
**Use this method instead**:

```
ViewerPro.sharedInstance.getCatalogs(catalogListInput: CatalogListInputEntity) { catalogs in
    // Override point for customization
}
```

* `CatalogViewEntity` struct has the following instance methods:

	- `func loadBigImageWithIndex(index: String) -> String?` This method receives a 5 digits string, following this format: `00001`, as a parameter and returns an url string for a large image.
	- `func loadSmallImageWithIndex(index: String) -> String?` This method receives a 5 digits string, following this format: `00001`, as a parameter and returns an url string for a small image.
	- `func expirationText() -> String` This method returns a localized string with the number of days to expire of the catalog.
	- `func shareURL(pageNumber: Int, countryCode: String) -> URL?` This method receives a number of page and a country code as parameters and returns a public URL object to share.


* In order to get saved clips:

```
ViewerPro.sharedInstance.getSavedClips(countryCode: country) { clips in
	// Override point for customization
}
```
* In order to show the product detail view, use the following method to show it over the current context:

```
ViewerPro.sharedInstance.showProductDetail(from: self, countryCode: country, clip: clip, delegate: self, inputStatsEntity: inputStatsEntity)
```
Or use this method instead if you will to open catalog and show the product detail popup over it:

```
ViewerPro.sharedInstance.showCatalogByProduct(from: self, catalogInputEntity: catalogInputEntity, clip: clip, inputStatsEntity: getStatsEntity(pageType: "Landing"), delegate: self)
```
Where `clip` is a `ClipViewerPro` entity.
 
##ViewerProDelegate

If you desire to receive any event generated from ViewerPro, you can implement some of `ViewerProDelegate` methods:

-----------------

**BREAKING CHANGES**: the following methods are deprecated since version `1.4.2-lite`:

```
func addClip(clip: ClipViewerPro) {
    // Override point for customization
}

func removeClip(clipId: String) {
	// Override point for customization
}
```

Use this method instead:

```
func didUpdateClipStatus(_ clip: ParentClipViewerPro, status: ClipStatus)
```
Where the entity `ParentClipViewerPro` will contain one or more products (siblings) depending on if user clips a single or multi product and `ClipStatus` is an enum with values `.added` and `.removed`.

-----------------

You can receive an event when ViewerPro is closed with the `enum ViewerType` indicating which kind of viewer is closing (in this case catalogViewer): 

```
func viewerProClosed(_ viewer: ViewerType) {
    // Override point for customization
 }

```

## Advertisement
This framework links iOS `AdSupport.framework` to obtain `advertisingIdentifier`.

