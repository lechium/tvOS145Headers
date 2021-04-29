//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class BKSProcessAssertion, NSMutableSet, NSString, NSXPCListener, PBSystemServiceConnection;
@protocol OS_dispatch_queue;

@interface PBSystemService : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_acceptSerialQueue;	// 8 = 0x8
    NSXPCListener *_serviceListener;	// 16 = 0x10
    NSMutableSet *_activeConnections;	// 24 = 0x18
    BKSProcessAssertion *_processAssertion;	// 32 = 0x20
    PBSystemServiceConnection *_defaultKioskConnection;	// 40 = 0x28
}

+ (id)activeConnections;	// IMP=0x0000000100109b08
+ (void)notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x0000000100109a88
+ (void)start;	// IMP=0x000000010010998c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100109794
+ (id)_singleton;	// IMP=0x000000010010968c
- (void).cxx_destruct;	// IMP=0x000000010010a3a0
@property(nonatomic) __weak PBSystemServiceConnection *defaultKioskConnection; // @synthesize defaultKioskConnection=_defaultKioskConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100109f2c
- (void)_handleInvalidationForConnection:(id)arg1;	// IMP=0x0000000100109dec
- (void)_startServices;	// IMP=0x0000000100109d24
- (void)_notifyDefaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1;	// IMP=0x0000000100109bd8
- (id)_activeConnections;	// IMP=0x0000000100109bac
- (id)init;	// IMP=0x0000000100109954
- (id)_init;	// IMP=0x00000001001098c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
