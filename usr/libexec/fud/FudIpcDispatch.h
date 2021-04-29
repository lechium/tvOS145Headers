//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FudStateMachineDelegate-Protocol.h"

@class FudStorage, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FudIpcDispatch : NSObject <FudStateMachineDelegate>
{
    FudStorage *storage;	// 8 = 0x8
    NSMutableDictionary *pendingDeviceAttachedEvents;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *workQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue_attr> *_attr;	// 32 = 0x20
    NSMutableDictionary *eventFlags;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *criticalSectionSemaphore;	// 48 = 0x30
    NSMutableArray *queuedEvents;	// 56 = 0x38
    _Bool isActive;	// 64 = 0x40
}

@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
- (void)issueNotification:(id)arg1 request:(id)arg2;	// IMP=0x0000000100015228
- (void)dealloc;	// IMP=0x00000001000151a0
- (void)accessoryDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x0000000100014e68
- (void)stepProgress:(int)arg1 stateMachine:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4;	// IMP=0x0000000100014990
- (void)stepComplete:(int)arg1 stateMachine:(id)arg2 status:(_Bool)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0000000100014118
- (void)queueUpEventForAccessory:(id)arg1 stateMachine:(id)arg2;	// IMP=0x0000000100013f18
- (void)stepWillBegin:(int)arg1 stateMachine:(id)arg2;	// IMP=0x0000000100013dd0
- (id)getStorage;	// IMP=0x0000000100013d8c
- (id)getPluginWithName:(id)arg1 forFilter:(id)arg2 delegate:(id)arg3 info:(id *)arg4 options:(id)arg5;	// IMP=0x0000000100013b34
- (int)getCommandForState:(int)arg1;	// IMP=0x0000000100013adc
- (_Bool)sendReplyToDictionary:(id)arg1 forCommand:(int)arg2 withStatus:(_Bool)arg3 withError:(id)arg4;	// IMP=0x00000001000139c8
- (_Bool)sendDeviceClassAttached:(id)arg1 toClient:(id)arg2;	// IMP=0x00000001000138ac
- (void)releaseCriticalSectionLock;	// IMP=0x000000010001387c
- (void)aquireCriticalSectionLock;	// IMP=0x0000000100013838
- (_Bool)shouldUnblockCriticalSectionAfterStep:(int)arg1 wasSuccessful:(_Bool)arg2;	// IMP=0x0000000100013828
- (_Bool)shouldBlockCriticalSectionDuringStep:(int)arg1;	// IMP=0x0000000100013818
- (void)enableStreamEventsForStateMachine:(id)arg1;	// IMP=0x0000000100013768
- (void)disableStreamEventsForStateMachine:(id)arg1;	// IMP=0x00000001000136c0
- (_Bool)isStateMachineBusyInExclusionGroup:(id)arg1;	// IMP=0x00000001000134d8
- (_Bool)isStateMachineAcceptingNewStreamEvents:(id)arg1;	// IMP=0x0000000100013474
- (_Bool)isStateMachineForFilterAcceptingNewStreamEvents:(id)arg1;	// IMP=0x00000001000133f8
- (_Bool)dispatchStateMachineEvent:(id)arg1;	// IMP=0x0000000100012af0
- (void)addEventToQueue:(id)arg1 withFilter:(id)arg2 stateMachine:(id)arg3;	// IMP=0x0000000100012820
- (_Bool)dispatchStatelessEvent:(id)arg1;	// IMP=0x0000000100012648
- (_Bool)dispatchQueryEvent:(id)arg1;	// IMP=0x00000001000122fc
- (_Bool)dispatchEvent:(id)arg1;	// IMP=0x00000001000121ac
- (_Bool)setLastRemoteFindWithEvent:(id)arg1;	// IMP=0x000000010001206c
- (_Bool)notifyAccessoryAttachedWithEvent:(id)arg1;	// IMP=0x0000000100011df0
- (_Bool)setupClientSessionWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100011c98
- (_Bool)registerClientWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000119a8
- (_Bool)unregisterClientWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000118dc
- (_Bool)isEventQueryRequest:(id)arg1;	// IMP=0x0000000100011870
- (_Bool)isEventStateless:(id)arg1;	// IMP=0x00000001000117c4
- (id)initWithStorage:(id)arg1;	// IMP=0x00000001000116c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

