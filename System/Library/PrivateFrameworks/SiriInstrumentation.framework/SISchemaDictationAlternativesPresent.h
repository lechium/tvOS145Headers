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

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {

	int _numberOfUnderlines;
	int _countOfWordsUnderlined;
	SISchemaLocaleIdentifier* _alternativesLocale;
	BOOL _multilingualIsLowConfidence;
	SCD_Struct_LT1 _has;
	BOOL _hasAlternativesLocale;

}

@property (assign,nonatomic) int numberOfUnderlines;                                     //@synthesize numberOfUnderlines=_numberOfUnderlines - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfUnderlines; 
@property (assign,nonatomic) int countOfWordsUnderlined;                                 //@synthesize countOfWordsUnderlined=_countOfWordsUnderlined - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfWordsUnderlined; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL multilingualIsLowConfidence;                           //@synthesize multilingualIsLowConfidence=_multilingualIsLowConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasMultilingualIsLowConfidence; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(BOOL)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(BOOL)arg1 ;
-(void)setNumberOfUnderlines:(int)arg1 ;
-(void)setCountOfWordsUnderlined:(int)arg1 ;
-(void)setMultilingualIsLowConfidence:(BOOL)arg1 ;
-(int)numberOfUnderlines;
-(int)countOfWordsUnderlined;
-(BOOL)multilingualIsLowConfidence;
-(BOOL)hasNumberOfUnderlines;
-(void)setHasNumberOfUnderlines:(BOOL)arg1 ;
-(BOOL)hasCountOfWordsUnderlined;
-(void)setHasCountOfWordsUnderlined:(BOOL)arg1 ;
-(BOOL)hasMultilingualIsLowConfidence;
-(void)setHasMultilingualIsLowConfidence:(BOOL)arg1 ;
@end

