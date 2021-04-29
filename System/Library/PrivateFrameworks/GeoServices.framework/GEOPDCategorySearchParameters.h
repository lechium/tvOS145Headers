/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDETAFilter, GEOPDSSearchEvChargingParameters, GEOPDRecentRouteInfo, NSData, GEOPDViewportInfo;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _supportedRelatedEntitySectionTypes;
	SCD_Struct_GE85* _supportedSearchTierTypes;
	GEOPDETAFilter* _etaFilter;
	GEOPDSSearchEvChargingParameters* _evChargingParameters;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	NSData* _suggestionEntryMetadata;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _auxiliaryTierNumResults;
	unsigned _blurredHourOfDay;
	unsigned _dayOfWeek;
	unsigned _maxResults;
	int _searchType;
	BOOL _supportCategorySearchResultSection;
	struct {
		unsigned has_auxiliaryTierNumResults : 1;
		unsigned has_blurredHourOfDay : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_maxResults : 1;
		unsigned has_searchType : 1;
		unsigned has_supportCategorySearchResultSection : 1;
		unsigned read_unknownFields : 1;
		unsigned read_supportedRelatedEntitySectionTypes : 1;
		unsigned read_supportedSearchTierTypes : 1;
		unsigned read_etaFilter : 1;
		unsigned read_evChargingParameters : 1;
		unsigned read_recentRouteInfo : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (assign,nonatomic) BOOL hasBlurredHourOfDay; 
@property (assign,nonatomic) unsigned blurredHourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (nonatomic,readonly) BOOL hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo; 
@property (assign,nonatomic) BOOL hasSupportCategorySearchResultSection; 
@property (assign,nonatomic) BOOL supportCategorySearchResultSection; 
@property (nonatomic,readonly) BOOL hasEvChargingParameters; 
@property (nonatomic,retain) GEOPDSSearchEvChargingParameters * evChargingParameters; 
@property (nonatomic,readonly) unsigned long long supportedRelatedEntitySectionTypesCount; 
@property (nonatomic,readonly) int* supportedRelatedEntitySectionTypes; 
@property (nonatomic,readonly) BOOL hasEtaFilter; 
@property (nonatomic,retain) GEOPDETAFilter * etaFilter; 
@property (nonatomic,readonly) unsigned long long supportedSearchTierTypesCount; 
@property (nonatomic,readonly) int* supportedSearchTierTypes; 
@property (assign,nonatomic) BOOL hasAuxiliaryTierNumResults; 
@property (assign,nonatomic) unsigned auxiliaryTierNumResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)dayOfWeek;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(unsigned)maxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasViewportInfo;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(GEOPDSSearchEvChargingParameters *)evChargingParameters;
-(GEOPDETAFilter *)etaFilter;
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(void)setSupportCategorySearchResultSection:(BOOL)arg1 ;
-(void)setEvChargingParameters:(GEOPDSSearchEvChargingParameters *)arg1 ;
-(void)addSupportedRelatedEntitySectionType:(int)arg1 ;
-(void)setEtaFilter:(GEOPDETAFilter *)arg1 ;
-(void)addSupportedSearchTierType:(int)arg1 ;
-(void)setAuxiliaryTierNumResults:(unsigned)arg1 ;
-(unsigned long long)supportedRelatedEntitySectionTypesCount;
-(void)clearSupportedRelatedEntitySectionTypes;
-(int)supportedRelatedEntitySectionTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedSearchTierTypesCount;
-(void)clearSupportedSearchTierTypes;
-(int)supportedSearchTierTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned)blurredHourOfDay;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(int)searchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(BOOL)hasRecentRouteInfo;
-(BOOL)supportCategorySearchResultSection;
-(void)setHasSupportCategorySearchResultSection:(BOOL)arg1 ;
-(BOOL)hasSupportCategorySearchResultSection;
-(BOOL)hasEvChargingParameters;
-(int*)supportedRelatedEntitySectionTypes;
-(void)setSupportedRelatedEntitySectionTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedRelatedEntitySectionTypesAsString:(int)arg1 ;
-(int)StringAsSupportedRelatedEntitySectionTypes:(id)arg1 ;
-(BOOL)hasEtaFilter;
-(int*)supportedSearchTierTypes;
-(void)setSupportedSearchTierTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedSearchTierTypesAsString:(int)arg1 ;
-(int)StringAsSupportedSearchTierTypes:(id)arg1 ;
-(unsigned)auxiliaryTierNumResults;
-(void)setHasAuxiliaryTierNumResults:(BOOL)arg1 ;
-(BOOL)hasAuxiliaryTierNumResults;
@end

