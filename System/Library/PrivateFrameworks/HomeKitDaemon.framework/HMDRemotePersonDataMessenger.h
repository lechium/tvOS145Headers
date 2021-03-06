/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDPersonDataReceiver.h>

@protocol OS_dispatch_queue, HMDPersonDataSource;
@class NSUUID, HMFMessageDispatcher, HMDResidentDeviceManager, NSObject, HMFTimer, NSString, HMIHomePersonManager, HMIExternalPersonManager;

@interface HMDRemotePersonDataMessenger : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDPersonDataReceiver> {

	NSUUID* _UUID;
	HMFMessageDispatcher* _messageDispatcher;
	HMDResidentDeviceManager* _residentDeviceManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDPersonDataSource> _dataSource;
	HMFTimer* _notifyResidentsOfUpdatedDataDebounceTimer;
	/*^block*/id _notifyResidentsOfUpdatedDataDebounceTimerFactory;

}

@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDResidentDeviceManager * residentDeviceManager;                        //@synthesize residentDeviceManager=_residentDeviceManager - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMDPersonDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) HMFTimer * notifyResidentsOfUpdatedDataDebounceTimer;                      //@synthesize notifyResidentsOfUpdatedDataDebounceTimer=_notifyResidentsOfUpdatedDataDebounceTimer - In the implementation block
@property (copy) id notifyResidentsOfUpdatedDataDebounceTimerFactory;                         //@synthesize notifyResidentsOfUpdatedDataDebounceTimerFactory=_notifyResidentsOfUpdatedDataDebounceTimerFactory - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) HMIHomePersonManager * homePersonManager; 
@property (readonly) HMIExternalPersonManager * photosPersonManager; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id<HMDPersonDataSource>)dataSource;
-(void)setDataSource:(id<HMDPersonDataSource>)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMDResidentDeviceManager *)residentDeviceManager;
-(void)configureWithDataSource:(id)arg1 home:(id)arg2 ;
-(void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(id)initWithUUID:(id)arg1 home:(id)arg2 workQueue:(id)arg3 ;
-(void)handlePerformCloudPullMessage:(id)arg1 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 residentDeviceManager:(id)arg3 workQueue:(id)arg4 ;
-(HMFTimer *)notifyResidentsOfUpdatedDataDebounceTimer;
-(id)notifyResidentsOfUpdatedDataDebounceTimerFactory;
-(void)setNotifyResidentsOfUpdatedDataDebounceTimer:(HMFTimer *)arg1 ;
-(void)_sendMessagesToNotifyResidentsOfUpdatedFaceClassificationDependentData;
-(void)_notifyResidentsOfUpdatedFaceClassificationDependentData;
-(void)setNotifyResidentsOfUpdatedDataDebounceTimerFactory:(id)arg1 ;
@end

