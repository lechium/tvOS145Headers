/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData;

@interface SISchemaAcousticProfile : SISchemaInstrumentationMessage {

	BOOL _hasA;
	NSData* _a;

}

@property (a,nonatomic,copy) NSData * a;                       //@synthesize a=_a - In the implementation block
@property (assign,nonatomic) BOOL hasA;                        //@synthesize hasA=_hasA - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setA:(NSData *)arg1 ;
-(NSData *)a;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasA;
-(void)setHasA:(BOOL)arg1 ;
@end
