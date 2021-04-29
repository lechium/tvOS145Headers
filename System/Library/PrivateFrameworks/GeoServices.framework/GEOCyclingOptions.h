/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOCyclingUserPreferences, GEOCyclingVehicleSpecifications;

@interface GEOCyclingOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOCyclingUserPreferences* _cyclingUserPreferences;
	GEOCyclingVehicleSpecifications* _cyclingVehicleSpecifications;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_cyclingUserPreferences : 1;
		unsigned read_cyclingVehicleSpecifications : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCyclingUserPreferences; 
@property (nonatomic,retain) GEOCyclingUserPreferences * cyclingUserPreferences; 
@property (nonatomic,readonly) BOOL hasCyclingVehicleSpecifications; 
@property (nonatomic,retain) GEOCyclingVehicleSpecifications * cyclingVehicleSpecifications; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
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
-(GEOCyclingVehicleSpecifications *)cyclingVehicleSpecifications;
-(GEOCyclingUserPreferences *)cyclingUserPreferences;
-(void)setCyclingUserPreferences:(GEOCyclingUserPreferences *)arg1 ;
-(void)setCyclingVehicleSpecifications:(GEOCyclingVehicleSpecifications *)arg1 ;
-(BOOL)hasCyclingUserPreferences;
-(BOOL)hasCyclingVehicleSpecifications;
@end

