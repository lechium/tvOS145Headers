/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHub.framework/HomeHub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeHub/HomeHub-Structs.h>
#import <libobjc.A.dylib/HHManagementClientEventListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol HHBubbleIdRetriever, OS_dispatch_queue;
@class NSXPCListenerEndpoint, NSXPCConnection, HHManagementClientEventListener, NSSet, NSPointerArray, HHEndpoint, NSObject, NSString;

@interface HHManagementClient : NSObject <HHManagementClientEventListenerDelegate, NSXPCConnectionDelegate> {

	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCConnection* _connection;
	HHManagementClientEventListener* _eventListener;
	NSSet* _currentSelectorSet;
	int _daemonReadyToken;
	NSPointerArray* _synchronizedStates;
	HHEndpoint* _currentEndpoint;
	BOOL _isCurrentEndpointSet;
	id<HHBubbleIdRetriever> _bubbleIdRetriever;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientWithQueue:(id)arg1 ;
-(void)dealloc;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)connection;
-(id)initWithQueue:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(id)asynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dispatchNotificationWithInvocation:(id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 queue:(id)arg2 bubbleIdRetriever:(id)arg3 ;
-(void)getCurrentEndpointWithCallback:(/*^block*/id)arg1 ;
-(void)_registerForNotificationsForced;
-(void)_handleDaemonReadyNotification;
-(void)_registerForDaemonReadyNotification:(id)arg1 ;
-(void)createEndpointWithAccessoryIdentifier:(id)arg1 mediaRouteId:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)activateEndpointWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)deactivateEndpointWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)deleteEndpointWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)getEndpointWithIdentifier:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_checkForNullBubbleId:(id)arg1 ;
-(void)_setCurrentEndpoint:(id)arg1 ;
-(void)getDaemonVersionInformationWithCallback:(/*^block*/id)arg1 ;
-(void)_cancelDaemonReadyNotification;
-(id)_computeNotificationSelectors;
-(void)_registerForNotifications:(id)arg1 shouldForce:(BOOL)arg2 ;
-(id)asynchronousRemoteObjectProxy;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithListenerEndpoint:(id)arg1 queue:(id)arg2 ;
-(id)getEndpointWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)getCurrentEndpointWithError:(id*)arg1 ;
-(void)addSynchronizedState:(id)arg1 ;
-(void)removeSynchronizedState:(id)arg1 ;
@end

