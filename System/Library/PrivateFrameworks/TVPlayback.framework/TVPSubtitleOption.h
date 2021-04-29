/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVMediaSelectionOption, NSString, NSNumber;

@interface TVPSubtitleOption : NSObject {

	AVMediaSelectionOption* _avMediaSelectionOption;
	NSString* _languageCodeFromLocale;
	NSString* _languageCodeBCP47;
	NSString* _identifier;
	NSString* _localizedDisplayString;
	NSNumber* _cachedContainsOnlyForcedSubtitles;
	NSNumber* _cachedSubtitleType;

}

@property (nonatomic,copy,readonly) NSString * mediaRemoteIdentifier; 
@property (nonatomic,retain) AVMediaSelectionOption * avMediaSelectionOption;              //@synthesize avMediaSelectionOption=_avMediaSelectionOption - In the implementation block
@property (nonatomic,copy) NSString * languageCodeFromLocale;                              //@synthesize languageCodeFromLocale=_languageCodeFromLocale - In the implementation block
@property (nonatomic,copy) NSString * languageCodeBCP47;                                   //@synthesize languageCodeBCP47=_languageCodeBCP47 - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayString;                              //@synthesize localizedDisplayString=_localizedDisplayString - In the implementation block
@property (nonatomic,retain) NSNumber * cachedContainsOnlyForcedSubtitles;                 //@synthesize cachedContainsOnlyForcedSubtitles=_cachedContainsOnlyForcedSubtitles - In the implementation block
@property (nonatomic,retain) NSNumber * cachedSubtitleType;                                //@synthesize cachedSubtitleType=_cachedSubtitleType - In the implementation block
@property (nonatomic,readonly) BOOL containsOnlyForcedSubtitles; 
@property (nonatomic,readonly) long long subtitleType; 
+(id)offSubtitleOption;
+(id)autoSubtitleOption;
+(id)offSubtitleOptionWithAVMediaSelectionOption:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)subtitleType;
-(NSString *)localizedDisplayString;
-(void)setLocalizedDisplayString:(NSString *)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(NSString *)mediaRemoteIdentifier;
-(NSString *)languageCodeBCP47;
-(BOOL)containsOnlyForcedSubtitles;
-(AVMediaSelectionOption *)avMediaSelectionOption;
-(NSString *)languageCodeFromLocale;
-(void)setAvMediaSelectionOption:(AVMediaSelectionOption *)arg1 ;
-(void)setLanguageCodeFromLocale:(NSString *)arg1 ;
-(void)setLanguageCodeBCP47:(NSString *)arg1 ;
-(id)initWithAVMediaSelectionOption:(id)arg1 ;
-(NSNumber *)cachedContainsOnlyForcedSubtitles;
-(void)setCachedContainsOnlyForcedSubtitles:(NSNumber *)arg1 ;
-(NSNumber *)cachedSubtitleType;
-(void)setCachedSubtitleType:(NSNumber *)arg1 ;
@end

