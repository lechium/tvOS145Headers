/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic,retain) NSString * displayScheduledTime; 
@property (nonatomic,retain) NSString * errorDescription; 
@property (assign,nonatomic) BOOL postedSuccessfully; 
+(id)eventForContentEngagementWithNotification:(id)arg1 ;
+(id)eventForVideoPlaybackForNotification:(id)arg1 ;
+(id)eventForBadgingForMetricsDictionary:(id)arg1 bundleID:(id)arg2 ;
+(id)_centerForBundleId:(id)arg1 ;
+(id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2 ;
+(id)eventForSettingsChangedWithSettings:(id)arg1 bundleID:(id)arg2 ;
+(id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setDisplayScheduledTime:(NSString *)arg1 ;
-(void)setPostedSuccessfully:(BOOL)arg1 ;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3 ;
-(id)_stringFromNotificationSetting:(long long)arg1 ;
-(NSString *)displayScheduledTime;
-(BOOL)postedSuccessfully;
-(id)_createDisplayCriteriaFromSettings:(id)arg1 ;
@end

