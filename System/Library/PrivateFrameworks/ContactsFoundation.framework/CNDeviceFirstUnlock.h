/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNUnfairLock, NSMutableDictionary, NSOperationQueue, CNFuture;

@interface CNDeviceFirstUnlock : NSObject {

	CNUnfairLock* _handlersLock;
	NSMutableDictionary* _unlockHandlers;
	NSOperationQueue* _workQueue;
	CNFuture* _firstUnlockFuture;

}

@property (nonatomic,retain) CNUnfairLock * handlersLock;                       //@synthesize handlersLock=_handlersLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unlockHandlers;              //@synthesize unlockHandlers=_unlockHandlers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) CNFuture * firstUnlockFuture;                      //@synthesize firstUnlockFuture=_firstUnlockFuture - In the implementation block
@property (nonatomic,readonly) BOOL isUnlockedSinceBoot; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSOperationQueue *)workQueue;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isUnlockedSinceBoot;
-(CNUnfairLock *)handlersLock;
-(void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)withHandlersLock_registerForDeviceFirstUnlock;
-(void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1 ;
-(void)removeUnlockHandlerWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)unlockHandlers;
-(CNFuture *)firstUnlockFuture;
-(void)setFirstUnlockFuture:(CNFuture *)arg1 ;
-(void)addUnlockHandlerWithIdentifier:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)waitForAllOperationsToFinish;
-(long long)countOfUnlockHandlers;
-(void)setHandlersLock:(CNUnfairLock *)arg1 ;
-(void)setUnlockHandlers:(NSMutableDictionary *)arg1 ;
@end
