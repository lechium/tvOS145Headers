/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSString, NSSet;

@interface AXSSPronunciationSubstitution : NSObject {

	BOOL _active;
	BOOL _ignoreCase;
	BOOL _appliesToAllApps;
	BOOL _isUserSubstitution;
	NSString* _originalString;
	NSString* _replacementString;
	NSString* _phonemes;
	NSSet* _languages;
	NSSet* _voiceIds;
	NSSet* _bundleIdentifiers;
	NSRange _replacementRange;

}

@property (nonatomic,copy) NSString * originalString;                 //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,copy) NSString * replacementString;              //@synthesize replacementString=_replacementString - In the implementation block
@property (nonatomic,copy) NSString * phonemes;                       //@synthesize phonemes=_phonemes - In the implementation block
@property (nonatomic,copy) NSSet * languages;                         //@synthesize languages=_languages - In the implementation block
@property (nonatomic,copy) NSSet * voiceIds;                          //@synthesize voiceIds=_voiceIds - In the implementation block
@property (assign,nonatomic) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL ignoreCase;                         //@synthesize ignoreCase=_ignoreCase - In the implementation block
@property (assign,nonatomic) NSRange replacementRange;                //@synthesize replacementRange=_replacementRange - In the implementation block
@property (assign,nonatomic) BOOL appliesToAllApps;                   //@synthesize appliesToAllApps=_appliesToAllApps - In the implementation block
@property (nonatomic,copy) NSSet * bundleIdentifiers;                 //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL isUserSubstitution;                 //@synthesize isUserSubstitution=_isUserSubstitution - In the implementation block
-(NSString *)replacementString;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSSet *)languages;
-(void)setLanguages:(NSSet *)arg1 ;
-(NSRange)replacementRange;
-(void)setBundleIdentifiers:(NSSet *)arg1 ;
-(NSSet *)bundleIdentifiers;
-(NSString *)originalString;
-(void)setIgnoreCase:(BOOL)arg1 ;
-(void)setAppliesToAllApps:(BOOL)arg1 ;
-(void)setOriginalString:(NSString *)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)setPhonemes:(NSString *)arg1 ;
-(void)setVoiceIds:(NSSet *)arg1 ;
-(void)setReplacementRange:(NSRange)arg1 ;
-(NSString *)phonemes;
-(NSSet *)voiceIds;
-(BOOL)ignoreCase;
-(BOOL)appliesToAllApps;
-(BOOL)isUserSubstitution;
-(void)setIsUserSubstitution:(BOOL)arg1 ;
-(BOOL)isEqualToSubstitution:(id)arg1 ;
@end

