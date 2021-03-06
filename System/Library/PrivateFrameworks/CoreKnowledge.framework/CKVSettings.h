/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface CKVSettings : NSObject {

	BOOL _isSandboxInstance;
	NSString* _siriLanguageCode;

}

@property (retain) NSDictionary * simulatedPriors; 
@property (readonly) NSString * siriLanguageCode;                   //@synthesize siriLanguageCode=_siriLanguageCode - In the implementation block
@property (nonatomic,readonly) BOOL isSandboxInstance;              //@synthesize isSandboxInstance=_isSandboxInstance - In the implementation block
+(id)defaultSettings;
+(id)sandboxSettingsWithLocale:(id)arg1 ;
+(id)supportedLanguageCodeFromLocale:(id)arg1 ;
+(id)_resolveSiriLanguageCode;
+(id)_languageCodeToLocaleIdentifierMap;
+(id)defaultSandboxSettings;
+(id)supportedLocaleFromLanguageCode:(id)arg1 ;
-(NSString *)siriLanguageCode;
-(void)setSimulatedPriors:(NSDictionary *)arg1 ;
-(id)initWithSiriLanguageCode:(id)arg1 isSandboxInstance:(BOOL)arg2 ;
-(NSDictionary *)simulatedPriors;
-(BOOL)isVocabularyDonationEnabled;
-(BOOL)shouldDonateContacts;
-(BOOL)shouldDonateAppInfo;
-(BOOL)shouldDonateCustomVocabulary;
-(BOOL)_shouldOverrideDonationSettings;
-(BOOL)_shouldDonateAll;
-(BOOL)updateSiriLanguage;
-(BOOL)isSandboxInstance;
@end

