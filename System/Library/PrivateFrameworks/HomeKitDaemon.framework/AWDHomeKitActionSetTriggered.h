/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _clientMetricIdentifier;
	unsigned _duration;
	int _errorCode;
	unsigned _numAccessories;
	NSString* _transaction;
	int _triggerSource;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasTransaction; 
@property (nonatomic,retain) NSString * transaction;                         //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerSource; 
@property (assign,nonatomic) int triggerSource;                              //@synthesize triggerSource=_triggerSource - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                        //@synthesize numAccessories=_numAccessories - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetricIdentifier; 
@property (nonatomic,retain) NSString * clientMetricIdentifier;              //@synthesize clientMetricIdentifier=_clientMetricIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)transaction;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setTransaction:(NSString *)arg1 ;
-(NSString *)clientMetricIdentifier;
-(void)setClientMetricIdentifier:(NSString *)arg1 ;
-(int)triggerSource;
-(BOOL)hasTransaction;
-(BOOL)hasClientMetricIdentifier;
-(void)setTriggerSource:(int)arg1 ;
-(void)setHasTriggerSource:(BOOL)arg1 ;
-(BOOL)hasTriggerSource;
-(id)triggerSourceAsString:(int)arg1 ;
-(int)StringAsTriggerSource:(id)arg1 ;
-(void)setNumAccessories:(unsigned)arg1 ;
-(void)setHasNumAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAccessories;
-(unsigned)numAccessories;
@end

