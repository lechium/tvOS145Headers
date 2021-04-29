/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKWorkoutDataSource.h>

@class NSUUID, HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKGymKitDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;              //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                            //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)_startTaskServerIfNeeded;
-(void)workoutBuilderDidFinish;
-(id)initWithHealthStore:(id)arg1 workoutConfiguration:(id)arg2 ;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
@end
