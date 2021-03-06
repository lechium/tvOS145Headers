//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportFetchScopeListChangesTask-Protocol.h"

@class CPLCloudKitScopeListSyncAnchor, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitFetchScopeListChangesTask : CPLCloudKitTransportTask <CPLEngineTransportFetchScopeListChangesTask>
{
    CPLCloudKitScopeListSyncAnchor *_ckScopeListSyncAnchor;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (id)descriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x00000001000e1064
- (void).cxx_destruct;	// IMP=0x00000001000e1b18
- (void)_launchOperationForSharedDatabase:(_Bool)arg1;	// IMP=0x00000001000e11f8
- (void)runOperations;	// IMP=0x00000001000e11e8
- (id)initWithController:(id)arg1 scopeListSyncAnchor:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e10c0

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

