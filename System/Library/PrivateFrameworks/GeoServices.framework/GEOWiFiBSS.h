/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLngE7, GEOLatLng, NSMutableArray;

@interface GEOWiFiBSS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE85* _attributes;
	NSString* _identifier;
	GEOLatLngE7* _latLngE7;
	GEOLatLng* _location;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned read_attributes : 1;
		unsigned read_identifier : 1;
		unsigned read_latLngE7 : 1;
		unsigned read_location : 1;
		unsigned read_qualities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,readonly) int* attributes; 
@property (nonatomic,retain) NSMutableArray * qualities; 
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) long long uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasLatLngE7; 
@property (nonatomic,retain) GEOLatLngE7 * latLngE7; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(long long)uniqueIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(int*)attributes;
-(id)dictionaryRepresentation;
-(void)addAttributes:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasUniqueIdentifier;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(GEOLatLngE7 *)latLngE7;
-(void)addQualities:(id)arg1 ;
-(void)setLatLngE7:(GEOLatLngE7 *)arg1 ;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(NSMutableArray *)qualities;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasLatLngE7;
@end

