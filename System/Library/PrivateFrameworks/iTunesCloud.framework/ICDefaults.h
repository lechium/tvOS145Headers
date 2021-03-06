/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSString, NSDictionary, NSNumber, NSDate;

@interface ICDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSUserDefaults* _internalDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * internalDefaults;                                                                        //@synthesize internalDefaults=_internalDefaults - In the implementation block
@property (nonatomic,copy) NSString * cloudMediaLibraryUID; 
@property (nonatomic,readonly) NSString * defaultStoreFront; 
@property (nonatomic,copy) NSDictionary * cachedSubscriptionStatus; 
@property (nonatomic,copy) NSDictionary * cachedMusicUserTokens; 
@property (nonatomic,copy) NSDictionary * pushNotificationState; 
@property (nonatomic,copy) NSDictionary * mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates; 
@property (nonatomic,copy) NSNumber * lastActiveAccountDSID; 
@property (nonatomic,copy) NSDictionary * lastCookieHeadersForRevokingMusicUserTokens; 
@property (nonatomic,copy) NSDate * lastAllowedInteractiveAuthenticationTime; 
@property (nonatomic,copy) NSDictionary * authServiceClientTokenCache; 
@property (assign,nonatomic) double lastAuthenticationDialogResponseTime; 
@property (nonatomic,copy) NSDictionary * lastKnownLocalStoreAccountProperties; 
@property (nonatomic,copy) NSDictionary * lastKnownSubscriptionStatusBaseCacheKey; 
@property (nonatomic,copy) NSDictionary * accountNotificationsShowInLibraryDictionary; 
@property (nonatomic,copy) NSString * lastKnownHouseholdID; 
@property (assign,nonatomic) BOOL ignoreExtendedCertificateValidation; 
@property (nonatomic,readonly) BOOL bypassBagSanityChecks; 
@property (nonatomic,copy,readonly) NSString * deviceModelOverride; 
@property (nonatomic,copy,readonly) NSNumber * deviceClassOverride; 
@property (nonatomic,copy,readonly) NSNumber * fairPlayDeviceTypeOverride; 
@property (nonatomic,copy,readonly) NSString * productVersionOverride; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatformOverride; 
@property (nonatomic,copy,readonly) NSString * productPlatformOverride; 
@property (nonatomic,copy,readonly) NSNumber * networkTypeOverride; 
@property (nonatomic,readonly) BOOL shouldForceiPhoneBehaviors; 
@property (nonatomic,copy,readonly) NSNumber * authServiceClientTokenTimeToLive; 
@property (assign,nonatomic) BOOL shouldRunAgeVerification; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (assign,getter=isExplicitContentAllowedForCurrentYear,nonatomic) BOOL explicitContentAllowedForCurrentYear; 
@property (assign,getter=isExplicitContentAllowedForExpirationYear,nonatomic) BOOL explicitContentAllowedForExpirationYear; 
@property (assign,getter=isGrazingPathEnabled,nonatomic) BOOL grazingPathEnabled; 
@property (getter=isPrivacyAcknowledgementDisabledForMusic,nonatomic,readonly) BOOL privacyAcknowledgementDisabledForMusic; 
@property (nonatomic,readonly) BOOL shouldForceLibraryRecommendationAnalysis; 
@property (nonatomic,readonly) BOOL allowLowAffinityRecommendations; 
@property (nonatomic,readonly) BOOL shouldReduceLibraryRecommendationsXPCInterval; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusAsExpired; 
@property (nonatomic,readonly) BOOL shouldTreatSagaAddComputerCallAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatInitialSagaImportAsFailed; 
@property (nonatomic,readonly) BOOL shouldTreatSubscriptionStatusCheckAsIncomplete; 
@property (getter=isLegacyStoreCacheBusterEnabled,nonatomic,readonly) BOOL legacyStoreCacheBusterEnabled; 
@property (assign,nonatomic) BOOL automaticDownloadsEnabled; 
@property (nonatomic,copy) NSDictionary * lastKnownUserAgeVerificationState; 
+(id)standardDefaults;
-(id)init;
-(void)synchronize;
-(NSUserDefaults *)internalDefaults;
-(NSDate *)ageVerificationExpirationDate;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(NSString *)cloudMediaLibraryUID;
-(void)setCloudMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)defaultStoreFront;
-(NSDictionary *)cachedSubscriptionStatus;
-(void)setCachedSubscriptionStatus:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedMusicUserTokens;
-(void)setCachedMusicUserTokens:(NSDictionary *)arg1 ;
-(NSDictionary *)pushNotificationState;
-(void)setPushNotificationState:(NSDictionary *)arg1 ;
-(NSDictionary *)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
-(void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(NSDictionary *)arg1 ;
-(NSNumber *)lastActiveAccountDSID;
-(void)setLastActiveAccountDSID:(NSNumber *)arg1 ;
-(NSDictionary *)lastCookieHeadersForRevokingMusicUserTokens;
-(void)setLastCookieHeadersForRevokingMusicUserTokens:(NSDictionary *)arg1 ;
-(NSDate *)lastAllowedInteractiveAuthenticationTime;
-(void)setLastAllowedInteractiveAuthenticationTime:(NSDate *)arg1 ;
-(NSNumber *)authServiceClientTokenTimeToLive;
-(NSDictionary *)authServiceClientTokenCache;
-(void)setAuthServiceClientTokenCache:(NSDictionary *)arg1 ;
-(double)lastAuthenticationDialogResponseTime;
-(void)setLastAuthenticationDialogResponseTime:(double)arg1 ;
-(void)setLastKnownUserAgeVerificationState:(NSDictionary *)arg1 ;
-(NSDictionary *)lastKnownUserAgeVerificationState;
-(NSDictionary *)lastKnownLocalStoreAccountProperties;
-(void)setLastKnownLocalStoreAccountProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)lastKnownSubscriptionStatusBaseCacheKey;
-(void)setLastKnownSubscriptionStatusBaseCacheKey:(NSDictionary *)arg1 ;
-(void)setAccountNotificationsShowInLibraryDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)accountNotificationsShowInLibraryDictionary;
-(NSString *)lastKnownHouseholdID;
-(void)setLastKnownHouseholdID:(NSString *)arg1 ;
-(BOOL)ignoreExtendedCertificateValidation;
-(void)setIgnoreExtendedCertificateValidation:(BOOL)arg1 ;
-(BOOL)bypassBagSanityChecks;
-(NSNumber *)deviceClassOverride;
-(NSString *)deviceModelOverride;
-(NSNumber *)fairPlayDeviceTypeOverride;
-(NSString *)hardwarePlatformOverride;
-(NSString *)productVersionOverride;
-(NSString *)productPlatformOverride;
-(NSNumber *)networkTypeOverride;
-(BOOL)shouldForceiPhoneBehaviors;
-(BOOL)shouldRunAgeVerification;
-(void)setShouldRunAgeVerification:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForCurrentYear;
-(void)setExplicitContentAllowedForCurrentYear:(BOOL)arg1 ;
-(BOOL)isExplicitContentAllowedForExpirationYear;
-(void)setExplicitContentAllowedForExpirationYear:(BOOL)arg1 ;
-(BOOL)isGrazingPathEnabled;
-(void)setGrazingPathEnabled:(BOOL)arg1 ;
-(BOOL)isPrivacyAcknowledgementDisabledForMusic;
-(BOOL)isLegacyStoreCacheBusterEnabled;
-(BOOL)shouldForceLibraryRecommendationAnalysis;
-(BOOL)shouldReduceLibraryRecommendationsXPCInterval;
-(BOOL)shouldTreatSubscriptionStatusAsExpired;
-(BOOL)shouldTreatSubscriptionStatusCheckAsIncomplete;
-(BOOL)shouldTreatSagaAddComputerCallAsFailed;
-(BOOL)shouldTreatInitialSagaImportAsFailed;
-(BOOL)automaticDownloadsEnabled;
-(void)setAutomaticDownloadsEnabled:(BOOL)arg1 ;
-(void)deleteAutomaticDownloadsKey;
-(BOOL)allowLowAffinityRecommendations;
-(BOOL)_shouldSpoofIPhoneRequestProperties;
-(void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2 ;
@end

