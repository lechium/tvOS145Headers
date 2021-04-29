/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMPCSessionDataMediaProfileSource.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDMediaActionRouterDataSource;
@class HMDHome, HMDResidentDevice, HMDMPCSessionController, NSUUID, NSString;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver> {

	BOOL _shouldExecuteOnCurrentDevice;
	id<HMDMediaActionRouterDataSource> _dataSource;
	HMDResidentDevice* _targetResidentDeviceOverride;
	HMDMPCSessionController* _mpcSessionController;

}

@property (nonatomic,__weak,readonly) id<HMDMediaActionRouterDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldExecuteOnCurrentDevice;                                  //@synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentDevice * targetResidentDeviceOverride;              //@synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride - In the implementation block
@property (nonatomic,readonly) HMDMPCSessionController * mpcSessionController;                     //@synthesize mpcSessionController=_mpcSessionController - In the implementation block
@property (__weak,readonly) HMDHome * home; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HMDMediaActionRouterDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(HMDHome *)home;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)mediaProfileWithUUID:(id)arg1 ;
-(void)_registerForMessages;
-(void)routeMessage:(id)arg1 ;
-(void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 ;
-(void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)executeMediaActionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 canForwardMessage:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(HMDResidentDevice *)targetResidentDeviceOverride;
-(HMDMPCSessionController *)mpcSessionController;
-(void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 clientName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldExecuteOnCurrentDevice;
-(void)setTargetResidentDeviceOverride:(HMDResidentDevice *)arg1 ;
@end

