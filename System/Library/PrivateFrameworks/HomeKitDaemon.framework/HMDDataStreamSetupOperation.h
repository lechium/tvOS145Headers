/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDDataStreamSetupOperationDelegate, OS_dispatch_queue;
@class HMDHAPAccessory, NSObject, NSString, HMDService, NSMutableSet;

@interface HMDDataStreamSetupOperation : NSObject {

	id<HMDDataStreamSetupOperationDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logIdentifier;
	HMDService* _transferManagementService;
	NSMutableSet* _pendingBulkSendListeners;

}

@property (nonatomic,readonly) HMDHAPAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier;                                           //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,readonly) HMDService * transferManagementService;                             //@synthesize transferManagementService=_transferManagementService - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingBulkSendListeners;                            //@synthesize pendingBulkSendListeners=_pendingBulkSendListeners - In the implementation block
@property (assign,nonatomic,__weak) id<HMDDataStreamSetupOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)tcpSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
+(id)hapSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(BOOL)arg6 ;
-(void)dealloc;
-(id<HMDDataStreamSetupOperationDelegate>)delegate;
-(void)setDelegate:(id<HMDDataStreamSetupOperationDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMDHAPAccessory *)accessory;
-(NSString *)logIdentifier;
-(id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
-(void)_clearPendingBulkSendListeners;
-(void)postDidFailWithError:(id)arg1 ;
-(void)processTransportSetupResponse:(id)arg1 ;
-(NSMutableSet *)pendingBulkSendListeners;
-(void)postDidSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2 ;
-(void)continueStreamSetupWithResponse:(id)arg1 ;
-(void)startSetup;
-(void)cancelSetup;
-(void)addBulkSendListener:(id)arg1 fileType:(id)arg2 ;
-(BOOL)removeBulkSendListener:(id)arg1 ;
-(void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg1 ;
-(HMDService *)transferManagementService;
@end

