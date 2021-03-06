//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDBackgroundSessionDelegate-Protocol.h"
#import "NDBackgroundSessionManagerProtocol-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, NSXPCConnection;
@protocol NDSessionManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDSessionManager : NSObject <NDBackgroundSessionManagerProtocol, NDBackgroundSessionDelegate>
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSMutableDictionary *_reconnectingProxies;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSURL *_bundleDirectory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_sessionArchiveQueue;	// 40 = 0x28
    id _boost;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_powerlogPeriodicUpdateTimer;	// 56 = 0x38
    _Bool _isSpringBoardApp;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSXPCConnection *_xpcConn;	// 80 = 0x50
    id <NDSessionManagerDelegate> _delegate;	// 88 = 0x58
    CDUnknownBlockType _obliterationCompletion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000140c4
@property(copy) CDUnknownBlockType obliterationCompletion; // @synthesize obliterationCompletion=_obliterationCompletion;
@property _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property __weak id <NDSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)archiveTimerFired;	// IMP=0x0000000100013fe8
- (void)obliterate;	// IMP=0x0000000100013f0c
- (void)clientApplicationWasReinstalled;	// IMP=0x0000000100013eb4
- (id)getSessionWithIdentifier:(id)arg1;	// IMP=0x0000000100013e8c
- (void)sessionCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013be8
- (void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013ad0
- (void)obliterateAllSessionsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000139a4
- (void)getActiveSessionIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013914
- (void)okayToSendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000136c8
- (void)releaseAssertionForSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013580
- (void)sendPendingCallbacksForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000132a4
- (void)createSessionWithConfiguration:(id)arg1 clientProxy:(id)arg2 cachesDirectory:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000123bc
- (_Bool)connection:(id)arg1 canUseSharedContainerIdentifier:(id)arg2;	// IMP=0x0000000100012218
- (id)copyAndSanitizeClientConfiguration:(id)arg1;	// IMP=0x00000001000118fc
- (void)dropBoost;	// IMP=0x00000001000118a4
- (void)boost;	// IMP=0x0000000100011770
- (void)archiveState;	// IMP=0x0000000100011664
- (id)restoreState:(_Bool *)arg1;	// IMP=0x0000000100010d7c
- (id)restoreOptionsFromArchivePath:(id)arg1;	// IMP=0x0000000100010c88
- (id)downloadDirectoryDataPath;	// IMP=0x0000000100010c10
- (id)archivePath;	// IMP=0x0000000100010b98
- (void)dealloc;	// IMP=0x0000000100010b50
- (id)initWithDelegate:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3;	// IMP=0x0000000100010824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

