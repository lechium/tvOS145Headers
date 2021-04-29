/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaUUID, NSData;

@interface SISchemaABClientEventMetadata : SISchemaInstrumentationMessage {

	SISchemaUUID* _siriDeviceId;
	SISchemaUUID* _speechId;
	double _timeIntervalSince1970;
	SCD_Struct_SI0 _has;
	BOOL _hasSiriDeviceId;
	BOOL _hasSpeechId;

}

@property (nonatomic,retain) SISchemaUUID * siriDeviceId;                //@synthesize siriDeviceId=_siriDeviceId - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceId;                       //@synthesize hasSiriDeviceId=_hasSiriDeviceId - In the implementation block
@property (nonatomic,retain) SISchemaUUID * speechId;                    //@synthesize speechId=_speechId - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechId;                           //@synthesize hasSpeechId=_hasSpeechId - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSince1970; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)timeIntervalSince1970;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaUUID *)speechId;
-(void)setSpeechId:(SISchemaUUID *)arg1 ;
-(NSData *)jsonData;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setHasTimeIntervalSince1970:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSince1970;
-(void)setSiriDeviceId:(SISchemaUUID *)arg1 ;
-(SISchemaUUID *)siriDeviceId;
-(BOOL)hasSiriDeviceId;
-(BOOL)hasSpeechId;
-(void)setHasSiriDeviceId:(BOOL)arg1 ;
-(void)setHasSpeechId:(BOOL)arg1 ;
@end

