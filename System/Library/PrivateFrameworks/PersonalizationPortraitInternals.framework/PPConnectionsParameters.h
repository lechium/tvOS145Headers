/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface PPConnectionsParameters : NSObject {

	NSDictionary* _assets;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(id)assetValueForKey:(id)arg1 ;
-(long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2 ;
-(long long)integerValueForKey:(id)arg1 default:(long long)arg2 ;
-(double)doubleValueForKey:(id)arg1 default:(long long)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2 ;
-(long long)expirySeconds;
-(double)userActivityExpirySeconds;
-(double)namedEntitySourceLookBackSeconds;
-(double)namedEntitySourceExpirySeconds;
-(double)foundInAppsSourceLookBackSeconds;
-(double)foundInAppsSourceExpirySeconds;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(double)calendarEventLocationExpirySeconds;
-(unsigned long long)quickTypePredictionLimit;
-(unsigned long long)userActivityBatchSize;
-(double)userActivityCandidateScore;
-(long long)appSwitcherPredictionExpiry;
-(long long)locationAppPredictionInstallHalflife;
-(long long)locationAppPredictionInstallMaxScore;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(long long)locationAppPredictionOverallLaunchFactor;
-(double)linguisticTriggerExpirySeconds;
-(double)pasteboardItemExpirySeconds;
-(double)locationAppLastUseTimeoutSeconds;
-(BOOL)shouldUseAllowedWebsite;
-(BOOL)shouldUseAllowedApps;
-(id)locationPredictionBlockedApps;
-(id)donationAllowedWebsites;
-(id)donationBlockedWebsites;
-(id)donationAllowedApps;
-(id)donationBlockedApps;
@end

