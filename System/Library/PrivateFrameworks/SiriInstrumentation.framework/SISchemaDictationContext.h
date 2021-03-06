/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, SISchemaLocaleIdentifier, NSArray, NSData;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage {

	NSString* _keyboardLanguage;
	SISchemaLocaleIdentifier* _keyboardLocale;
	SISchemaLocaleIdentifier* _dictationLocale;
	SISchemaLocaleIdentifier* _userSelectedLocale;
	SISchemaLocaleIdentifier* _siriSelectedLocale;
	NSArray* _keyboardLocalesEnableds;
	NSArray* _dictationLocalesEnableds;
	NSString* _bundleId;
	BOOL _hasKeyboardLanguage;
	BOOL _hasKeyboardLocale;
	BOOL _hasDictationLocale;
	BOOL _hasUserSelectedLocale;
	BOOL _hasSiriSelectedLocale;
	BOOL _hasBundleId;

}

@property (nonatomic,copy) NSString * keyboardLanguage;                                  //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardLanguage;                                   //@synthesize hasKeyboardLanguage=_hasKeyboardLanguage - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * keyboardLocale;                  //@synthesize keyboardLocale=_keyboardLocale - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardLocale;                                     //@synthesize hasKeyboardLocale=_hasKeyboardLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * dictationLocale;                 //@synthesize dictationLocale=_dictationLocale - In the implementation block
@property (assign,nonatomic) BOOL hasDictationLocale;                                    //@synthesize hasDictationLocale=_hasDictationLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * userSelectedLocale;              //@synthesize userSelectedLocale=_userSelectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasUserSelectedLocale;                                 //@synthesize hasUserSelectedLocale=_hasUserSelectedLocale - In the implementation block
@property (nonatomic,retain) SISchemaLocaleIdentifier * siriSelectedLocale;              //@synthesize siriSelectedLocale=_siriSelectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSiriSelectedLocale;                                 //@synthesize hasSiriSelectedLocale=_hasSiriSelectedLocale - In the implementation block
@property (nonatomic,copy) NSArray * keyboardLocalesEnableds;                            //@synthesize keyboardLocalesEnableds=_keyboardLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSArray * dictationLocalesEnableds;                           //@synthesize dictationLocalesEnableds=_dictationLocalesEnableds - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasBundleId;                                           //@synthesize hasBundleId=_hasBundleId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasBundleId;
-(id)initWithJSON:(id)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(NSData *)jsonData;
-(void)setKeyboardLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(SISchemaLocaleIdentifier *)keyboardLocale;
-(BOOL)hasKeyboardLocale;
-(void)setHasKeyboardLocale:(BOOL)arg1 ;
-(void)setDictationLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setUserSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setSiriSelectedLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)addKeyboardLocalesEnabled:(id)arg1 ;
-(void)addDictationLocalesEnabled:(id)arg1 ;
-(SISchemaLocaleIdentifier *)dictationLocale;
-(SISchemaLocaleIdentifier *)userSelectedLocale;
-(SISchemaLocaleIdentifier *)siriSelectedLocale;
-(NSArray *)keyboardLocalesEnableds;
-(NSArray *)dictationLocalesEnableds;
-(BOOL)hasKeyboardLanguage;
-(BOOL)hasDictationLocale;
-(BOOL)hasUserSelectedLocale;
-(BOOL)hasSiriSelectedLocale;
-(void)clearKeyboardLocalesEnabled;
-(unsigned long long)keyboardLocalesEnabledCount;
-(id)keyboardLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)clearDictationLocalesEnabled;
-(unsigned long long)dictationLocalesEnabledCount;
-(id)dictationLocalesEnabledAtIndex:(unsigned long long)arg1 ;
-(void)setKeyboardLocalesEnableds:(NSArray *)arg1 ;
-(void)setDictationLocalesEnableds:(NSArray *)arg1 ;
-(void)setHasKeyboardLanguage:(BOOL)arg1 ;
-(void)setHasDictationLocale:(BOOL)arg1 ;
-(void)setHasUserSelectedLocale:(BOOL)arg1 ;
-(void)setHasSiriSelectedLocale:(BOOL)arg1 ;
-(void)setHasBundleId:(BOOL)arg1 ;
@end

