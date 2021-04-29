/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class USPSchemaUSPClientEventMetadata, USPSchemaUSPLoggingInitalized, USPSchemaUSPLoggingReported, USPSchemaUSPMeasureStarted, USPSchemaUSPMeasureEnded, USPSchemaUSPIterationStarted, USPSchemaUSPIterationEnded, NSData;

@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType {

	USPSchemaUSPClientEventMetadata* _eventMetadata;
	USPSchemaUSPLoggingInitalized* _loggingInitialized;
	USPSchemaUSPLoggingReported* _loggingReported;
	USPSchemaUSPMeasureStarted* _measureStarted;
	USPSchemaUSPMeasureEnded* _measureEnded;
	USPSchemaUSPIterationStarted* _iterationStarted;
	USPSchemaUSPIterationEnded* _iterationEnded;
	BOOL _hasEventMetadata;
	BOOL _hasLoggingInitialized;
	BOOL _hasLoggingReported;
	BOOL _hasMeasureStarted;
	BOOL _hasMeasureEnded;
	BOOL _hasIterationStarted;
	BOOL _hasIterationEnded;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) USPSchemaUSPClientEventMetadata * eventMetadata;                 //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEventMetadata;                                           //@synthesize hasEventMetadata=_hasEventMetadata - In the implementation block
@property (nonatomic,retain) USPSchemaUSPLoggingInitalized * loggingInitialized;              //@synthesize loggingInitialized=_loggingInitialized - In the implementation block
@property (assign,nonatomic) BOOL hasLoggingInitialized;                                      //@synthesize hasLoggingInitialized=_hasLoggingInitialized - In the implementation block
@property (nonatomic,retain) USPSchemaUSPLoggingReported * loggingReported;                   //@synthesize loggingReported=_loggingReported - In the implementation block
@property (assign,nonatomic) BOOL hasLoggingReported;                                         //@synthesize hasLoggingReported=_hasLoggingReported - In the implementation block
@property (nonatomic,retain) USPSchemaUSPMeasureStarted * measureStarted;                     //@synthesize measureStarted=_measureStarted - In the implementation block
@property (assign,nonatomic) BOOL hasMeasureStarted;                                          //@synthesize hasMeasureStarted=_hasMeasureStarted - In the implementation block
@property (nonatomic,retain) USPSchemaUSPMeasureEnded * measureEnded;                         //@synthesize measureEnded=_measureEnded - In the implementation block
@property (assign,nonatomic) BOOL hasMeasureEnded;                                            //@synthesize hasMeasureEnded=_hasMeasureEnded - In the implementation block
@property (nonatomic,retain) USPSchemaUSPIterationStarted * iterationStarted;                 //@synthesize iterationStarted=_iterationStarted - In the implementation block
@property (assign,nonatomic) BOOL hasIterationStarted;                                        //@synthesize hasIterationStarted=_hasIterationStarted - In the implementation block
@property (nonatomic,retain) USPSchemaUSPIterationEnded * iterationEnded;                     //@synthesize iterationEnded=_iterationEnded - In the implementation block
@property (assign,nonatomic) BOOL hasIterationEnded;                                          //@synthesize hasIterationEnded=_hasIterationEnded - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                            //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(USPSchemaUSPClientEventMetadata *)eventMetadata;
-(void)setEventMetadata:(USPSchemaUSPClientEventMetadata *)arg1 ;
-(int)getAnyEventType;
-(unsigned long long)whichEvent_Type;
-(BOOL)hasEventMetadata;
-(void)setHasEventMetadata:(BOOL)arg1 ;
-(void)setLoggingInitialized:(USPSchemaUSPLoggingInitalized *)arg1 ;
-(void)setLoggingReported:(USPSchemaUSPLoggingReported *)arg1 ;
-(void)setMeasureStarted:(USPSchemaUSPMeasureStarted *)arg1 ;
-(void)setMeasureEnded:(USPSchemaUSPMeasureEnded *)arg1 ;
-(void)setIterationStarted:(USPSchemaUSPIterationStarted *)arg1 ;
-(void)setIterationEnded:(USPSchemaUSPIterationEnded *)arg1 ;
-(USPSchemaUSPLoggingInitalized *)loggingInitialized;
-(USPSchemaUSPLoggingReported *)loggingReported;
-(USPSchemaUSPMeasureStarted *)measureStarted;
-(USPSchemaUSPMeasureEnded *)measureEnded;
-(USPSchemaUSPIterationStarted *)iterationStarted;
-(USPSchemaUSPIterationEnded *)iterationEnded;
-(BOOL)hasLoggingInitialized;
-(void)setHasLoggingInitialized:(BOOL)arg1 ;
-(BOOL)hasLoggingReported;
-(void)setHasLoggingReported:(BOOL)arg1 ;
-(BOOL)hasMeasureStarted;
-(void)setHasMeasureStarted:(BOOL)arg1 ;
-(BOOL)hasMeasureEnded;
-(void)setHasMeasureEnded:(BOOL)arg1 ;
-(BOOL)hasIterationStarted;
-(void)setHasIterationStarted:(BOOL)arg1 ;
-(BOOL)hasIterationEnded;
-(void)setHasIterationEnded:(BOOL)arg1 ;
@end
