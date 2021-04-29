//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface RPPrivateDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _prefPrivateDiscoveryEnabled;	// 10 = 0xa
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedPrivateDaemon;	// IMP=0x000000010004fd44
- (void).cxx_destruct;	// IMP=0x0000000100051704
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x00000001000515fc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000513b0
- (void)removeDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100051164
- (void)addDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050fd0
- (void)removeAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050d84
- (void)addAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050bf0
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0000000100050be8
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100050be0
- (void)prefsChanged;	// IMP=0x0000000100050bd4
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100050bcc
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x0000000100050bc8
- (void)_processAnswerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000100050aec
- (void)_processQueryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000100050a10
- (void)_processAnnouncementPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000100050898
- (void)_processResponsePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000100050734
- (void)_processProbePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x00000001000505bc
- (void)_processPacketPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x0000000100050470
- (void)_ensureStopped;	// IMP=0x000000010005046c
- (void)_ensureStarted;	// IMP=0x0000000100050468
- (void)_update;	// IMP=0x0000000100050444
- (void)_invalidated;	// IMP=0x00000001000503c4
- (void)_invalidate;	// IMP=0x0000000100050314
- (void)invalidate;	// IMP=0x00000001000502ac
- (void)activate;	// IMP=0x0000000100050160
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010004fe28
- (id)init;	// IMP=0x000000010004fdb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

