//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICMusicSubscriptionStatusRemoteRequestingService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudMusicSubscriptionStatusServiceListener : NSObject <NSXPCListenerDelegate, ICMusicSubscriptionStatusRemoteRequestingService>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    NSXPCListener *_serviceListener;	// 24 = 0x18
}

+ (id)sharedMusicSubscriptionStatusServiceListener;	// IMP=0x0000000100075da0
- (void).cxx_destruct;	// IMP=0x0000000100075a68
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100075994
- (void)performSubscriptionStatusRequest:(id)arg1 forUniqueIdentifier:(id)arg2;	// IMP=0x0000000100075864
- (void)stop;	// IMP=0x000000010007580c
- (void)start;	// IMP=0x00000001000757b4
@property(readonly, getter=isActive) _Bool active;
- (void)dealloc;	// IMP=0x00000001000756d8
- (id)_init;	// IMP=0x000000010007560c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

