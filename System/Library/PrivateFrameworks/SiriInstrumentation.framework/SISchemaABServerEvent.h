/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class SISchemaABSeverEventMetadata, SISchemaABExperimentServerFeatureTriggered, NSData;

@interface SISchemaABServerEvent : SISchemaTopLevelUnionType {

	SISchemaABSeverEventMetadata* _eventMetadata;
	SISchemaABExperimentServerFeatureTriggered* _serverFeatureTriggered;
	BOOL _hasEventMetadata;
	BOOL _hasServerFeatureTriggered;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) SISchemaABSeverEventMetadata * eventMetadata;                                     //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEventMetadata;                                                            //@synthesize hasEventMetadata=_hasEventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaABExperimentServerFeatureTriggered * serverFeatureTriggered;              //@synthesize serverFeatureTriggered=_serverFeatureTriggered - In the implementation block
@property (assign,nonatomic) BOOL hasServerFeatureTriggered;                                                   //@synthesize hasServerFeatureTriggered=_hasServerFeatureTriggered - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                             //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(SISchemaABSeverEventMetadata *)eventMetadata;
-(void)setEventMetadata:(SISchemaABSeverEventMetadata *)arg1 ;
-(int)getAnyEventType;
-(unsigned long long)whichEvent_Type;
-(BOOL)hasEventMetadata;
-(void)setHasEventMetadata:(BOOL)arg1 ;
-(void)setServerFeatureTriggered:(SISchemaABExperimentServerFeatureTriggered *)arg1 ;
-(SISchemaABExperimentServerFeatureTriggered *)serverFeatureTriggered;
-(BOOL)hasServerFeatureTriggered;
-(void)setHasServerFeatureTriggered:(BOOL)arg1 ;
@end

