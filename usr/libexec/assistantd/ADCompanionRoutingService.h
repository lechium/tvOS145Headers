//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ADCompanionRoutingService : ADService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_pendingCallResultBlocks;	// 16 = 0x10
    _Bool _isInCall;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010006c1a0
- (void)_processPendingCallResultBlocks;	// IMP=0x000000010006bff0
- (void)_callStateDidChange:(id)arg1;	// IMP=0x000000010006bef4
- (void)preheatDomain:(id)arg1;	// IMP=0x000000010006b998
- (void)_handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010006b1fc
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010006b0b8
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000010006b0b0
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010006abd8
- (id)domains;	// IMP=0x000000010006aaf0
- (id)handle;	// IMP=0x000000010006aaec
- (id)init;	// IMP=0x000000010006a9f8

@end

