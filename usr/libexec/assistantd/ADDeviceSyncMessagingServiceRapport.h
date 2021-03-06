//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCompanionServiceMessageHandler-Protocol.h"
#import "ADDeviceSyncMessagingService-Protocol.h"

@class ADCompanionService, NSSet, NSString;
@protocol ADDeviceSyncMessagingServiceDelegate, OS_dispatch_queue;

@interface ADDeviceSyncMessagingServiceRapport : NSObject <ADCompanionServiceMessageHandler, ADDeviceSyncMessagingService>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADCompanionService *_companionService;	// 16 = 0x10
    _Bool _isReady;	// 24 = 0x18
    NSSet *_deviceIdentifiers;	// 32 = 0x20
    NSString *_stereoPartnerDeviceIdentifier;	// 40 = 0x28
    long long _mode;	// 48 = 0x30
    id <ADDeviceSyncMessagingServiceDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010008fd18
- (void)_setStereoPartnerDeviceIdentifier:(id)arg1;	// IMP=0x000000010008fb40
- (void)_handleCompanionServiceStereoConfigurationDidChange;	// IMP=0x000000010008f938
- (void)_setDeviceIdentifiers:(id)arg1;	// IMP=0x000000010008f45c
- (void)_handleCompanionServiceActiveDevicesDidChange;	// IMP=0x000000010008f204
- (void)_setIsReady:(_Bool)arg1;	// IMP=0x000000010008f0c8
- (void)_handleCompanionServiceReadyStateDidChange;	// IMP=0x000000010008effc
- (void)_handleIncomingDictionary:(id)arg1 fromDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008eb58
- (void)_handleOutgoingMessage:(id)arg1 toDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e5fc
- (void)_invalidate;	// IMP=0x000000010008e574
- (void)sendMessage:(id)arg1 toDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008e3cc
@property(readonly, nonatomic) NSString *channel;
- (void)handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010008e248
- (void)invalidate;	// IMP=0x000000010008e1e0
- (void)companionServiceStereoConfigurationDidChange:(id)arg1;	// IMP=0x000000010008e178
- (void)companionServiceActiveDevicesDidChange:(id)arg1;	// IMP=0x000000010008e110
- (void)companionServiceReadyStateDidChange:(id)arg1;	// IMP=0x000000010008e0a8
- (void)dealloc;	// IMP=0x000000010008e05c
- (id)initWithMode:(long long)arg1 delegate:(id)arg2;	// IMP=0x000000010008ddd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

