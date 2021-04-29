//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportFetchTransportScopeTask-Protocol.h"

@class CPLCloudKitScope, CPLEngineScope, CPLEngineScopeFlagsUpdate, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitFetchTransportScopeTask : CPLCloudKitTransportTask <CPLEngineTransportFetchTransportScopeTask>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CPLEngineScopeFlagsUpdate *_fetchedFlags;	// 16 = 0x10
    long long _options;	// 24 = 0x18
    CPLCloudKitScope *_cloudKitScope;	// 32 = 0x20
    CPLEngineScope *_scope;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000877a0
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;	// IMP=0x0000000100085ef0
- (void)createRecordZoneWithID:(id)arg1;	// IMP=0x0000000100085758
- (void)_callCompletionWithZone:(id)arg1;	// IMP=0x00000001000855c4
- (void)_updateCloudKitScopeWithZone:(id)arg1;	// IMP=0x000000010008549c
- (id)initWithController:(id)arg1 scope:(id)arg2 cloudKitScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100085368

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

