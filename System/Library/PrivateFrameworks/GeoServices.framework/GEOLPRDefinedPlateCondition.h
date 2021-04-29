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

@class PBDataReader, NSMutableArray;

@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _plateMatchConditions;
	NSMutableArray* _powerTypeKeys;
	NSMutableArray* _vehicleTypeKeys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_plateMatchConditions : 1;
		unsigned read_powerTypeKeys : 1;
		unsigned read_vehicleTypeKeys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * vehicleTypeKeys; 
@property (nonatomic,retain) NSMutableArray * powerTypeKeys; 
@property (nonatomic,retain) NSMutableArray * plateMatchConditions; 
+(BOOL)isValid:(id)arg1 ;
+(Class)vehicleTypeKeyType;
+(Class)powerTypeKeyType;
+(Class)plateMatchConditionType;
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
-(NSMutableArray *)vehicleTypeKeys;
-(NSMutableArray *)powerTypeKeys;
-(void)addVehicleTypeKey:(id)arg1 ;
-(void)addPowerTypeKey:(id)arg1 ;
-(void)addPlateMatchCondition:(id)arg1 ;
-(unsigned long long)vehicleTypeKeysCount;
-(void)clearVehicleTypeKeys;
-(id)vehicleTypeKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypeKeysCount;
-(void)clearPowerTypeKeys;
-(id)powerTypeKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)plateMatchConditionsCount;
-(void)clearPlateMatchConditions;
-(id)plateMatchConditionAtIndex:(unsigned long long)arg1 ;
-(void)setVehicleTypeKeys:(NSMutableArray *)arg1 ;
-(void)setPowerTypeKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)plateMatchConditions;
-(void)setPlateMatchConditions:(NSMutableArray *)arg1 ;
@end
