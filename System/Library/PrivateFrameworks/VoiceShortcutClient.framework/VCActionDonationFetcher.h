/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCActionDonationFetcher : NSObject
+(id)streams;
+(void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)donationFromEvent:(id)arg1 ;
+(id)donationFromEvent:(id)arg1 filteringForTopLevel:(BOOL)arg2 ;
+(id)approvedSiriKitIntents;
+(BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1 ;
+(id)keyPathForStream:(id)arg1 ;
+(id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 directAccess:(BOOL)arg3 ;
+(id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 ;
+(id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 directAccess:(BOOL)arg4 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringForRecent:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 shortcutAvailability:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)predicateForShortcutAvailabilityOptions:(unsigned long long)arg1 ;
+(id)whitelistedDonationsWithOptions:(unsigned long long)arg1 ;
+(void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchDonationsWithLimit:(unsigned long long)arg1 filteringForIsEligibleForPrediction:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)donationWithUUID:(id)arg1 ;
+(id)isEligibleForPredictionPredicate;
+(BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1 ;
+(id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
@end

