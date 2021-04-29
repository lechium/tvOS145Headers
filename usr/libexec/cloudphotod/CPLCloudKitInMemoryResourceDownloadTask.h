//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitTransportTask.h"

#import "CPLEngineTransportInMemoryResourceDownloadTask-Protocol.h"

@class CPLCloudKitScope, CPLResource, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitInMemoryResourceDownloadTask : CPLCloudKitTransportTask <CPLEngineTransportInMemoryResourceDownloadTask>
{
    CPLCloudKitScope *_scope;	// 8 = 0x8
    CPLResource *_resource;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d6d18
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (void)runOperations;	// IMP=0x00000001000d643c
- (id)_inMemoryDownloadOperationForRecordID:(id)arg1 resource:(id)arg2 keys:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d5ba0
- (id)initWithController:(id)arg1 resource:(id)arg2 transportScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000d5a50

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

