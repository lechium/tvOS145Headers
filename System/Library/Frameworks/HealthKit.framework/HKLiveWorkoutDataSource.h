/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class HKWorkoutConfiguration, HKTaskServerProxyProvider, HKHealthStore, NSObject, NSMutableSet, NSMutableDictionary, NSUUID, NSSet, NSString;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable> {

	HKWorkoutConfiguration* _workoutConfiguration;
	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _mutableSampleTypesToCollect;
	NSMutableDictionary* _mutableFiltersBySampleType;
	NSUUID* _identifier;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                     //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableSampleTypesToCollect;                    //@synthesize mutableSampleTypesToCollect=_mutableSampleTypesToCollect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableFiltersBySampleType;              //@synthesize mutableFiltersBySampleType=_mutableFiltersBySampleType - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSSet * typesToCollect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 activityMoveMode:(long long)arg2 ;
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)exportedInterface;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)workoutBuilderDidFinish;
-(id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(void)_queue_finishSetup;
-(id)_queue_dataSourceConfiguration;
-(NSSet *)typesToCollect;
-(void)enableCollectionForType:(id)arg1 predicate:(id)arg2 ;
-(void)disableCollectionForType:(id)arg1 ;
-(NSMutableSet *)mutableSampleTypesToCollect;
-(void)setMutableSampleTypesToCollect:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)mutableFiltersBySampleType;
-(void)setMutableFiltersBySampleType:(NSMutableDictionary *)arg1 ;
@end

