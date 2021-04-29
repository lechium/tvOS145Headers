/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <BookUtility/BookUtility-Structs.h>
@class NSObject, NSMutableDictionary, NSOperationQueue;

@interface BUUserAccountMonitor : NSObject {

	os_unfair_lock_s _observersLock;
	/*^block*/id _notificationHandlerBlock;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSMutableDictionary* _notifyBlocks;
	NSMutableDictionary* _observerHashTables;
	NSMutableDictionary* _accountIdentifiers;
	NSMutableDictionary* _notificationTokens;
	NSOperationQueue* _notificationHandlerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                 //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notifyBlocks;                       //@synthesize notifyBlocks=_notifyBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observerHashTables;                 //@synthesize observerHashTables=_observerHashTables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIdentifiers;                 //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationTokens;                 //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notificationHandlerQueue;              //@synthesize notificationHandlerQueue=_notificationHandlerQueue - In the implementation block
@property (nonatomic,readonly) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)notificationHandlerBlock;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)accountIdentifiers;
-(void)addObserver:(id)arg1 accountTypes:(unsigned long long)arg2 ;
-(void)removeObserver:(id)arg1 accountTypes:(unsigned long long)arg2 ;
-(void)setAccountIdentifiers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observerHashTables;
-(NSMutableDictionary *)notifyBlocks;
-(void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
-(NSMutableDictionary *)notificationTokens;
-(NSOperationQueue *)notificationHandlerQueue;
-(void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
-(unsigned long long)_singleAccountTypeForNotification:(id)arg1 ;
-(void)setNotifyBlocks:(NSMutableDictionary *)arg1 ;
-(void)setObserverHashTables:(NSMutableDictionary *)arg1 ;
-(void)setNotificationTokens:(NSMutableDictionary *)arg1 ;
-(void)setNotificationHandlerQueue:(NSOperationQueue *)arg1 ;
@end

