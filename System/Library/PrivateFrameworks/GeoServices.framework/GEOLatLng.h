/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLatLng : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _lat;
	double _lng;
	BOOL _gtLog;
	SCD_Struct_GE118 _flags;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (assign,nonatomic) BOOL hasGtLog; 
@property (assign,nonatomic) BOOL gtLog; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLat:(double)arg1 ;
-(double)lat;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)lng;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(void)setLng:(double)arg1 ;
-(BOOL)gtLog;
-(void)setGtLog:(BOOL)arg1 ;
-(void)setHasGtLog:(BOOL)arg1 ;
-(BOOL)hasGtLog;
@end

