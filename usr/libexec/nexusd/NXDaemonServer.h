//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CULiveAudioServer, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXDaemonServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CULiveAudioServer *_liveAudioServer;	// 16 = 0x10
    NSMutableSet *_xpcConnections;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcListener;	// 32 = 0x20
    _Bool _xpcLiveAudioRegistered;	// 40 = 0x28
    _Bool _xpcLiveAudioBusy;	// 41 = 0x29
    NSMutableArray *_xpcLiveAudioRequests;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100004ac0
@property(retain, nonatomic) NSMutableArray *xpcLiveAudioRequests; // @synthesize xpcLiveAudioRequests=_xpcLiveAudioRequests;
@property(nonatomic) _Bool xpcLiveAudioBusy; // @synthesize xpcLiveAudioBusy=_xpcLiveAudioBusy;
- (void)_xpcLiveActionProcessPending;	// IMP=0x00000001000049c8
- (void)xpcConnectionInvalidated:(id)arg1;	// IMP=0x0000000100004914
- (void)_xpcConnectionAccept:(id)arg1;	// IMP=0x000000010000477c
- (void)_xpcListenerEvent:(id)arg1;	// IMP=0x0000000100004674
- (void)_liveAudioEnsureStopped;	// IMP=0x00000001000045dc
- (void)_liveAudioEnsureStarted:(id)arg1;	// IMP=0x000000010000448c
- (void)invalidate;	// IMP=0x00000001000042cc
- (void)activate;	// IMP=0x0000000100004180
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100003f90
- (id)description;	// IMP=0x0000000100003f80
- (id)init;	// IMP=0x0000000100003ee8

@end

