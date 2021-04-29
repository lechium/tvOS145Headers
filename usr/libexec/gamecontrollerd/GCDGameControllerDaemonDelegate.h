//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDaemonXPCInterface-Protocol.h"
#import "GCRemoteDaemonProxy-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface GCDGameControllerDaemonDelegate : NSObject <NSXPCListenerDelegate, GCRemoteDaemonProxy, GCDaemonXPCInterface>
{
    NSMutableArray *_appConnections;	// 8 = 0x8
    NSMutableArray *_foregroundAppConnections;	// 16 = 0x10
    NSXPCConnection *_mediaremoted;	// 24 = 0x18
    NSMutableArray *_hidConnections;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100007c18
- (void)appDidEnterBackgroundWithPID:(int)arg1;	// IMP=0x00000001000079f4
- (void)appWillEnterForegroundWithPID:(int)arg1;	// IMP=0x00000001000077b8
- (void)appDidEnterBackground;	// IMP=0x0000000100007740
- (void)appWillEnterForeground;	// IMP=0x00000001000076c8
- (void)removeController:(id)arg1 forward:(_Bool)arg2;	// IMP=0x0000000100007498
- (void)controllerDidDisconnect:(id)arg1;	// IMP=0x0000000100007444
- (void)addController:(id)arg1 forward:(_Bool)arg2;	// IMP=0x0000000100005890
- (void)controllerDidConnect:(id)arg1;	// IMP=0x000000010000583c
- (void)processMicroControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 withY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;	// IMP=0x0000000100005684
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;	// IMP=0x0000000100005538
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;	// IMP=0x00000001000054c0
- (void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(CDStruct_212a8bf9)arg2 forElement:(int)arg3 forward:(_Bool)arg4;	// IMP=0x00000001000052e8
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(_Bool)arg4;	// IMP=0x0000000100005088
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004e74
- (_Bool)acceptNewConnectionFromHIDPlugin:(id)arg1;	// IMP=0x0000000100004738
- (_Bool)acceptNewConnectionFromMediaRemote:(id)arg1;	// IMP=0x0000000100004458
- (_Bool)acceptNewConnection:(id)arg1 fromGCEnabledApp:(id)arg2;	// IMP=0x0000000100003ee4
- (_Bool)shouldKeepRunning;	// IMP=0x0000000100003edc
- (void)ping;	// IMP=0x0000000100003e64
- (void)dealloc;	// IMP=0x0000000100003dcc
- (id)init;	// IMP=0x0000000100003d38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
