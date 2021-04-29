/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFStandaloneShortcutAction.h>

@class NSUserActivity, NSString, NSData;

@interface WFOpenUserActivityAction : WFAction <WFStandaloneShortcutAction> {

	NSUserActivity* _userActivity;
	NSString* _launchOrigin;
	NSData* _activityData;
	NSData* _activityImageData;
	NSString* _activitySubtitle;
	NSString* _bundleIdentifier;
	NSString* _launchableAppBundleId;

}

@property (nonatomic,copy,readonly) NSData * activityData;                         //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,copy,readonly) NSData * activityImageData;                    //@synthesize activityImageData=_activityImageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * activitySubtitle;                   //@synthesize activitySubtitle=_activitySubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchableAppBundleId;              //@synthesize launchableAppBundleId=_launchableAppBundleId - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                      //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,copy) NSString * launchOrigin;                                //@synthesize launchOrigin=_launchOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userActivityActionWithShortcut:(id)arg1 launchOrigin:(id)arg2 error:(id*)arg3 ;
+(void)createActionWithUserActivity:(id)arg1 appBundleIdentifier:(id)arg2 launchOrigin:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)createActionWithIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)name;
-(NSString *)bundleIdentifier;
-(id)localizedName;
-(id)localizedSubtitle;
-(NSUserActivity *)userActivity;
-(id)appIdentifier;
-(NSData *)activityData;
-(NSString *)activitySubtitle;
-(NSString *)launchableAppBundleId;
-(id)serializedParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(void)generateShortcutRepresentation:(/*^block*/id)arg1 ;
-(void)generateStandaloneShortcutRepresentation:(/*^block*/id)arg1 ;
-(id)metricsIdentifier;
-(id)disabledPlatformsForUserActivityWithType:(id)arg1 ;
-(NSString *)launchOrigin;
-(void)setLaunchOrigin:(NSString *)arg1 ;
-(NSData *)activityImageData;
@end

