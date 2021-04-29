//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitSimpleRecordFetchTask.h"

#import "CPLEngineTransportGetCurrentSyncAnchorTask-Protocol.h"

@class CPLCloudKitScope, CPLEngineScope, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitGetCurrentSyncAnchorTask : CPLCloudKitSimpleRecordFetchTask <CPLEngineTransportGetCurrentSyncAnchorTask>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CPLCloudKitScope *_cloudKitScope;	// 16 = 0x10
    CPLEngineScope *_scope;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000e0fa0
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;	// IMP=0x00000001000e091c
- (void)_fetchLibraryInfoAndStateWithCurrentSyncAnchor:(id)arg1;	// IMP=0x00000001000e06e4
- (id)initWithController:(id)arg1 cloudKitScope:(id)arg2 scope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000e05d8

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

