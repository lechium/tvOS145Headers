/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOMapRegion, GEOPDPoiIconCategoryFilter;

@interface GEOPDSpatialPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _categoryFilters;
	SCD_Struct_GE17* _excludeIconCategoryFilters;
	SCD_Struct_GE17* _includeIconCategoryFilters;
	GEOLatLng* _center;
	GEOMapRegion* _mapRegion;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _count;
	int _radius;
	struct {
		unsigned has_count : 1;
		unsigned has_radius : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryFilters : 1;
		unsigned read_excludeIconCategoryFilters : 1;
		unsigned read_includeIconCategoryFilters : 1;
		unsigned read_center : 1;
		unsigned read_mapRegion : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) int count; 
@property (nonatomic,readonly) unsigned long long categoryFiltersCount; 
@property (nonatomic,readonly) int* categoryFilters; 
@property (nonatomic,readonly) unsigned long long includeIconCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* includeIconCategoryFilters; 
@property (nonatomic,readonly) unsigned long long excludeIconCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* excludeIconCategoryFilters; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(int)count;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(int)radius;
-(void)setRadius:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(BOOL)hasCenter;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(void)addCategoryFilter:(int)arg1 ;
-(unsigned long long)categoryFiltersCount;
-(void)clearCategoryFilters;
-(int)categoryFilterAtIndex:(unsigned long long)arg1 ;
-(int*)categoryFilters;
-(void)setCategoryFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categoryFiltersAsString:(int)arg1 ;
-(int)StringAsCategoryFilters:(id)arg1 ;
-(void)addIncludeIconCategoryFilter:(unsigned)arg1 ;
-(void)addExcludeIconCategoryFilter:(unsigned)arg1 ;
-(unsigned long long)includeIconCategoryFiltersCount;
-(void)clearIncludeIconCategoryFilters;
-(unsigned)includeIconCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)excludeIconCategoryFiltersCount;
-(void)clearExcludeIconCategoryFilters;
-(unsigned)excludeIconCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned*)includeIconCategoryFilters;
-(void)setIncludeIconCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)excludeIconCategoryFilters;
-(void)setExcludeIconCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

