/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying> {

	BOOL _avoidHighways;
	BOOL _avoidTolls;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	BOOL _voiceNavEnabled;
	struct {
		unsigned has_avoidHighways : 1;
		unsigned has_avoidTolls : 1;
		unsigned has_speedLimitEnabled : 1;
		unsigned has_trafficEnabled : 1;
		unsigned has_voiceNavEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways; 
@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls; 
@property (assign,nonatomic) BOOL hasSpeedLimitEnabled; 
@property (assign,nonatomic) BOOL speedLimitEnabled; 
@property (assign,nonatomic) BOOL hasTrafficEnabled; 
@property (assign,nonatomic) BOOL trafficEnabled; 
@property (assign,nonatomic) BOOL hasVoiceNavEnabled; 
@property (assign,nonatomic) BOOL voiceNavEnabled; 
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
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(BOOL)avoidTolls;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidTolls;
-(BOOL)avoidHighways;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)speedLimitEnabled;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitEnabled;
-(BOOL)trafficEnabled;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(BOOL)hasTrafficEnabled;
-(void)setVoiceNavEnabled:(BOOL)arg1 ;
-(BOOL)voiceNavEnabled;
-(void)setHasVoiceNavEnabled:(BOOL)arg1 ;
-(BOOL)hasVoiceNavEnabled;
@end

