//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFHomeAnnouncementListening-Protocol.h"
#import "AFInvalidating-Protocol.h"

@class AFHomeAnnouncementObserver, AFHomeAnnouncementSnapshot, AFInstanceContext, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADHomeAnnouncementContextAdaptor : NSObject <AFHomeAnnouncementListening, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    AFHomeAnnouncementObserver *_observer;	// 24 = 0x18
    AFHomeAnnouncementSnapshot *_snapshot;	// 32 = 0x20
    CDUnknownBlockType _snapshotUpdater;	// 40 = 0x28
    double _expirationDuration;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100226c94
- (void)_setSnapshot:(id)arg1;	// IMP=0x0000000100226b58
- (void)_processAndEvaluateSnapshot:(id)arg1;	// IMP=0x00000001002262dc
- (void)_invalidate;	// IMP=0x000000010022625c
- (void)homeAnnouncementObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000001002261c4
- (void)homeAnnouncementObserver:(id)arg1 stateDidUpdateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000001002261c0
- (void)invalidate;	// IMP=0x0000000100226158
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100226044
- (void)unregisterSnapshotUpdater;	// IMP=0x0000000100225f58
- (void)registerSnapshotUpdater:(CDUnknownBlockType)arg1;	// IMP=0x0000000100225d34
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x0000000100225bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

