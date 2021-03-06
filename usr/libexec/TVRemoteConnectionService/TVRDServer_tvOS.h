//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCConnection, TVRDCompanionEventManager_tvOS;

__attribute__((visibility("hidden")))
@interface TVRDServer_tvOS : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    TVRDCompanionEventManager_tvOS *_eventManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004fd4
@property(retain, nonatomic) TVRDCompanionEventManager_tvOS *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100004f58
- (id)init;	// IMP=0x0000000100004ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

