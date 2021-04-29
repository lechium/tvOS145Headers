/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_os_log, HMDUserCloudShareControllerDelegate, OS_dispatch_queue;
@class NSObject, NSHashTable, NSMutableDictionary, NSMutableArray, HMFTimer, NSString;

@interface HMDUserCloudShareController : NSObject <HMFTimerDelegate, HMFLogging> {

	NSObject*<OS_os_log> _logger;
	NSHashTable* _connectedClients;
	NSMutableDictionary* _containerIdToConnectionIdentifierMap;
	id<HMDUserCloudShareControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRequests;
	double _pendingRequestTimeoutInterval;
	HMFTimer* _pendingRequestTimer;

}

@property (__weak) id<HMDUserCloudShareControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectedClients;                                        //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerIdToConnectionIdentifierMap;              //@synthesize containerIdToConnectionIdentifierMap=_containerIdToConnectionIdentifierMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                      //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) double pendingRequestTimeoutInterval;                                  //@synthesize pendingRequestTimeoutInterval=_pendingRequestTimeoutInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * pendingRequestTimer;                                          //@synthesize pendingRequestTimer=_pendingRequestTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)identifierForConnection:(id)arg1 ;
-(id<HMDUserCloudShareControllerDelegate>)delegate;
-(void)setDelegate:(id<HMDUserCloudShareControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)configure;
-(NSMutableArray *)pendingRequests;
-(void)timerDidFire:(id)arg1 ;
-(NSHashTable *)connectedClients;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3 ;
-(void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2 ;
-(void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleShareRepairForRemoteClientRequest:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deregisterXpcClient:(id)arg1 ;
-(void)invalidateXpcClient:(id)arg1 ;
-(NSMutableDictionary *)containerIdToConnectionIdentifierMap;
-(HMFTimer *)pendingRequestTimer;
-(double)pendingRequestTimeoutInterval;
-(void)setPendingRequestTimer:(HMFTimer *)arg1 ;
-(void)_startTimerIfNeeded;
-(void)_sendShareRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)_sendRepairRequest:(id)arg1 toConnection:(id)arg2 ;
-(void)_removeTimerIfNotNeeded;
-(id)_connectionForContainerID:(id)arg1 ;
-(void)_addRequestToPending:(id)arg1 ;
-(void)_handleShareForRemoteClientRequest:(id)arg1 ;
-(void)_handlePendingRequestTimeouts;
-(void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2 ;
-(void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2 ;
-(void)_deregisterXpcClient:(id)arg1 ;
-(void)_invalidateXpcClient:(id)arg1 ;
-(void)setContainerIdToConnectionIdentifierMap:(NSMutableDictionary *)arg1 ;
@end

