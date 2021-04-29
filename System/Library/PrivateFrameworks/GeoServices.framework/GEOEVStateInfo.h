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

@class PBUnknownFields;

@interface GEOEVStateInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _remainingBatteryCharge;
	unsigned _remainingBatteryPercentage;
	struct {
		unsigned has_remainingBatteryCharge : 1;
		unsigned has_remainingBatteryPercentage : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) unsigned remainingBatteryPercentage; 
@property (assign,nonatomic) BOOL hasRemainingBatteryCharge; 
@property (assign,nonatomic) unsigned remainingBatteryCharge; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
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
-(void)setRemainingBatteryPercentage:(unsigned)arg1 ;
-(void)setRemainingBatteryCharge:(unsigned)arg1 ;
-(unsigned)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(unsigned)remainingBatteryCharge;
-(void)setHasRemainingBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryCharge;
@end

