/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOEVStepFeedbackInfo : PBCodable <NSCopying> {

	unsigned _remainingBatteryCharge;
	unsigned _remainingBatteryPercentage;
	unsigned _remainingTravelRange;
	unsigned _stateOfChargeDiff;
	struct {
		unsigned has_remainingBatteryCharge : 1;
		unsigned has_remainingBatteryPercentage : 1;
		unsigned has_remainingTravelRange : 1;
		unsigned has_stateOfChargeDiff : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) unsigned remainingBatteryPercentage; 
@property (assign,nonatomic) BOOL hasRemainingTravelRange; 
@property (assign,nonatomic) unsigned remainingTravelRange; 
@property (assign,nonatomic) BOOL hasRemainingBatteryCharge; 
@property (assign,nonatomic) unsigned remainingBatteryCharge; 
@property (assign,nonatomic) BOOL hasStateOfChargeDiff; 
@property (assign,nonatomic) unsigned stateOfChargeDiff; 
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
-(void)setRemainingBatteryPercentage:(unsigned)arg1 ;
-(void)setRemainingBatteryCharge:(unsigned)arg1 ;
-(unsigned)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(unsigned)remainingBatteryCharge;
-(void)setHasRemainingBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryCharge;
-(void)setRemainingTravelRange:(unsigned)arg1 ;
-(unsigned)remainingTravelRange;
-(void)setHasRemainingTravelRange:(BOOL)arg1 ;
-(BOOL)hasRemainingTravelRange;
-(void)setStateOfChargeDiff:(unsigned)arg1 ;
-(unsigned)stateOfChargeDiff;
-(void)setHasStateOfChargeDiff:(BOOL)arg1 ;
-(BOOL)hasStateOfChargeDiff;
@end

