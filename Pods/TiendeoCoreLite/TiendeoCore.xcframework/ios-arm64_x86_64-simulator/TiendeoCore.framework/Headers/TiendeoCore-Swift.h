#if 0
#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef TIENDEOCORE_SWIFT_H
#define TIENDEOCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreFoundation;
@import CoreLocation;
@import Foundation;
@import MapKit;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TiendeoCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("CatalogDisplayedLocal")
@interface CatalogDisplayedLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@class NSString;

@interface CatalogDisplayedLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic) double displayedTimestamp;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) BOOL opened;
@end

@class UIImageViewAligned;
@class UILabel;
@class NSCoder;

SWIFT_CLASS("_TtC11TiendeoCore29ContentListCollectionViewCell")
@interface ContentListCollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageViewAligned * _Null_unspecified catalogImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified expirationLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified retailerLabel;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11TiendeoCore29CatalogListCollectionViewCell")
@interface CatalogListCollectionViewCell : ContentListCollectionViewCell
- (void)awakeFromNib;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS_NAMED("CategoryLocal")
@interface CategoryLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class FavoriteLocal;
@class NSSet;

@interface CategoryLocal (SWIFT_EXTENSION(TiendeoCore))
- (void)addFavoritesObject:(FavoriteLocal * _Nonnull)value;
- (void)removeFavoritesObject:(FavoriteLocal * _Nonnull)value;
- (void)addFavorites:(NSSet * _Nonnull)values;
- (void)removeFavorites:(NSSet * _Nonnull)values;
@end


@interface CategoryLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, strong) NSSet * _Nullable favorites;
@end


SWIFT_CLASS_NAMED("ChipLocalEntity")
@interface ChipLocalEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class TagBoxLocalEntity;

@interface ChipLocalEntity (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, strong) TagBoxLocalEntity * _Nullable tagBox;
@end


SWIFT_CLASS("_TtC11TiendeoCore10ClipButton")
@interface ClipButton : UIButton
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



SWIFT_CLASS("_TtC11TiendeoCore28CouponListCollectionViewCell")
@interface CouponListCollectionViewCell : ContentListCollectionViewCell
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11TiendeoCore14DataController")
@interface DataController : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11TiendeoCore14ExpirationView")
@interface ExpirationView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("FavoriteCatalogDisplayedLocal")
@interface FavoriteCatalogDisplayedLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@class NSDate;

@interface FavoriteCatalogDisplayedLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSDate * _Nullable expirationDate;
@property (nonatomic, copy) NSString * _Nullable id;
@end


SWIFT_CLASS_NAMED("FavoriteLocal")
@interface FavoriteLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface FavoriteLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable retailerId;
@property (nonatomic, copy) NSString * _Nullable retailerName;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable catalogs;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) int32_t type;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, strong) CategoryLocal * _Nullable category;
@end


SWIFT_CLASS_NAMED("GeofenceLocal")
@interface GeofenceLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface GeofenceLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable message;
@property (nonatomic) float radius;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable transition;
@property (nonatomic) double triggersAgain;
@property (nonatomic, copy) NSString * _Nullable retailerId;
@property (nonatomic, copy) NSString * _Nullable appName;
@property (nonatomic, copy) NSDate * _Nullable start;
@property (nonatomic, copy) NSDate * _Nullable end;
@property (nonatomic, copy) NSString * _Nullable action;
@property (nonatomic, copy) NSString * _Nullable deeplink;
@property (nonatomic, copy) NSDate * _Nullable triggeredDate;
@end


SWIFT_CLASS("_TtC11TiendeoCore16InputStatsEntity")
@interface InputStatsEntity : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end











SWIFT_CLASS_NAMED("LoyaltyCardLocal")
@interface LoyaltyCardLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface LoyaltyCardLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable code;
@property (nonatomic, copy) NSString * _Nullable codeFormat;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable retailerId;
@property (nonatomic) double timestamp;
@end

@class UIEvent;

SWIFT_CLASS("_TtC11TiendeoCore15PassThroughView")
@interface PassThroughView : UIView
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("PrintStatArticleLocal")
@interface PrintStatArticleLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class PrintStatLocal;

@interface PrintStatArticleLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable articleId;
@property (nonatomic, copy) NSString * _Nullable brandId;
@property (nonatomic, copy) NSString * _Nullable catalogId;
@property (nonatomic, copy) NSString * _Nullable modelName;
@property (nonatomic) int32_t position;
@property (nonatomic, copy) NSString * _Nullable productId;
@property (nonatomic, copy) NSString * _Nullable itemType;
@property (nonatomic, copy) NSString * _Nullable saleId;
@property (nonatomic, strong) PrintStatLocal * _Nullable print;
@end


SWIFT_CLASS_NAMED("PrintStatBannerLocal")
@interface PrintStatBannerLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface PrintStatBannerLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable bannerId;
@property (nonatomic, strong) PrintStatLocal * _Nullable print;
@end


SWIFT_CLASS_NAMED("PrintStatCatalogLocal")
@interface PrintStatCatalogLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@class NSNumber;

@interface PrintStatCatalogLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable modelName;
@property (nonatomic, strong) NSNumber * _Nullable page;
@property (nonatomic) int32_t position;
@property (nonatomic, strong) PrintStatLocal * _Nullable print;
@end


SWIFT_CLASS_NAMED("PrintStatLocal")
@interface PrintStatLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface PrintStatLocal (SWIFT_EXTENSION(TiendeoCore))
- (void)addCatalogsObject:(PrintStatCatalogLocal * _Nonnull)value;
- (void)removeCatalogsObject:(PrintStatCatalogLocal * _Nonnull)value;
- (void)addCatalogs:(NSSet * _Nonnull)values;
- (void)removeCatalogs:(NSSet * _Nonnull)values;
@end

@class PrintStatPromoCouponLocal;

@interface PrintStatLocal (SWIFT_EXTENSION(TiendeoCore))
- (void)addPromoCouponsObject:(PrintStatPromoCouponLocal * _Nonnull)value;
- (void)removePromoCouponsObject:(PrintStatPromoCouponLocal * _Nonnull)value;
- (void)addPromoCoupons:(NSSet * _Nonnull)values;
- (void)removePromoCoupons:(NSSet * _Nonnull)values;
@end


@interface PrintStatLocal (SWIFT_EXTENSION(TiendeoCore))
- (void)addArticlesObject:(PrintStatArticleLocal * _Nonnull)value;
- (void)removeArticlesObject:(PrintStatArticleLocal * _Nonnull)value;
- (void)addArticles:(NSSet * _Nonnull)values;
- (void)removeArticles:(NSSet * _Nonnull)values;
@end


@interface PrintStatLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable baseStatsUrl;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable clientTimestamp;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable integration;
@property (nonatomic, strong) NSNumber * _Nullable latitude;
@property (nonatomic, copy) NSString * _Nullable locationType;
@property (nonatomic, strong) NSNumber * _Nullable longitude;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic, copy) NSString * _Nullable pageType;
@property (nonatomic, copy) NSString * _Nullable platform;
@property (nonatomic, copy) NSString * _Nullable provider;
@property (nonatomic, copy) NSString * _Nullable searchType;
@property (nonatomic, copy) NSString * _Nullable searchWord;
@property (nonatomic) float selectedLatitude;
@property (nonatomic) float selectedLongitude;
@property (nonatomic) int32_t timeZoneOffset;
@property (nonatomic, copy) NSString * _Nullable userToken;
@property (nonatomic, copy) NSString * _Nullable view;
@property (nonatomic, copy) NSString * _Nullable sessionId;
@property (nonatomic, strong) NSSet * _Nullable articles;
@property (nonatomic, strong) PrintStatBannerLocal * _Nullable banner;
@property (nonatomic, strong) NSSet * _Nullable catalogs;
@property (nonatomic, strong) NSSet * _Nullable promoCoupons;
@end


SWIFT_CLASS_NAMED("PrintStatPromoCouponLocal")
@interface PrintStatPromoCouponLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface PrintStatPromoCouponLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable promoCouponId;
@property (nonatomic) int32_t position;
@property (nonatomic, strong) PrintStatLocal * _Nullable print;
@end


SWIFT_CLASS("_TtC11TiendeoCore17PrivacyPolicyView")
@interface PrivacyPolicyView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11TiendeoCore24ProductCellRetailersView")
@interface ProductCellRetailersView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("ProductLocal")
@interface ProductLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@class ShoppingListLocal;

@interface ProductLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) BOOL checked;
@property (nonatomic, copy) NSString * _Nullable category;
@property (nonatomic, strong) ShoppingListLocal * _Nullable list;
@end


SWIFT_CLASS_NAMED("SearchResultLocal")
@interface SearchResultLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end






@interface SearchResultLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable category;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@end


SWIFT_CLASS_NAMED("ShoppingListLocal")
@interface ShoppingListLocal : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface ShoppingListLocal (SWIFT_EXTENSION(TiendeoCore))
- (void)addProductsObject:(ProductLocal * _Nonnull)value;
- (void)removeProductsObject:(ProductLocal * _Nonnull)value;
- (void)addProducts:(NSSet * _Nonnull)values;
- (void)removeProducts:(NSSet * _Nonnull)values;
@end


@interface ShoppingListLocal (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) BOOL checked;
@property (nonatomic) double timestamp;
@property (nonatomic, strong) NSSet * _Nullable products;
@end


SWIFT_CLASS("_TtC11TiendeoCore15StoreViewEntity")
@interface StoreViewEntity : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface StoreViewEntity (SWIFT_EXTENSION(TiendeoCore)) <MKAnnotation>
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
@end


SWIFT_CLASS("_TtC11TiendeoCore17TagBoxLocalEntity")
@interface TagBoxLocalEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end



@interface TagBoxLocalEntity (SWIFT_EXTENSION(TiendeoCore))
- (void)addChipsObject:(ChipLocalEntity * _Nonnull)value;
- (void)removeChipsObject:(ChipLocalEntity * _Nonnull)value;
- (void)addChips:(NSSet * _Nonnull)values;
- (void)removeChips:(NSSet * _Nonnull)values;
@end


@interface TagBoxLocalEntity (SWIFT_EXTENSION(TiendeoCore))
@property (nonatomic, copy) NSString * _Nullable articleId;
@property (nonatomic, copy) NSString * _Nullable brandName;
@property (nonatomic, copy) NSString * _Nullable catalogId;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSDate * _Nullable expirationDate;
@property (nonatomic, copy) NSString * _Nullable imageUrl;
@property (nonatomic, copy) NSString * _Nullable infoPrice;
@property (nonatomic) BOOL isWholePage;
@property (nonatomic, copy) NSString * _Nullable logoUrl;
@property (nonatomic, copy) NSString * _Nullable oldPrice;
@property (nonatomic) int32_t pageNumber;
@property (nonatomic, copy) NSString * _Nullable price;
@property (nonatomic, copy) NSString * _Nullable productDescription;
@property (nonatomic, copy) NSString * _Nullable retailerId;
@property (nonatomic, copy) NSString * _Nullable retailerName;
@property (nonatomic) double timeStamp;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable tagProductId;
@property (nonatomic, copy) NSString * _Nullable tagBrandId;
@property (nonatomic, strong) NSSet * _Nullable chips;
@property (nonatomic, copy) NSString * _Nullable sku;
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC11TiendeoCore8TndLabel")
@interface TndLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end







@class UIImage;

IB_DESIGNABLE
SWIFT_CLASS("_TtC11TiendeoCore18UIImageViewAligned")
@interface UIImageViewAligned : UIImageView
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, strong) UIImage * _Nullable highlightedImage;
/// The option to align the content to the top.
/// It is available in Interface Builder and should not be set programmatically. Use <code>alignment</code> property if you want to set alignment outside Interface Builder.
@property (nonatomic) IBInspectable BOOL alignTop;
/// The option to align the content to the left.
/// It is available in Interface Builder and should not be set programmatically. Use <code>alignment</code> property if you want to set alignment outside Interface Builder.
@property (nonatomic) IBInspectable BOOL alignLeft;
/// The option to align the content to the right.
/// It is available in Interface Builder and should not be set programmatically. Use <code>alignment</code> property if you want to set alignment outside Interface Builder.
@property (nonatomic) IBInspectable BOOL alignRight;
/// The option to align the content to the bottom.
/// It is available in Interface Builder and should not be set programmatically. Use <code>alignment</code> property if you want to set alignment outside Interface Builder.
@property (nonatomic) IBInspectable BOOL alignBottom;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
@end




SWIFT_CLASS("_TtC11TiendeoCore13ViewInspector")
@interface ViewInspector : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC11TiendeoCore19VisibilityInspector")
@interface VisibilityInspector : NSObject
- (void)start;
- (void)stop;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
