//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevicePreferences, NSMutableSet;

@interface IDSNRDevicePreferencesHandler : NSObject
{
    unsigned int _quickRelayRequestsCount;	// 8 = 0x8
    NRDevicePreferences *_nrDevicePreferences;	// 16 = 0x10
    NSMutableSet *_servicesPreferringInfraWiFi;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001003f8af8
@property(nonatomic) unsigned int quickRelayRequestsCount; // @synthesize quickRelayRequestsCount=_quickRelayRequestsCount;
@property(retain, nonatomic) NSMutableSet *servicesPreferringInfraWiFi; // @synthesize servicesPreferringInfraWiFi=_servicesPreferringInfraWiFi;
@property(retain, nonatomic) NRDevicePreferences *nrDevicePreferences; // @synthesize nrDevicePreferences=_nrDevicePreferences;
- (void)cancel;	// IMP=0x00000001003f88c8
- (void)setQuickRelayRequest:(_Bool)arg1;	// IMP=0x00000001003f86ec
- (void)setAllowedTrafficClasses:(id)arg1;	// IMP=0x00000001003f866c
- (void)_reportPreferInfraWiFiToPowerLogs:(_Bool)arg1;	// IMP=0x00000001003f8550
- (void)localSetUpCompleted;	// IMP=0x00000001003f8470
- (void)localSetUpStarted;	// IMP=0x00000001003f8390
- (void)setPreferInfraWiFiRequest:(_Bool)arg1 services:(id)arg2;	// IMP=0x00000001003f7f9c
- (void)setBluetoothLinkPreferences:(id)arg1 inputbps:(id)arg2 outputbps:(id)arg3;	// IMP=0x00000001003f7e60
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x00000001003f7a34

@end

