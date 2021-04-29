/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EnhancedLoggingState.framework/EnhancedLoggingState
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ELSWhitelistEntry : NSObject {

	BOOL _requiresFollowup;
	BOOL _retry;
	NSString* _bundleIdentifier;
	NSString* _parameterName;
	NSString* _displayNameLocalizationKey;
	NSString* _descriptionLocalizationKey;
	NSString* _sensitiveInformationLocalizationKey;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * parameterName;                                      //@synthesize parameterName=_parameterName - In the implementation block
@property (nonatomic,retain) NSString * displayNameLocalizationKey;                         //@synthesize displayNameLocalizationKey=_displayNameLocalizationKey - In the implementation block
@property (nonatomic,retain) NSString * descriptionLocalizationKey;                         //@synthesize descriptionLocalizationKey=_descriptionLocalizationKey - In the implementation block
@property (nonatomic,readonly) NSString * sensitiveInformationLocalizationKey;              //@synthesize sensitiveInformationLocalizationKey=_sensitiveInformationLocalizationKey - In the implementation block
@property (nonatomic,readonly) BOOL requiresFollowup;                                       //@synthesize requiresFollowup=_requiresFollowup - In the implementation block
@property (nonatomic,readonly) BOOL retry;                                                  //@synthesize retry=_retry - In the implementation block
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)parameterName;
-(BOOL)retry;
-(void)setParameterName:(NSString *)arg1 ;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(NSString *)displayNameLocalizationKey;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(BOOL)arg6 requiresFollowup:(BOOL)arg7 retry:(BOOL)arg8 ;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(BOOL)arg4 requiresFollowup:(BOOL)arg5 retry:(BOOL)arg6 ;
-(NSString *)descriptionLocalizationKey;
-(void)setDescriptionLocalizationKey:(NSString *)arg1 ;
-(NSString *)sensitiveInformationLocalizationKey;
-(BOOL)requiresFollowup;
@end

