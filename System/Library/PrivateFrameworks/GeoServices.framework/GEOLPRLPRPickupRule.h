/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLPRLicensePlateStructure;

@interface GEOLPRLPRPickupRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _plateTypeIndexes;
	NSMutableArray* _pickupChars;
	GEOLPRLicensePlateStructure* _prLicensePlateStructure;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_plateTypeIndexes : 1;
		unsigned read_pickupChars : 1;
		unsigned read_prLicensePlateStructure : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPrLicensePlateStructure; 
@property (nonatomic,retain) GEOLPRLicensePlateStructure * prLicensePlateStructure; 
@property (nonatomic,readonly) unsigned long long plateTypeIndexesCount; 
@property (nonatomic,readonly) unsigned* plateTypeIndexes; 
@property (nonatomic,retain) NSMutableArray * pickupChars; 
+(BOOL)isValid:(id)arg1 ;
+(Class)pickupCharType;
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
-(void)addPlateTypeIndexes:(unsigned)arg1 ;
-(unsigned long long)plateTypeIndexesCount;
-(void)clearPlateTypeIndexes;
-(unsigned)plateTypeIndexesAtIndex:(unsigned long long)arg1 ;
-(unsigned*)plateTypeIndexes;
-(void)setPlateTypeIndexes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEOLPRLicensePlateStructure *)prLicensePlateStructure;
-(void)addPickupChar:(id)arg1 ;
-(void)setPrLicensePlateStructure:(GEOLPRLicensePlateStructure *)arg1 ;
-(unsigned long long)pickupCharsCount;
-(void)clearPickupChars;
-(id)pickupCharAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)pickupChars;
-(void)setPickupChars:(NSMutableArray *)arg1 ;
-(BOOL)hasPrLicensePlateStructure;
@end

