//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDAVHostedDiscoverySessionDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class MRDHostedRoutingController, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRDAVHostedRoutingService : NSObject <NSXPCListenerDelegate, MRDAVHostedDiscoverySessionDelegate, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSXPCListener *_anonymousListener;	// 16 = 0x10
    NSMutableSet *_hostedDiscoverySessions;	// 24 = 0x18
    MRDHostedRoutingController *_hostedRoutingController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100032a04
@property(readonly, nonatomic) MRDHostedRoutingController *hostedRoutingController; // @synthesize hostedRoutingController=_hostedRoutingController;
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0000000100032888
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100032794
- (void)hostedDiscoverySessionDidInvalidate:(id)arg1;	// IMP=0x0000000100032700
- (id)endpointForDeviceUID:(id)arg1;	// IMP=0x00000001000324c4
- (id)endpointForOrigin:(id)arg1;	// IMP=0x0000000100032160
@property(readonly, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;
- (id)init;	// IMP=0x0000000100031fe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

