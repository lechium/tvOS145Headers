/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOStopStepEVInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _gainedBatteryPercentage;
	unsigned long long _muid;
	double _remainingBatteryPercentage;
	unsigned _chargingTime;
	unsigned _gainedBatteryCharge;
	unsigned _gainedTravelRange;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_gainedBatteryPercentage : 1;
		unsigned has_muid : 1;
		unsigned has_remainingBatteryPercentage : 1;
		unsigned has_chargingTime : 1;
		unsigned has_gainedBatteryCharge : 1;
		unsigned has_gainedTravelRange : 1;
		unsigned has_zilchPathIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) unsigned chargingTime; 
@property (assign,nonatomic) BOOL hasGainedBatteryPercentage; 
@property (assign,nonatomic) double gainedBatteryPercentage; 
@property (assign,nonatomic) BOOL hasGainedTravelRange; 
@property (assign,nonatomic) unsigned gainedTravelRange; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasGainedBatteryCharge; 
@property (assign,nonatomic) unsigned gainedBatteryCharge; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) double remainingBatteryPercentage; 
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
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setChargingTime:(unsigned)arg1 ;
-(void)setGainedBatteryPercentage:(double)arg1 ;
-(void)setGainedTravelRange:(unsigned)arg1 ;
-(void)setGainedBatteryCharge:(unsigned)arg1 ;
-(unsigned)chargingTime;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(BOOL)hasChargingTime;
-(double)gainedBatteryPercentage;
-(void)setHasGainedBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryPercentage;
-(unsigned)gainedTravelRange;
-(void)setHasGainedTravelRange:(BOOL)arg1 ;
-(BOOL)hasGainedTravelRange;
-(unsigned)gainedBatteryCharge;
-(void)setHasGainedBatteryCharge:(BOOL)arg1 ;
-(BOOL)hasGainedBatteryCharge;
-(void)setRemainingBatteryPercentage:(double)arg1 ;
-(double)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
@end

