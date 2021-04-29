/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEORPAmenityCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _addedAmenities;
	SCD_Struct_GE85* _removedAmenities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addedAmenities : 1;
		unsigned read_removedAmenities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long addedAmenitiesCount; 
@property (nonatomic,readonly) int* addedAmenities; 
@property (nonatomic,readonly) unsigned long long removedAmenitiesCount; 
@property (nonatomic,readonly) int* removedAmenities; 
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
-(void)addAddedAmenities:(int)arg1 ;
-(void)addRemovedAmenities:(int)arg1 ;
-(unsigned long long)addedAmenitiesCount;
-(void)clearAddedAmenities;
-(int)addedAmenitiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removedAmenitiesCount;
-(void)clearRemovedAmenities;
-(int)removedAmenitiesAtIndex:(unsigned long long)arg1 ;
-(int*)addedAmenities;
-(void)setAddedAmenities:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)addedAmenitiesAsString:(int)arg1 ;
-(int)StringAsAddedAmenities:(id)arg1 ;
-(int*)removedAmenities;
-(void)setRemovedAmenities:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)removedAmenitiesAsString:(int)arg1 ;
-(int)StringAsRemovedAmenities:(id)arg1 ;
@end

