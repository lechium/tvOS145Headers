//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitSimpleRecordFetchTask.h"

#import "CPLEngineTransportResourcesCheckTask-Protocol.h"

@class NSArray, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitResourcesCheckTask : CPLCloudKitSimpleRecordFetchTask <CPLEngineTransportResourcesCheckTask>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_resources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000e35b4
- (_Bool)_checkLocalResource:(id)arg1 cloudRecord:(id)arg2;	// IMP=0x00000001000e3278
- (void)runOperations;	// IMP=0x00000001000e293c
- (id)initWithController:(id)arg1 resources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e2848

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

