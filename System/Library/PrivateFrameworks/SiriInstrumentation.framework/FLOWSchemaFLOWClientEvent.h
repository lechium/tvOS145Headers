/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWStep, NSData;

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType {

	FLOWSchemaFLOWEventMetadata* _eventMetadata;
	FLOWSchemaFLOWStep* _flowStep;
	BOOL _hasEventMetadata;
	BOOL _hasFlowStep;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) FLOWSchemaFLOWEventMetadata * eventMetadata;              //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEventMetadata;                                    //@synthesize hasEventMetadata=_hasEventMetadata - In the implementation block
@property (nonatomic,retain) FLOWSchemaFLOWStep * flowStep;                            //@synthesize flowStep=_flowStep - In the implementation block
@property (assign,nonatomic) BOOL hasFlowStep;                                         //@synthesize hasFlowStep=_hasFlowStep - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                     //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(FLOWSchemaFLOWEventMetadata *)eventMetadata;
-(void)setEventMetadata:(FLOWSchemaFLOWEventMetadata *)arg1 ;
-(int)getAnyEventType;
-(unsigned long long)whichEvent_Type;
-(BOOL)hasEventMetadata;
-(void)setHasEventMetadata:(BOOL)arg1 ;
-(void)setFlowStep:(FLOWSchemaFLOWStep *)arg1 ;
-(FLOWSchemaFLOWStep *)flowStep;
-(BOOL)hasFlowStep;
-(void)setHasFlowStep:(BOOL)arg1 ;
@end

