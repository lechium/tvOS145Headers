//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APSMessageStore : NSObject
{
    _Bool _databaseOpen;	// 8 = 0x8
    _Bool _pendingDatabaseClose;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x000000010007b134
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x000000010007d514
- (void)markMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x000000010007d334
- (void)deleteOutgoingMessageWithGUID:(id)arg1;	// IMP=0x000000010007d1f4
- (id)storeOutgoingMessage:(id)arg1 environment:(id)arg2;	// IMP=0x000000010007cdc0
- (id)incomingHighPriorityMessagesForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x000000010007cda4
- (id)incomingMessagesForTopic:(id)arg1 priority:(long long)arg2 environment:(id)arg3 pushTokens:(id)arg4;	// IMP=0x000000010007c9dc
- (id)_onQueueIncomingMessagesFromRecords:(struct __CFArray *)arg1;	// IMP=0x000000010007c5e0
- (id)pendingLowPriorityIncomingMessageTopicsForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x000000010007c2b8
- (void)deleteStaleIncomingLowPriorityMessagesForEnvironment:(id)arg1;	// IMP=0x000000010007c1a8
- (void)deleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x000000010007c09c
- (void)_onQueueDeleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x000000010007be90
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x000000010007bdf8
- (void)storeIncomingMessage:(id)arg1 environment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010007b944
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x000000010007b824
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x000000010007b704
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007b5f0
- (void)openDatabase;	// IMP=0x000000010007b564
- (void)closeDatabase;	// IMP=0x000000010007b4e8
- (void)_setDatabaseCloseTimer;	// IMP=0x000000010007b48c
- (void)_clearDatabaseCloseTimer;	// IMP=0x000000010007b440
- (void)__closeDatabase;	// IMP=0x000000010007b310
- (id)init;	// IMP=0x000000010007b1a0

@end

