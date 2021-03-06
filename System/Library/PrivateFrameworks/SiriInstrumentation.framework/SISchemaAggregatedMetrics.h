/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaVoiceTriggerMetrics, NSData;

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage {

	SISchemaVoiceTriggerMetrics* _voiceTrigger;
	BOOL _hasVoiceTrigger;

}

@property (nonatomic,retain) SISchemaVoiceTriggerMetrics * voiceTrigger;              //@synthesize voiceTrigger=_voiceTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceTrigger;                                    //@synthesize hasVoiceTrigger=_hasVoiceTrigger - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(SISchemaVoiceTriggerMetrics *)voiceTrigger;
-(void)setVoiceTrigger:(SISchemaVoiceTriggerMetrics *)arg1 ;
-(BOOL)hasVoiceTrigger;
-(void)setHasVoiceTrigger:(BOOL)arg1 ;
@end

