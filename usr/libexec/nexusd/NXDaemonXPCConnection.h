//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NXDaemonServer;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXDaemonXPCConnection : NSObject
{
    _Bool _entitled;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    NXDaemonServer *_daemon;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcCnx;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100005a54
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NXDaemonServer *daemon; // @synthesize daemon=_daemon;
- (void)xpcLiveActionPerform:(id)arg1;	// IMP=0x0000000100005654
- (void)_xpcDiagnosticShow:(id)arg1;	// IMP=0x000000010000549c
- (void)_xpcDiagnosticControl:(id)arg1;	// IMP=0x00000001000050e8
- (void)_xpcSendReplyError:(id)arg1 request:(id)arg2;	// IMP=0x0000000100004f90
- (void)_xpcSendMessage:(id)arg1;	// IMP=0x0000000100004ef0
- (void)_xpcConnectionMessage:(id)arg1;	// IMP=0x0000000100004db0
- (void)xpcConnectionEvent:(id)arg1;	// IMP=0x0000000100004c80
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x0000000100004b74
- (void)invalidate;	// IMP=0x0000000100004b3c
- (void)activate;	// IMP=0x0000000100004b38

@end

