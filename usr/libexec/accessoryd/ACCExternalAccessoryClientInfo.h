//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCConnectionInfo.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@interface ACCExternalAccessoryClientInfo : XPCConnectionInfo
{
    _Bool _allAccessoryNotificationsEntitlement;	// 8 = 0x8
    _Bool _accessibilityEntitlement;	// 9 = 0x9
    _Bool _clientLocationEnabled;	// 10 = 0xa
    _Bool _vehicleInfoEnabled;	// 11 = 0xb
    int _clientCapabilities;	// 12 = 0xc
    NSMutableSet *_eaSessionUUIDs;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSArray *_protocolStrings;	// 32 = 0x20
    NSMutableArray *_activeLocationAccessoryUUIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100098430
@property(nonatomic) _Bool vehicleInfoEnabled; // @synthesize vehicleInfoEnabled=_vehicleInfoEnabled;
@property(retain, nonatomic) NSMutableArray *activeLocationAccessoryUUIDs; // @synthesize activeLocationAccessoryUUIDs=_activeLocationAccessoryUUIDs;
@property(nonatomic) _Bool clientLocationEnabled; // @synthesize clientLocationEnabled=_clientLocationEnabled;
@property(readonly, nonatomic) _Bool accessibilityEntitlement; // @synthesize accessibilityEntitlement=_accessibilityEntitlement;
@property(readonly, nonatomic) _Bool allAccessoryNotificationsEntitlement; // @synthesize allAccessoryNotificationsEntitlement=_allAccessoryNotificationsEntitlement;
@property(nonatomic) int clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSArray *protocolStrings; // @synthesize protocolStrings=_protocolStrings;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSMutableSet *eaSessionUUIDs; // @synthesize eaSessionUUIDs=_eaSessionUUIDs;
- (_Bool)canSendLaunchEvent;	// IMP=0x0000000100098108
- (_Bool)canSendConnectionEventForAccessory:(id)arg1;	// IMP=0x0000000100097c20
- (void)addClientRegistrationInformation:(id)arg1;	// IMP=0x00000001000979f4
- (void)_determineEntitlementsForXPCConnection;	// IMP=0x0000000100097914
- (void)dealloc;	// IMP=0x00000001000977d8
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100097700

@end

