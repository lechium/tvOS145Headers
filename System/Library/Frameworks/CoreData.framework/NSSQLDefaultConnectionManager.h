/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSSQLConnectionManager.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSArray, NSObject;

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {

	NSMutableArray* _availableConnections;
	NSArray* _allConnections;
	NSObject*<OS_dispatch_semaphore> _poolCounter;
	os_unfair_lock_s _connectionLock;
	NSObject*<OS_dispatch_queue> _processingQueue;

}
-(void)dealloc;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)_initializeConnectionsWithSeed:(id)arg1 ;
-(id)_checkoutConnectionOfType:(unsigned long long)arg1 ;
-(void)_checkinConnection:(id)arg1 ;
-(void)enumerateAvailableConnectionsWithBlock:(/*^block*/id)arg1 ;
@end

