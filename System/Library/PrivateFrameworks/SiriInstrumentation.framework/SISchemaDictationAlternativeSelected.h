/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativeSelected : SISchemaInstrumentationMessage {

	int _countOfWordsReplaced;
	int _countOfAlternativesAvailable;
	int _alternativeListPosition;
	SISchemaLocaleIdentifier* _alternativesLocale;
	SCD_Struct_LT1 _has;
	BOOL _hasAlternativesLocale;

}

@property (assign,nonatomic) int countOfWordsReplaced;                                   //@synthesize countOfWordsReplaced=_countOfWordsReplaced - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfWordsReplaced; 
@property (assign,nonatomic) int countOfAlternativesAvailable;                           //@synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfAlternativesAvailable; 
@property (assign,nonatomic) int alternativeListPosition;                                //@synthesize alternativeListPosition=_alternativeListPosition - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeListPosition; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setCountOfWordsReplaced:(int)arg1 ;
-(void)setCountOfAlternativesAvailable:(int)arg1 ;
-(void)setAlternativeListPosition:(int)arg1 ;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(int)countOfWordsReplaced;
-(int)countOfAlternativesAvailable;
-(int)alternativeListPosition;
-(BOOL)hasCountOfWordsReplaced;
-(void)setHasCountOfWordsReplaced:(BOOL)arg1 ;
-(BOOL)hasCountOfAlternativesAvailable;
-(void)setHasCountOfAlternativesAvailable:(BOOL)arg1 ;
-(BOOL)hasAlternativeListPosition;
-(void)setHasAlternativeListPosition:(BOOL)arg1 ;
-(BOOL)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(BOOL)arg1 ;
@end

