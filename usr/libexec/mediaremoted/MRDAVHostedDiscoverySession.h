//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRAVDistantRoutingDiscoveryServiceProtocol-Protocol.h"
#import "MRDAVHostedRoutingObserver-Protocol.h"

@class MRDHostedRoutingController, MROSTransaction, NSArray, NSString, NSXPCConnection;
@protocol MRDAVHostedDiscoverySessionDelegate, OS_dispatch_queue;

@interface MRDAVHostedDiscoverySession : NSObject <MRAVDistantRoutingDiscoveryServiceProtocol, MRDAVHostedRoutingObserver>
{
    _Bool _enableThrottling;	// 8 = 0x8
    _Bool _endpointsDelayed;	// 9 = 0x9
    _Bool _devicesDelayed;	// 10 = 0xa
    unsigned int _discoveryMode;	// 12 = 0xc
    unsigned int _endpointFeatures;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    MRDHostedRoutingController *_hostedRoutingController;	// 32 = 0x20
    id <MRDAVHostedDiscoverySessionDelegate> _delegate;	// 40 = 0x28
    MROSTransaction *_transaction;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
    NSArray *_updatedEndpoints;	// 64 = 0x40
    NSArray *_updatedOutputDevices;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002f020
@property(nonatomic) _Bool devicesDelayed; // @synthesize devicesDelayed=_devicesDelayed;
@property(nonatomic) _Bool endpointsDelayed; // @synthesize endpointsDelayed=_endpointsDelayed;
@property(retain, nonatomic) NSArray *updatedOutputDevices; // @synthesize updatedOutputDevices=_updatedOutputDevices;
@property(retain, nonatomic) NSArray *updatedEndpoints; // @synthesize updatedEndpoints=_updatedEndpoints;
@property(nonatomic) _Bool enableThrottling; // @synthesize enableThrottling=_enableThrottling;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <MRDAVHostedDiscoverySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRDHostedRoutingController *hostedRoutingController; // @synthesize hostedRoutingController=_hostedRoutingController;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned int endpointFeatures; // @synthesize endpointFeatures=_endpointFeatures;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void)_invalidate;	// IMP=0x000000010002ef0c
- (void)getAvailableOutputDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ee9c
- (void)getAvailableEndpointsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ee2c
- (void)setEndpointFeatures:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002edcc
- (void)setDiscoveryMode:(unsigned int)arg1 enableThrottling:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ed00
- (void)getDiscoveryModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ecec
- (void)getDevicePresenceDetectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ec8c
- (void)hostedRoutingController:(id)arg1 outputDevicesDidChange:(id)arg2 forFeature:(unsigned int)arg3;	// IMP=0x000000010002e990
- (void)hostedRoutingController:(id)arg1 endpointsDidChange:(id)arg2;	// IMP=0x000000010002e694
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x000000010002e17c
- (id)initWithConnection:(id)arg1 hostedRoutingController:(id)arg2;	// IMP=0x000000010002de8c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

