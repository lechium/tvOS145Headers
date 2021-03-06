/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage {

	NSString* _countryCode;
	NSString* _languageCode;
	BOOL _hasCountryCode;
	BOOL _hasLanguageCode;

}

@property (nonatomic,copy) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasCountryCode;                //@synthesize hasCountryCode=_hasCountryCode - In the implementation block
@property (nonatomic,copy) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageCode;               //@synthesize hasLanguageCode=_hasLanguageCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)languageCode;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(id)initWithJSON:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(NSData *)jsonData;
-(void)setHasCountryCode:(BOOL)arg1 ;
-(void)setHasLanguageCode:(BOOL)arg1 ;
@end

