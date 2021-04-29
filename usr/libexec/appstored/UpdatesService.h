//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDUpdatesServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue, UpdatesControllerInterface;

@interface UpdatesService : NSObject <ASDUpdatesServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <UpdatesControllerInterface> _updatesInterface;	// 16 = 0x10
}

+ (id)defaultService;	// IMP=0x000000010022ae28
- (void).cxx_destruct;	// IMP=0x000000010022cd8c
@property(retain) id <UpdatesControllerInterface> updatesInterface; // @synthesize updatesInterface=_updatesInterface;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010022c99c
- (void)updateAllWithOrder:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010022c5a8
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010022c2f0
- (void)reloadManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022bfa0
- (void)reloadFromServerWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022bbf8
- (void)refreshUpdateCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022b864
- (void)getUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022b530
- (void)getManagedUpdatesWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010022b1e0
- (void)compatibilityUpdateForBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010022b050
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x000000010022af48
- (id)init;	// IMP=0x000000010022ae94

@end

