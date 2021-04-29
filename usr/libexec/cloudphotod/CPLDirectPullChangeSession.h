//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLDirectChangeSession.h"

#import "CPLPullChangeSessionImplementation-Protocol.h"

@class CPLChangeBatch, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineStore, NSString;

@interface CPLDirectPullChangeSession : CPLDirectChangeSession <CPLPullChangeSessionImplementation>
{
    _Bool _shouldPullAtLeastOneBatch;	// 8 = 0x8
    CPLChangeBatch *_pendingAckForBatch;	// 16 = 0x10
    CPLChangeBatch *_expandedCloudBatch;	// 24 = 0x18
    CPLChangeBatch *_expandedClientBatch;	// 32 = 0x20
    CPLChangeBatch *_scopeChangesBatch;	// 40 = 0x28
    NSString *_lastSeenLibraryVersion;	// 48 = 0x30
    CPLEngineLibrary *_engineLibrary;	// 56 = 0x38
    CPLEngineStore *_store;	// 64 = 0x40
    CPLEngineScopeStorage *_scopes;	// 72 = 0x48
    CPLEngineChangePipe *_pullQueue;	// 80 = 0x50
    CPLEngineIDMapping *_idMapping;	// 88 = 0x58
    CPLEngineScheduler *_scheduler;	// 96 = 0x60
}

+ (id)selfCrashResetReason;	// IMP=0x000000010008183c
- (void).cxx_destruct;	// IMP=0x0000000100081928
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080bc4
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007fac8
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007ed58
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007e518
- (id)clientWorkDescription;	// IMP=0x000000010007e50c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
