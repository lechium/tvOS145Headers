/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : SISchemaInstrumentationMessage {

	NSString* _requestID;
	NSString* _selectedLocale;
	unsigned _timeToFirstPartialMs;
	unsigned _timeToFinalResultMs;
	unsigned _latencyFinalResultMs;
	SCD_Struct_LT1 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;                    //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;                     //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) unsigned timeToFirstPartialMs;              //@synthesize timeToFirstPartialMs=_timeToFirstPartialMs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFirstPartialMs; 
@property (assign,nonatomic) unsigned timeToFinalResultMs;               //@synthesize timeToFinalResultMs=_timeToFinalResultMs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFinalResultMs; 
@property (assign,nonatomic) unsigned latencyFinalResultMs;              //@synthesize latencyFinalResultMs=_latencyFinalResultMs - In the implementation block
@property (assign,nonatomic) BOOL hasLatencyFinalResultMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(void)setTimeToFirstPartialMs:(unsigned)arg1 ;
-(void)setTimeToFinalResultMs:(unsigned)arg1 ;
-(void)setLatencyFinalResultMs:(unsigned)arg1 ;
-(NSString *)selectedLocale;
-(unsigned)timeToFirstPartialMs;
-(unsigned)timeToFinalResultMs;
-(unsigned)latencyFinalResultMs;
-(BOOL)hasRequestID;
-(BOOL)hasSelectedLocale;
-(BOOL)hasTimeToFirstPartialMs;
-(void)setHasTimeToFirstPartialMs:(BOOL)arg1 ;
-(BOOL)hasTimeToFinalResultMs;
-(void)setHasTimeToFinalResultMs:(BOOL)arg1 ;
-(BOOL)hasLatencyFinalResultMs;
-(void)setHasLatencyFinalResultMs:(BOOL)arg1 ;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
@end

