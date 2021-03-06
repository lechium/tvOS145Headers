/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreHandler.h>

@protocol HMDMediaDestinationBackingStoreHandlerDelegate;
@class HMFUnfairLock, HMMutableMediaDestination, HMDMediaDestinationManagerMetricsDispatcher, HMMediaDestination;

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {

	HMFUnfairLock* _lock;
	HMMutableMediaDestination* _destination;
	id<HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;
	HMDMediaDestinationManagerMetricsDispatcher* _metricsDispatcher;

}

@property (__weak) id<HMDMediaDestinationBackingStoreHandlerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher * metricsDispatcher;              //@synthesize metricsDispatcher=_metricsDispatcher - In the implementation block
@property (readonly) HMMediaDestination * destination; 
+(id)logCategory;
+(id)backingStoreObjectForMediaDestination:(id)arg1 ;
-(id<HMDMediaDestinationBackingStoreHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationBackingStoreHandlerDelegate>)arg1 ;
-(HMMediaDestination *)destination;
-(void)setSupportedOptions:(unsigned long long)arg1 ;
-(void)setAudioGroupIdentifier:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(HMDMediaDestinationManagerMetricsDispatcher *)metricsDispatcher;
-(void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDestination:(id)arg1 backingStore:(id)arg2 metricsDispatcher:(id)arg3 delegate:(id)arg4 ;
-(void)updateSupportedOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAudioGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

