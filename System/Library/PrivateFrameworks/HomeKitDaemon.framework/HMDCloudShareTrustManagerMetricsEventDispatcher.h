/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMDCloudShareTrustManagerMetricsEventDispatcherDataSource;
@class NSArray, NSUUID, HMDLogEventDispatcher, HMDLogEventDailyScheduler, NSString;

@interface HMDCloudShareTrustManagerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider> {

	BOOL _registered;
	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;
	HMDLogEventDailyScheduler* _logEventDailyScheduler;
	id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> _dataSource;

}

@property (readonly) NSUUID * identifier;                                                                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                                                   //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) HMDLogEventDailyScheduler * logEventDailyScheduler;                                           //@synthesize logEventDailyScheduler=_logEventDailyScheduler - In the implementation block
@property (__weak,readonly) id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) BOOL registered;                                                                                //@synthesize registered=_registered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
+(id)logCategory;
-(NSUUID *)identifier;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(id<HMDCloudShareTrustManagerMetricsEventDispatcherDataSource>)dataSource;
-(id)logIdentifier;
-(void)submitFailureEventWithEventErrorCode:(long long)arg1 error:(id)arg2 ;
-(HMDLogEventDailyScheduler *)logEventDailyScheduler;
-(void)submitTrustActivityEvent:(long long)arg1 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(void)submitCloudShareTrustStatusDailyEvent;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 logEventDailyScheduler:(id)arg3 dataSource:(id)arg4 ;
-(void)registerForDailyTrustManagerEvents;
-(void)submitTrustZoneCreatedEvent;
-(void)submitTrustZoneRemovedEvent;
-(void)submitFailureEventWithEventErrorCode:(long long)arg1 ;
-(void)triggerLogEventProviderDailySubmissionBlocks;
@end

