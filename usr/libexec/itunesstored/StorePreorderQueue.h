//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

@interface StorePreorderQueue : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_operationQueue;	// 24 = 0x18
}

+ (void)registerManagerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010010b3b8
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010010b31c
+ (void)getPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010010ae50
+ (void)checkQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010010ac20
+ (void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010010a508
+ (id)sharedPreorderQueue;	// IMP=0x00000001001098e8
- (void)_sendChangeNotificationForKinds:(id)arg1;	// IMP=0x000000010010cf74
- (id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2;	// IMP=0x000000010010cf1c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010010cd78
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010010cc00
- (void)_handleLoadQueueFinish:(id)arg1;	// IMP=0x000000010010c264
- (void)_handleCheckQueueFinish:(id)arg1;	// IMP=0x000000010010bdf8
- (id)_copyPreorderAccountIdentifiers;	// IMP=0x000000010010bbc8
- (id)_clientForConnection:(id)arg1;	// IMP=0x000000010010ba48
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x000000010010b80c
- (void)removePreordersWithPreorderIdentifiers:(id)arg1;	// IMP=0x000000010010a13c
- (void)checkPreorderQueue;	// IMP=0x0000000100109dd8
- (void)addPreordersWithItems:(id)arg1 accountID:(id)arg2;	// IMP=0x0000000100109980
- (void)dealloc;	// IMP=0x0000000100109828
- (id)init;	// IMP=0x0000000100109728

@end

