//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFServiceHelper-Protocol.h"

@class AFCommandExecutionInfo, AFWatchdogTimer, NSString;
@protocol OS_dispatch_queue;

@interface ADClientFlowServiceHelper : NSObject <AFServiceHelper>
{
    NSObject<OS_dispatch_queue> *_clientFlowServiceHelperQueue;	// 8 = 0x8
    NSString *_aceId;	// 16 = 0x10
    AFCommandExecutionInfo *_executionInfo;	// 24 = 0x18
    AFWatchdogTimer *_timer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_timerQueue;	// 40 = 0x28
    long long _timerPauseCount;	// 48 = 0x30
}

+ (void)performWithTargetQueue:(id)arg1 withClientCommand:(id)arg2 executionContext:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010008c6e8
- (void).cxx_destruct;	// IMP=0x000000010008ccb4
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008c6d0
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008c6bc
- (id)speechInfo;	// IMP=0x000000010008c6ac
- (id)instanceInfo;	// IMP=0x000000010008c69c
- (id)endpointInfo;	// IMP=0x000000010008c640
- (id)peerInfoForCurrentCommand;	// IMP=0x000000010008c630
- (_Bool)isTimeoutSuspended;	// IMP=0x000000010008c5dc
- (_Bool)isDeviceInCarDND;	// IMP=0x000000010008c4a4
- (_Bool)isDeviceInStarkMode;	// IMP=0x000000010008c450
- (_Bool)isDeviceLockedWithPasscode;	// IMP=0x000000010008c3fc
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;	// IMP=0x000000010008c3f4
- (void)dismissAssistant;	// IMP=0x000000010008c3f0
- (_Bool)openSensitiveURL:(id)arg1;	// IMP=0x000000010008c170
- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008bcc4
- (id)initToHandleCommandWithAceId:(id)arg1 executionInfo:(id)arg2 watchdogTimer:(id)arg3 timerQueue:(id)arg4;	// IMP=0x000000010008bb60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

