/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitEventRouter/HMERouterServer.h>

@protocol OS_os_log, HMEMessageDatagramServerDelegate, HMEMessageDatagramServerDataSource, HMETimer;
@class NSObject, NSMutableArray;

@interface HMEMessageDatagramServer : HMERouterServer {

	NSObject*<OS_os_log> _logger;
	id<HMEMessageDatagramServerDelegate> _delegate;
	id<HMEMessageDatagramServerDataSource> _dataSource;
	NSMutableArray* _connectionInfoItems;
	id<HMETimer> _connectionExpiryTimer;
	id<HMETimer> _connectionDebounceTimer;

}

@property (nonatomic,readonly) NSMutableArray * connectionInfoItems;               //@synthesize connectionInfoItems=_connectionInfoItems - In the implementation block
@property (retain) id<HMETimer> connectionExpiryTimer;                             //@synthesize connectionExpiryTimer=_connectionExpiryTimer - In the implementation block
@property (retain) id<HMETimer> connectionDebounceTimer;                           //@synthesize connectionDebounceTimer=_connectionDebounceTimer - In the implementation block
@property (__weak) id<HMEMessageDatagramServerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<HMEMessageDatagramServerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<HMEMessageDatagramServerDelegate>)delegate;
-(void)setDelegate:(id<HMEMessageDatagramServerDelegate>)arg1 ;
-(void)reset;
-(id<HMEMessageDatagramServerDataSource>)dataSource;
-(void)_removeConnection:(id)arg1 ;
-(void)setDataSource:(id<HMEMessageDatagramServerDataSource>)arg1 ;
-(id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 requireACLEnforcementForTypes:(id)arg4 ;
-(void)changeRegistrationsForConnection:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)connectWithConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3 topicFilterAdditions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)disconnectConnection:(id)arg1 ;
-(void)keepAliveConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleEvent:(id)arg1 topic:(id)arg2 ;
-(id)_connectionItemForConnection:(id)arg1 ;
-(void)_startDebounceTimerIfNeeded;
-(void)_pruneExpiredItemsFromConnectionItems;
-(void)setConnectionExpiryTimer:(id<HMETimer>)arg1 ;
-(void)_setupAndStartExpiryTimer;
-(id<HMETimer>)connectionDebounceTimer;
-(void)setConnectionDebounceTimer:(id<HMETimer>)arg1 ;
-(void)_resetDebounceTimer;
-(void)_sendRequestsForDebouncedConnections;
-(NSMutableArray *)connectionInfoItems;
-(double)_nextDebounceInterval;
-(void)_performRequest:(id)arg1 ;
-(void)_handleEventSendResponse:(id)arg1 previousEventItems:(id)arg2 connection:(id)arg3 ;
-(id)_expiryItemForConnection:(id)arg1 ;
-(id<HMETimer>)connectionExpiryTimer;
-(double)_earliestExpiringConnectionTimeInterval;
-(void)_connectionTimerDidExpire;
-(void)_debounceTimerDidFire;
-(void)_addConnectionOnConnect:(id)arg1 ;
-(BOOL)_updateConnectionExpiryOnKeepAlive:(id)arg1 ;
-(void)resetExistingEvents;
@end

