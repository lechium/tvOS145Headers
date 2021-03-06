/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaAudioStopRecordingStarted : SISchemaInstrumentationMessage {

	int _stopReasonMajor;
	int _stopReasonMinor;
	SCD_Struct_SI2 _has;

}

@property (assign,nonatomic) int stopReasonMajor;                  //@synthesize stopReasonMajor=_stopReasonMajor - In the implementation block
@property (assign,nonatomic) BOOL hasStopReasonMajor; 
@property (assign,nonatomic) int stopReasonMinor;                  //@synthesize stopReasonMinor=_stopReasonMinor - In the implementation block
@property (assign,nonatomic) BOOL hasStopReasonMinor; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setStopReasonMajor:(int)arg1 ;
-(void)setStopReasonMinor:(int)arg1 ;
-(int)stopReasonMajor;
-(int)stopReasonMinor;
-(BOOL)hasStopReasonMajor;
-(void)setHasStopReasonMajor:(BOOL)arg1 ;
-(BOOL)hasStopReasonMinor;
-(void)setHasStopReasonMinor:(BOOL)arg1 ;
@end

