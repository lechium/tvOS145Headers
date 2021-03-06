//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportDownloadBatchTask-Protocol.h"

@class CKServerChangeToken, CPLCloudKitScope, CPLEngineScope, CPLScopeChange, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitDownloadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportDownloadBatchTask>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    CKServerChangeToken *_syncAnchor;	// 24 = 0x18
    CPLCloudKitScope *_cloudKitScope;	// 32 = 0x20
    CPLEngineScope *_scope;	// 40 = 0x28
    CPLScopeChange *_currentScopeChange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100099610
@property(readonly, nonatomic) CPLScopeChange *currentScopeChange; // @synthesize currentScopeChange=_currentScopeChange;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
@property(readonly, copy, nonatomic) CKServerChangeToken *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (void)runOperations;	// IMP=0x0000000100097bec
- (void)sendProgressBatch:(id)arg1 updatedScopeChange:(id)arg2 updatedFlags:(id)arg3 updatedSyncAnchor:(id)arg4;	// IMP=0x0000000100097ad8
- (void)runWithinSyncSession:(id)arg1;	// IMP=0x0000000100097a48
- (id)initWithController:(id)arg1 syncAnchor:(id)arg2 cloudKitScope:(id)arg3 scope:(id)arg4 currentScopeChange:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000010009770c

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

