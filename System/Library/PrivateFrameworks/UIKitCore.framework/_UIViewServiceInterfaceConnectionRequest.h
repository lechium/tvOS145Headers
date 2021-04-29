/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, _UIRemoteViewService, NSObject, NSError, _UIAsyncInvocation, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {

	/*^block*/id _connectionHandler;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCancelled;
	NSError* _cancellationError;
	_UIAsyncInvocation* _cancellationInvocation;
	int _sessionRequestNotifyToken;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceSessionConnection;
	BOOL _serviceSessionConnectionResumed;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}
+(id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)connectToViewService:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
-(void)_establishConnection;
-(void)_cancelWithError:(id)arg1 ;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_didConnectToService;
-(int)__automatic_invalidation_logic;
-(void)_launchService;
-(void)_createPlugInProcessAssertion;
-(void)_createProcessAssertion;
-(void)_createAndEstablishConnection;
-(void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(/*^block*/id)arg3 ;
@end

