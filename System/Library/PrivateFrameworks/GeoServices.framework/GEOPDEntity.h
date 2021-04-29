/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOLocalizedString, GEOStyleAttributes;

@interface GEOPDEntity : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _placeLookupCategorys;
	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSMutableArray* _alternateSearchableNames;
	unsigned long long _brandMuid;
	unsigned long long _buildingId;
	NSString* _fax;
	unsigned long long _globalBrandMuid;
	NSMutableArray* _localizedCategorys;
	NSString* _mapsCategoryId;
	NSMutableArray* _names;
	GEOLocalizedString* _secondaryName;
	GEOLocalizedString* _secondarySpokenName;
	NSMutableArray* _spokenNames;
	GEOStyleAttributes* _styleAttributes;
	NSString* _telephone;
	NSString* _url;
	NSString* _walletCategoryId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _capacity;
	int _displayStyle;
	int _placeDisplayType;
	int _searchSection;
	int _type;
	BOOL _altTelephoneAdsOptOut;
	BOOL _enableRapLightweightFeedback;
	BOOL _isDisputed;
	BOOL _isPermanentlyClosed;
	BOOL _isStandaloneBrand;
	BOOL _telephoneAdsOptOut;
	struct {
		unsigned has_brandMuid : 1;
		unsigned has_buildingId : 1;
		unsigned has_globalBrandMuid : 1;
		unsigned has_capacity : 1;
		unsigned has_displayStyle : 1;
		unsigned has_placeDisplayType : 1;
		unsigned has_searchSection : 1;
		unsigned has_type : 1;
		unsigned has_altTelephoneAdsOptOut : 1;
		unsigned has_enableRapLightweightFeedback : 1;
		unsigned has_isDisputed : 1;
		unsigned has_isPermanentlyClosed : 1;
		unsigned has_isStandaloneBrand : 1;
		unsigned has_telephoneAdsOptOut : 1;
		unsigned read_unknownFields : 1;
		unsigned read_placeLookupCategorys : 1;
		unsigned read_altFaxs : 1;
		unsigned read_altTelephones : 1;
		unsigned read_altUrls : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_fax : 1;
		unsigned read_localizedCategorys : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_names : 1;
		unsigned read_secondaryName : 1;
		unsigned read_secondarySpokenName : 1;
		unsigned read_spokenNames : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_telephone : 1;
		unsigned read_url : 1;
		unsigned read_walletCategoryId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone; 
@property (nonatomic,retain) NSMutableArray * altTelephones; 
@property (nonatomic,readonly) BOOL hasFax; 
@property (nonatomic,retain) NSString * fax; 
@property (nonatomic,retain) NSMutableArray * altFaxs; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) NSMutableArray * altUrls; 
@property (assign,nonatomic) BOOL hasIsPermanentlyClosed; 
@property (assign,nonatomic) BOOL isPermanentlyClosed; 
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed; 
@property (nonatomic,retain) NSMutableArray * names; 
@property (nonatomic,retain) NSMutableArray * spokenNames; 
@property (nonatomic,retain) NSMutableArray * localizedCategorys; 
@property (assign,nonatomic) BOOL hasTelephoneAdsOptOut; 
@property (assign,nonatomic) BOOL telephoneAdsOptOut; 
@property (assign,nonatomic) BOOL hasAltTelephoneAdsOptOut; 
@property (assign,nonatomic) BOOL altTelephoneAdsOptOut; 
@property (assign,nonatomic) BOOL hasIsStandaloneBrand; 
@property (assign,nonatomic) BOOL isStandaloneBrand; 
@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle; 
@property (assign,nonatomic) BOOL hasSearchSection; 
@property (assign,nonatomic) int searchSection; 
@property (assign,nonatomic) BOOL hasPlaceDisplayType; 
@property (assign,nonatomic) int placeDisplayType; 
@property (assign,nonatomic) BOOL hasBrandMuid; 
@property (assign,nonatomic) unsigned long long brandMuid; 
@property (assign,nonatomic) BOOL hasCapacity; 
@property (assign,nonatomic) int capacity; 
@property (nonatomic,readonly) unsigned long long placeLookupCategorysCount; 
@property (nonatomic,readonly) int* placeLookupCategorys; 
@property (nonatomic,readonly) BOOL hasSecondaryName; 
@property (nonatomic,retain) GEOLocalizedString * secondaryName; 
@property (nonatomic,readonly) BOOL hasSecondarySpokenName; 
@property (nonatomic,retain) GEOLocalizedString * secondarySpokenName; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasWalletCategoryId; 
@property (nonatomic,retain) NSString * walletCategoryId; 
@property (nonatomic,readonly) BOOL hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (assign,nonatomic) BOOL hasEnableRapLightweightFeedback; 
@property (assign,nonatomic) BOOL enableRapLightweightFeedback; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (assign,nonatomic) BOOL hasGlobalBrandMuid; 
@property (assign,nonatomic) unsigned long long globalBrandMuid; 
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)entityForPlaceData:(id)arg1 ;
+(Class)nameType;
+(Class)alternateSearchableNameType;
+(Class)altTelephoneType;
+(Class)altFaxType;
+(Class)altUrlType;
+(Class)spokenNameType;
+(Class)localizedCategoryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(NSMutableArray *)names;
-(id)dictionaryRepresentation;
-(int)capacity;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCapacity:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUrl;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(unsigned long long)buildingId;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(BOOL)hasBuildingId;
-(NSMutableArray *)localizedCategorys;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)setBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)brandMuid;
-(void)setHasBrandMuid:(BOOL)arg1 ;
-(BOOL)hasBrandMuid;
-(NSString *)mapsCategoryId;
-(NSString *)walletCategoryId;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(void)setWalletCategoryId:(NSString *)arg1 ;
-(BOOL)hasMapsCategoryId;
-(BOOL)hasWalletCategoryId;
-(id)bestLocalizedString;
-(BOOL)isDisputed;
-(GEOLocalizedString *)secondaryName;
-(GEOLocalizedString *)secondarySpokenName;
-(int)placeDisplayType;
-(BOOL)hasTelephone;
-(NSString *)telephone;
-(NSMutableArray *)alternateSearchableNames;
-(void)addName:(id)arg1 ;
-(unsigned long long)namesCount;
-(void)clearNames;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(BOOL)hasIsPermanentlyClosed;
-(BOOL)isPermanentlyClosed;
-(id)bestLocalizedName;
-(unsigned long long)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned long long)arg1 ;
-(void)setIsDisputed:(BOOL)arg1 ;
-(NSMutableArray *)altTelephones;
-(BOOL)telephoneAdsOptOut;
-(NSMutableArray *)spokenNames;
-(BOOL)hasIsDisputed;
-(BOOL)hasIsStandaloneBrand;
-(BOOL)isStandaloneBrand;
-(void)addAlternateSearchableName:(id)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(NSString *)fax;
-(NSMutableArray *)altFaxs;
-(NSMutableArray *)altUrls;
-(void)addAltTelephone:(id)arg1 ;
-(void)setFax:(NSString *)arg1 ;
-(void)addAltFax:(id)arg1 ;
-(void)addAltUrl:(id)arg1 ;
-(void)setIsPermanentlyClosed:(BOOL)arg1 ;
-(void)addSpokenName:(id)arg1 ;
-(void)addLocalizedCategory:(id)arg1 ;
-(void)setTelephoneAdsOptOut:(BOOL)arg1 ;
-(void)setAltTelephoneAdsOptOut:(BOOL)arg1 ;
-(void)setIsStandaloneBrand:(BOOL)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(void)setSearchSection:(int)arg1 ;
-(void)setPlaceDisplayType:(int)arg1 ;
-(void)addPlaceLookupCategory:(int)arg1 ;
-(void)setSecondaryName:(GEOLocalizedString *)arg1 ;
-(void)setSecondarySpokenName:(GEOLocalizedString *)arg1 ;
-(void)setEnableRapLightweightFeedback:(BOOL)arg1 ;
-(void)setGlobalBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)altTelephonesCount;
-(void)clearAltTelephones;
-(id)altTelephoneAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altFaxsCount;
-(void)clearAltFaxs;
-(id)altFaxAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)altUrlsCount;
-(void)clearAltUrls;
-(id)altUrlAtIndex:(unsigned long long)arg1 ;
-(void)clearSpokenNames;
-(unsigned long long)localizedCategorysCount;
-(void)clearLocalizedCategorys;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeLookupCategorysCount;
-(void)clearPlaceLookupCategorys;
-(int)placeLookupCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(BOOL)hasFax;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(void)setHasIsPermanentlyClosed:(BOOL)arg1 ;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(void)setHasTelephoneAdsOptOut:(BOOL)arg1 ;
-(BOOL)hasTelephoneAdsOptOut;
-(BOOL)altTelephoneAdsOptOut;
-(void)setHasAltTelephoneAdsOptOut:(BOOL)arg1 ;
-(BOOL)hasAltTelephoneAdsOptOut;
-(void)setHasIsStandaloneBrand:(BOOL)arg1 ;
-(int)displayStyle;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(id)displayStyleAsString:(int)arg1 ;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(int)searchSection;
-(void)setHasSearchSection:(BOOL)arg1 ;
-(BOOL)hasSearchSection;
-(id)searchSectionAsString:(int)arg1 ;
-(int)StringAsSearchSection:(id)arg1 ;
-(void)setHasPlaceDisplayType:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplayType;
-(id)placeDisplayTypeAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayType:(id)arg1 ;
-(void)setHasCapacity:(BOOL)arg1 ;
-(BOOL)hasCapacity;
-(int*)placeLookupCategorys;
-(void)setPlaceLookupCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)placeLookupCategorysAsString:(int)arg1 ;
-(int)StringAsPlaceLookupCategorys:(id)arg1 ;
-(BOOL)hasSecondaryName;
-(BOOL)hasSecondarySpokenName;
-(BOOL)enableRapLightweightFeedback;
-(void)setHasEnableRapLightweightFeedback:(BOOL)arg1 ;
-(BOOL)hasEnableRapLightweightFeedback;
-(unsigned long long)globalBrandMuid;
-(void)setHasGlobalBrandMuid:(BOOL)arg1 ;
-(BOOL)hasGlobalBrandMuid;
@end

