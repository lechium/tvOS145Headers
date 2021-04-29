/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>

@protocol GEOMapItem, GEOMapItemTransitInfo, GEOTransitAttribution, NSObject, MKTransitInfoPreload;
@class MKMapItemIdentifier, NSDate, _MKMapItemPlaceAttribution, _MKMapItemPhotosAttribution, _MKMapItemReviewsAttribution, GEOMapItemStorageUserValues, NSString, NSNumberFormatter, NSDictionary, MKMapItemMetadata, GEOPlace, _MKPlaceReservationInfo, GEOMapItemStorage, GEOMapRegion, GEOAddress, GEOPDFlyover, NSArray, GEOBusinessHours, NSData, NSURL, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEOMapItemDetourInfo, GEORelatedPlaceList, NSNumber, GEOModuleLayoutEntry, UIColor, MKPlacemark, NSTimeZone;

@interface MKMapItem : NSObject <NSSecureCoding, GEOURLSerializable> {

	BOOL _isCurrentLocation;
	BOOL _isPlaceHolder;
	id<GEOMapItem> _geoMapItem;
	MKMapItemIdentifier* _identifier;
	BOOL _isTransitInfoUpdated;
	NSDate* _transitInfoUpdatedDate;
	id<GEOMapItemTransitInfo> _updatedTransitInfo;
	id<GEOMapItemTransitInfo> _defaultTransitInfo;
	id<GEOTransitAttribution> _updatedTransitAttribution;
	_MKMapItemPlaceAttribution* _attribution;
	_MKMapItemPhotosAttribution* _photosAttribution;
	_MKMapItemReviewsAttribution* _reviewsAttribution;
	GEOMapItemStorageUserValues* _userValues;
	id<NSObject> _didResolveAttributionToken;
	NSString* _shortAddress;
	NSString* _firstLocalizedCategoryName;
	NSNumberFormatter* _numberFormatterForAdamId;
	NSString* _localizedSampleSizeForUserRatingScoreString;
	NSDictionary* _cachedHoursBuilder;
	BOOL _isMapItemTypeTransit;
	MKMapItemMetadata* _metadata;
	GEOPlace* _place;
	_MKPlaceReservationInfo* _reservationInfo;
	NSString* _pointOfInterestCategory;
	id<MKTransitInfoPreload> _preloadedTransitInfo;

}

@property (nonatomic,readonly) NSString * formattedNumberOfReviews; 
@property (nonatomic,readonly) NSString * formattedNumberOfReviewsIncludingProvider; 
@property (getter=_transitInfoUpdatedDate,nonatomic,readonly) NSDate * transitInfoUpdatedDate; 
@property (getter=_isEmptyContactMapItem,readonly) BOOL isEmptyContactMapItem; 
@property (assign,nonatomic) BOOL isCurrentLocation;                                                                                                    //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,readonly) GEOMapItemStorageUserValues * userValues; 
@property (nonatomic,readonly) MKMapItemMetadata * metadata;                                                                                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) GEOPlace * place;                                                                                                        //@synthesize place=_place - In the implementation block
@property (getter=_geoMapItem,nonatomic,readonly) id<GEOMapItemPrivate> geoMapItem; 
@property (getter=_geoMapItemStorageForPersistence,nonatomic,readonly) GEOMapItemStorage * geoMapItemStorageForPersistence; 
@property (getter=_geoMapItemStorageForDragAndDrop,nonatomic,readonly) GEOMapItemStorage * geoMapItemStorageForDragAndDrop; 
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,readonly) BOOL isPlaceHolder;                                                                                                      //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
@property (getter=_coordinate,nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (getter=_displayMapRegion,nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (getter=_hasDisplayMinZoom,nonatomic,readonly) BOOL hasDisplayMinZoom; 
@property (getter=_displayMinZoom,nonatomic,readonly) float displayMinZoom; 
@property (getter=_hasDisplayMaxZoom,nonatomic,readonly) BOOL hasDisplayMaxZoom; 
@property (getter=_displayMaxZoom,nonatomic,readonly) float displayMaxZoom; 
@property (getter=_geoFenceMapRegion,nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_hasTransitDisplayName,nonatomic,readonly) BOOL hasTransitDisplayName; 
@property (getter=_transitDisplayName,nonatomic,readonly) NSString * transitDisplayName; 
@property (getter=_hasTransitLabels,nonatomic,readonly) BOOL hasTransitLabels; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_preloadedTransitInfo,nonatomic,readonly) id<MKTransitInfoPreload> preloadedTransitInfo;                                              //@synthesize preloadedTransitInfo=_preloadedTransitInfo - In the implementation block
@property (getter=_geoAddress,nonatomic,readonly) GEOAddress * geoAddress; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_identifier,nonatomic,readonly) MKMapItemIdentifier * identifier; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_phoneNumberOptsOutOfAds,nonatomic,readonly) BOOL phoneNumberOptsOutOfAds; 
@property (getter=_firstLocalizedCategoryName,nonatomic,readonly) NSString * firstLocalizedCategoryName; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_localizedSampleSizeForUserRatingScoreString,nonatomic,readonly) NSString * localizedSampleSizeForUserRatingScoreString; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceDescription,nonatomic,readonly) BOOL hasPriceDescription; 
@property (getter=_priceDescription,nonatomic,readonly) NSString * priceDescription; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRangeString,nonatomic,readonly) NSString * priceRangeString; 
@property (getter=_shortAddress,nonatomic,readonly) NSString * shortAddress; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_amenities,nonatomic,readonly) NSArray * amenities; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) BOOL responseStatusIncomplete; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasLocalizedOperatingHours,nonatomic,readonly) BOOL hasLocalizedOperatingHours; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandAloneBrand,nonatomic,readonly) BOOL isStandAloneBrand; 
@property (getter=_hasBrandMUID,nonatomic,readonly) BOOL hasBrandMUID; 
@property (getter=_brandMUID,nonatomic,readonly) unsigned long long brand; 
@property (getter=_isMapItemTypeUnknown,nonatomic,readonly) BOOL isMapItemTypeUnknown; 
@property (getter=_isMapItemTypeBusiness,nonatomic,readonly) BOOL isMapItemTypeBusiness; 
@property (getter=_isMapItemTypeSettlement,nonatomic,readonly) BOOL isMapItemTypeSettlement; 
@property (getter=_isMapItemTypeAddress,nonatomic,readonly) BOOL isMapItemTypeAddress; 
@property (assign,getter=_isMapItemTypeTransit,nonatomic) BOOL isMapItemTypeTransit;                                                                    //@synthesize isMapItemTypeTransit=_isMapItemTypeTransit - In the implementation block
@property (getter=_isMapItemTypeBrand,nonatomic,readonly) BOOL isMapItemTypeBrand; 
@property (getter=_localizedResponseTime,nonatomic,readonly) NSString * localizedResponseTime; 
@property (getter=_messageBusinessHours,nonatomic,readonly) GEOBusinessHours * messageBusinessHours; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasChargerNumberString,nonatomic,readonly) BOOL hasChargerNumberString; 
@property (getter=_chargerNumberString,nonatomic,readonly) NSString * chargerNumberString; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_hasCorrectedHomeWorkCoordinate,nonatomic,readonly) BOOL hasCorrectedHomeWorkCoordinate; 
@property (getter=_hasCorrectedHomeWorkAddress,nonatomic,readonly) BOOL hasCorrectedHomeWorkAddress; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) BOOL hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) long long venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_reviewsDisplayName,nonatomic,readonly) NSString * reviewsDisplayName; 
@property (getter=_attribution,nonatomic,readonly) _MKMapItemPlaceAttribution * attribution;                                                            //@synthesize attribution=_attribution - In the implementation block
@property (getter=_photosAttribution,nonatomic,readonly) _MKMapItemPhotosAttribution * photosAttribution;                                               //@synthesize photosAttribution=_photosAttribution - In the implementation block
@property (getter=_reviewsAttribution,nonatomic,readonly) _MKMapItemReviewsAttribution * reviewsAttribution;                                            //@synthesize reviewsAttribution=_reviewsAttribution - In the implementation block
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (nonatomic,readonly) NSString * reviewsProviderDisplayName; 
@property (getter=_handle,nonatomic,readonly) NSData * handle; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;                                                                                 //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (getter=_detourInfo,nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (getter=_externalTransitStationCode,nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_messageID,nonatomic,readonly) NSString * messageID; 
@property (getter=_messageURLString,nonatomic,readonly) NSString * messageURLString; 
@property (getter=_isMessageIDVerified,nonatomic,readonly) BOOL isMessageIDVerified; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_secondaryQuickLinks,nonatomic,readonly) NSArray * secondaryQuickLinks; 
@property (getter=_placeCollections,nonatomic,readonly) NSArray * placeCollections; 
@property (getter=_placeCollectionIds,nonatomic,readonly) NSArray * collectionIds; 
@property (getter=_relatedPlaceList,nonatomic,readonly) GEORelatedPlaceList * relatedPlaceList; 
@property (getter=_preferedAppAdamID,nonatomic,readonly) NSNumber * preferedAppAdamID; 
@property (getter=_alternativeAppAdamIds,nonatomic,readonly) NSArray * alternativeAppAdamIds; 
@property (getter=_placecardLayout,nonatomic,readonly) GEOModuleLayoutEntry * placecardLayout; 
@property (getter=_navTintBrandColor,nonatomic,readonly) UIColor * navTintBrandColor; 
@property (getter=_navBackgroundbrandColor,nonatomic,readonly) UIColor * navBackgroundbrandColor; 
@property (getter=_secondaryName,nonatomic,readonly) NSString * secondaryName; 
@property (getter=_secondarySpokenName,nonatomic,readonly) NSString * secondarySpokenName; 
@property (getter=_hasBusinessHours,nonatomic,readonly) BOOL hasBusinessHours; 
@property (getter=_businessHours,nonatomic,readonly) NSArray * businessHours; 
@property (getter=_hasLinkedServices,nonatomic,readonly) BOOL hasLinkedServices; 
@property (getter=_linkedServices,nonatomic,readonly) NSArray * linkedServices; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,copy) NSString * pointOfInterestCategory;                                                                                          //@synthesize pointOfInterestCategory=_pointOfInterestCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)mapItemForCurrentLocation;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
+(void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_itemWithGeoMapItem:(id)arg1 ;
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
+(id)_localizedNextOpeningHoursFormatter;
+(id)_localizedNextOpeningDayOftheWeekFormatter;
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)_urlForMapItemHandles:(id)arg1 options:(id)arg2 ;
+(id)_deserializeResourceOptionsFromURL:(id)arg1 error:(out id*)arg2 ;
+(id)_launchOptionsFromResourceOptionsDictionary:(id)arg1 ;
+(void)_mapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)sanitizeDictionary:(id)arg1 ;
+(id)_launchOptionsWithOptions:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(BOOL)valueIsValid:(id)arg1 forKey:(id)arg2 ;
+(id)sanitizeArray:(id)arg1 forKey:(id)arg2 ;
+(id)sanitizeObject:(id)arg1 forKey:(id)arg2 ;
+(id)_mapItemBackedByURL:(id)arg1 ;
+(id)mapItemWithDictionary:(id)arg1 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(void)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 ;
+(void)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_sharedSessionURLForPunchoutURL:(id)arg1 ;
+(id)_sharedSessionUserInfoForPunchoutUserInfo:(id)arg1 ;
+(id)_sourceAppIdFromLaunchURL:(id)arg1 ;
+(id)_sourceAppIdFromLaunchUserInfo:(id)arg1 ;
+(id)launchOptionsFromURL:(id)arg1 ;
+(id)_urlForLocation:(id)arg1 address:(id)arg2 label:(id)arg3 options:(id)arg4 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 serializedDetourInfo:(id)arg2 currentLocation:(BOOL)arg3 ;
+(id)_itemWithContact:(id)arg1 geoMapItem:(id)arg2 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 ;
+(void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
+(void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2 ;
+(id)contactsAddressKeysForGeoAddressKeys;
+(id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1 ;
+(id)ticketForMapsDataString:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(id)_identifier;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(id)_handle;
-(MKMapItemMetadata *)metadata;
-(id)_webURL;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)_vendorID;
-(unsigned long long)_muid;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(GEOPlace *)place;
-(id)_attribution;
-(CLLocationCoordinate2D)_coordinate;
-(id)_businessHours;
-(id)_styleAttributes;
-(id)_displayMapRegion;
-(BOOL)_hasMUID;
-(int)_resultProviderID;
-(id)_browseCategories;
-(id)initWithPlace:(id)arg1 ;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(id)_bestNavbarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_reviews;
-(id)_tips;
-(id)_placeDataAsData;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_hasTransit;
-(id)_transitInfo;
-(id)_transitAttribution;
-(BOOL)_hasFlyover;
-(id)_flyover;
-(id)_flyoverAnnouncementMessage;
-(id)_priceDescription;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(BOOL)_hasPriceRange;
-(BOOL)_hasAnyAmenities;
-(id)_amenities;
-(BOOL)_hasEncyclopedicInfo;
-(id)_encyclopedicInfo;
-(unsigned long long)_openingHoursOptions;
-(BOOL)_needsAttribution;
-(id)_providerURL;
-(id)_poiSurveyURLString;
-(id)_poiPinpointURLString;
-(id)_photosAttribution;
-(id)_reviewsAttribution;
-(unsigned long long)_customIconID;
-(BOOL)_hasBusinessClaim;
-(id)_businessClaim;
-(int)_parsecSectionType;
-(id)_quickLinks;
-(id)_secondaryQuickLinks;
-(id)_placeCollections;
-(id)_relatedPlaceList;
-(BOOL)_hasBrandMUID;
-(unsigned long long)_brandMUID;
-(BOOL)_hasVenueFeatureType;
-(long long)_venueFeatureType;
-(id)_venueInfo;
-(int)_placeDisplayStyle;
-(id)_annotatedItemList;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasBusinessHours;
-(BOOL)_hasLinkedServices;
-(id)_linkedServices;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)_secondaryName;
-(id)_secondarySpokenName;
-(id)_detourInfo;
-(id)_externalTransitStationCode;
-(GEOMapItemStorageUserValues *)userValues;
-(id)_geoMapItem;
-(id)_geoAddress;
-(id)initWithPlacemark:(id)arg1 ;
-(MKPlacemark *)placemark;
-(id)initWithContact:(id)arg1 ;
-(id)_messageID;
-(id)initWithCLLocation:(id)arg1 ;
-(BOOL)_isMapItemTypeBrand;
-(void)openInMapsWithLaunchOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStandAloneBrand;
-(id)_addressFormattedAsSinglelineAddress;
-(id)_messageBusinessHours;
-(int)_browseCategory_placeCardType;
-(BOOL)_browseCategory_isVenueItem;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForVenue;
-(BOOL)_browseCategory_canDisplayBrowseCategoriesForPlace;
-(id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(_MKPlaceReservationInfo *)reservationInfo;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(id)_firstLocalizedCategoryName;
-(id)_addressFormattedAsMultilineAddress;
-(void)_refreshAttribution;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)initWithCLLocation:(id)arg1 placeType:(int)arg2 ;
-(BOOL)_hasTransitDisplayName;
-(id)_transitDisplayName;
-(id)_addressFormattedAsShortenedAddress;
-(id)_chargerNumberString;
-(NSString *)pointOfInterestCategory;
-(id)_geoMapItemStorageForPersistence;
-(id)_addressFormattedAsWeatherDisplayName;
-(id)_addressFormattedAsWeatherLocationName;
-(id)_activityURLUsingWebPlaceCard:(BOOL)arg1 ;
-(id)_urlExtraStorage;
-(BOOL)_isMapItemTypeTransit;
-(id)_addressOrNil:(id)arg1 ;
-(id)_postalAddressFromMeCardUsingAddressIdentifier:(id)arg1 ;
-(id)_addressFormattedAsName;
-(id)_formatterForAdamId;
-(id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 isSnippetLogo:(BOOL)arg4 ;
-(id)initWithGeoMapItemAsCurrentLocation:(id)arg1 ;
-(id)_geoMapItemStorageForDragAndDrop;
-(BOOL)_phoneNumberOptsOutOfAds;
-(id)_getBusiness;
-(NSString *)yelpID;
-(BOOL)_hasDisplayMinZoom;
-(float)_displayMinZoom;
-(BOOL)_hasDisplayMaxZoom;
-(float)_displayMaxZoom;
-(id)_geoFenceMapRegion;
-(BOOL)_hasTransitLabels;
-(void)preloadTransitInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_localizedSampleSizeForUserRatingScoreString;
-(BOOL)_hasPriceDescription;
-(id)_priceRangeString;
-(id)_shortAddress;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasLocalizedOperatingHours;
-(id)hoursBuilderForSearchResultCellForOptions:(unsigned long long)arg1 ;
-(id)_localizedNextOpeningStringShort:(BOOL)arg1 ;
-(id)_localizedResponseTime;
-(BOOL)_hasChargerNumberString;
-(BOOL)openInMapsWithLaunchOptions:(id)arg1 ;
-(id)_fullAddressWithMultiline:(BOOL)arg1 ;
-(id)_weatherDisplayName;
-(id)_weatherLocationName;
-(id)_activityURL;
-(BOOL)_canGetDirections;
-(id)_bestBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(id)_addressFormattedAsCity;
-(id)_addressFormattedAsStreetOnly;
-(id)_addressFormattedAsTitlesForMapRect:(SCD_Struct_MK1)arg1 ;
-(id)_cnPostalAddress;
-(id)venueLabelWithContext:(unsigned long long)arg1 ;
-(id)_preferedAppAdamID;
-(id)_alternativeAppAdamIds;
-(id)_reviewsDisplayName;
-(id)_attributionFor:(id)arg1 sourceStringFormat:(id)arg2 moreSourceStringFormat:(id)arg3 imageTintColor:(id)arg4 ;
-(BOOL)_isMapItemTypeUnknown;
-(BOOL)_isMapItemTypeBusiness;
-(BOOL)_isMapItemTypeSettlement;
-(BOOL)_isMapItemTypeAddress;
-(id)_messageURLString;
-(BOOL)_isMessageIDVerified;
-(id)_placecardLayout;
-(id)_navBackgroundbrandColor;
-(id)_navTintBrandColor;
-(id)_placeCollectionIds;
-(NSString *)reviewsProviderDisplayName;
-(BOOL)_hasCorrectedHomeWorkCoordinate;
-(BOOL)_hasCorrectedHomeWorkAddress;
-(BOOL)isPlaceHolder;
-(void)setIsMapItemTypeTransit:(BOOL)arg1 ;
-(void)setPointOfInterestCategory:(NSString *)arg1 ;
-(id)_preloadedTransitInfo;
-(id)_transitInfoUpdatedDate;
-(id)formattedNumberOfReviewsIncludingProvider:(BOOL)arg1 formatter:(id)arg2 ;
-(NSString *)formattedNumberOfReviews;
-(NSString *)formattedNumberOfReviewsIncludingProvider;
-(id)_reviewForIdentifier:(id)arg1 ;
-(void)_markTransitInfoUpdated;
-(void)_updateTransitInfoWithMapItem:(id)arg1 ;
-(void)_getFirstAvailableAppClipLinkFromQuickLinks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getFirstAvailableAppClipLinkWithCompletion:(/*^block*/id)arg1 ;
-(void)_getFirstAvailableSecondaryAppClipLinkWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHasAvailableAppClipWithCompletion:(/*^block*/id)arg1 ;
-(void)_getHasAvailableSecondaryAppClipWithCompletion:(/*^block*/id)arg1 ;
-(id)_restaurantLink_firstProviderIdentifier;
-(id)_restaurantLink_firstVendorID;
-(id)_restaurantLink_overridenBundleIDsForVendorIDs;
-(BOOL)_hasRestaurantExtensionInfo;
-(BOOL)_restaurantLink_hasFeatureType:(unsigned long long)arg1 ;
-(unsigned long long)_restaurantExtensionModeForFirstProvider;
-(id)_restaurantLink_firstProviderPlaceIdentifier;
-(id)_restaurantLink_firstProviderDisplayName;
-(id)_mapsDataString;
-(BOOL)_isEmptyContactMapItem;
-(id)_placeCardContact;
-(id)_initWithLabelMarker:(id)arg1 ;
@end

