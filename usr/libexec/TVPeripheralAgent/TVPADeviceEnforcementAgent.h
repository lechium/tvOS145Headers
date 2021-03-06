//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"

@class CUBluetoothClient, NSMutableDictionary, NSSet, NSString;

@interface TVPADeviceEnforcementAgent : NSObject <TVSBluetoothManagerDelegate>
{
    int _notifyTokens[32];	// 8 = 0x8
    NSSet *_priorConnectedDevices;	// 136 = 0x88
    _Bool _observingPhysicalNetworkInterface;	// 144 = 0x90
    _Bool _observingConnectedDevices;	// 145 = 0x91
    _Bool _enforcing;	// 146 = 0x92
    CUBluetoothClient *_discoveryClient;	// 152 = 0x98
    NSMutableDictionary *_connectedDevices;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010000af48
- (_Bool)askUserAboutDisconnectingAudioDevice;	// IMP=0x000000010000ac70
- (_Bool)askUserAboutConnectingAudioDevice;	// IMP=0x000000010000a998
- (void)tellUserUpdateNeededForDisconnectedDevice:(id)arg1;	// IMP=0x000000010000a6b4
- (void)tellUserDevice:(id)arg1 disconnectedDueToDeviceLimit:(long long)arg2;	// IMP=0x000000010000a0a4
- (void)_bluetoothManagerUpdated:(id)arg1;	// IMP=0x0000000100009c18
- (void)_didCompleteDeviceConnection:(id)arg1 currentState:(unsigned int)arg2;	// IMP=0x000000010000932c
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100008be0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100008938
- (void)startEnforcing;	// IMP=0x000000010000873c
- (_Bool)_isBreakingEnforcableRuleForDeviceType:(long long)arg1;	// IMP=0x00000001000086b4
- (void)_applyNewEnforcement;	// IMP=0x0000000100007dfc
- (void)dealloc;	// IMP=0x0000000100007c44
- (id)init;	// IMP=0x000000010000766c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

